`timescale 1ns/1ps
// ============================================================================
// spi_master.v
// Parameterized SPI master. Generates SCLK, drives MOSI, selects one of
// SLAVES chip-selects, and samples MISO. Supports all 4 SPI modes via
// CPOL/CPHA.
// ============================================================================
module spi_master #(
    parameter DATA_WIDTH = 8,
    parameter SLAVES     = 4,
    // SCLK period = 2*CLK_DIV * clk period. Keep CLK_DIV >= 4: spi_slave.v
    // detects SCLK edges through a 2-flop synchronizer, which needs SCLK to
    // hold each level for a few clk cycles to be reliably observed. Lower
    // values (e.g. 2) will corrupt transfers, especially in CPHA=1 modes.
    parameter CLK_DIV    = 4,
    parameter CPOL       = 0,
    parameter CPHA       = 0
)(
    input  wire                          clk,
    input  wire                          rst_n,

    input  wire [DATA_WIDTH-1:0]         mosi_data_reg,
    output reg  [DATA_WIDTH-1:0]         miso_data_reg,

    input  wire                          MISO,
    output reg                           MOSI,
    output reg                           SCLK,
    output reg  [SLAVES-1:0]             SS,      // active low

    input  wire                          start,
    input  wire [$clog2(SLAVES)-1:0]     slave_sel,
    output reg                           done
);

    localparam IDLE     = 3'd0,
               START_ST = 3'd1,
               TRANSFER = 3'd2,
               HOLD_ST  = 3'd3,   // see HOLD_ST comment below
               DONE_ST  = 3'd4;

    // Cycles to hold SS/SCLK/MOSI stable after the final data-phase edge
    // before clearing them. Must exceed the slave's synchronizer latency
    // (2 clk cycles for the 2-flop SCLK synchronizer in spi_slave.v) with
    // margin, or the slave can still be mid-sample when the master starts
    // its cleanup — this is what caused the last bit of every CPHA=1
    // transfer to be silently corrupted before this state was added.
    localparam HOLD_CYCLES = 4;

    reg [2:0]                    state;
    reg [$clog2(DATA_WIDTH):0]   bit_cnt;
    reg [$clog2(CLK_DIV)-1:0]    clk_cnt;
    reg [$clog2(HOLD_CYCLES):0]  hold_cnt;
    reg [DATA_WIDTH-1:0]         tx_reg;
    reg [DATA_WIDTH-1:0]         rx_reg;

    wire sclk_posedge = (clk_cnt == $clog2(CLK_DIV)'(CLK_DIV - 1)) && (SCLK == 1'b0);
    wire sclk_negedge = (clk_cnt == $clog2(CLK_DIV)'(CLK_DIV - 1)) && (SCLK == 1'b1);

    wire lead_edge   = (CPOL == 0) ? sclk_posedge : sclk_negedge;
    wire trail_edge  = (CPOL == 0) ? sclk_negedge : sclk_posedge;
    wire sample_edge = (CPHA == 0) ? lead_edge  : trail_edge;
    wire shift_edge  = (CPHA == 0) ? trail_edge : lead_edge;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            SCLK          <= CPOL;
            SS            <= {SLAVES{1'b1}};
            MOSI          <= 1'b0;
            state         <= IDLE;
            miso_data_reg <= {DATA_WIDTH{1'b0}};
            tx_reg        <= {DATA_WIDTH{1'b0}};
            rx_reg        <= {DATA_WIDTH{1'b0}};
            bit_cnt       <= 0;
            done          <= 1'b0;
            clk_cnt       <= 0;
            hold_cnt      <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done    <= 1'b0;
                    SS      <= {SLAVES{1'b1}};
                    clk_cnt <= 0;
                    SCLK    <= CPOL;
                    if (start)
                        state <= START_ST;
                end

                START_ST: begin
                    SCLK        <= CPOL;
                    SS[slave_sel] <= 1'b0;
                    bit_cnt     <= 0;
                    clk_cnt     <= 0;
                    tx_reg      <= mosi_data_reg;
                    MOSI        <= (CPHA == 0) ? mosi_data_reg[DATA_WIDTH-1] : 1'b0;
                    state       <= TRANSFER;
                end

                TRANSFER: begin
                    if (clk_cnt == $clog2(CLK_DIV)'(CLK_DIV - 1)) begin
                        clk_cnt <= 0;
                        SCLK    <= ~SCLK;

                        if (shift_edge) begin
                            if (bit_cnt == 0) begin
                                // CPHA=1 only: for CPHA=0, sample always fires
                                // before shift, so bit_cnt is never 0 here.
                                // This is the very first data-phase edge — present
                                // the MSB already sitting in tx_reg without
                                // shifting yet (shifting here would skip it).
                                MOSI <= tx_reg[DATA_WIDTH-1];
                            end else if (bit_cnt == DATA_WIDTH) begin
                                state    <= HOLD_ST;
                                hold_cnt <= 0;
                            end else begin
                                tx_reg <= {tx_reg[DATA_WIDTH-2:0], 1'b0};
                                MOSI   <= tx_reg[DATA_WIDTH-2];
                            end
                        end

                        if (sample_edge) begin
                            rx_reg  <= {rx_reg[DATA_WIDTH-2:0], MISO};
                            bit_cnt <= bit_cnt + 1'b1;
                            if (CPHA == 1 && bit_cnt == DATA_WIDTH-1) begin
                                state    <= HOLD_ST;
                                hold_cnt <= 0;
                            end
                        end
                    end else begin
                        clk_cnt <= clk_cnt + 1'b1;
                    end
                end

                // Hold SS/SCLK/MOSI exactly as they are for HOLD_CYCLES
                // clk cycles before DONE_ST clears them. Deliberately does
                // not touch any bus signal.
                HOLD_ST: begin
                    if (hold_cnt == HOLD_CYCLES-1)
                        state <= DONE_ST;
                    else
                        hold_cnt <= hold_cnt + 1'b1;
                end

                DONE_ST: begin
                    SS            <= {SLAVES{1'b1}};
                    SCLK          <= CPOL;
                    MOSI          <= 1'b0;
                    miso_data_reg <= rx_reg;
                    state         <= IDLE;
                    done          <= 1'b1;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

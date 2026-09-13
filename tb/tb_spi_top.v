`timescale 1ns/1ps

// ============================================================================
// tb_spi_all_modes.v
// Instantiates spi_top once per SPI mode (CPOL/CPHA = 00, 01, 10, 11) and
// runs every slave through a full-duplex transfer under each mode, checking
// both directions against expected data.
// ============================================================================
module tb_spi_top;

    localparam DATA_WIDTH = 8;
    localparam SLAVES     = 4;
    localparam SELW       = (SLAVES > 1) ? $clog2(SLAVES) : 1;

    reg clk, rst_n;
    always #5 clk <= ~clk;

    integer errors = 0;
    integer rep;

    // Fixed per-slave TX data, shared across all four mode instances.
    reg [SLAVES*DATA_WIDTH-1:0] slave_tx_flat;

    // -------------------------------------------------------------------
    // One instance per SPI mode
    // -------------------------------------------------------------------
    `define SPI_MODE_INSTANCE(NAME, CPOL_V, CPHA_V)                            \
        reg                    start_``NAME;                                    \
        reg  [SELW-1:0]        sel_``NAME;                                      \
        reg  [DATA_WIDTH-1:0]  mtx_``NAME;                                      \
        wire [DATA_WIDTH-1:0]  mrx_``NAME;                                      \
        wire                   done_``NAME;                                     \
        wire [SLAVES*DATA_WIDTH-1:0] srx_``NAME;                                \
        wire [SLAVES-1:0]      sdone_``NAME;                                    \
        spi_top #(                                                              \
            .DATA_WIDTH(DATA_WIDTH), .SLAVES(SLAVES),                           \
            .CLK_DIV(4), .CPOL(CPOL_V), .CPHA(CPHA_V)                           \
        ) dut_``NAME (                                                          \
            .clk(clk), .rst_n(rst_n),                                           \
            .start(start_``NAME), .slave_sel(sel_``NAME),                       \
            .master_tx(mtx_``NAME), .master_rx(mrx_``NAME),                     \
            .master_done(done_``NAME),                                          \
            .slave_tx_flat(slave_tx_flat),                                      \
            .slave_rx_flat(srx_``NAME),                                         \
            .slave_done(sdone_``NAME)                                           \
        );

    `SPI_MODE_INSTANCE(m0, 0, 0)   // Mode 0
    `SPI_MODE_INSTANCE(m1, 0, 1)   // Mode 1
    `SPI_MODE_INSTANCE(m2, 1, 0)   // Mode 2
    `SPI_MODE_INSTANCE(m3, 1, 1)   // Mode 3

    // -------------------------------------------------------------------
    // Reusable per-mode test task.
    // -------------------------------------------------------------------
    `define RUN_MODE_TEST(NAME, LABEL)                                          \
        task run_``NAME;                                                        \
            integer i;                                                          \
            reg [DATA_WIDTH-1:0] exp_tx, tx_val, rx_check;                      \
            begin                                                               \
                for (i = 0; i < SLAVES; i = i + 1) begin                        \
                    sel_``NAME = i[SELW-1:0];                                   \
                    tx_val     = $random[7:0];                                       \
                    mtx_``NAME = tx_val;                                        \
                    exp_tx     = slave_tx_flat[i*DATA_WIDTH +: DATA_WIDTH];     \
                                                                                \
                    start_``NAME = 1;                                           \
                    #10 start_``NAME = 0;                                       \
                    wait (done_``NAME == 1'b1);                                 \
                    #20;                                                        \
                                                                                \
                    if (mrx_``NAME !== exp_tx) begin                            \
                        $display("[%s] FAIL slave %0d: master got %h, exp %h",  \
                                 LABEL, i, mrx_``NAME, exp_tx);                 \
                        errors = errors + 1;                                    \
                    end else begin                                              \
                        $display("[%s] PASS slave %0d: master got %h",          \
                                 LABEL, i, mrx_``NAME);                         \
                    end                                                         \
                                                                                \
                    rx_check = srx_``NAME[i*DATA_WIDTH +: DATA_WIDTH];          \
                    if (rx_check !== tx_val) begin                              \
                        $display("[%s] FAIL slave %0d: slave got %h, exp %h",   \
                                 LABEL, i, rx_check, tx_val);                   \
                        errors = errors + 1;                                    \
                    end                                                         \
                    #50;                                                        \
                end                                                             \
            end                                                                 \
        endtask

    `RUN_MODE_TEST(m0, "MODE0 CPOL0/CPHA0")
    `RUN_MODE_TEST(m1, "MODE1 CPOL0/CPHA1")
    `RUN_MODE_TEST(m2, "MODE2 CPOL1/CPHA0")
    `RUN_MODE_TEST(m3, "MODE3 CPOL1/CPHA1")

    initial begin
        $dumpfile("spi_top.vcd");
        $dumpvars(0, tb_spi_top);

        clk = 0; rst_n = 0;
        start_m0 = 0; sel_m0 = 0; mtx_m0 = 0;
        start_m1 = 0; sel_m1 = 0; mtx_m1 = 0;
        start_m2 = 0; sel_m2 = 0; mtx_m2 = 0;
        start_m3 = 0; sel_m3 = 0; mtx_m3 = 0;

        slave_tx_flat[0*DATA_WIDTH +: DATA_WIDTH] = 8'b11001100;
        slave_tx_flat[1*DATA_WIDTH +: DATA_WIDTH] = 8'b10101010;
        slave_tx_flat[2*DATA_WIDTH +: DATA_WIDTH] = 8'b11100010;
        slave_tx_flat[3*DATA_WIDTH +: DATA_WIDTH] = 8'b00110011;

        #20 rst_n = 1;
        #20;

        for (rep = 0; rep < 20; rep = rep + 1) begin
            run_m0();
            run_m1();
            run_m2();
            run_m3();
        end

        if (errors == 0)
            $display("\nALL MODES PASSED (0,1,2,3) x (4 slaves each)");
        else
            $display("\n%0d TOTAL FAILURE(S)", errors);

        $finish;
    end

endmodule

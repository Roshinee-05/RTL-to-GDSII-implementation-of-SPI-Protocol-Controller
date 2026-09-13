`timescale 1ns/1ps
// ============================================================================
// spi_top.v
// Top-level N-slave SPI system. Replaces the tri-state shared MISO bus with
// an explicit mux (ASIC-flow friendly), and instantiates slaves via a
// generate loop so SLAVES scales without editing this file.
// ============================================================================
module spi_top #(
    parameter DATA_WIDTH = 8,
    parameter SLAVES     = 4,
    parameter CLK_DIV    = 4,
    parameter CPOL       = 0,
    parameter CPHA       = 0
)(
    input  wire                          clk,
    input  wire                          rst_n,

    // Master-side control/data
    input  wire                          start,
    input  wire [$clog2(SLAVES)-1:0]     slave_sel,
    input  wire [DATA_WIDTH-1:0]         master_tx,
    output wire [DATA_WIDTH-1:0]         master_rx,
    output wire                          master_done,

    // Slave-side data, flattened (portable across sim/synth tools)
    input  wire [SLAVES*DATA_WIDTH-1:0]  slave_tx_flat,
    output wire [SLAVES*DATA_WIDTH-1:0]  slave_rx_flat,
    output wire [SLAVES-1:0]             slave_done
);

    wire                SCLK, MOSI, MISO;
    wire [SLAVES-1:0]   SS;
    wire [SLAVES-1:0]   slave_miso;

    // Mux replaces the old tri-state MISO bus: only the selected slave's
    // line is ever routed back to the master.
    assign MISO = slave_miso[slave_sel];

    spi_master #(
        .DATA_WIDTH(DATA_WIDTH), .SLAVES(SLAVES),
        .CLK_DIV(CLK_DIV), .CPOL(CPOL), .CPHA(CPHA)
    ) u_master (
        .clk(clk), .rst_n(rst_n),
        .mosi_data_reg(master_tx),
        .miso_data_reg(master_rx),
        .MISO(MISO), .MOSI(MOSI), .SCLK(SCLK), .SS(SS),
        .start(start), .slave_sel(slave_sel), .done(master_done)
    );

    genvar i;
    generate
        for (i = 0; i < SLAVES; i = i + 1) begin : g_slave
            spi_slave #(
                .DATA_WIDTH(DATA_WIDTH), .CPOL(CPOL), .CPHA(CPHA)
            ) u_slave (
                .clk(clk), .rst_n(rst_n),
                .SCLK(SCLK), .SS(SS[i]), .MOSI(MOSI),
                .tx_data(slave_tx_flat[i*DATA_WIDTH +: DATA_WIDTH]),
                .rx_data(slave_rx_flat[i*DATA_WIDTH +: DATA_WIDTH]),
                .done(slave_done[i]),
                .miso(slave_miso[i])
            );
        end
    endgenerate

endmodule

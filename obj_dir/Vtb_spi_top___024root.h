// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_spi_top.h for the primary calling header

#ifndef VERILATED_VTB_SPI_TOP___024ROOT_H_
#define VERILATED_VTB_SPI_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_spi_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_spi_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_spi_top__DOT__clk;
        CData/*0:0*/ tb_spi_top__DOT__rst_n;
        CData/*0:0*/ tb_spi_top__DOT__start_m0;
        CData/*1:0*/ tb_spi_top__DOT__sel_m0;
        CData/*7:0*/ tb_spi_top__DOT__mtx_m0;
        CData/*7:0*/ tb_spi_top__DOT__mrx_m0;
        CData/*0:0*/ tb_spi_top__DOT__done_m0;
        CData/*0:0*/ tb_spi_top__DOT__start_m1;
        CData/*1:0*/ tb_spi_top__DOT__sel_m1;
        CData/*7:0*/ tb_spi_top__DOT__mtx_m1;
        CData/*7:0*/ tb_spi_top__DOT__mrx_m1;
        CData/*0:0*/ tb_spi_top__DOT__done_m1;
        CData/*0:0*/ tb_spi_top__DOT__start_m2;
        CData/*1:0*/ tb_spi_top__DOT__sel_m2;
        CData/*7:0*/ tb_spi_top__DOT__mtx_m2;
        CData/*7:0*/ tb_spi_top__DOT__mrx_m2;
        CData/*0:0*/ tb_spi_top__DOT__done_m2;
        CData/*0:0*/ tb_spi_top__DOT__start_m3;
        CData/*1:0*/ tb_spi_top__DOT__sel_m3;
        CData/*7:0*/ tb_spi_top__DOT__mtx_m3;
        CData/*7:0*/ tb_spi_top__DOT__mrx_m3;
        CData/*0:0*/ tb_spi_top__DOT__done_m3;
        CData/*7:0*/ tb_spi_top__DOT__run_m0__Vstatic__exp_tx;
        CData/*7:0*/ tb_spi_top__DOT__run_m0__Vstatic__tx_val;
        CData/*7:0*/ tb_spi_top__DOT__run_m0__Vstatic__rx_check;
        CData/*7:0*/ tb_spi_top__DOT__run_m1__Vstatic__exp_tx;
        CData/*7:0*/ tb_spi_top__DOT__run_m1__Vstatic__tx_val;
        CData/*7:0*/ tb_spi_top__DOT__run_m1__Vstatic__rx_check;
        CData/*7:0*/ tb_spi_top__DOT__run_m2__Vstatic__exp_tx;
        CData/*7:0*/ tb_spi_top__DOT__run_m2__Vstatic__tx_val;
        CData/*7:0*/ tb_spi_top__DOT__run_m2__Vstatic__rx_check;
        CData/*7:0*/ tb_spi_top__DOT__run_m3__Vstatic__exp_tx;
        CData/*7:0*/ tb_spi_top__DOT__run_m3__Vstatic__tx_val;
        CData/*7:0*/ tb_spi_top__DOT__run_m3__Vstatic__rx_check;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__SCLK;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__MOSI;
        CData/*3:0*/ tb_spi_top__DOT__dut_m0__DOT__SS;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
        CData/*2:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state;
        CData/*3:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt;
        CData/*1:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt;
        CData/*2:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__rx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__sample_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__shift_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1;
    };
    struct {
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__SCLK;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__MOSI;
        CData/*3:0*/ tb_spi_top__DOT__dut_m1__DOT__SS;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
        CData/*2:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state;
        CData/*3:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt;
        CData/*1:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt;
        CData/*2:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__rx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__sample_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__shift_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    };
    struct {
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__SCLK;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__MOSI;
        CData/*3:0*/ tb_spi_top__DOT__dut_m2__DOT__SS;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
        CData/*2:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state;
        CData/*3:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt;
        CData/*1:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt;
        CData/*2:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__rx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__sample_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__shift_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__SCLK;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__MOSI;
        CData/*3:0*/ tb_spi_top__DOT__dut_m3__DOT__SS;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
        CData/*2:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state;
        CData/*3:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt;
    };
    struct {
        CData/*1:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt;
        CData/*2:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__rx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__sample_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__shift_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ __VdlyVal__tb_spi_top__DOT__clk__v0;
        CData/*0:0*/ __VdlySet__tb_spi_top__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m3__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_spi_top__DOT__errors;
        IData/*31:0*/ tb_spi_top__DOT__rep;
        IData/*31:0*/ tb_spi_top__DOT__slave_tx_flat;
        IData/*31:0*/ tb_spi_top__DOT__run_m0__Vstatic__i;
        IData/*31:0*/ tb_spi_top__DOT__run_m1__Vstatic__i;
        IData/*31:0*/ tb_spi_top__DOT__run_m2__Vstatic__i;
        IData/*31:0*/ tb_spi_top__DOT__run_m3__Vstatic__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_haeea1ef2__0;
    VlTriggerScheduler __VtrigSched_hbe6ef040__0;
    VlTriggerScheduler __VtrigSched_h5ec1229f__0;
    VlTriggerScheduler __VtrigSched_h010c0632__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_spi_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_spi_top___024root(Vtb_spi_top__Syms* symsp, const char* v__name);
    ~Vtb_spi_top___024root();
    VL_UNCOPYABLE(Vtb_spi_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

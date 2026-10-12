// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_master.h for the primary calling header

#ifndef VERILATED_VSPI_MASTER___024ROOT_H_
#define VERILATED_VSPI_MASTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vspi_master__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_master___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_spi_top__DOT__clk;
        CData/*0:0*/ tb_spi_top__DOT__rst_n;
        CData/*0:0*/ tb_spi_top__DOT__start;
        CData/*1:0*/ tb_spi_top__DOT__slave_sel;
        CData/*7:0*/ tb_spi_top__DOT__master_tx;
        CData/*7:0*/ tb_spi_top__DOT__master_rx;
        CData/*0:0*/ tb_spi_top__DOT__master_done;
        CData/*7:0*/ tb_spi_top__DOT__expected_slave_tx;
        CData/*7:0*/ tb_spi_top__DOT__slave_rx_check;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__SCLK;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__MOSI;
        CData/*3:0*/ tb_spi_top__DOT__dut__DOT__SS;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
        CData/*1:0*/ tb_spi_top__DOT__dut__DOT__u_master__DOT__state;
        CData/*3:0*/ tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt;
        CData/*1:0*/ tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__u_master__DOT__sample_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__u_master__DOT__shift_edge;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1;
        CData/*0:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2;
        CData/*1:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
        CData/*2:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
        CData/*7:0*/ tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
        CData/*0:0*/ __VdlyVal__tb_spi_top__DOT__clk__v0;
        CData/*0:0*/ __VdlySet__tb_spi_top__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_top__DOT__master_done__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_spi_top__DOT__slave_tx_flat;
    };
    struct {
        IData/*31:0*/ tb_spi_top__DOT__i;
        IData/*31:0*/ tb_spi_top__DOT__errors;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hea458f87__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vspi_master__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_master___024root(Vspi_master__Syms* symsp, const char* v__name);
    ~Vspi_master___024root();
    VL_UNCOPYABLE(Vspi_master___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

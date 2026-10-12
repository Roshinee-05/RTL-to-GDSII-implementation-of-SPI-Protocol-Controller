// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"
#include "Vspi_master___024root.h"

VlCoroutine Vspi_master___024root___eval_initial__TOP__Vtiming__0(Vspi_master___024root* vlSelf);
VlCoroutine Vspi_master___024root___eval_initial__TOP__Vtiming__1(Vspi_master___024root* vlSelf);

void Vspi_master___024root___eval_initial(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vspi_master___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vspi_master___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0 
        = vlSelfRef.tb_spi_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0 
        = vlSelfRef.tb_spi_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__master_done__0 
        = vlSelfRef.tb_spi_top__DOT__master_done;
}

VL_INLINE_OPT VlCoroutine Vspi_master___024root___eval_initial__TOP__Vtiming__1(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/tb_spi_top.v", 
                                             30);
        vlSelfRef.__VdlyVal__tb_spi_top__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__clk)));
        vlSelfRef.__VdlySet__tb_spi_top__DOT__clk__v0 = 1U;
    }
}

void Vspi_master___024root___eval_act(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vspi_master___024root___nba_sequent__TOP__0(Vspi_master___024root* vlSelf);
void Vspi_master___024root___nba_sequent__TOP__1(Vspi_master___024root* vlSelf);

void Vspi_master___024root___eval_nba(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspi_master___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspi_master___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vspi_master___024root___nba_sequent__TOP__0(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut__DOT__SS = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut__DOT__SCLK = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut__DOT__MOSI = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0;
    // Body
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__SS = vlSelfRef.tb_spi_top__DOT__dut__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut__DOT__MOSI = vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut__DOT__SCLK = vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt;
    if (vlSelfRef.tb_spi_top__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__SS = 0xfU;
                __Vdly__tb_spi_top__DOT__dut__DOT__SCLK = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__MOSI = 0U;
                vlSelfRef.tb_spi_top__DOT__master_rx 
                    = vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg;
                __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state = 0U;
                vlSelfRef.tb_spi_top__DOT__master_done = 1U;
            } else if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__SCLK 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK)));
                __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt = 0U;
                if (vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__shift_edge) {
                    if ((8U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state = 3U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg 
                            = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg) 
                                        << 1U));
                        __Vdly__tb_spi_top__DOT__dut__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg) 
                                     >> 6U));
                    }
                }
                if (vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__sample_edge) {
                    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg) 
                                     << 1U)) | (1U 
                                                & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__slave_sel))));
                    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt)));
                }
            } else {
                __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg 
                = vlSelfRef.tb_spi_top__DOT__master_tx;
            __Vdly__tb_spi_top__DOT__dut__DOT__SCLK = 0U;
            __Vdly__tb_spi_top__DOT__dut__DOT__SS = 
                ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_spi_top__DOT__slave_sel))) 
                 & (IData)(__Vdly__tb_spi_top__DOT__dut__DOT__SS));
            __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut__DOT__MOSI 
                = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__master_tx) 
                         >> 7U));
            __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state = 2U;
        } else {
            vlSelfRef.tb_spi_top__DOT__master_done = 0U;
            __Vdly__tb_spi_top__DOT__dut__DOT__SS = 0xfU;
            __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut__DOT__SCLK = 0U;
            if (vlSelfRef.tb_spi_top__DOT__start) {
                __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state = 1U;
            }
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                          >> 3U)))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x18U);
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x1fU);
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            } else {
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                    if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data 
                            = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                         << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 1U;
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 2U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt)));
                    }
                }
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                          >> 2U)))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 0x10U));
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0x17U));
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            } else {
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                    if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data 
                            = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                         << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 1U;
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 2U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt)));
                    }
                }
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                          >> 1U)))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 8U));
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0xfU));
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            } else {
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                    if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data 
                            = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                         << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 1U;
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 2U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt)));
                    }
                }
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS)))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 7U));
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            } else {
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                    if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data 
                            = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                         << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
                        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 1U;
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 2U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt)));
                    }
                }
                if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                     & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))) {
                    __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        }
    } else {
        __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__SCLK = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__SS = 0xfU;
        __Vdly__tb_spi_top__DOT__dut__DOT__MOSI = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state = 0U;
        vlSelfRef.tb_spi_top__DOT__master_rx = 0U;
        vlSelfRef.tb_spi_top__DOT__master_done = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
    }
    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt 
        = __Vdly__tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__SS = __Vdly__tb_spi_top__DOT__dut__DOT__SS;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI = __Vdly__tb_spi_top__DOT__dut__DOT__MOSI;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK = __Vdly__tb_spi_top__DOT__dut__DOT__SCLK;
    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__shift_edge 
        = ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)) 
           & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__sample_edge 
        = ((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK)) 
           & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)));
}

VL_INLINE_OPT void Vspi_master___024root___nba_sequent__TOP__1(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_spi_top__DOT__clk__v0) {
        vlSelfRef.__VdlySet__tb_spi_top__DOT__clk__v0 = 0U;
        vlSelfRef.tb_spi_top__DOT__clk = vlSelfRef.__VdlyVal__tb_spi_top__DOT__clk__v0;
    }
}

void Vspi_master___024root___timing_resume(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hea458f87__0.resume(
                                                   "@([changed] tb_spi_top.master_done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vspi_master___024root___timing_commit(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hea458f87__0.commit(
                                                   "@([changed] tb_spi_top.master_done)");
    }
}

void Vspi_master___024root___eval_triggers__act(Vspi_master___024root* vlSelf);

bool Vspi_master___024root___eval_phase__act(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_master___024root___eval_triggers__act(vlSelf);
    Vspi_master___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vspi_master___024root___timing_resume(vlSelf);
        Vspi_master___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vspi_master___024root___eval_phase__nba(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspi_master___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__nba(Vspi_master___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__act(Vspi_master___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_master___024root___eval(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vspi_master___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_spi_top.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vspi_master___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_spi_top.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vspi_master___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vspi_master___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspi_master___024root___eval_debug_assertions(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

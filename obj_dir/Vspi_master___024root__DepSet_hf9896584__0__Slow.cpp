// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"
#include "Vspi_master___024root.h"

VL_ATTR_COLD void Vspi_master___024root___eval_static__TOP(Vspi_master___024root* vlSelf);
VL_ATTR_COLD void Vspi_master___024root____Vm_traceActivitySetAll(Vspi_master___024root* vlSelf);

VL_ATTR_COLD void Vspi_master___024root___eval_static(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_master___024root___eval_static__TOP(vlSelf);
    Vspi_master___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vspi_master___024root___eval_static__TOP(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_top__DOT__errors = 0U;
}

VL_ATTR_COLD void Vspi_master___024root___eval_final(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__stl(Vspi_master___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_master___024root___eval_phase__stl(Vspi_master___024root* vlSelf);

VL_ATTR_COLD void Vspi_master___024root___eval_settle(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vspi_master___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_spi_top.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspi_master___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__stl(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_master___024root___stl_sequent__TOP__0(Vspi_master___024root* vlSelf);

VL_ATTR_COLD void Vspi_master___024root___eval_stl(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vspi_master___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vspi_master___024root___stl_sequent__TOP__0(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__shift_edge 
        = ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)) 
           & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__sample_edge 
        = ((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK)) 
           & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)));
}

VL_ATTR_COLD void Vspi_master___024root___eval_triggers__stl(Vspi_master___024root* vlSelf);

VL_ATTR_COLD bool Vspi_master___024root___eval_phase__stl(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_master___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vspi_master___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__act(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_spi_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_spi_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tb_spi_top.master_done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__nba(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_spi_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_spi_top.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tb_spi_top.master_done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_master___024root____Vm_traceActivitySetAll(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vspi_master___024root___ctor_var_reset(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_spi_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__slave_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_spi_top__DOT__master_tx = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__master_rx = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__master_done = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__slave_tx_flat = VL_RAND_RESET_I(32);
    vlSelf->tb_spi_top__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_spi_top__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->tb_spi_top__DOT__expected_slave_tx = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__slave_rx_check = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__SCLK = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__MOSI = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__SS = VL_RAND_RESET_I(4);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__u_master__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__u_master__DOT__sample_edge = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__u_master__DOT__shift_edge = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2 = VL_RAND_RESET_I(1);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__tb_spi_top__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__tb_spi_top__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_top__DOT__master_done__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

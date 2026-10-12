// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_top.h for the primary calling header

#include "Vtb_spi_top__pch.h"
#include "Vtb_spi_top___024root.h"

VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_top___024root* vlSelf);
VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_top___024root* vlSelf);

void Vtb_spi_top___024root___eval_initial(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_spi_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0 
        = vlSelfRef.tb_spi_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0 
        = vlSelfRef.tb_spi_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m0__0 
        = vlSelfRef.tb_spi_top__DOT__done_m0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m1__0 
        = vlSelfRef.tb_spi_top__DOT__done_m1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m2__0 
        = vlSelfRef.tb_spi_top__DOT__done_m2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m3__0 
        = vlSelfRef.tb_spi_top__DOT__done_m3;
}

VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__0(Vtb_spi_top___024root* vlSelf);
VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__1(Vtb_spi_top___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
}

VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__1(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0xcU;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0xdU;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0xeU;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0xfU;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0x10U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0x11U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0x12U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0x13U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m0) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m0);
    }
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE0 CPOL0/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m1) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m1);
    }
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE1 CPOL0/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m2) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m2);
    }
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE2 CPOL1/CPHA0] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 0: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 0: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 8U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 1: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 1: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 2U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 2U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                    >> 0x10U));
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 2: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 2: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 3U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 3U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val 
        = (0xffU & VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx 
        = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
           >> 0x18U);
    vlSelfRef.tb_spi_top__DOT__start_m3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__mrx_m3) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: master got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] PASS slave 3: master got %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__mrx_m3);
    }
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val)))) {
        VL_WRITEF_NX("[MODE3 CPOL1/CPHA1] FAIL slave 3: slave got %x, exp %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0x14U;
    if ((0U == vlSelfRef.tb_spi_top__DOT__errors)) {
        VL_WRITEF_NX("\nALL MODES PASSED (0,1,2,3) x (4 slaves each)\n",0);
    } else {
        VL_WRITEF_NX("\n%0d TOTAL FAILURE(S)\n",0,32,
                     vlSelfRef.tb_spi_top__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_spi_top.v", 127, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/tb_spi_top.v", 
                                             16);
        vlSelfRef.__VdlyVal__tb_spi_top__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__clk)));
        vlSelfRef.__VdlySet__tb_spi_top__DOT__clk__v0 = 1U;
    }
}

void Vtb_spi_top___024root___eval_act(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_spi_top___024root___nba_sequent__TOP__0(Vtb_spi_top___024root* vlSelf);
void Vtb_spi_top___024root___nba_sequent__TOP__1(Vtb_spi_top___024root* vlSelf);

void Vtb_spi_top___024root___eval_nba(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_spi_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_spi_top___024root___nba_sequent__TOP__0(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg = 0;
    CData/*3:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK = 0;
    CData/*0:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg = 0;
    CData/*3:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0;
    CData/*2:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0;
    CData/*1:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0;
    CData/*7:0*/ __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0;
    // Body
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK;
    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt 
        = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt;
    if (vlSelfRef.tb_spi_top__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 0U;
            } else {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS = 0xfU;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI = 0U;
                vlSelfRef.tb_spi_top__DOT__mrx_m0 = vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__rx_reg;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 0U;
                vlSelfRef.tb_spi_top__DOT__done_m0 = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state))) {
                if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt))) {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 4U;
                } else {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK)));
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt = 0U;
                if (vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__shift_edge) {
                    if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg) 
                                     >> 7U));
                    } else if ((8U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 3U;
                        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt = 0U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg 
                            = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg) 
                                        << 1U));
                        __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg) 
                                     >> 6U));
                    }
                }
                if (vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__sample_edge) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__rx_reg) 
                                     << 1U)) | (1U 
                                                & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m0))));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt)));
                }
            } else {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg 
                = vlSelfRef.tb_spi_top__DOT__mtx_m0;
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK = 0U;
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_spi_top__DOT__sel_m0))) 
                   & (IData)(__Vdly__tb_spi_top__DOT__dut_m0__DOT__SS));
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI 
                = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__mtx_m0) 
                         >> 7U));
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 2U;
        } else {
            vlSelfRef.tb_spi_top__DOT__done_m0 = 0U;
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS = 0xfU;
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK = 0U;
            if (vlSelfRef.tb_spi_top__DOT__start_m0) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 0U;
            } else {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS = 0xfU;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI = 0U;
                vlSelfRef.tb_spi_top__DOT__mrx_m1 = vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__rx_reg;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 0U;
                vlSelfRef.tb_spi_top__DOT__done_m1 = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state))) {
                if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt))) {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 4U;
                } else {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK)));
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt = 0U;
                if (vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__shift_edge) {
                    if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg) 
                                     >> 7U));
                    } else if ((8U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 3U;
                        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt = 0U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg 
                            = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg) 
                                        << 1U));
                        __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg) 
                                     >> 6U));
                    }
                }
                if (vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__sample_edge) {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt)));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__rx_reg) 
                                     << 1U)) | (1U 
                                                & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m1))));
                    if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 3U;
                        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt = 0U;
                    }
                }
            } else {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state))) {
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK = 0U;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_spi_top__DOT__sel_m1))) 
                   & (IData)(__Vdly__tb_spi_top__DOT__dut_m1__DOT__SS));
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg 
                = vlSelfRef.tb_spi_top__DOT__mtx_m1;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI = 0U;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 2U;
        } else {
            vlSelfRef.tb_spi_top__DOT__done_m1 = 0U;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS = 0xfU;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK = 0U;
            if (vlSelfRef.tb_spi_top__DOT__start_m1) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 0U;
            } else {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS = 0xfU;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK = 1U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI = 0U;
                vlSelfRef.tb_spi_top__DOT__mrx_m2 = vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__rx_reg;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 0U;
                vlSelfRef.tb_spi_top__DOT__done_m2 = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state))) {
                if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt))) {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 4U;
                } else {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK)));
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt = 0U;
                if (vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__shift_edge) {
                    if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg) 
                                     >> 7U));
                    } else if ((8U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 3U;
                        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt = 0U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg 
                            = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg) 
                                        << 1U));
                        __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg) 
                                     >> 6U));
                    }
                }
                if (vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__sample_edge) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__rx_reg) 
                                     << 1U)) | (1U 
                                                & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m2))));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt)));
                }
            } else {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg 
                = vlSelfRef.tb_spi_top__DOT__mtx_m2;
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK = 1U;
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_spi_top__DOT__sel_m2))) 
                   & (IData)(__Vdly__tb_spi_top__DOT__dut_m2__DOT__SS));
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI 
                = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__mtx_m2) 
                         >> 7U));
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 2U;
        } else {
            vlSelfRef.tb_spi_top__DOT__done_m2 = 0U;
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS = 0xfU;
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK = 1U;
            if (vlSelfRef.tb_spi_top__DOT__start_m2) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 0U;
            } else {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS = 0xfU;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK = 1U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI = 0U;
                vlSelfRef.tb_spi_top__DOT__mrx_m3 = vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__rx_reg;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 0U;
                vlSelfRef.tb_spi_top__DOT__done_m3 = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state))) {
                if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt))) {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 4U;
                } else {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK)));
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt = 0U;
                if (vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__shift_edge) {
                    if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg) 
                                     >> 7U));
                    } else if ((8U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 3U;
                        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt = 0U;
                    } else {
                        __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg 
                            = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg) 
                                        << 1U));
                        __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI 
                            = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg) 
                                     >> 6U));
                    }
                }
                if (vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__sample_edge) {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt)));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__rx_reg 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__rx_reg) 
                                     << 1U)) | (1U 
                                                & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m3))));
                    if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt))) {
                        __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 3U;
                        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt = 0U;
                    }
                }
            } else {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state))) {
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK = 1U;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_spi_top__DOT__sel_m3))) 
                   & (IData)(__Vdly__tb_spi_top__DOT__dut_m3__DOT__SS));
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg 
                = vlSelfRef.tb_spi_top__DOT__mtx_m3;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI = 0U;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 2U;
        } else {
            vlSelfRef.tb_spi_top__DOT__done_m3 = 0U;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS = 0xfU;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt = 0U;
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK = 1U;
            if (vlSelfRef.tb_spi_top__DOT__start_m3) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 1U;
            }
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                          >> 3U)))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x18U);
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x1fU);
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                          >> 2U)))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 0x10U));
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0x17U));
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                          >> 1U)))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 8U));
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0xfU));
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS)))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 7U));
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                          >> 3U)))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x18U);
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x1fU);
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                          >> 2U)))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 0x10U));
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0x17U));
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                          >> 1U)))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 8U));
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0xfU));
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS)))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 7U));
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                          >> 3U)))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x18U);
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x1fU);
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                          >> 2U)))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 0x10U));
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0x17U));
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                          >> 1U)))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 8U));
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0xfU));
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS)))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 7U));
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                          >> 3U)))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x18U);
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                    = (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                       >> 0x1fU);
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                          >> 2U)))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 0x10U));
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0x17U));
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                          >> 1U)))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 8U));
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0xfU));
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS)))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                    = (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                    = (1U & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 7U));
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                 & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
                    = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                 << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                if ((7U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg) 
                                     << 1U)) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 1U;
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 2U;
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt)));
                }
            } else if (((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                        & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))) {
                if ((0U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt))) {
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 7U));
                } else {
                    __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
                        = (0xfeU & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                    << 1U));
                    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso 
                        = (1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg) 
                                 >> 6U));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))) {
                vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
                __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
            }
        } else {
            __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        }
    } else {
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__rx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS = 0xfU;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state = 0U;
        vlSelfRef.tb_spi_top__DOT__mrx_m0 = 0U;
        vlSelfRef.tb_spi_top__DOT__done_m0 = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS = 0xfU;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state = 0U;
        vlSelfRef.tb_spi_top__DOT__mrx_m1 = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__done_m1 = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__rx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK = 1U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS = 0xfU;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state = 0U;
        vlSelfRef.tb_spi_top__DOT__mrx_m2 = 0U;
        vlSelfRef.tb_spi_top__DOT__done_m2 = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK = 1U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS = 0xfU;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state = 0U;
        vlSelfRef.tb_spi_top__DOT__mrx_m3 = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__done_m3 = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg = 0U;
        __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso = 0U;
        vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done = 0U;
    }
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS = __Vdly__tb_spi_top__DOT__dut_m0__DOT__SS;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI = __Vdly__tb_spi_top__DOT__dut_m0__DOT__MOSI;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS = __Vdly__tb_spi_top__DOT__dut_m1__DOT__SS;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI = __Vdly__tb_spi_top__DOT__dut_m1__DOT__MOSI;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS = __Vdly__tb_spi_top__DOT__dut_m2__DOT__SS;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI = __Vdly__tb_spi_top__DOT__dut_m2__DOT__MOSI;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg 
        = __Vdly__tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS = __Vdly__tb_spi_top__DOT__dut_m3__DOT__SS;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI = __Vdly__tb_spi_top__DOT__dut_m3__DOT__MOSI;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1 
        = ((IData)(vlSelfRef.tb_spi_top__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1 
        = ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n))) 
           || (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK = __Vdly__tb_spi_top__DOT__dut_m0__DOT__SCLK;
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK = __Vdly__tb_spi_top__DOT__dut_m1__DOT__SCLK;
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK = __Vdly__tb_spi_top__DOT__dut_m2__DOT__SCLK;
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK = __Vdly__tb_spi_top__DOT__dut_m3__DOT__SCLK;
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__shift_edge 
        = ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt)) 
           & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__sample_edge 
        = ((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK)) 
           & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt)));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__shift_edge 
        = ((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK)) 
           & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt)));
    vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__sample_edge 
        = ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt)) 
           & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__shift_edge 
        = ((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK)) 
           & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt)));
    vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__sample_edge 
        = ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt)) 
           & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__shift_edge 
        = ((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt)) 
           & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK));
    vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__sample_edge 
        = ((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK)) 
           & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt)));
}

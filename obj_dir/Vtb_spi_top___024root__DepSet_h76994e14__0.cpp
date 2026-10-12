// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_top.h for the primary calling header

#include "Vtb_spi_top__pch.h"
#include "Vtb_spi_top__Syms.h"
#include "Vtb_spi_top___024root.h"

VlCoroutine Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__0(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f746f70U;
    __Vtemp_1[2U] = 0x737069U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_spi_top__DOT__clk = 0U;
    vlSelfRef.tb_spi_top__DOT__rst_n = 0U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__sel_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__mtx_m0 = 0U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__sel_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__mtx_m1 = 0U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__sel_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__mtx_m2 = 0U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__sel_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__mtx_m3 = 0U;
    vlSelfRef.tb_spi_top__DOT__slave_tx_flat = 0x33e2aaccU;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         112);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         113);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 2U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 3U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 4U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 5U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 6U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 7U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 8U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 9U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0xaU;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 4U;
    vlSelfRef.tb_spi_top__DOT__rep = 0xbU;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m0 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m0)))) {
        co_await vlSelfRef.__VtrigSched_haeea1ef2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m0)", 
                                                             "tb/tb_spi_top.v", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m1 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m1)))) {
        co_await vlSelfRef.__VtrigSched_hbe6ef040__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m1)", 
                                                             "tb/tb_spi_top.v", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         93);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m2)))) {
        co_await vlSelfRef.__VtrigSched_h5ec1229f__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m2)", 
                                                             "tb/tb_spi_top.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         94);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start_m3 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__done_m3)))) {
        co_await vlSelfRef.__VtrigSched_h010c0632__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.done_m3)", 
                                                             "tb/tb_spi_top.v", 
                                                             95);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

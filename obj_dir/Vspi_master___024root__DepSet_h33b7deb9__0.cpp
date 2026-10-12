// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"
#include "Vspi_master__Syms.h"
#include "Vspi_master___024root.h"

VL_INLINE_OPT VlCoroutine Vspi_master___024root___eval_initial__TOP__Vtiming__0(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_initial__TOP__Vtiming__0\n"); );
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
    vlSelfRef.tb_spi_top__DOT__start = 0U;
    vlSelfRef.tb_spi_top__DOT__slave_sel = 0U;
    vlSelfRef.tb_spi_top__DOT__master_tx = 0U;
    vlSelfRef.tb_spi_top__DOT__slave_tx_flat = 0x33e2aaccU;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__slave_sel = 0U;
    vlSelfRef.tb_spi_top__DOT__master_tx = (0xffU & 
                                            VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__expected_slave_tx = 
        (0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat);
    VL_WRITEF_NX("\n--- Selecting slave 0 ---\nMaster sending: %x | Expecting back: %x\n",0,
                 8,vlSelfRef.tb_spi_top__DOT__master_tx,
                 8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
    vlSelfRef.tb_spi_top__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__master_done)))) {
        co_await vlSelfRef.__VtrigSched_hea458f87__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.master_done)", 
                                                             "tb/tb_spi_top.v", 
                                                             63);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         64);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__master_rx) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx))) {
        VL_WRITEF_NX("FAIL: master received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: master safely received %x from slave 0\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx);
    }
    vlSelfRef.tb_spi_top__DOT__slave_rx_check = vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__slave_rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__master_tx)))) {
        VL_WRITEF_NX("FAIL: slave 0 received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__slave_rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__master_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__i = 1U;
    vlSelfRef.tb_spi_top__DOT__slave_sel = 1U;
    vlSelfRef.tb_spi_top__DOT__master_tx = (0xffU & 
                                            VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__expected_slave_tx = 
        (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                  >> 8U));
    VL_WRITEF_NX("\n--- Selecting slave 1 ---\nMaster sending: %x | Expecting back: %x\n",0,
                 8,vlSelfRef.tb_spi_top__DOT__master_tx,
                 8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
    vlSelfRef.tb_spi_top__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__master_done)))) {
        co_await vlSelfRef.__VtrigSched_hea458f87__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.master_done)", 
                                                             "tb/tb_spi_top.v", 
                                                             63);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         64);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__master_rx) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx))) {
        VL_WRITEF_NX("FAIL: master received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: master safely received %x from slave 1\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx);
    }
    vlSelfRef.tb_spi_top__DOT__slave_rx_check = vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__slave_rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__master_tx)))) {
        VL_WRITEF_NX("FAIL: slave 1 received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__slave_rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__master_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__i = 2U;
    vlSelfRef.tb_spi_top__DOT__slave_sel = 2U;
    vlSelfRef.tb_spi_top__DOT__master_tx = (0xffU & 
                                            VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__expected_slave_tx = 
        (0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                  >> 0x10U));
    VL_WRITEF_NX("\n--- Selecting slave 2 ---\nMaster sending: %x | Expecting back: %x\n",0,
                 8,vlSelfRef.tb_spi_top__DOT__master_tx,
                 8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
    vlSelfRef.tb_spi_top__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__master_done)))) {
        co_await vlSelfRef.__VtrigSched_hea458f87__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.master_done)", 
                                                             "tb/tb_spi_top.v", 
                                                             63);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         64);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__master_rx) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx))) {
        VL_WRITEF_NX("FAIL: master received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: master safely received %x from slave 2\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx);
    }
    vlSelfRef.tb_spi_top__DOT__slave_rx_check = vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__slave_rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__master_tx)))) {
        VL_WRITEF_NX("FAIL: slave 2 received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__slave_rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__master_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__i = 3U;
    vlSelfRef.tb_spi_top__DOT__slave_sel = 3U;
    vlSelfRef.tb_spi_top__DOT__master_tx = (0xffU & 
                                            VL_RANDOM_I());
    vlSelfRef.tb_spi_top__DOT__expected_slave_tx = 
        (vlSelfRef.tb_spi_top__DOT__slave_tx_flat >> 0x18U);
    VL_WRITEF_NX("\n--- Selecting slave 3 ---\nMaster sending: %x | Expecting back: %x\n",0,
                 8,vlSelfRef.tb_spi_top__DOT__master_tx,
                 8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
    vlSelfRef.tb_spi_top__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_spi_top__DOT__master_done)))) {
        co_await vlSelfRef.__VtrigSched_hea458f87__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] tb_spi_top.master_done)", 
                                                             "tb/tb_spi_top.v", 
                                                             63);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         64);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.tb_spi_top__DOT__master_rx) 
         != (IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx))) {
        VL_WRITEF_NX("FAIL: master received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__expected_slave_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS: master safely received %x from slave 3\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__master_rx);
    }
    vlSelfRef.tb_spi_top__DOT__slave_rx_check = vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_spi_top__DOT__slave_rx_check) 
                     != (IData)(vlSelfRef.tb_spi_top__DOT__master_tx)))) {
        VL_WRITEF_NX("FAIL: slave 3 received %x, expected %x\n",0,
                     8,vlSelfRef.tb_spi_top__DOT__slave_rx_check,
                     8,(IData)(vlSelfRef.tb_spi_top__DOT__master_tx));
        vlSelfRef.tb_spi_top__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.tb_spi_top__DOT__errors);
    }
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_spi_top.v", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_spi_top__DOT__i = 4U;
    if ((0U == vlSelfRef.tb_spi_top__DOT__errors)) {
        VL_WRITEF_NX("\nALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("\n%0d TEST(S) FAILED\n",0,32,
                     vlSelfRef.tb_spi_top__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_spi_top.v", 87, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__act(Vspi_master___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_master___024root___eval_triggers__act(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_spi_top__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_spi_top__DOT__master_done) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__master_done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0 
        = vlSelfRef.tb_spi_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0 
        = vlSelfRef.tb_spi_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__master_done__0 
        = vlSelfRef.tb_spi_top__DOT__master_done;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_master___024root___dump_triggers__act(vlSelf);
    }
#endif
}

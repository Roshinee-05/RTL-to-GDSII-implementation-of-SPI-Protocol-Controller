// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_top.h for the primary calling header

#include "Vtb_spi_top__pch.h"
#include "Vtb_spi_top__Syms.h"
#include "Vtb_spi_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_top___024root___dump_triggers__act(Vtb_spi_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_spi_top___024root___eval_triggers__act(Vtb_spi_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_spi_top__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_spi_top__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_spi_top__DOT__done_m0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m0__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_spi_top__DOT__done_m1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m1__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_spi_top__DOT__done_m2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m2__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.tb_spi_top__DOT__done_m3) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_top__DOT__done_m3__0)));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_spi_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

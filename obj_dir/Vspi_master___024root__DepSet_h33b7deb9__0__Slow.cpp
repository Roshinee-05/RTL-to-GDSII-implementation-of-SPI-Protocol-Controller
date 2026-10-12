// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"
#include "Vspi_master__Syms.h"
#include "Vspi_master___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__stl(Vspi_master___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_master___024root___eval_triggers__stl(Vspi_master___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_master___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

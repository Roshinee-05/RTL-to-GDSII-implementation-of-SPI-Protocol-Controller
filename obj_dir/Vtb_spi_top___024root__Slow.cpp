// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_top.h for the primary calling header

#include "Vtb_spi_top__pch.h"
#include "Vtb_spi_top__Syms.h"
#include "Vtb_spi_top___024root.h"

void Vtb_spi_top___024root___ctor_var_reset(Vtb_spi_top___024root* vlSelf);

Vtb_spi_top___024root::Vtb_spi_top___024root(Vtb_spi_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_spi_top___024root___ctor_var_reset(this);
}

void Vtb_spi_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_spi_top___024root::~Vtb_spi_top___024root() {
}

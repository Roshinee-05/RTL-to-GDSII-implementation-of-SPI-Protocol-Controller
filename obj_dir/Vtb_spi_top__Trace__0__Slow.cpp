// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_spi_top__Syms.h"


VL_ATTR_COLD void Vtb_spi_top___024root__trace_init_sub__TOP__0(Vtb_spi_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_spi_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"SELW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"rep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+2,0,"slave_tx_flat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"mrx_m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"mtx_m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"sel_m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"done_m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"sdone_m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"start_m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"srx_m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"mrx_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"mtx_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"sel_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"done_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"sdone_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"start_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"srx_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"mrx_m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"mtx_m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"sel_m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"done_m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"sdone_m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"start_m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"srx_m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"mrx_m3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"mtx_m3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"sel_m3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"done_m3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"sdone_m3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+20,0,"start_m3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"srx_m3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"run_m0__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+22,0,"run_m0__Vstatic__exp_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"run_m0__Vstatic__tx_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"run_m0__Vstatic__rx_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"run_m1__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+26,0,"run_m1__Vstatic__exp_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"run_m1__Vstatic__tx_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"run_m1__Vstatic__rx_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"run_m2__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+30,0,"run_m2__Vstatic__exp_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"run_m2__Vstatic__tx_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"run_m2__Vstatic__rx_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"run_m3__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+34,0,"run_m3__Vstatic__exp_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"run_m3__Vstatic__tx_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"run_m3__Vstatic__rx_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut_m0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"master_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"master_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+38,0,"master_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"slave_tx_flat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"slave_rx_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"slave_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"SCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"MOSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"MISO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"SS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"slave_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("g_slave[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+71,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+83,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+95,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+101,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+102,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+103,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"mosi_data_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"miso_data_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+294,0,"MISO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"MOSI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"SCLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"SS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"START_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+308,0,"HOLD_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+309,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+299,0,"HOLD_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+106,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+107,0,"clk_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+108,0,"hold_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+110,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+111,0,"sclk_posedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"sclk_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"lead_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"trail_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dut_m1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"master_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"master_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+42,0,"master_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"slave_tx_flat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"slave_rx_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"slave_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+113,0,"SCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MOSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"MISO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"SS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"slave_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("g_slave[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+125,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+126,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+127,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+128,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+131,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+137,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+138,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+139,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+143,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+149,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+150,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+155,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+163,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"mosi_data_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"miso_data_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+295,0,"MISO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"MOSI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"SCLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"SS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"START_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+308,0,"HOLD_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+309,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+299,0,"HOLD_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+166,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"clk_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"hold_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+169,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+171,0,"sclk_posedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"sclk_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"lead_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"trail_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dut_m2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"master_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"master_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+46,0,"master_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"slave_tx_flat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"slave_rx_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"slave_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+173,0,"SCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"MOSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"MISO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"SS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+176,0,"slave_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("g_slave[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+179,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+185,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+186,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+187,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+191,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+198,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+199,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+200,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+203,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+209,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+210,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+211,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+212,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+215,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+221,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+223,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+224,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"mosi_data_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"miso_data_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+296,0,"MISO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"MOSI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"SCLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"SS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"START_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+308,0,"HOLD_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+309,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+299,0,"HOLD_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+226,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"clk_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+228,0,"hold_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+231,0,"sclk_posedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"sclk_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"lead_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"trail_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dut_m3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"master_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"master_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+50,0,"master_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"slave_tx_flat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"slave_rx_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"slave_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+233,0,"SCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"MOSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"MISO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"SS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"slave_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("g_slave[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+239,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+245,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+246,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+247,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+251,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+257,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+258,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+259,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+260,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+263,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+269,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+271,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+274,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+275,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+282,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+284,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"mosi_data_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"miso_data_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+297,0,"MISO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"MOSI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"SCLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"SS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+20,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"START_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+308,0,"HOLD_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+309,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+299,0,"HOLD_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"clk_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+288,0,"hold_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+289,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+291,0,"sclk_posedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"sclk_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"lead_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"trail_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_spi_top___024root__trace_init_top(Vtb_spi_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_spi_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_spi_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_spi_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_spi_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_spi_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_spi_top___024root__trace_register(Vtb_spi_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_spi_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_spi_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_spi_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_spi_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_spi_top___024root__trace_const_0_sub_0(Vtb_spi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_spi_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_const_0\n"); );
    // Init
    Vtb_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_top___024root*>(voidSelf);
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_spi_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_spi_top___024root__trace_const_0_sub_0(Vtb_spi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+298,(8U),32);
    bufp->fullIData(oldp+299,(4U),32);
    bufp->fullIData(oldp+300,(2U),32);
    bufp->fullIData(oldp+301,(0U),32);
    bufp->fullCData(oldp+302,(0U),2);
    bufp->fullCData(oldp+303,(1U),2);
    bufp->fullCData(oldp+304,(2U),2);
    bufp->fullCData(oldp+305,(0U),3);
    bufp->fullCData(oldp+306,(1U),3);
    bufp->fullCData(oldp+307,(2U),3);
    bufp->fullCData(oldp+308,(3U),3);
    bufp->fullCData(oldp+309,(4U),3);
    bufp->fullIData(oldp+310,(1U),32);
}

VL_ATTR_COLD void Vtb_spi_top___024root__trace_full_0_sub_0(Vtb_spi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_spi_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_full_0\n"); );
    // Init
    Vtb_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_top___024root*>(voidSelf);
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_spi_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_spi_top___024root__trace_full_0_sub_0(Vtb_spi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_spi_top__DOT__rst_n));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_spi_top__DOT__slave_tx_flat),32);
    bufp->fullCData(oldp+3,((0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat)),8);
    bufp->fullCData(oldp+4,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                      >> 8U))),8);
    bufp->fullCData(oldp+5,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                      >> 0x10U))),8);
    bufp->fullCData(oldp+6,((vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                             >> 0x18U)),8);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_spi_top__DOT__errors),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_spi_top__DOT__rep),32);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_spi_top__DOT__mtx_m0),8);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_spi_top__DOT__sel_m0),2);
    bufp->fullBit(oldp+11,(vlSelfRef.tb_spi_top__DOT__start_m0));
    bufp->fullCData(oldp+12,(vlSelfRef.tb_spi_top__DOT__mtx_m1),8);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_spi_top__DOT__sel_m1),2);
    bufp->fullBit(oldp+14,(vlSelfRef.tb_spi_top__DOT__start_m1));
    bufp->fullCData(oldp+15,(vlSelfRef.tb_spi_top__DOT__mtx_m2),8);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_spi_top__DOT__sel_m2),2);
    bufp->fullBit(oldp+17,(vlSelfRef.tb_spi_top__DOT__start_m2));
    bufp->fullCData(oldp+18,(vlSelfRef.tb_spi_top__DOT__mtx_m3),8);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_spi_top__DOT__sel_m3),2);
    bufp->fullBit(oldp+20,(vlSelfRef.tb_spi_top__DOT__start_m3));
    bufp->fullIData(oldp+21,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i),32);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx),8);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val),8);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check),8);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i),32);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx),8);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val),8);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check),8);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i),32);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx),8);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val),8);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check),8);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i),32);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx),8);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val),8);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_spi_top__DOT__mrx_m0),8);
    bufp->fullBit(oldp+38,(vlSelfRef.tb_spi_top__DOT__done_m0));
    bufp->fullCData(oldp+39,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
    bufp->fullIData(oldp+40,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                             << 0x10U)) 
                              | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                  << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_spi_top__DOT__mrx_m1),8);
    bufp->fullBit(oldp+42,(vlSelfRef.tb_spi_top__DOT__done_m1));
    bufp->fullCData(oldp+43,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
    bufp->fullIData(oldp+44,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                             << 0x10U)) 
                              | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                  << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_spi_top__DOT__mrx_m2),8);
    bufp->fullBit(oldp+46,(vlSelfRef.tb_spi_top__DOT__done_m2));
    bufp->fullCData(oldp+47,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
    bufp->fullIData(oldp+48,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                             << 0x10U)) 
                              | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                  << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_spi_top__DOT__mrx_m3),8);
    bufp->fullBit(oldp+50,(vlSelfRef.tb_spi_top__DOT__done_m3));
    bufp->fullCData(oldp+51,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
    bufp->fullIData(oldp+52,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                             << 0x10U)) 
                              | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                  << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
    bufp->fullBit(oldp+53,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK));
    bufp->fullBit(oldp+54,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
    bufp->fullCData(oldp+55,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS),4);
    bufp->fullCData(oldp+56,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
    bufp->fullBit(oldp+57,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))));
    bufp->fullCData(oldp+58,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+59,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+60,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+63,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+64,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+65,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+66,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+67,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                                  >> 1U))));
    bufp->fullCData(oldp+70,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+71,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+72,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+73,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+74,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+75,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+76,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+77,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+78,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+79,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+80,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                                  >> 2U))));
    bufp->fullCData(oldp+82,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+83,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+84,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+85,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+86,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+87,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+88,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+89,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+90,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+91,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+92,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                                  >> 3U))));
    bufp->fullCData(oldp+94,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+95,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+96,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+97,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+98,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+99,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+100,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+101,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+102,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+103,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+104,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullCData(oldp+105,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state),3);
    bufp->fullCData(oldp+106,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt),4);
    bufp->fullCData(oldp+107,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt),2);
    bufp->fullCData(oldp+108,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt),3);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg),8);
    bufp->fullCData(oldp+110,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__rx_reg),8);
    bufp->fullBit(oldp+111,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK)) 
                             & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt)))));
    bufp->fullBit(oldp+112,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK))));
    bufp->fullBit(oldp+113,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK));
    bufp->fullBit(oldp+114,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
    bufp->fullCData(oldp+115,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS),4);
    bufp->fullCData(oldp+116,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                 << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                   << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
    bufp->fullBit(oldp+117,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))));
    bufp->fullCData(oldp+118,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+119,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+121,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+122,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+123,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+124,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+125,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+126,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+127,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+128,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                                   >> 1U))));
    bufp->fullCData(oldp+130,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+131,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+132,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+133,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+134,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+135,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+136,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+137,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+138,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+139,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+140,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                                   >> 2U))));
    bufp->fullCData(oldp+142,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+143,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+144,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+145,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+146,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+147,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+148,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+149,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+150,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+151,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+152,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+153,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                                   >> 3U))));
    bufp->fullCData(oldp+154,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+155,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+156,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+157,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+158,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+159,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+160,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+161,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+162,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+163,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+164,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullCData(oldp+165,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state),3);
    bufp->fullCData(oldp+166,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt),4);
    bufp->fullCData(oldp+167,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt),2);
    bufp->fullCData(oldp+168,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt),3);
    bufp->fullCData(oldp+169,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg),8);
    bufp->fullCData(oldp+170,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__rx_reg),8);
    bufp->fullBit(oldp+171,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK)) 
                             & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt)))));
    bufp->fullBit(oldp+172,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK))));
    bufp->fullBit(oldp+173,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK));
    bufp->fullBit(oldp+174,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
    bufp->fullCData(oldp+175,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS),4);
    bufp->fullCData(oldp+176,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                 << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                   << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
    bufp->fullBit(oldp+177,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))));
    bufp->fullCData(oldp+178,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+179,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+180,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+181,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+182,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+183,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+184,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+185,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+186,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+187,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+188,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+189,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                                   >> 1U))));
    bufp->fullCData(oldp+190,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+191,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+192,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+193,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+194,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+195,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+196,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+197,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+198,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+199,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+200,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+201,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                                   >> 2U))));
    bufp->fullCData(oldp+202,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+203,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+204,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+205,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+206,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+207,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+208,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+209,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+210,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+211,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+212,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+213,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                                   >> 3U))));
    bufp->fullCData(oldp+214,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+215,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+216,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+217,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+218,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+219,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+220,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+221,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+222,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+223,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+224,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullCData(oldp+225,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state),3);
    bufp->fullCData(oldp+226,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt),4);
    bufp->fullCData(oldp+227,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt),2);
    bufp->fullCData(oldp+228,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt),3);
    bufp->fullCData(oldp+229,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg),8);
    bufp->fullCData(oldp+230,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__rx_reg),8);
    bufp->fullBit(oldp+231,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK)) 
                             & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt)))));
    bufp->fullBit(oldp+232,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK))));
    bufp->fullBit(oldp+233,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK));
    bufp->fullBit(oldp+234,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
    bufp->fullCData(oldp+235,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS),4);
    bufp->fullCData(oldp+236,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                 << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                   << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
    bufp->fullBit(oldp+237,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))));
    bufp->fullCData(oldp+238,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+239,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+240,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+241,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+242,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+243,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+244,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+245,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+246,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+247,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+248,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+249,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                                   >> 1U))));
    bufp->fullCData(oldp+250,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+251,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+252,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+253,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+254,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+255,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+256,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+257,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+258,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+259,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+260,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+261,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                                   >> 2U))));
    bufp->fullCData(oldp+262,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+263,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+264,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+265,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+266,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+267,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+268,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+269,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+270,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+271,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+272,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+273,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                                   >> 3U))));
    bufp->fullCData(oldp+274,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+275,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+276,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+277,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+278,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+279,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+280,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+281,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+282,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+283,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+284,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullCData(oldp+285,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state),3);
    bufp->fullCData(oldp+286,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt),4);
    bufp->fullCData(oldp+287,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt),2);
    bufp->fullCData(oldp+288,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt),3);
    bufp->fullCData(oldp+289,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg),8);
    bufp->fullCData(oldp+290,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__rx_reg),8);
    bufp->fullBit(oldp+291,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK)) 
                             & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt)))));
    bufp->fullBit(oldp+292,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt)) 
                             & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK))));
    bufp->fullBit(oldp+293,(vlSelfRef.tb_spi_top__DOT__clk));
    bufp->fullBit(oldp+294,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                      << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                        << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m0)))));
    bufp->fullBit(oldp+295,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                      << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                        << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m1)))));
    bufp->fullBit(oldp+296,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                      << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                        << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m2)))));
    bufp->fullBit(oldp+297,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                      << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                        << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                   >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m3)))));
}

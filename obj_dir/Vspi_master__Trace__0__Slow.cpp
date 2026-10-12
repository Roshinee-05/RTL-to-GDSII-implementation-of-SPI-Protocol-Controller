// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_master__Syms.h"


VL_ATTR_COLD void Vspi_master___024root__trace_init_sub__TOP__0(Vspi_master___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_spi_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"slave_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"master_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"master_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"master_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"slave_tx_flat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"slave_rx_flat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"slave_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"expected_slave_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"slave_rx_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"master_tx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"master_rx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"master_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"slave_tx_flat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"slave_rx_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"slave_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+18,0,"SCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MOSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"MISO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"SS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"slave_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("g_slave[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+24,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+36,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+43,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+48,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_slave[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"SCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"SS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MOSI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"tx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"rx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+60,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"sclk_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"sclk_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"sclk_rising",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"sclk_falling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+67,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+68,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mosi_data_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"miso_data_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+78,0,"MISO",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MOSI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"SCLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"SS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"slave_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"START_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"TRANSFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"DONE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"clk_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+75,0,"sclk_posedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"sclk_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"lead_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"trail_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"shift_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_master___024root__trace_init_top(Vspi_master___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_master___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_master___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vspi_master___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_master___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_master___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_master___024root__trace_register(Vspi_master___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vspi_master___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vspi_master___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vspi_master___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vspi_master___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_master___024root__trace_const_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_master___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_const_0\n"); );
    // Init
    Vspi_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_master___024root*>(voidSelf);
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_master___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_master___024root__trace_const_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+79,(8U),32);
    bufp->fullIData(oldp+80,(4U),32);
    bufp->fullIData(oldp+81,(0U),32);
    bufp->fullCData(oldp+82,(0U),2);
    bufp->fullCData(oldp+83,(1U),2);
    bufp->fullCData(oldp+84,(2U),2);
    bufp->fullCData(oldp+85,(3U),2);
}

VL_ATTR_COLD void Vspi_master___024root__trace_full_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_master___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_full_0\n"); );
    // Init
    Vspi_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_master___024root*>(voidSelf);
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_master___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_master___024root__trace_full_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_spi_top__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_spi_top__DOT__start));
    bufp->fullCData(oldp+3,(vlSelfRef.tb_spi_top__DOT__slave_sel),2);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_spi_top__DOT__master_tx),8);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_spi_top__DOT__slave_tx_flat),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_spi_top__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_spi_top__DOT__errors),32);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_spi_top__DOT__expected_slave_tx),8);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_spi_top__DOT__slave_rx_check),8);
    bufp->fullCData(oldp+10,((0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat)),8);
    bufp->fullCData(oldp+11,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                       >> 8U))),8);
    bufp->fullCData(oldp+12,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+13,((vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                              >> 0x18U)),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_spi_top__DOT__master_rx),8);
    bufp->fullBit(oldp+15,(vlSelfRef.tb_spi_top__DOT__master_done));
    bufp->fullIData(oldp+16,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                             << 0x10U)) 
                              | (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                  << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
    bufp->fullCData(oldp+17,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
    bufp->fullBit(oldp+18,(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
    bufp->fullBit(oldp+19,(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
    bufp->fullCData(oldp+20,(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS),4);
    bufp->fullCData(oldp+21,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
    bufp->fullBit(oldp+22,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))));
    bufp->fullCData(oldp+23,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+24,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+28,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+29,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+30,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                                  >> 1U))));
    bufp->fullCData(oldp+35,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+36,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+37,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+40,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+41,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+42,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+44,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                                  >> 2U))));
    bufp->fullCData(oldp+47,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+48,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+51,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+52,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+53,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+54,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+56,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+57,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                                  >> 3U))));
    bufp->fullCData(oldp+59,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
    bufp->fullBit(oldp+60,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
    bufp->fullBit(oldp+63,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
    bufp->fullBit(oldp+64,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
    bufp->fullBit(oldp+65,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
    bufp->fullCData(oldp+66,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
    bufp->fullCData(oldp+67,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__state),2);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt),4);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt),2);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg),8);
    bufp->fullCData(oldp+74,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg),8);
    bufp->fullBit(oldp+75,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK)) 
                            & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)))));
    bufp->fullBit(oldp+76,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)) 
                            & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK))));
    bufp->fullBit(oldp+77,(vlSelfRef.tb_spi_top__DOT__clk));
    bufp->fullBit(oldp+78,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                     << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                       << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                  >> (IData)(vlSelfRef.tb_spi_top__DOT__slave_sel)))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_master__Syms.h"


void Vspi_master___024root__trace_chg_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_master___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_chg_0\n"); );
    // Init
    Vspi_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_master___024root*>(voidSelf);
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_master___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_master___024root__trace_chg_0_sub_0(Vspi_master___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_spi_top__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_spi_top__DOT__start));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_spi_top__DOT__slave_sel),2);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_spi_top__DOT__master_tx),8);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_spi_top__DOT__slave_tx_flat),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_spi_top__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_spi_top__DOT__errors),32);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_spi_top__DOT__expected_slave_tx),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_spi_top__DOT__slave_rx_check),8);
        bufp->chgCData(oldp+9,((0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat)),8);
        bufp->chgCData(oldp+10,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                          >> 8U))),8);
        bufp->chgCData(oldp+11,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+12,((vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                 >> 0x18U)),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+13,(vlSelfRef.tb_spi_top__DOT__master_rx),8);
        bufp->chgBit(oldp+14,(vlSelfRef.tb_spi_top__DOT__master_done));
        bufp->chgIData(oldp+15,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                   << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                                << 0x10U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                     << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
        bufp->chgCData(oldp+16,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                   << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                     << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
        bufp->chgBit(oldp+17,(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK));
        bufp->chgBit(oldp+18,(vlSelfRef.tb_spi_top__DOT__dut__DOT__MOSI));
        bufp->chgCData(oldp+19,(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS),4);
        bufp->chgCData(oldp+20,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                   << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                     << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS))));
        bufp->chgCData(oldp+22,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+23,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+26,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+27,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+28,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+29,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                                     >> 1U))));
        bufp->chgCData(oldp+34,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+35,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+39,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+40,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+41,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                                     >> 2U))));
        bufp->chgCData(oldp+46,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+47,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+51,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+52,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+53,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SS) 
                                     >> 3U))));
        bufp->chgCData(oldp+58,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+59,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+60,(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+62,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+63,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+64,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+65,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+66,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_spi_top__DOT__dut__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__state),2);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__bit_cnt),4);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt),2);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__tx_reg),8);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__rx_reg),8);
        bufp->chgBit(oldp+74,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK)) 
                               & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)))));
        bufp->chgBit(oldp+75,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__u_master__DOT__clk_cnt)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT__SCLK))));
    }
    bufp->chgBit(oldp+76,(vlSelfRef.tb_spi_top__DOT__clk));
    bufp->chgBit(oldp+77,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                    << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                      << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                 >> (IData)(vlSelfRef.tb_spi_top__DOT__slave_sel)))));
}

void Vspi_master___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root__trace_cleanup\n"); );
    // Init
    Vspi_master___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_master___024root*>(voidSelf);
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

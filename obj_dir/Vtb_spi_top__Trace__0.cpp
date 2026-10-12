// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_spi_top__Syms.h"


void Vtb_spi_top___024root__trace_chg_0_sub_0(Vtb_spi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_spi_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_chg_0\n"); );
    // Init
    Vtb_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_top___024root*>(voidSelf);
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_spi_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_spi_top___024root__trace_chg_0_sub_0(Vtb_spi_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_spi_top__DOT__rst_n));
        bufp->chgIData(oldp+1,(vlSelfRef.tb_spi_top__DOT__slave_tx_flat),32);
        bufp->chgCData(oldp+2,((0xffU & vlSelfRef.tb_spi_top__DOT__slave_tx_flat)),8);
        bufp->chgCData(oldp+3,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                         >> 8U))),8);
        bufp->chgCData(oldp+4,((0xffU & (vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                         >> 0x10U))),8);
        bufp->chgCData(oldp+5,((vlSelfRef.tb_spi_top__DOT__slave_tx_flat 
                                >> 0x18U)),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+6,(vlSelfRef.tb_spi_top__DOT__errors),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_spi_top__DOT__rep),32);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_spi_top__DOT__mtx_m0),8);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_spi_top__DOT__sel_m0),2);
        bufp->chgBit(oldp+10,(vlSelfRef.tb_spi_top__DOT__start_m0));
        bufp->chgCData(oldp+11,(vlSelfRef.tb_spi_top__DOT__mtx_m1),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_spi_top__DOT__sel_m1),2);
        bufp->chgBit(oldp+13,(vlSelfRef.tb_spi_top__DOT__start_m1));
        bufp->chgCData(oldp+14,(vlSelfRef.tb_spi_top__DOT__mtx_m2),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_spi_top__DOT__sel_m2),2);
        bufp->chgBit(oldp+16,(vlSelfRef.tb_spi_top__DOT__start_m2));
        bufp->chgCData(oldp+17,(vlSelfRef.tb_spi_top__DOT__mtx_m3),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_spi_top__DOT__sel_m3),2);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_spi_top__DOT__start_m3));
        bufp->chgIData(oldp+20,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__i),32);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__exp_tx),8);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__tx_val),8);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_spi_top__DOT__run_m0__Vstatic__rx_check),8);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__i),32);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__exp_tx),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__tx_val),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_spi_top__DOT__run_m1__Vstatic__rx_check),8);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__i),32);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__exp_tx),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__tx_val),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_spi_top__DOT__run_m2__Vstatic__rx_check),8);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__i),32);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__exp_tx),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__tx_val),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_spi_top__DOT__run_m3__Vstatic__rx_check),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+36,(vlSelfRef.tb_spi_top__DOT__mrx_m0),8);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_spi_top__DOT__done_m0));
        bufp->chgCData(oldp+38,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                   << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                     << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
        bufp->chgIData(oldp+39,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                   << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                                << 0x10U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                     << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_spi_top__DOT__mrx_m1),8);
        bufp->chgBit(oldp+41,(vlSelfRef.tb_spi_top__DOT__done_m1));
        bufp->chgCData(oldp+42,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                   << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                     << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
        bufp->chgIData(oldp+43,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                   << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                                << 0x10U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                     << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_spi_top__DOT__mrx_m2),8);
        bufp->chgBit(oldp+45,(vlSelfRef.tb_spi_top__DOT__done_m2));
        bufp->chgCData(oldp+46,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                   << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                     << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
        bufp->chgIData(oldp+47,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                   << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                                << 0x10U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                     << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_spi_top__DOT__mrx_m3),8);
        bufp->chgBit(oldp+49,(vlSelfRef.tb_spi_top__DOT__done_m3));
        bufp->chgCData(oldp+50,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done) 
                                   << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done) 
                                     << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done)))),4);
        bufp->chgIData(oldp+51,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data) 
                                   << 0x18U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data) 
                                                << 0x10U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data) 
                                     << 8U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data)))),32);
        bufp->chgBit(oldp+52,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK));
        bufp->chgBit(oldp+53,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__MOSI));
        bufp->chgCData(oldp+54,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS),4);
        bufp->chgCData(oldp+55,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                   << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                     << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
        bufp->chgBit(oldp+56,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS))));
        bufp->chgCData(oldp+57,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+58,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+60,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+62,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+63,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+64,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+65,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+66,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                                     >> 1U))));
        bufp->chgCData(oldp+69,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+70,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+71,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+72,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+73,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+74,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+75,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+76,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+77,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+78,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                                     >> 2U))));
        bufp->chgCData(oldp+81,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+82,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+83,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+84,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+85,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+86,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+87,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+88,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SS) 
                                     >> 3U))));
        bufp->chgCData(oldp+93,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+94,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+95,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+96,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+97,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+98,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+99,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                               & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+100,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+101,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+103,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__state),3);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__bit_cnt),4);
        bufp->chgCData(oldp+106,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt),2);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__hold_cnt),3);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__tx_reg),8);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__rx_reg),8);
        bufp->chgBit(oldp+110,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK)) 
                                & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt)))));
        bufp->chgBit(oldp+111,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__u_master__DOT__clk_cnt)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT__SCLK))));
        bufp->chgBit(oldp+112,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK));
        bufp->chgBit(oldp+113,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__MOSI));
        bufp->chgCData(oldp+114,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS),4);
        bufp->chgCData(oldp+115,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                    << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                      << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
        bufp->chgBit(oldp+116,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS))));
        bufp->chgCData(oldp+117,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+122,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+123,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+124,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+125,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+126,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+127,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+128,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                                      >> 1U))));
        bufp->chgCData(oldp+129,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+130,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+131,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+132,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+133,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+134,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+135,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+136,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+137,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+138,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                                      >> 2U))));
        bufp->chgCData(oldp+141,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+142,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+144,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+145,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+146,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+147,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+148,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+149,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+150,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+151,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+152,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SS) 
                                      >> 3U))));
        bufp->chgCData(oldp+153,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+154,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+155,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+156,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+157,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+158,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+159,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+160,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+161,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+162,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+163,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__state),3);
        bufp->chgCData(oldp+165,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__bit_cnt),4);
        bufp->chgCData(oldp+166,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt),2);
        bufp->chgCData(oldp+167,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__hold_cnt),3);
        bufp->chgCData(oldp+168,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__tx_reg),8);
        bufp->chgCData(oldp+169,(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__rx_reg),8);
        bufp->chgBit(oldp+170,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK)) 
                                & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt)))));
        bufp->chgBit(oldp+171,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__u_master__DOT__clk_cnt)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT__SCLK))));
        bufp->chgBit(oldp+172,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK));
        bufp->chgBit(oldp+173,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__MOSI));
        bufp->chgCData(oldp+174,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS),4);
        bufp->chgCData(oldp+175,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                    << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                      << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
        bufp->chgBit(oldp+176,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS))));
        bufp->chgCData(oldp+177,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+178,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+179,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+180,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+181,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+182,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+183,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+184,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+186,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+187,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+188,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                                      >> 1U))));
        bufp->chgCData(oldp+189,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+190,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+191,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+192,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+193,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+194,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+195,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+196,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+197,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+198,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+199,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                                      >> 2U))));
        bufp->chgCData(oldp+201,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+202,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+203,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+204,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+205,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+206,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+207,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+208,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+209,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+210,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+211,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SS) 
                                      >> 3U))));
        bufp->chgCData(oldp+213,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+214,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+215,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+216,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+217,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+218,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+219,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+220,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+221,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+222,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+223,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgCData(oldp+224,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__state),3);
        bufp->chgCData(oldp+225,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__bit_cnt),4);
        bufp->chgCData(oldp+226,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt),2);
        bufp->chgCData(oldp+227,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__hold_cnt),3);
        bufp->chgCData(oldp+228,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__tx_reg),8);
        bufp->chgCData(oldp+229,(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__rx_reg),8);
        bufp->chgBit(oldp+230,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK)) 
                                & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt)))));
        bufp->chgBit(oldp+231,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__u_master__DOT__clk_cnt)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT__SCLK))));
        bufp->chgBit(oldp+232,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK));
        bufp->chgBit(oldp+233,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__MOSI));
        bufp->chgCData(oldp+234,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS),4);
        bufp->chgCData(oldp+235,(((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                    << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                      << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso)))),4);
        bufp->chgBit(oldp+236,((1U & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS))));
        bufp->chgCData(oldp+237,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+238,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+239,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+240,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+241,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+242,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+243,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+244,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+245,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+246,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+247,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__0__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+248,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                                      >> 1U))));
        bufp->chgCData(oldp+249,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+250,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+251,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+252,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+253,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+254,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+255,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+256,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+257,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+258,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+259,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__1__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                                      >> 2U))));
        bufp->chgCData(oldp+261,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+262,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+263,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+264,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+265,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+266,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+267,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+268,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+269,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+270,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+271,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__2__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgBit(oldp+272,((1U & ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SS) 
                                      >> 3U))));
        bufp->chgCData(oldp+273,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__rx_data),8);
        bufp->chgBit(oldp+274,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__done));
        bufp->chgBit(oldp+275,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso));
        bufp->chgBit(oldp+276,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1));
        bufp->chgBit(oldp+277,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2));
        bufp->chgBit(oldp+278,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1))));
        bufp->chgBit(oldp+279,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d1)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__sclk_d2))));
        bufp->chgCData(oldp+280,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__state),2);
        bufp->chgCData(oldp+281,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__bit_cnt),3);
        bufp->chgCData(oldp+282,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__rx_reg),8);
        bufp->chgCData(oldp+283,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__g_slave__BRA__3__KET____DOT__u_slave__DOT__tx_reg),8);
        bufp->chgCData(oldp+284,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__state),3);
        bufp->chgCData(oldp+285,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__bit_cnt),4);
        bufp->chgCData(oldp+286,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt),2);
        bufp->chgCData(oldp+287,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__hold_cnt),3);
        bufp->chgCData(oldp+288,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__tx_reg),8);
        bufp->chgCData(oldp+289,(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__rx_reg),8);
        bufp->chgBit(oldp+290,(((~ (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK)) 
                                & (3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt)))));
        bufp->chgBit(oldp+291,(((3U == (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__u_master__DOT__clk_cnt)) 
                                & (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT__SCLK))));
    }
    bufp->chgBit(oldp+292,(vlSelfRef.tb_spi_top__DOT__clk));
    bufp->chgBit(oldp+293,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                     << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                       << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m0__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                  >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m0)))));
    bufp->chgBit(oldp+294,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                     << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                       << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m1__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                  >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m1)))));
    bufp->chgBit(oldp+295,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                     << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                       << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m2__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                  >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m2)))));
    bufp->chgBit(oldp+296,((1U & (((((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__3__KET____DOT__u_slave__miso) 
                                     << 3U) | ((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__2__KET____DOT__u_slave__miso) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__1__KET____DOT__u_slave__miso) 
                                       << 1U) | (IData)(vlSelfRef.tb_spi_top__DOT__dut_m3__DOT____Vcellout__g_slave__BRA__0__KET____DOT__u_slave__miso))) 
                                  >> (IData)(vlSelfRef.tb_spi_top__DOT__sel_m3)))));
}

void Vtb_spi_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_spi_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_spi_top___024root*>(voidSelf);
    Vtb_spi_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

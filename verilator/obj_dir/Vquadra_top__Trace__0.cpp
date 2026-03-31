// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__a_w),25);
        bufp->chgIData(oldp+1,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_w),19);
        bufp->chgSData(oldp+2,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_w),13);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
        bufp->chgIData(oldp+6,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__y_r),24);
        bufp->chgIData(oldp+7,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1),17);
        bufp->chgIData(oldp+8,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1),24);
        bufp->chgIData(oldp+9,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__a_r1),25);
        bufp->chgIData(oldp+10,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1),19);
        bufp->chgSData(oldp+11,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1),13);
        bufp->chgIData(oldp+12,((0x3fffffffU & (IData)(
                                                       (0x0000000fffffffffULL 
                                                        & VL_SHIFTRS_QQI(36,36,32, 
                                                                         (0x0000000fffffffffULL 
                                                                          & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)) 
                                                                             * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1)))), 6U))))),30);
        bufp->chgIData(oldp+13,((0x1fffffffU & (IData)(
                                                       (0x0000001fffffffffULL 
                                                        & VL_SHIFTRS_QQI(37,37,32, 
                                                                         (0x0000001fffffffffULL 
                                                                          & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1)) 
                                                                             * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1)))), 8U))))),29);
        bufp->chgQData(oldp+14,((0x0000000fffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)) 
                                    * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1))))),36);
        bufp->chgQData(oldp+16,((0x0000000fffffffffULL 
                                 & VL_SHIFTRS_QQI(36,36,32, 
                                                  (0x0000000fffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)) 
                                                      * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1)))), 6U))),36);
        bufp->chgQData(oldp+18,((0x0000001fffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1)) 
                                    * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1))))),37);
        bufp->chgQData(oldp+20,((0x0000001fffffffffULL 
                                 & VL_SHIFTRS_QQI(37,37,32, 
                                                  (0x0000001fffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1)) 
                                                      * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1)))), 8U))),37);
        bufp->chgIData(oldp+22,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2),30);
        bufp->chgIData(oldp+23,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2),30);
        bufp->chgIData(oldp+24,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2),29);
        bufp->chgIData(oldp+25,((0x1fffffffU & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                + (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                   + vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2)))),29);
        bufp->chgIData(oldp+26,((0x1fffffffU & vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2)),29);
        bufp->chgIData(oldp+27,((0x1fffffffU & vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2)),29);
    }
    bufp->chgBit(oldp+28,(vlSelfRef.clk));
    bufp->chgBit(oldp+29,(vlSelfRef.rst_b));
    bufp->chgIData(oldp+30,(vlSelfRef.x),24);
    bufp->chgBit(oldp+31,(vlSelfRef.x_dv));
    bufp->chgIData(oldp+32,(vlSelfRef.y),24);
    bufp->chgBit(oldp+33,(vlSelfRef.y_dv));
    bufp->chgCData(oldp+34,((0x0000007fU & (vlSelfRef.x 
                                            >> 0x00000011U))),7);
    bufp->chgIData(oldp+35,((0x0001ffffU & vlSelfRef.x)),17);
    bufp->chgIData(oldp+36,((0x00ffffffU & (IData)(
                                                   (0x0000000000ffffffULL 
                                                    & (((QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.x))) 
                                                        * (QData)((IData)(
                                                                          (0x0001ffffU 
                                                                           & vlSelfRef.x)))) 
                                                       >> 0x0000000aU))))),24);
    bufp->chgQData(oldp+37,((0x00000003ffffffffULL 
                             & ((QData)((IData)((0x0001ffffU 
                                                 & vlSelfRef.x))) 
                                * (QData)((IData)((0x0001ffffU 
                                                   & vlSelfRef.x)))))),34);
    bufp->chgQData(oldp+39,(VL_SHIFTR_QQI(34,34,32, 
                                          (0x00000003ffffffffULL 
                                           & ((QData)((IData)(
                                                              (0x0001ffffU 
                                                               & vlSelfRef.x))) 
                                              * (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & vlSelfRef.x))))), 0x0000000aU)),34);
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

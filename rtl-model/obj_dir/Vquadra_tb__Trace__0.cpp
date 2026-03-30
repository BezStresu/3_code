// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vquadra_tb__Syms.h"


void Vquadra_tb___024root__trace_chg_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vquadra_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_chg_0\n"); );
    // Body
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vquadra_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_tb___024root__trace_chg_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_chg_0_sub_0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_tb__DOT__x),24);
        bufp->chgBit(oldp+1,(vlSelfRef.quadra_tb__DOT__x_dv));
        bufp->chgCData(oldp+2,((0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                               >> 0x00000011U))),7);
        bufp->chgIData(oldp+3,((0x0001ffffU & vlSelfRef.quadra_tb__DOT__x)),17);
        bufp->chgIData(oldp+4,((0x00ffffffU & (IData)(
                                                      (0x0000000000ffffffULL 
                                                       & (((QData)((IData)(
                                                                           (0x0001ffffU 
                                                                            & vlSelfRef.quadra_tb__DOT__x))) 
                                                           * (QData)((IData)(
                                                                             (0x0001ffffU 
                                                                              & vlSelfRef.quadra_tb__DOT__x)))) 
                                                          >> 0x0000000aU))))),24);
        bufp->chgQData(oldp+5,((0x00000003ffffffffULL 
                                & ((QData)((IData)(
                                                   (0x0001ffffU 
                                                    & vlSelfRef.quadra_tb__DOT__x))) 
                                   * (QData)((IData)(
                                                     (0x0001ffffU 
                                                      & vlSelfRef.quadra_tb__DOT__x)))))),34);
        bufp->chgQData(oldp+7,(VL_SHIFTR_QQI(34,34,32, 
                                             (0x00000003ffffffffULL 
                                              & ((QData)((IData)(
                                                                 (0x0001ffffU 
                                                                  & vlSelfRef.quadra_tb__DOT__x))) 
                                                 * (QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & vlSelfRef.quadra_tb__DOT__x))))), 0x0000000aU)),34);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+9,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r),24);
        bufp->chgBit(oldp+10,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p2));
        bufp->chgBit(oldp+11,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p0));
        bufp->chgBit(oldp+12,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p1));
        bufp->chgIData(oldp+13,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1),17);
        bufp->chgIData(oldp+14,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1),24);
        bufp->chgIData(oldp+15,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1),25);
        bufp->chgIData(oldp+16,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1),19);
        bufp->chgSData(oldp+17,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1),13);
        bufp->chgIData(oldp+18,(VL_SHIFTR_III(30,30,32, 
                                              (0x3fffffffU 
                                               & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 
                                                  * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1)), 6U)),30);
        bufp->chgIData(oldp+19,(VL_SHIFTR_III(29,29,32, 
                                              (0x1fffffffU 
                                               & ((IData)(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1) 
                                                  * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1)), 8U)),29);
        bufp->chgIData(oldp+20,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2),30);
        bufp->chgIData(oldp+21,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2),30);
        bufp->chgIData(oldp+22,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2),29);
        bufp->chgIData(oldp+23,((0x1fffffffU & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                                                + (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 
                                                   + vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2)))),29);
        __Vtemp_2[0U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001dU))))))) 
                          << 0x0000001eU) | vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2);
        __Vtemp_2[1U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001dU))))))) 
                          >> 2U) | ((IData)(((0x07ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                                                                       >> 0x0000001dU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001eU));
        __Vtemp_2[2U] = ((IData)(((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001dU)))))) 
                                  >> 0x00000020U)) 
                         >> 2U);
        __Vtemp_3[0U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001dU))))))) 
                          << 0x0000001eU) | vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2);
        __Vtemp_3[1U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001dU))))))) 
                          >> 2U) | ((IData)(((0x07ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 
                                                                       >> 0x0000001dU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001eU));
        __Vtemp_3[2U] = ((IData)(((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001dU)))))) 
                                  >> 0x00000020U)) 
                         >> 2U);
        __Vtemp_4[0U] = (((IData)((0x0fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001cU))))))) 
                          << 0x0000001dU) | vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2);
        __Vtemp_4[1U] = (((IData)((0x0fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001cU))))))) 
                          >> 3U) | ((IData)(((0x0fffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
                                                                       >> 0x0000001cU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001dU));
        __Vtemp_4[2U] = ((IData)(((0x0fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001cU)))))) 
                                  >> 0x00000020U)) 
                         >> 3U);
        VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
        VL_ADD_W(3, __Vtemp_6, __Vtemp_2, __Vtemp_5);
        __Vtemp_7[0U] = __Vtemp_6[0U];
        __Vtemp_7[1U] = __Vtemp_6[1U];
        __Vtemp_7[2U] = (0x01ffffffU & __Vtemp_6[2U]);
        bufp->chgWData(oldp+24,(__Vtemp_7),89);
    }
    bufp->chgBit(oldp+27,(vlSelfRef.quadra_tb__DOT__clk));
    bufp->chgBit(oldp+28,(vlSelfRef.quadra_tb__DOT__rst_b));
    bufp->chgIData(oldp+29,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w),25);
    bufp->chgIData(oldp+30,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w),19);
    bufp->chgSData(oldp+31,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w),13);
}

void Vquadra_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_cleanup\n"); );
    // Body
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

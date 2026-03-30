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
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
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
        bufp->chgIData(oldp+12,(VL_SHIFTR_III(30,30,32, 
                                              (0x3fffffffU 
                                               & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1 
                                                  * vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1)), 6U)),30);
        bufp->chgIData(oldp+13,(VL_SHIFTR_III(29,29,32, 
                                              (0x1fffffffU 
                                               & ((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1) 
                                                  * vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1)), 8U)),29);
        bufp->chgIData(oldp+14,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2),30);
        bufp->chgIData(oldp+15,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2),30);
        bufp->chgIData(oldp+16,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2),29);
        bufp->chgIData(oldp+17,((0x1fffffffU & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                + (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                   + vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2)))),29);
        __Vtemp_2[0U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001dU))))))) 
                          << 0x0000001eU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2);
        __Vtemp_2[1U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001dU))))))) 
                          >> 2U) | ((IData)(((0x07ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                                       >> 0x0000001dU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001eU));
        __Vtemp_2[2U] = ((IData)(((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001dU)))))) 
                                  >> 0x00000020U)) 
                         >> 2U);
        __Vtemp_3[0U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001dU))))))) 
                          << 0x0000001eU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2);
        __Vtemp_3[1U] = (((IData)((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001dU))))))) 
                          >> 2U) | ((IData)(((0x07ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                                       >> 0x0000001dU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001eU));
        __Vtemp_3[2U] = ((IData)(((0x07ffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001dU)))))) 
                                  >> 0x00000020U)) 
                         >> 2U);
        __Vtemp_4[0U] = (((IData)((0x0fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001cU))))))) 
                          << 0x0000001dU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2);
        __Vtemp_4[1U] = (((IData)((0x0fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001cU))))))) 
                          >> 3U) | ((IData)(((0x0fffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                                       >> 0x0000001cU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001dU));
        __Vtemp_4[2U] = ((IData)(((0x0fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001cU)))))) 
                                  >> 0x00000020U)) 
                         >> 3U);
        VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
        VL_ADD_W(3, __Vtemp_6, __Vtemp_2, __Vtemp_5);
        __Vtemp_7[0U] = __Vtemp_6[0U];
        __Vtemp_7[1U] = __Vtemp_6[1U];
        __Vtemp_7[2U] = (0x01ffffffU & __Vtemp_6[2U]);
        bufp->chgWData(oldp+18,(__Vtemp_7),89);
    }
    bufp->chgBit(oldp+21,(vlSelfRef.clk));
    bufp->chgBit(oldp+22,(vlSelfRef.rst_b));
    bufp->chgIData(oldp+23,(vlSelfRef.x),24);
    bufp->chgBit(oldp+24,(vlSelfRef.x_dv));
    bufp->chgIData(oldp+25,(vlSelfRef.y),24);
    bufp->chgBit(oldp+26,(vlSelfRef.y_dv));
    bufp->chgCData(oldp+27,((0x0000007fU & (vlSelfRef.x 
                                            >> 0x00000011U))),7);
    bufp->chgIData(oldp+28,((0x0001ffffU & vlSelfRef.x)),17);
    bufp->chgIData(oldp+29,((0x00ffffffU & (IData)(
                                                   (0x0000000000ffffffULL 
                                                    & (((QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.x))) 
                                                        * (QData)((IData)(
                                                                          (0x0001ffffU 
                                                                           & vlSelfRef.x)))) 
                                                       >> 0x0000000aU))))),24);
    bufp->chgQData(oldp+30,((0x00000003ffffffffULL 
                             & ((QData)((IData)((0x0001ffffU 
                                                 & vlSelfRef.x))) 
                                * (QData)((IData)((0x0001ffffU 
                                                   & vlSelfRef.x)))))),34);
    bufp->chgQData(oldp+32,(VL_SHIFTR_QQI(34,34,32, 
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

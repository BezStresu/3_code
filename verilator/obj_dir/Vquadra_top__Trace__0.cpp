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
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__a_w),32);
        bufp->chgIData(oldp+1,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_w),32);
        bufp->chgIData(oldp+2,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_w),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
        bufp->chgIData(oldp+6,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__y_r),24);
        bufp->chgIData(oldp+7,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1),17);
        bufp->chgIData(oldp+8,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1),24);
        bufp->chgIData(oldp+9,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__a_r1),32);
        bufp->chgIData(oldp+10,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1),32);
        bufp->chgIData(oldp+11,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1),32);
        bufp->chgIData(oldp+12,((0x07ffffffU & (IData)(
                                                       (0x0000000007ffffffULL 
                                                        & (VL_MULS_QQQ(48, 
                                                                       (0x0000ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(48,32, vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)), 
                                                                       (0x0000ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(48,17, vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1))) 
                                                           >> 0x00000015U))))),31);
        bufp->chgQData(oldp+13,((0x0000ffffffffffffULL 
                                 & VL_MULS_QQQ(48, 
                                               (0x0000ffffffffffffULL 
                                                & VL_EXTENDS_QI(48,32, vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)), 
                                               (0x0000ffffffffffffULL 
                                                & VL_EXTENDS_QI(48,17, vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1))))),48);
        bufp->chgIData(oldp+15,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2),31);
        bufp->chgIData(oldp+16,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2),31);
        bufp->chgIData(oldp+17,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2),31);
        __Vtemp_2[0U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001eU))))))) 
                          << 0x0000001fU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2);
        __Vtemp_2[1U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001eU))))))) 
                          >> 1U) | ((IData)(((0x3fffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                                       >> 0x0000001eU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001fU));
        __Vtemp_2[2U] = ((IData)(((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001eU)))))) 
                                  >> 0x00000020U)) 
                         >> 1U);
        __Vtemp_3[0U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001eU))))))) 
                          << 0x0000001fU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2);
        __Vtemp_3[1U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001eU))))))) 
                          >> 1U) | ((IData)(((0x3fffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                                       >> 0x0000001eU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001fU));
        __Vtemp_3[2U] = ((IData)(((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                            >> 0x0000001eU)))))) 
                                  >> 0x00000020U)) 
                         >> 1U);
        __Vtemp_4[0U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001eU))))))) 
                          << 0x0000001fU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2);
        __Vtemp_4[1U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001eU))))))) 
                          >> 1U) | ((IData)(((0x3fffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                                       >> 0x0000001eU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001fU));
        __Vtemp_4[2U] = ((IData)(((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                            >> 0x0000001eU)))))) 
                                  >> 0x00000020U)) 
                         >> 1U);
        VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
        VL_ADD_W(3, __Vtemp_6, __Vtemp_2, __Vtemp_5);
        bufp->chgIData(oldp+18,((0x1fffffffU & (__Vtemp_6[0U] 
                                                >> 1U))),29);
        __Vtemp_9[0U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001eU))))))) 
                          << 0x0000001fU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2);
        __Vtemp_9[1U] = (((IData)((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001eU))))))) 
                          >> 1U) | ((IData)(((0x3fffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                                       >> 0x0000001eU)))))) 
                                             >> 0x00000020U)) 
                                    << 0x0000001fU));
        __Vtemp_9[2U] = ((IData)(((0x3fffffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                                            >> 0x0000001eU)))))) 
                                  >> 0x00000020U)) 
                         >> 1U);
        __Vtemp_10[0U] = (((IData)((0x3fffffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                             >> 0x0000001eU))))))) 
                           << 0x0000001fU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2);
        __Vtemp_10[1U] = (((IData)((0x3fffffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                             >> 0x0000001eU))))))) 
                           >> 1U) | ((IData)(((0x3fffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                                        >> 0x0000001eU)))))) 
                                              >> 0x00000020U)) 
                                     << 0x0000001fU));
        __Vtemp_10[2U] = ((IData)(((0x3fffffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                             >> 0x0000001eU)))))) 
                                   >> 0x00000020U)) 
                          >> 1U);
        __Vtemp_11[0U] = (((IData)((0x3fffffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                             >> 0x0000001eU))))))) 
                           << 0x0000001fU) | vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2);
        __Vtemp_11[1U] = (((IData)((0x3fffffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                             >> 0x0000001eU))))))) 
                           >> 1U) | ((IData)(((0x3fffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                                        >> 0x0000001eU)))))) 
                                              >> 0x00000020U)) 
                                     << 0x0000001fU));
        __Vtemp_11[2U] = ((IData)(((0x3fffffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2 
                                                             >> 0x0000001eU)))))) 
                                   >> 0x00000020U)) 
                          >> 1U);
        VL_ADD_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        VL_ADD_W(3, __Vtemp_13, __Vtemp_9, __Vtemp_12);
        __Vtemp_14[0U] = __Vtemp_13[0U];
        __Vtemp_14[1U] = __Vtemp_13[1U];
        __Vtemp_14[2U] = (0x1fffffffU & __Vtemp_13[2U]);
        bufp->chgWData(oldp+19,(__Vtemp_14),93);
    }
    bufp->chgBit(oldp+22,(vlSelfRef.clk));
    bufp->chgBit(oldp+23,(vlSelfRef.rst_b));
    bufp->chgIData(oldp+24,(vlSelfRef.x),24);
    bufp->chgBit(oldp+25,(vlSelfRef.x_dv));
    bufp->chgIData(oldp+26,(vlSelfRef.y),24);
    bufp->chgBit(oldp+27,(vlSelfRef.y_dv));
    bufp->chgCData(oldp+28,((0x0000007fU & (vlSelfRef.x 
                                            >> 0x00000011U))),7);
    bufp->chgIData(oldp+29,((0x0001ffffU & vlSelfRef.x)),17);
    bufp->chgIData(oldp+30,((0x00ffffffU & (IData)(
                                                   (0x0000000000ffffffULL 
                                                    & (((QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.x))) 
                                                        * (QData)((IData)(
                                                                          (0x0001ffffU 
                                                                           & vlSelfRef.x)))) 
                                                       >> 0x0000000aU))))),24);
    bufp->chgQData(oldp+31,((0x00000003ffffffffULL 
                             & ((QData)((IData)((0x0001ffffU 
                                                 & vlSelfRef.x))) 
                                * (QData)((IData)((0x0001ffffU 
                                                   & vlSelfRef.x)))))),34);
    bufp->chgQData(oldp+33,(VL_SHIFTR_QQI(34,34,32, 
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

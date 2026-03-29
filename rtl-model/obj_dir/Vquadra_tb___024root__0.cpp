// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"

VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(Vquadra_tb___024root* vlSelf);
VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(Vquadra_tb___024root* vlSelf);
VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(Vquadra_tb___024root* vlSelf);

void Vquadra_tb___024root___eval_initial(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.quadra_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                             nullptr, 
                                             "quadra_tb.sv", 
                                             55);
        vlSelfRef.quadra_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.quadra_tb__DOT__clk)));
    }
    co_return;
}

void Vquadra_tb___024root____VbeforeTrig_h1497f015__0(Vquadra_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ quadra_tb__DOT__reset_init__DOT__unnamedblk1_1__DOT____Vrepeat0;
    quadra_tb__DOT__reset_init__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ quadra_tb__DOT__reset_init__DOT__unnamedblk1_2__DOT____Vrepeat1;
    quadra_tb__DOT__reset_init__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.quadra_tb__DOT__rst_b = 1U;
    quadra_tb__DOT__reset_init__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, quadra_tb__DOT__reset_init__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vquadra_tb___024root____VbeforeTrig_h1497f015__0(vlSelf, 
                                                         "@(posedge quadra_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1497f015__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge quadra_tb.clk)", 
                                                             "quadra_tb.sv", 
                                                             61);
        quadra_tb__DOT__reset_init__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (quadra_tb__DOT__reset_init__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.quadra_tb__DOT__rst_b = 0U;
    quadra_tb__DOT__reset_init__DOT__unnamedblk1_2__DOT____Vrepeat1 = 1U;
    while (VL_LTS_III(32, 0U, quadra_tb__DOT__reset_init__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vquadra_tb___024root____VbeforeTrig_h1497f015__0(vlSelf, 
                                                         "@(posedge quadra_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1497f015__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge quadra_tb.clk)", 
                                                             "quadra_tb.sv", 
                                                             63);
        quadra_tb__DOT__reset_init__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (quadra_tb__DOT__reset_init__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.quadra_tb__DOT__rst_b = 1U;
    co_return;
}

VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ quadra_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    quadra_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ quadra_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    quadra_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ quadra_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    quadra_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ quadra_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    quadra_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    // Body
    VL_WRITEF_NX("Started quadra_tb ...\n",0);
    vlSelfRef.quadra_tb__DOT__x = 0U;
    quadra_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, quadra_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vquadra_tb___024root____VbeforeTrig_h1497f015__0(vlSelf, 
                                                         "@(posedge quadra_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1497f015__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge quadra_tb.clk)", 
                                                             "quadra_tb.sv", 
                                                             76);
        quadra_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (quadra_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.quadra_tb__DOT__x = 0x007fffffU;
    VL_WRITEF_NX("x = 0x%08h\n",1, '#',24,vlSelfRef.quadra_tb__DOT__x);
    quadra_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 1U;
    while (VL_LTS_III(32, 0U, quadra_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vquadra_tb___024root____VbeforeTrig_h1497f015__0(vlSelf, 
                                                         "@(posedge quadra_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1497f015__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge quadra_tb.clk)", 
                                                             "quadra_tb.sv", 
                                                             83);
        quadra_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (quadra_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.quadra_tb__DOT__x = 0U;
    quadra_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 2U;
    while (VL_LTS_III(32, 0U, quadra_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vquadra_tb___024root____VbeforeTrig_h1497f015__0(vlSelf, 
                                                         "@(posedge quadra_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1497f015__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge quadra_tb.clk)", 
                                                             "quadra_tb.sv", 
                                                             88);
        quadra_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (quadra_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_WRITEF_NX("y = 0x%011h\n",1, '~',24,vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r);
    quadra_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, quadra_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vquadra_tb___024root____VbeforeTrig_h1497f015__0(vlSelf, 
                                                         "@(posedge quadra_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1497f015__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge quadra_tb.clk)", 
                                                             "quadra_tb.sv", 
                                                             92);
        quadra_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (quadra_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Simulation finished.\n",0);
    VL_FINISH_MT("quadra_tb.sv", 96, "");
    co_return;
}

void Vquadra_tb___024root___eval_triggers_vec__act(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_triggers_vec__act\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.quadra_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 
        = vlSelfRef.quadra_tb__DOT__clk;
}

bool Vquadra_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<IData/*24:0*/, 128> Vquadra_tb__ConstPool__TABLE_hfa45c7c8_0;
extern const VlUnpacked<IData/*18:0*/, 128> Vquadra_tb__ConstPool__TABLE_ha6950005_0;
extern const VlUnpacked<SData/*12:0*/, 128> Vquadra_tb__ConstPool__TABLE_h0d8e099d_0;

void Vquadra_tb___024root___act_sequent__TOP__0(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___act_sequent__TOP__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx1 = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                   >> 0x00000011U));
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w 
        = Vquadra_tb__ConstPool__TABLE_hfa45c7c8_0[__Vtableidx1];
    __Vtableidx2 = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                   >> 0x00000011U));
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w 
        = Vquadra_tb__ConstPool__TABLE_ha6950005_0[__Vtableidx2];
    __Vtableidx3 = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                   >> 0x00000011U));
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w 
        = Vquadra_tb__ConstPool__TABLE_h0d8e099d_0[__Vtableidx3];
}

void Vquadra_tb___024root___eval_act(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_act\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vinline__act_sequent__TOP__0___Vtableidx1;
    __Vinline__act_sequent__TOP__0___Vtableidx1 = 0;
    CData/*6:0*/ __Vinline__act_sequent__TOP__0___Vtableidx2;
    __Vinline__act_sequent__TOP__0___Vtableidx2 = 0;
    CData/*6:0*/ __Vinline__act_sequent__TOP__0___Vtableidx3;
    __Vinline__act_sequent__TOP__0___Vtableidx3 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        __Vinline__act_sequent__TOP__0___Vtableidx1 
            = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                              >> 0x00000011U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w 
            = Vquadra_tb__ConstPool__TABLE_hfa45c7c8_0
            [__Vinline__act_sequent__TOP__0___Vtableidx1];
        __Vinline__act_sequent__TOP__0___Vtableidx2 
            = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                              >> 0x00000011U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w 
            = Vquadra_tb__ConstPool__TABLE_ha6950005_0
            [__Vinline__act_sequent__TOP__0___Vtableidx2];
        __Vinline__act_sequent__TOP__0___Vtableidx3 
            = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                              >> 0x00000011U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w 
            = Vquadra_tb__ConstPool__TABLE_h0d8e099d_0
            [__Vinline__act_sequent__TOP__0___Vtableidx3];
    }
}

void Vquadra_tb___024root___nba_sequent__TOP__0(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___nba_sequent__TOP__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if (vlSelfRef.quadra_tb__DOT__rst_b) {
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r 
            = (0x00ffffffU & ((vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                               + (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
                                  + vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2)) 
                              >> 5U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
            = ((0x3e000000U & ((- (IData)((1U & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1 
                                                 >> 0x18U)))) 
                               << 0x00000019U)) | vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1);
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
            = VL_SHIFTR_III(29,29,32, (0x1fffffffU 
                                       & ((IData)(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1) 
                                          * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1)), 8U);
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 
            = VL_SHIFTR_III(30,30,32, (0x3fffffffU 
                                       & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 
                                          * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1)), 6U);
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1 
            = vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1 
            = (0x00ffffffU & (IData)((0x0000000000ffffffULL 
                                      & (((QData)((IData)(
                                                          (0x0001ffffU 
                                                           & vlSelfRef.quadra_tb__DOT__x))) 
                                          * (QData)((IData)(
                                                            (0x0001ffffU 
                                                             & vlSelfRef.quadra_tb__DOT__x)))) 
                                         >> 0x0000000aU))));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1 
            = vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1 
            = (0x0001ffffU & vlSelfRef.quadra_tb__DOT__x);
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 
            = vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w;
    } else {
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 = 0U;
    }
    __Vtableidx1 = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                   >> 0x00000011U));
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w 
        = Vquadra_tb__ConstPool__TABLE_hfa45c7c8_0[__Vtableidx1];
    __Vtableidx3 = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                   >> 0x00000011U));
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w 
        = Vquadra_tb__ConstPool__TABLE_h0d8e099d_0[__Vtableidx3];
    __Vtableidx2 = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                   >> 0x00000011U));
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w 
        = Vquadra_tb__ConstPool__TABLE_ha6950005_0[__Vtableidx2];
}

void Vquadra_tb___024root___eval_nba(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_nba\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vinline__nba_sequent__TOP__0___Vtableidx1;
    __Vinline__nba_sequent__TOP__0___Vtableidx1 = 0;
    CData/*6:0*/ __Vinline__nba_sequent__TOP__0___Vtableidx2;
    __Vinline__nba_sequent__TOP__0___Vtableidx2 = 0;
    CData/*6:0*/ __Vinline__nba_sequent__TOP__0___Vtableidx3;
    __Vinline__nba_sequent__TOP__0___Vtableidx3 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.quadra_tb__DOT__rst_b) {
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r 
                = (0x00ffffffU & ((vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                                   + (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
                                      + vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2)) 
                                  >> 5U));
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
                = ((0x3e000000U & ((- (IData)((1U & 
                                               (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1 
                                                >> 0x18U)))) 
                                   << 0x00000019U)) 
                   | vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1);
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 
                = VL_SHIFTR_III(29,29,32, (0x1fffffffU 
                                           & ((IData)(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1) 
                                              * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1)), 8U);
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 
                = VL_SHIFTR_III(30,30,32, (0x3fffffffU 
                                           & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 
                                              * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1)), 6U);
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1 
                = vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1 
                = (0x00ffffffU & (IData)((0x0000000000ffffffULL 
                                          & (((QData)((IData)(
                                                              (0x0001ffffU 
                                                               & vlSelfRef.quadra_tb__DOT__x))) 
                                              * (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & vlSelfRef.quadra_tb__DOT__x)))) 
                                             >> 0x0000000aU))));
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1 
                = vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1 
                = (0x0001ffffU & vlSelfRef.quadra_tb__DOT__x);
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 
                = vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w;
        } else {
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1 = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1 = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1 = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1 = 0U;
            vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 = 0U;
        }
        __Vinline__nba_sequent__TOP__0___Vtableidx1 
            = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                              >> 0x00000011U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w 
            = Vquadra_tb__ConstPool__TABLE_hfa45c7c8_0
            [__Vinline__nba_sequent__TOP__0___Vtableidx1];
        __Vinline__nba_sequent__TOP__0___Vtableidx3 
            = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                              >> 0x00000011U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w 
            = Vquadra_tb__ConstPool__TABLE_h0d8e099d_0
            [__Vinline__nba_sequent__TOP__0___Vtableidx3];
        __Vinline__nba_sequent__TOP__0___Vtableidx2 
            = (0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                              >> 0x00000011U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w 
            = Vquadra_tb__ConstPool__TABLE_ha6950005_0
            [__Vinline__nba_sequent__TOP__0___Vtableidx2];
    }
}

void Vquadra_tb___024root___timing_ready(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___timing_ready\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1497f015__0.ready("@(posedge quadra_tb.clk)");
    }
}

void Vquadra_tb___024root___timing_resume(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___timing_resume\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1497f015__0.moveToResumeQueue(
                                                          "@(posedge quadra_tb.clk)");
    vlSelfRef.__VtrigSched_h1497f015__0.resume("@(posedge quadra_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vquadra_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vquadra_tb___024root___eval_phase__act(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__act\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_tb___024root___eval_triggers_vec__act(vlSelf);
    Vquadra_tb___024root___timing_ready(vlSelf);
    Vquadra_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vquadra_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vquadra_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vquadra_tb___024root___timing_resume(vlSelf);
        Vquadra_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_tb___024root___eval_phase__inact(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__inact\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("quadra_tb.sv", 15, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vquadra_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vquadra_tb___024root___eval_phase__nba(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__nba\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vquadra_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vquadra_tb___024root___eval_nba(vlSelf);
        Vquadra_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vquadra_tb___024root___eval(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("quadra_tb.sv", 15, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("quadra_tb.sv", 15, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vquadra_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("quadra_tb.sv", 15, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vquadra_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vquadra_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vquadra_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vquadra_tb___024root____VbeforeTrig_h1497f015__0(Vquadra_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root____VbeforeTrig_h1497f015__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.quadra_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 
        = vlSelfRef.quadra_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1497f015__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1497f015__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1497f015__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1497f015__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1497f015__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1497f015__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vquadra_tb___024root___eval_debug_assertions(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_debug_assertions\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

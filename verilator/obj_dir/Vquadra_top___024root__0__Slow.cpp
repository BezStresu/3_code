// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"

VL_ATTR_COLD void Vquadra_top___024root___eval_static(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_static\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vquadra_top___024root___eval_initial(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_initial\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vquadra_top___024root___eval_final(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_final\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_settle(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_settle\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/jakub/Desktop/Interview/3_code/rtl-model/quadra_top.sv", 7, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vquadra_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vquadra_top___024root___eval_triggers_vec__stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_triggers_vec__stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vquadra_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vquadra_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_h6848d807_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_hdab9487c_0;
extern const VlUnpacked<IData/*31:0*/, 128> Vquadra_top__ConstPool__TABLE_h28aaa667_0;

VL_ATTR_COLD void Vquadra_top___024root___stl_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___stl_sequent__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.y = vlSelfRef.quadra_top__DOT__u_quadra__DOT__y_r;
    vlSelfRef.y_dv = vlSelfRef.quadra_top__DOT__dv_p2;
    __Vtableidx1 = (0x0000007fU & (vlSelfRef.x >> 0x00000011U));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__a_w = Vquadra_top__ConstPool__TABLE_h6848d807_0
        [__Vtableidx1];
    __Vtableidx2 = (0x0000007fU & (vlSelfRef.x >> 0x00000011U));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_w = Vquadra_top__ConstPool__TABLE_hdab9487c_0
        [__Vtableidx2];
    __Vtableidx3 = (0x0000007fU & (vlSelfRef.x >> 0x00000011U));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_w = Vquadra_top__ConstPool__TABLE_h28aaa667_0
        [__Vtableidx3];
}

VL_ATTR_COLD void Vquadra_top___024root____Vm_traceActivitySetAll(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vquadra_top___024root___stl_sequent__TOP__0(vlSelf);
        Vquadra_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vquadra_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vquadra_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vquadra_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vquadra_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_top___024root____Vm_traceActivitySetAll(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root____Vm_traceActivitySetAll\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vquadra_top___024root___ctor_var_reset(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ctor_var_reset\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10091972653836523217ull);
    vlSelf->x = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9409450202036847209ull);
    vlSelf->x_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14872696912213263142ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11123243248953317070ull);
    vlSelf->y_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8366897747037074999ull);
    vlSelf->quadra_top__DOT__dv_p0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14013508239310017797ull);
    vlSelf->quadra_top__DOT__dv_p1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2463099279522344007ull);
    vlSelf->quadra_top__DOT__dv_p2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16437965412510916100ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__a_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14194485501721848946ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__b_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2859290162103692595ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__c_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10336885679493165124ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__x2_r1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3796251309016075890ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__sq_r1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5149112548604447128ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__a_r1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10347574599120486499ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__b_r1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11029762900112748952ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__c_r1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1113753049983088583ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__t0_r2 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 16207151684909016306ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__t1_r2 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 13075303674767957824ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__t2_r2 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 10353970201461270968ull);
    vlSelf->quadra_top__DOT__u_quadra__DOT__y_r = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6558209587978201151ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

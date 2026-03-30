// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"

void Vquadra_tb___024root___timing_ready(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb___024root___eval_static(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_static\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 
        = vlSelfRef.quadra_tb__DOT__clk;
    Vquadra_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vquadra_tb___024root___eval_final(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_final\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_tb___024root___eval_phase__stl(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb___024root___eval_settle(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_settle\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("quadra_tb.sv", 15, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vquadra_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vquadra_tb___024root___eval_triggers_vec__stl(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_triggers_vec__stl\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vquadra_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vquadra_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___trigger_anySet__stl\n"); );
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

void Vquadra_tb___024root___act_sequent__TOP__0(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb___024root___eval_stl(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_stl\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vquadra_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vquadra_tb___024root___eval_phase__stl(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__stl\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vquadra_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vquadra_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vquadra_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge quadra_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_tb___024root___ctor_var_reset(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___ctor_var_reset\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->quadra_tb__DOT__x = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2611608215830661030ull);
    vlSelf->quadra_tb__DOT__x_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10211384044518978024ull);
    vlSelf->quadra_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7248331836960644861ull);
    vlSelf->quadra_tb__DOT__rst_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9843695353954341682ull);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8161698824242638231ull);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2491162604886522324ull);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10178363553968260960ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18321938982116021210ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 3418578509643989588ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17234099549616520939ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16183608337404565527ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16378762804615066361ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9758573048712497940ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 6201492734773750085ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8931331024625801053ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 5810466748664105378ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 8112512217296594272ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2 = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 5157254297774413888ull);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11861955195759971370ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

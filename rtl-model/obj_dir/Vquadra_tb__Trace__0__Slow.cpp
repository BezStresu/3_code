// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vquadra_tb__Syms.h"


VL_ATTR_COLD void Vquadra_tb___024root__trace_init_sub__TOP____024unit__0(Vquadra_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vquadra_tb___024root__trace_init_sub__TOP__0(Vquadra_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_init_sub__TOP__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$unit", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vquadra_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "quadra_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"x_dv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"y_dv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"rst_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"dv_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"dv_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"dv_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"y_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_quadra", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"x1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"x2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"sq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"a_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"b_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"c_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"x2_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"sq_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"a_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"b_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"c_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"t1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"t2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"t0_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"t1_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"t2_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"s_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_WIDE(tracep,c+24,0,"s_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 88,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_lut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_square", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"sq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_QUAD(tracep,c+5,0,"sq_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_QUAD(tracep,c+7,0,"sq_full_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_init_sub__TOP____024unit__0(Vquadra_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+32,0,"X_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"X_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"X_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"X1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"X1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"X1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"X2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"X2_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"X2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"X2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"A_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"A_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"A_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"B_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"B_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"B_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"C_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"C_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"C_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"Y_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"Y_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"Y_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"R_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"S_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"S_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"S_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"SQ_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"SQ_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"SQ_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"T0_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"T0_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"T0_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"T1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"T1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"T1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"T2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"T2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"T2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_init_top(Vquadra_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_init_top\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vquadra_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vquadra_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vquadra_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vquadra_tb___024root__trace_register(Vquadra_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_register\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vquadra_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vquadra_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vquadra_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vquadra_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_const_0\n"); );
    // Body
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vquadra_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_const_0_sub_0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+32,(1U),32);
    bufp->fullIData(oldp+33,(0x00000017U),32);
    bufp->fullIData(oldp+34,(0x00000018U),32);
    bufp->fullIData(oldp+35,(6U),32);
    bufp->fullIData(oldp+36,(7U),32);
    bufp->fullIData(oldp+37,(0U),32);
    bufp->fullIData(oldp+38,(0xfffffffaU),32);
    bufp->fullIData(oldp+39,(0x00000011U),32);
    bufp->fullIData(oldp+40,(3U),32);
    bufp->fullIData(oldp+41,(0x00000016U),32);
    bufp->fullIData(oldp+42,(0x00000019U),32);
    bufp->fullIData(oldp+43,(0x00000010U),32);
    bufp->fullIData(oldp+44,(0x00000013U),32);
    bufp->fullIData(oldp+45,(2U),32);
    bufp->fullIData(oldp+46,(0x0000000bU),32);
    bufp->fullIData(oldp+47,(0x0000000dU),32);
    bufp->fullIData(oldp+48,(4U),32);
    bufp->fullIData(oldp+49,(0x0000001bU),32);
    bufp->fullIData(oldp+50,(0x0000001dU),32);
    bufp->fullIData(oldp+51,(0x0000001eU),32);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_full_0\n"); );
    // Body
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vquadra_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_full_0_sub_0\n"); );
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.quadra_tb__DOT__x),24);
    bufp->fullBit(oldp+1,(vlSelfRef.quadra_tb__DOT__x_dv));
    bufp->fullCData(oldp+2,((0x0000007fU & (vlSelfRef.quadra_tb__DOT__x 
                                            >> 0x00000011U))),7);
    bufp->fullIData(oldp+3,((0x0001ffffU & vlSelfRef.quadra_tb__DOT__x)),17);
    bufp->fullIData(oldp+4,((0x00ffffffU & (IData)(
                                                   (0x0000000000ffffffULL 
                                                    & (((QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & vlSelfRef.quadra_tb__DOT__x))) 
                                                        * (QData)((IData)(
                                                                          (0x0001ffffU 
                                                                           & vlSelfRef.quadra_tb__DOT__x)))) 
                                                       >> 0x0000000aU))))),24);
    bufp->fullQData(oldp+5,((0x00000003ffffffffULL 
                             & ((QData)((IData)((0x0001ffffU 
                                                 & vlSelfRef.quadra_tb__DOT__x))) 
                                * (QData)((IData)((0x0001ffffU 
                                                   & vlSelfRef.quadra_tb__DOT__x)))))),34);
    bufp->fullQData(oldp+7,(VL_SHIFTR_QQI(34,34,32, 
                                          (0x00000003ffffffffULL 
                                           & ((QData)((IData)(
                                                              (0x0001ffffU 
                                                               & vlSelfRef.quadra_tb__DOT__x))) 
                                              * (QData)((IData)(
                                                                (0x0001ffffU 
                                                                 & vlSelfRef.quadra_tb__DOT__x))))), 0x0000000aU)),34);
    bufp->fullIData(oldp+9,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r),24);
    bufp->fullBit(oldp+10,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p2));
    bufp->fullBit(oldp+11,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p0));
    bufp->fullBit(oldp+12,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p1));
    bufp->fullIData(oldp+13,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1),17);
    bufp->fullIData(oldp+14,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1),24);
    bufp->fullIData(oldp+15,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1),25);
    bufp->fullIData(oldp+16,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1),19);
    bufp->fullSData(oldp+17,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1),13);
    bufp->fullIData(oldp+18,(VL_SHIFTR_III(30,30,32, 
                                           (0x3fffffffU 
                                            & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1 
                                               * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1)), 6U)),30);
    bufp->fullIData(oldp+19,(VL_SHIFTR_III(29,29,32, 
                                           (0x1fffffffU 
                                            & ((IData)(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1) 
                                               * vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1)), 8U)),29);
    bufp->fullIData(oldp+20,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2),30);
    bufp->fullIData(oldp+21,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2),30);
    bufp->fullIData(oldp+22,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2),29);
    bufp->fullIData(oldp+23,((0x1fffffffU & (vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2 
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
                              >> 0x00000020U)) >> 2U);
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
                              >> 0x00000020U)) >> 2U);
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
                              >> 0x00000020U)) >> 3U);
    VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ADD_W(3, __Vtemp_6, __Vtemp_2, __Vtemp_5);
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (0x01ffffffU & __Vtemp_6[2U]);
    bufp->fullWData(oldp+24,(__Vtemp_7),89);
    bufp->fullBit(oldp+27,(vlSelfRef.quadra_tb__DOT__clk));
    bufp->fullBit(oldp+28,(vlSelfRef.quadra_tb__DOT__rst_b));
    bufp->fullIData(oldp+29,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w),25);
    bufp->fullIData(oldp+30,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w),19);
    bufp->fullSData(oldp+31,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w),13);
}

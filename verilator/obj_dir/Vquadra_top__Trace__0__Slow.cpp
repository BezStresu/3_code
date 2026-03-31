// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vquadra_top___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "quadra_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"dv_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"dv_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"dv_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"y_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_quadra", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"x1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"x2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"sq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"b_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"c_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"x2_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"sq_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"a_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"b_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"c_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"t1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"t2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,0,"t1_w_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+16,0,"t1_w_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+18,0,"t2_w_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_QUAD(tracep,c+20,0,"t2_w_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"t0_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"t1_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"t2_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"s_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"y_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_lut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_square", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"sq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"sq_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_QUAD(tracep,c+37,0,"sq_full_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+39,0,"X_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"X_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"X_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"X1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"X1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"X1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"X2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"X2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"X2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"A_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"A_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"A_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"B_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"B_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"B_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"C_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"C_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"C_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"Y_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"Y_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"Y_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"R_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"S_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"S_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"S_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"SQ_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"SQ_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"SQ_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"T0_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"T0_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"T0_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"T1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"T1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"T1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"T2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"T2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"T2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_top(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_top\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vquadra_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vquadra_top___024root__trace_register(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_register\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vquadra_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vquadra_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vquadra_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vquadra_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vquadra_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+39,(1U),32);
    bufp->fullIData(oldp+40,(0x00000017U),32);
    bufp->fullIData(oldp+41,(0x00000018U),32);
    bufp->fullIData(oldp+42,(6U),32);
    bufp->fullIData(oldp+43,(7U),32);
    bufp->fullIData(oldp+44,(0U),32);
    bufp->fullIData(oldp+45,(0x00000011U),32);
    bufp->fullIData(oldp+46,(3U),32);
    bufp->fullIData(oldp+47,(0x00000016U),32);
    bufp->fullIData(oldp+48,(0x00000019U),32);
    bufp->fullIData(oldp+49,(0x00000010U),32);
    bufp->fullIData(oldp+50,(0x00000013U),32);
    bufp->fullIData(oldp+51,(2U),32);
    bufp->fullIData(oldp+52,(0x0000000bU),32);
    bufp->fullIData(oldp+53,(0x0000000dU),32);
    bufp->fullIData(oldp+54,(4U),32);
    bufp->fullIData(oldp+55,(0x0000001bU),32);
    bufp->fullIData(oldp+56,(0x0000001dU),32);
    bufp->fullIData(oldp+57,(0x0000001eU),32);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vquadra_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__a_w),25);
    bufp->fullIData(oldp+1,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_w),19);
    bufp->fullSData(oldp+2,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_w),13);
    bufp->fullBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
    bufp->fullBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
    bufp->fullBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
    bufp->fullIData(oldp+6,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__y_r),24);
    bufp->fullIData(oldp+7,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1),17);
    bufp->fullIData(oldp+8,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1),24);
    bufp->fullIData(oldp+9,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__a_r1),25);
    bufp->fullIData(oldp+10,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1),19);
    bufp->fullSData(oldp+11,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1),13);
    bufp->fullIData(oldp+12,((0x3fffffffU & (IData)(
                                                    (0x0000000fffffffffULL 
                                                     & VL_SHIFTRS_QQI(36,36,32, 
                                                                      (0x0000000fffffffffULL 
                                                                       & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)) 
                                                                          * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1)))), 6U))))),30);
    bufp->fullIData(oldp+13,((0x1fffffffU & (IData)(
                                                    (0x0000001fffffffffULL 
                                                     & VL_SHIFTRS_QQI(37,37,32, 
                                                                      (0x0000001fffffffffULL 
                                                                       & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1)) 
                                                                          * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1)))), 8U))))),29);
    bufp->fullQData(oldp+14,((0x0000000fffffffffULL 
                              & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)) 
                                 * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1))))),36);
    bufp->fullQData(oldp+16,((0x0000000fffffffffULL 
                              & VL_SHIFTRS_QQI(36,36,32, 
                                               (0x0000000fffffffffULL 
                                                & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b_r1)) 
                                                   * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x2_r1)))), 6U))),36);
    bufp->fullQData(oldp+18,((0x0000001fffffffffULL 
                              & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1)) 
                                 * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1))))),37);
    bufp->fullQData(oldp+20,((0x0000001fffffffffULL 
                              & VL_SHIFTRS_QQI(37,37,32, 
                                               (0x0000001fffffffffULL 
                                                & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c_r1)) 
                                                   * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sq_r1)))), 8U))),37);
    bufp->fullIData(oldp+22,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2),30);
    bufp->fullIData(oldp+23,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2),30);
    bufp->fullIData(oldp+24,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2),29);
    bufp->fullIData(oldp+25,((0x1fffffffU & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t0_r2 
                                             + (vlSelfRef.quadra_top__DOT__u_quadra__DOT__t1_r2 
                                                + (0x3fffffffU 
                                                   & VL_EXTENDS_II(30,29, vlSelfRef.quadra_top__DOT__u_quadra__DOT__t2_r2)))))),29);
    bufp->fullBit(oldp+26,(vlSelfRef.clk));
    bufp->fullBit(oldp+27,(vlSelfRef.rst_b));
    bufp->fullIData(oldp+28,(vlSelfRef.x),24);
    bufp->fullBit(oldp+29,(vlSelfRef.x_dv));
    bufp->fullIData(oldp+30,(vlSelfRef.y),24);
    bufp->fullBit(oldp+31,(vlSelfRef.y_dv));
    bufp->fullCData(oldp+32,((0x0000007fU & (vlSelfRef.x 
                                             >> 0x00000011U))),7);
    bufp->fullIData(oldp+33,((0x0001ffffU & vlSelfRef.x)),17);
    bufp->fullIData(oldp+34,((0x00ffffffU & (IData)(
                                                    (0x0000000000ffffffULL 
                                                     & (((QData)((IData)(
                                                                         (0x0001ffffU 
                                                                          & vlSelfRef.x))) 
                                                         * (QData)((IData)(
                                                                           (0x0001ffffU 
                                                                            & vlSelfRef.x)))) 
                                                        >> 0x0000000aU))))),24);
    bufp->fullQData(oldp+35,((0x00000003ffffffffULL 
                              & ((QData)((IData)((0x0001ffffU 
                                                  & vlSelfRef.x))) 
                                 * (QData)((IData)(
                                                   (0x0001ffffU 
                                                    & vlSelfRef.x)))))),34);
    bufp->fullQData(oldp+37,(VL_SHIFTR_QQI(34,34,32, 
                                           (0x00000003ffffffffULL 
                                            & ((QData)((IData)(
                                                               (0x0001ffffU 
                                                                & vlSelfRef.x))) 
                                               * (QData)((IData)(
                                                                 (0x0001ffffU 
                                                                  & vlSelfRef.x))))), 0x0000000aU)),34);
}

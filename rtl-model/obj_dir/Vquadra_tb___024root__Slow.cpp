// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"

void Vquadra_tb___024root___ctor_var_reset(Vquadra_tb___024root* vlSelf);

Vquadra_tb___024root::Vquadra_tb___024root(Vquadra_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vquadra_tb___024root___ctor_var_reset(this);
}

void Vquadra_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vquadra_tb___024root::~Vquadra_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_tb.h for the primary calling header

#ifndef VERILATED_VQUADRA_TB___024UNIT_H_
#define VERILATED_VQUADRA_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vquadra_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    Vquadra_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vquadra_tb___024unit();
    ~Vquadra_tb___024unit();
    void ctor(Vquadra_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vquadra_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

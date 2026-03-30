// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_tb.h for the primary calling header

#ifndef VERILATED_VQUADRA_TB___024ROOT_H_
#define VERILATED_VQUADRA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vquadra_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ quadra_tb__DOT__x_dv;
    CData/*0:0*/ quadra_tb__DOT__clk;
    CData/*0:0*/ quadra_tb__DOT__rst_b;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p0;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p1;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*12:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_w;
    SData/*12:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__c_r1;
    IData/*23:0*/ quadra_tb__DOT__x;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_w;
    IData/*18:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_w;
    IData/*16:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__x2_r1;
    IData/*23:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__sq_r1;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__a_r1;
    IData/*18:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__b_r1;
    IData/*29:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__t0_r2;
    IData/*29:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__t1_r2;
    IData/*28:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__t2_r2;
    IData/*23:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__y_r;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1497f015__0;

    // INTERNAL VARIABLES
    Vquadra_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vquadra_tb___024root(Vquadra_tb__Syms* symsp, const char* namep);
    ~Vquadra_tb___024root();
    VL_UNCOPYABLE(Vquadra_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41b__Syms.h"


void Vmux41b___024root__traceChgSub0(Vmux41b___024root* vlSelf, VerilatedVcd* tracep);

void Vmux41b___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmux41b___024root* const __restrict vlSelf = static_cast<Vmux41b___024root*>(voidSelf);
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vmux41b___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmux41b___024root__traceChgSub0(Vmux41b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->mux41b__DOT____Vcellinp__i0____pinNumber4),12);
            tracep->chgCData(oldp+1,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
            tracep->chgCData(oldp+2,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
            tracep->chgCData(oldp+3,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
            tracep->chgCData(oldp+4,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
            tracep->chgCData(oldp+5,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+6,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+7,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+8,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[3]),2);
            tracep->chgBit(oldp+9,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+10,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+11,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+12,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+13,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+14,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__hit));
        }
        tracep->chgCData(oldp+15,(vlSelf->a),4);
        tracep->chgCData(oldp+16,(vlSelf->s),2);
        tracep->chgBit(oldp+17,(vlSelf->y));
    }
}

void Vmux41b___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vmux41b___024root* const __restrict vlSelf = static_cast<Vmux41b___024root*>(voidSelf);
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

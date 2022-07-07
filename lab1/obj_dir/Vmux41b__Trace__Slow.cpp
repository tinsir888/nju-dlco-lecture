// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41b__Syms.h"


void Vmux41b___024root__traceInitSub0(Vmux41b___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmux41b___024root__traceInitTop(Vmux41b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmux41b___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vmux41b___024root__traceInitSub0(Vmux41b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+16,"a", false,-1, 3,0);
        tracep->declBus(c+17,"s", false,-1, 1,0);
        tracep->declBit(c+18,"y", false,-1);
        tracep->declBus(c+16,"mux41b a", false,-1, 3,0);
        tracep->declBus(c+17,"mux41b s", false,-1, 1,0);
        tracep->declBit(c+18,"mux41b y", false,-1);
        tracep->declBus(c+19,"mux41b i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+20,"mux41b i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+21,"mux41b i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+18,"mux41b i0 out", false,-1, 0,0);
        tracep->declBus(c+17,"mux41b i0 key", false,-1, 1,0);
        tracep->declBus(c+22,"mux41b i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1,"mux41b i0 lut", false,-1, 11,0);
        tracep->declBus(c+19,"mux41b i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+20,"mux41b i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+21,"mux41b i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+21,"mux41b i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+18,"mux41b i0 i0 out", false,-1, 0,0);
        tracep->declBus(c+17,"mux41b i0 i0 key", false,-1, 1,0);
        tracep->declBus(c+22,"mux41b i0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1,"mux41b i0 i0 lut", false,-1, 11,0);
        tracep->declBus(c+23,"mux41b i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+2+i*1,"mux41b i0 i0 pair_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+6+i*1,"mux41b i0 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+10+i*1,"mux41b i0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+14,"mux41b i0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+15,"mux41b i0 i0 hit", false,-1);
        tracep->declBus(c+24,"mux41b i0 i0 i", false,-1, 31,0);
    }
}

void Vmux41b___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vmux41b___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vmux41b___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vmux41b___024root__traceRegister(Vmux41b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vmux41b___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vmux41b___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vmux41b___024root__traceCleanup, vlSelf);
    }
}

void Vmux41b___024root__traceFullSub0(Vmux41b___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmux41b___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmux41b___024root* const __restrict vlSelf = static_cast<Vmux41b___024root*>(voidSelf);
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmux41b___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmux41b___024root__traceFullSub0(Vmux41b___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->mux41b__DOT____Vcellinp__i0____pinNumber4),12);
        tracep->fullCData(oldp+2,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[0]),3);
        tracep->fullCData(oldp+3,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[1]),3);
        tracep->fullCData(oldp+4,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[2]),3);
        tracep->fullCData(oldp+5,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__pair_list[3]),3);
        tracep->fullCData(oldp+6,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+7,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+8,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+9,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        tracep->fullBit(oldp+10,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+11,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+12,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+13,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+14,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+15,(vlSelf->mux41b__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+16,(vlSelf->a),4);
        tracep->fullCData(oldp+17,(vlSelf->s),2);
        tracep->fullBit(oldp+18,(vlSelf->y));
        tracep->fullIData(oldp+19,(4U),32);
        tracep->fullIData(oldp+20,(2U),32);
        tracep->fullIData(oldp+21,(1U),32);
        tracep->fullBit(oldp+22,(0U));
        tracep->fullIData(oldp+23,(3U),32);
        tracep->fullIData(oldp+24,(4U),32);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMVAU_hls_0__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMVAU_hls_0::VMVAU_hls_0(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMVAU_hls_0__Syms(contextp(), _vcname__, this)}
    , MVAU_hls_0_regslice_both_w1__02Eap_clk{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Eap_clk}
    , MVAU_hls_1_regslice_both_w1__02Eap_clk{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Eap_clk}
    , MVAU_hls_2_regslice_both_w1__02Eap_clk{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Eap_clk}
    , MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock{vlSymsp->TOP.MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock}
    , MVAU_hls_3_regslice_both_w1__02Eap_clk{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Eap_clk}
    , MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock{vlSymsp->TOP.MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock}
    , MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock{vlSymsp->TOP.MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock}
    , MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock{vlSymsp->TOP.MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock}
    , MVAU_hls_0_regslice_both_w1__02Eap_rst{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Eap_rst}
    , MVAU_hls_0_regslice_both_w1__02Edata_in{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Edata_in}
    , MVAU_hls_0_regslice_both_w1__02Evld_in{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Evld_in}
    , MVAU_hls_0_regslice_both_w1__02Eack_in{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Eack_in}
    , MVAU_hls_0_regslice_both_w1__02Edata_out{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Edata_out}
    , MVAU_hls_0_regslice_both_w1__02Evld_out{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Evld_out}
    , MVAU_hls_0_regslice_both_w1__02Eack_out{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Eack_out}
    , MVAU_hls_0_regslice_both_w1__02Eapdone_blk{vlSymsp->TOP.MVAU_hls_0_regslice_both_w1__02Eapdone_blk}
    , MVAU_hls_1_regslice_both_w1__02Eap_rst{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Eap_rst}
    , MVAU_hls_1_regslice_both_w1__02Edata_in{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Edata_in}
    , MVAU_hls_1_regslice_both_w1__02Evld_in{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Evld_in}
    , MVAU_hls_1_regslice_both_w1__02Eack_in{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Eack_in}
    , MVAU_hls_1_regslice_both_w1__02Edata_out{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Edata_out}
    , MVAU_hls_1_regslice_both_w1__02Evld_out{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Evld_out}
    , MVAU_hls_1_regslice_both_w1__02Eack_out{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Eack_out}
    , MVAU_hls_1_regslice_both_w1__02Eapdone_blk{vlSymsp->TOP.MVAU_hls_1_regslice_both_w1__02Eapdone_blk}
    , MVAU_hls_2_regslice_both_w1__02Eap_rst{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Eap_rst}
    , MVAU_hls_2_regslice_both_w1__02Edata_in{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Edata_in}
    , MVAU_hls_2_regslice_both_w1__02Evld_in{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Evld_in}
    , MVAU_hls_2_regslice_both_w1__02Eack_in{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Eack_in}
    , MVAU_hls_2_regslice_both_w1__02Edata_out{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Edata_out}
    , MVAU_hls_2_regslice_both_w1__02Evld_out{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Evld_out}
    , MVAU_hls_2_regslice_both_w1__02Eack_out{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Eack_out}
    , MVAU_hls_2_regslice_both_w1__02Eapdone_blk{vlSymsp->TOP.MVAU_hls_2_regslice_both_w1__02Eapdone_blk}
    , MVAU_hls_3_hls_deadlock_idx0_monitor__02Ereset{vlSymsp->TOP.MVAU_hls_3_hls_deadlock_idx0_monitor__02Ereset}
    , MVAU_hls_3_hls_deadlock_idx0_monitor__02Eaxis_block_sigs{vlSymsp->TOP.MVAU_hls_3_hls_deadlock_idx0_monitor__02Eaxis_block_sigs}
    , MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_idle_sigs{vlSymsp->TOP.MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_idle_sigs}
    , MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_block_sigs{vlSymsp->TOP.MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_block_sigs}
    , MVAU_hls_3_hls_deadlock_idx0_monitor__02Eblock{vlSymsp->TOP.MVAU_hls_3_hls_deadlock_idx0_monitor__02Eblock}
    , MVAU_hls_3_regslice_both_w1__02Eap_rst{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Eap_rst}
    , MVAU_hls_3_regslice_both_w1__02Edata_in{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Edata_in}
    , MVAU_hls_3_regslice_both_w1__02Evld_in{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Evld_in}
    , MVAU_hls_3_regslice_both_w1__02Eack_in{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Eack_in}
    , MVAU_hls_3_regslice_both_w1__02Edata_out{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Edata_out}
    , MVAU_hls_3_regslice_both_w1__02Evld_out{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Evld_out}
    , MVAU_hls_3_regslice_both_w1__02Eack_out{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Eack_out}
    , MVAU_hls_3_regslice_both_w1__02Eapdone_blk{vlSymsp->TOP.MVAU_hls_3_regslice_both_w1__02Eapdone_blk}
    , MVAU_hls_0_hls_deadlock_idx0_monitor__02Ereset{vlSymsp->TOP.MVAU_hls_0_hls_deadlock_idx0_monitor__02Ereset}
    , MVAU_hls_0_hls_deadlock_idx0_monitor__02Eaxis_block_sigs{vlSymsp->TOP.MVAU_hls_0_hls_deadlock_idx0_monitor__02Eaxis_block_sigs}
    , MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_idle_sigs{vlSymsp->TOP.MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_idle_sigs}
    , MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_block_sigs{vlSymsp->TOP.MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_block_sigs}
    , MVAU_hls_0_hls_deadlock_idx0_monitor__02Eblock{vlSymsp->TOP.MVAU_hls_0_hls_deadlock_idx0_monitor__02Eblock}
    , MVAU_hls_1_hls_deadlock_idx0_monitor__02Ereset{vlSymsp->TOP.MVAU_hls_1_hls_deadlock_idx0_monitor__02Ereset}
    , MVAU_hls_1_hls_deadlock_idx0_monitor__02Eaxis_block_sigs{vlSymsp->TOP.MVAU_hls_1_hls_deadlock_idx0_monitor__02Eaxis_block_sigs}
    , MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_idle_sigs{vlSymsp->TOP.MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_idle_sigs}
    , MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_block_sigs{vlSymsp->TOP.MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_block_sigs}
    , MVAU_hls_1_hls_deadlock_idx0_monitor__02Eblock{vlSymsp->TOP.MVAU_hls_1_hls_deadlock_idx0_monitor__02Eblock}
    , MVAU_hls_2_hls_deadlock_idx0_monitor__02Ereset{vlSymsp->TOP.MVAU_hls_2_hls_deadlock_idx0_monitor__02Ereset}
    , MVAU_hls_2_hls_deadlock_idx0_monitor__02Eaxis_block_sigs{vlSymsp->TOP.MVAU_hls_2_hls_deadlock_idx0_monitor__02Eaxis_block_sigs}
    , MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_idle_sigs{vlSymsp->TOP.MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_idle_sigs}
    , MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_block_sigs{vlSymsp->TOP.MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_block_sigs}
    , MVAU_hls_2_hls_deadlock_idx0_monitor__02Eblock{vlSymsp->TOP.MVAU_hls_2_hls_deadlock_idx0_monitor__02Eblock}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VMVAU_hls_0::VMVAU_hls_0(const char* _vcname__)
    : VMVAU_hls_0(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMVAU_hls_0::~VMVAU_hls_0() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMVAU_hls_0___024root___eval_debug_assertions(VMVAU_hls_0___024root* vlSelf);
#endif  // VL_DEBUG
void VMVAU_hls_0___024root___eval_static(VMVAU_hls_0___024root* vlSelf);
void VMVAU_hls_0___024root___eval_initial(VMVAU_hls_0___024root* vlSelf);
void VMVAU_hls_0___024root___eval_settle(VMVAU_hls_0___024root* vlSelf);
void VMVAU_hls_0___024root___eval(VMVAU_hls_0___024root* vlSelf);

void VMVAU_hls_0::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMVAU_hls_0::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMVAU_hls_0___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMVAU_hls_0___024root___eval_static(&(vlSymsp->TOP));
        VMVAU_hls_0___024root___eval_initial(&(vlSymsp->TOP));
        VMVAU_hls_0___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMVAU_hls_0___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMVAU_hls_0::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VMVAU_hls_0::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VMVAU_hls_0::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMVAU_hls_0___024root___eval_final(VMVAU_hls_0___024root* vlSelf);

VL_ATTR_COLD void VMVAU_hls_0::final() {
    VMVAU_hls_0___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMVAU_hls_0::hierName() const { return vlSymsp->name(); }
const char* VMVAU_hls_0::modelName() const { return "VMVAU_hls_0"; }
unsigned VMVAU_hls_0::threads() const { return 1; }
void VMVAU_hls_0::prepareClone() const { contextp()->prepareClone(); }
void VMVAU_hls_0::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMVAU_hls_0::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMVAU_hls_0___024root__trace_decl_types(VerilatedVcd* tracep);

void VMVAU_hls_0___024root__trace_init_top(VMVAU_hls_0___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMVAU_hls_0___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMVAU_hls_0___024root*>(voidSelf);
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMVAU_hls_0___024root__trace_decl_types(tracep);
    VMVAU_hls_0___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMVAU_hls_0___024root__trace_register(VMVAU_hls_0___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMVAU_hls_0::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMVAU_hls_0::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMVAU_hls_0___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

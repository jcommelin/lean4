// Lean compiler output
// Module: Lean.Elab.Tactic.Rewrite
// Imports: Init Lean.Meta.Tactic.Rewrite Lean.Meta.Tactic.Replace Lean.Elab.Tactic.Basic Lean.Elab.Tactic.ElabTerm Lean.Elab.Tactic.Location
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__2;
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandRewriteTactic___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Elab_Tactic_rewriteLocalDeclFVarId___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainMVarContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewrite(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__1;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId_match__1(lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_rewrite___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic(lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteTarget_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalERewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find_from_user_name(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalERewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Meta_instantiateMVarsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_replaceLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName___at_Lean_Elab_Tactic_rewriteLocalDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName___at_Lean_Elab_Tactic_rewriteLocalDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteTarget(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2;
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_erewrite___closed__2;
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewrite___closed__1;
lean_object* l_Lean_Elab_Tactic_rewriteTarget_match__1(lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__3;
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_sortFVarIds___closed__1;
extern lean_object* l_Lean_Parser_Tactic_rewrite___closed__2;
lean_object* l_Lean_Elab_Tactic_evalRewriteCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___rarg(lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_throwUnknownConstant___rarg___closed__3;
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandERewriteTactic___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandERewriteTactic(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_try___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic___closed__1;
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic___closed__1;
extern lean_object* l_Lean_Elab_macroAttribute;
extern lean_object* l_Lean_Parser_Tactic_erewrite___closed__3;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Tactic_liftMetaTacticAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwUnknownFVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll_match__1(lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Elab_Tactic_withMainMVarContext___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewrite___closed__1;
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_rewrite___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewrite(lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Elab_Tactic_rewriteLocalDeclFVarId___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl___at_Lean_Elab_Tactic_getMainTag___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandRewriteTactic___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandERewriteTactic___spec__1(lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_erewriteSeq___closed__2;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandERewriteTactic___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1017____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandRewriteTactic___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryCoe___closed__3;
extern lean_object* l_Lean_Parser_Tactic_rewriteSeq___closed__2;
lean_object* l_Lean_Elab_Tactic_expandRewriteTactic(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandRewriteTactic___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = l_Lean_Parser_Tactic_rewrite___closed__3;
x_12 = l_Lean_mkAtomFrom(x_10, x_11);
x_13 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryCoe___closed__3;
x_14 = lean_array_push(x_13, x_12);
x_15 = lean_array_push(x_14, x_10);
lean_inc(x_1);
x_16 = lean_array_push(x_15, x_1);
x_17 = l_Lean_Parser_Tactic_rewrite___closed__2;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_21 = x_18;
x_22 = lean_array_uset(x_9, x_3, x_21);
x_3 = x_20;
x_4 = x_22;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Tactic_expandRewriteTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArg(x_5, x_4);
lean_dec(x_5);
x_7 = l_Lean_Syntax_getSepArgs(x_6);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_array_get_size(x_7);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = x_7;
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandRewriteTactic___spec__1(x_9, x_11, x_12, x_13);
x_15 = x_14;
x_16 = l_Lean_nullKind;
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandRewriteTactic___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandRewriteTactic___spec__1(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_Tactic_expandRewriteTactic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Tactic_expandRewriteTactic(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_expandRewriteTactic___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Tactic_rewriteSeq___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandERewriteTactic___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = l_Lean_Parser_Tactic_erewrite___closed__3;
x_12 = l_Lean_mkAtomFrom(x_10, x_11);
x_13 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryCoe___closed__3;
x_14 = lean_array_push(x_13, x_12);
x_15 = lean_array_push(x_14, x_10);
lean_inc(x_1);
x_16 = lean_array_push(x_15, x_1);
x_17 = l_Lean_Parser_Tactic_erewrite___closed__2;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_21 = x_18;
x_22 = lean_array_uset(x_9, x_3, x_21);
x_3 = x_20;
x_4 = x_22;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Tactic_expandERewriteTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArg(x_5, x_4);
lean_dec(x_5);
x_7 = l_Lean_Syntax_getSepArgs(x_6);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_array_get_size(x_7);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = x_7;
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandERewriteTactic___spec__1(x_9, x_11, x_12, x_13);
x_15 = x_14;
x_16 = l_Lean_nullKind;
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandERewriteTactic___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_expandERewriteTactic___spec__1(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_Tactic_expandERewriteTactic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Tactic_expandERewriteTactic(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_expandERewriteTactic___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Tactic_erewriteSeq___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_1);
x_15 = l_Lean_Meta_getMVarDecl___at_Lean_Elab_Tactic_getMainTag___spec__1(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 2);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_19 = l_Lean_Meta_instantiateMVarsImp(x_18, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_23 = l_Lean_Meta_rewrite(x_1, x_20, x_5, x_2, x_22, x_3, x_10, x_11, x_12, x_13, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_28 = l_Lean_Meta_replaceTargetEq(x_1, x_26, x_27, x_10, x_11, x_12, x_13, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_24, 2);
lean_inc(x_31);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_List_append___rarg(x_32, x_4);
x_34 = l_Lean_Elab_Tactic_setGoals(x_33, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_30);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_24);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_28);
if (x_35 == 0)
{
return x_28;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_28, 0);
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_28);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_23);
if (x_39 == 0)
{
return x_23;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_23, 0);
x_41 = lean_ctor_get(x_23, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_23);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_19);
if (x_43 == 0)
{
return x_19;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_19, 0);
x_45 = lean_ctor_get(x_19, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_19);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_15);
if (x_47 == 0)
{
return x_15;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_15, 0);
x_49 = lean_ctor_get(x_15, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_15);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_getMainGoal(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_box(0);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTerm___boxed), 12, 3);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_18);
lean_closure_set(x_21, 2, x_20);
x_22 = lean_box(x_2);
x_23 = lean_box(x_3);
lean_inc(x_16);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget___lambda__1___boxed), 14, 4);
lean_closure_set(x_24, 0, x_16);
lean_closure_set(x_24, 1, x_22);
lean_closure_set(x_24, 2, x_23);
lean_closure_set(x_24, 3, x_17);
x_25 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_liftMetaTacticAux___spec__1___rarg), 11, 2);
lean_closure_set(x_25, 0, x_21);
lean_closure_set(x_25, 1, x_24);
x_26 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Tactic_withMainMVarContext___spec__1___rarg(x_16, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
return x_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_13);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = l_Lean_Elab_Tactic_rewriteTarget___lambda__1(x_1, x_15, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_17;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = l_Lean_Elab_Tactic_rewriteTarget(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDeclFVarId_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Elab_Tactic_rewriteLocalDeclFVarId___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_1);
x_12 = lean_local_ctx_find(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = l_Lean_Meta_throwUnknownFVar___rarg(x_1, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
lean_inc(x_11);
lean_inc(x_1);
x_16 = l_Lean_Meta_getLocalDecl___at_Lean_Elab_Tactic_rewriteLocalDeclFVarId___spec__1(x_1, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_LocalDecl_type(x_17);
lean_dec(x_17);
x_20 = lean_box(0);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_2);
x_21 = l_Lean_Meta_rewrite(x_2, x_19, x_6, x_3, x_20, x_4, x_11, x_12, x_13, x_14, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_26 = l_Lean_Meta_replaceLocalDecl(x_2, x_1, x_24, x_25, x_11, x_12, x_13, x_14, x_23);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_22, 2);
lean_inc(x_30);
lean_dec(x_22);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_List_append___rarg(x_31, x_5);
x_33 = l_Lean_Elab_Tactic_setGoals(x_32, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_28);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
x_34 = !lean_is_exclusive(x_26);
if (x_34 == 0)
{
return x_26;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_26, 0);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_26);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_21);
if (x_38 == 0)
{
return x_21;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_21, 0);
x_40 = lean_ctor_get(x_21, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_21);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_16);
if (x_42 == 0)
{
return x_16;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_16, 0);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_16);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Tactic_getMainGoal(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_box(0);
x_20 = 1;
x_21 = lean_box(x_20);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTerm___boxed), 12, 3);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_19);
lean_closure_set(x_22, 2, x_21);
x_23 = lean_box(x_2);
x_24 = lean_box(x_4);
lean_inc(x_17);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1___boxed), 15, 5);
lean_closure_set(x_25, 0, x_3);
lean_closure_set(x_25, 1, x_17);
lean_closure_set(x_25, 2, x_23);
lean_closure_set(x_25, 3, x_24);
lean_closure_set(x_25, 4, x_18);
x_26 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_liftMetaTacticAux___spec__1___rarg), 11, 2);
lean_closure_set(x_26, 0, x_22);
lean_closure_set(x_26, 1, x_25);
x_27 = l_Lean_Meta_withMVarContext___at_Lean_Elab_Tactic_withMainMVarContext___spec__1___rarg(x_17, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Elab_Tactic_rewriteLocalDeclFVarId___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_getLocalDecl___at_Lean_Elab_Tactic_rewriteLocalDeclFVarId___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = lean_unbox(x_4);
lean_dec(x_4);
x_18 = l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1(x_1, x_2, x_16, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_18;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(x_1, x_14, x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName___at_Lean_Elab_Tactic_rewriteLocalDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_1);
x_12 = lean_local_ctx_find_from_user_name(x_11, x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_1);
x_14 = l_Lean_Meta_getLocalDeclFromUserName___rarg___lambda__1___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_throwUnknownConstant___rarg___closed__3;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_1017____spec__1(x_17, lean_box(0), x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_1);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_10);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_LocalDecl_fvarId(x_4);
x_15 = l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(x_1, x_2, x_14, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_getLocalDeclFromUserName___at_Lean_Elab_Tactic_rewriteLocalDecl___spec__1___boxed), 10, 1);
lean_closure_set(x_14, 0, x_3);
x_15 = lean_box(x_2);
x_16 = lean_box(x_4);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1___boxed), 13, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_15);
lean_closure_set(x_17, 2, x_16);
x_18 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_liftMetaTacticAux___spec__1___rarg), 11, 2);
lean_closure_set(x_18, 0, x_14);
lean_closure_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_Tactic_withMainMVarContext___rarg(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_19;
}
}
lean_object* l_Lean_Meta_getLocalDeclFromUserName___at_Lean_Elab_Tactic_rewriteLocalDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_getLocalDeclFromUserName___at_Lean_Elab_Tactic_rewriteLocalDecl___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = l_Lean_Elab_Tactic_rewriteLocalDecl(x_1, x_14, x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteAll_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, size_t x_5, size_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_6 < x_5;
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_18 = lean_box(x_7);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_array_uget(x_4, x_6);
x_21 = lean_box(x_2);
x_22 = lean_box(x_3);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___boxed), 13, 4);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_21);
lean_closure_set(x_23, 2, x_20);
lean_closure_set(x_23, 3, x_22);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_24 = l_Lean_Elab_Tactic_try___rarg(x_23, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (x_7 == 0)
{
lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = x_6 + x_27;
x_29 = lean_unbox(x_25);
lean_dec(x_25);
x_6 = x_28;
x_7 = x_29;
x_16 = x_26;
goto _start;
}
else
{
lean_object* x_31; size_t x_32; size_t x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_dec(x_24);
x_32 = 1;
x_33 = x_6 + x_32;
x_34 = 1;
x_6 = x_33;
x_7 = x_34;
x_16 = x_31;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("did not find instance of the pattern in the current goal");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = l_Lean_LocalContext_getFVarIds(x_5);
x_16 = l_Array_reverse___rarg(x_15);
x_17 = lean_array_get_size(x_16);
x_18 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_19 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(x_1, x_2, x_3, x_16, x_18, x_19, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_Lean_Elab_Tactic_getMainGoal(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Meta_rewrite___closed__1;
x_29 = l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__3;
x_30 = lean_box(0);
x_31 = l_Lean_Meta_throwTacticEx___rarg(x_28, x_27, x_29, x_30, x_10, x_11, x_12, x_13, x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_36 = !lean_is_exclusive(x_20);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_20, 0);
lean_dec(x_37);
x_38 = lean_box(0);
lean_ctor_set(x_20, 0, x_38);
return x_20;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_20, 1);
lean_inc(x_39);
lean_dec(x_20);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_13 = lean_box(x_2);
x_14 = lean_box(x_3);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget___boxed), 12, 3);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_13);
lean_closure_set(x_15, 2, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Elab_Tactic_try___rarg(x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(x_2);
x_20 = lean_box(x_3);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteAll___lambda__1___boxed), 14, 4);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_19);
lean_closure_set(x_21, 2, x_20);
lean_closure_set(x_21, 3, x_17);
x_22 = l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_sortFVarIds___closed__1;
x_23 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_liftMetaTacticAux___spec__1___rarg), 11, 2);
lean_closure_set(x_23, 0, x_22);
lean_closure_set(x_23, 1, x_21);
x_24 = l_Lean_Elab_Tactic_withMainMVarContext___rarg(x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
return x_24;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; size_t x_19; size_t x_20; uint8_t x_21; lean_object* x_22; 
x_17 = lean_unbox(x_2);
lean_dec(x_2);
x_18 = lean_unbox(x_3);
lean_dec(x_3);
x_19 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_20 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_21 = lean_unbox(x_7);
lean_dec(x_7);
x_22 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(x_1, x_17, x_18, x_4, x_19, x_20, x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_22;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = lean_unbox(x_4);
lean_dec(x_4);
x_18 = l_Lean_Elab_Tactic_rewriteAll___lambda__1(x_1, x_15, x_16, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_5);
return x_18;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = l_Lean_Elab_Tactic_rewriteAll(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewriteCore_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(uint8_t x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_5 == x_6;
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = lean_array_uget(x_4, x_5);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_19 = l_Lean_Elab_Tactic_rewriteLocalDecl(x_2, x_3, x_18, x_1, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = x_5 + x_22;
x_5 = x_23;
x_7 = x_20;
x_16 = x_21;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_16);
return x_29;
}
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_2, x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_13, x_14);
x_16 = l_Lean_Syntax_isNone(x_15);
lean_dec(x_15);
x_17 = l_Lean_Syntax_getArg(x_13, x_12);
lean_dec(x_13);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_2, x_18);
x_20 = l_Lean_Elab_Tactic_expandOptLocation(x_19);
lean_dec(x_19);
if (x_16 == 0)
{
switch (lean_obj_tag(x_20)) {
case 0:
{
uint8_t x_35; lean_object* x_36; 
x_35 = 1;
x_36 = l_Lean_Elab_Tactic_rewriteAll(x_17, x_35, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_36;
}
case 1:
{
uint8_t x_37; lean_object* x_38; 
x_37 = 1;
x_38 = l_Lean_Elab_Tactic_rewriteTarget(x_17, x_37, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_38;
}
default: 
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_20, 0);
lean_inc(x_39);
lean_dec(x_20);
x_40 = 1;
x_21 = x_40;
x_22 = x_39;
goto block_34;
}
}
}
else
{
switch (lean_obj_tag(x_20)) {
case 0:
{
uint8_t x_41; lean_object* x_42; 
x_41 = 0;
x_42 = l_Lean_Elab_Tactic_rewriteAll(x_17, x_41, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_42;
}
case 1:
{
uint8_t x_43; lean_object* x_44; 
x_43 = 0;
x_44 = l_Lean_Elab_Tactic_rewriteTarget(x_17, x_43, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_44;
}
default: 
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_20, 0);
lean_inc(x_45);
lean_dec(x_20);
x_46 = 0;
x_21 = x_46;
x_22 = x_45;
goto block_34;
}
}
}
block_34:
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_array_get_size(x_22);
x_24 = lean_nat_dec_lt(x_14, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_11);
return x_26;
}
else
{
uint8_t x_27; 
x_27 = lean_nat_dec_le(x_23, x_23);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_11);
return x_29;
}
else
{
size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; 
x_30 = 0;
x_31 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_32 = lean_box(0);
x_33 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(x_1, x_17, x_21, x_22, x_30, x_31, x_32, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_22);
return x_33;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_unbox(x_1);
lean_dec(x_1);
x_18 = lean_unbox(x_3);
lean_dec(x_3);
x_19 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_20 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_21 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(x_17, x_2, x_18, x_4, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_21;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_Lean_Elab_Tactic_evalRewriteCore(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewrite(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 2;
x_12 = l_Lean_Elab_Tactic_evalRewriteCore(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewrite___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_evalRewrite(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalRewrite___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewrite___boxed), 10, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewrite(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l_Lean_Parser_Tactic_rewrite___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_evalRewrite___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Tactic_evalERewrite(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
x_12 = l_Lean_Elab_Tactic_evalRewriteCore(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Tactic_evalERewrite___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_evalERewrite(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalERewrite___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalERewrite___boxed), 10, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewrite(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l_Lean_Parser_Tactic_erewrite___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_evalERewrite___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Rewrite(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Replace(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Location(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Tactic_Rewrite(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rewrite(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Location(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic___closed__1);
res = l___regBuiltin_Lean_Elab_Tactic_expandRewriteTactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic___closed__1);
res = l___regBuiltin_Lean_Elab_Tactic_expandERewriteTactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__1 = _init_l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__1);
l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__2 = _init_l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__2);
l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__3 = _init_l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_rewriteAll___lambda__1___closed__3);
l___regBuiltin_Lean_Elab_Tactic_evalRewrite___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_evalRewrite___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalRewrite___closed__1);
res = l___regBuiltin_Lean_Elab_Tactic_evalRewrite(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Tactic_evalERewrite___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_evalERewrite___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalERewrite___closed__1);
res = l___regBuiltin_Lean_Elab_Tactic_evalERewrite(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

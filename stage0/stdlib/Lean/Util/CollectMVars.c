// Lean compiler output
// Module: Lean.Util.CollectMVars
// Imports: Init Lean.Expr
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
lean_object* l_Lean_CollectMVars_visit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectMVars_instInhabitedState;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_mkHashSetImp___rarg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_CollectMVars_State_visitedExpr___default___closed__1;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(lean_object*, lean_object*);
lean_object* l_Std_mkHashSet___at_Lean_CollectMVars_State_visitedExpr___default___spec__1(lean_object*);
lean_object* l_Lean_Expr_collectMVars(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectMVars_main_match__1(lean_object*);
size_t l_Lean_Expr_hash(lean_object*);
lean_object* l_List_replace___at_Lean_CollectMVars_visit___spec__7(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_CollectMVars_main_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_replace___at_Lean_CollectMVars_visit___spec__7___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_CollectMVars_visit___spec__6(lean_object*, lean_object*);
lean_object* l_List_elem___at_Lean_CollectMVars_visit___spec__2___boxed(lean_object*, lean_object*);
extern lean_object* l_Std_HashSet_instInhabitedHashSet___closed__1;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t l_List_elem___at_Lean_CollectMVars_visit___spec__2(lean_object*, lean_object*);
lean_object* l_Std_HashSetImp_expand___at_Lean_CollectMVars_visit___spec__4(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_HashSetImp_moveEntries___at_Lean_CollectMVars_visit___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectMVars_State_visitedExpr___default;
lean_object* l_Lean_CollectMVars_instInhabitedState___closed__1;
lean_object* l_Lean_CollectMVars_State_result___default;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_CollectMVars_main(lean_object*, lean_object*);
lean_object* l_Std_mkHashSet___at_Lean_CollectMVars_State_visitedExpr___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashSetImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_CollectMVars_State_visitedExpr___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashSetImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_CollectMVars_State_visitedExpr___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_CollectMVars_State_visitedExpr___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_CollectMVars_State_result___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_CollectMVars_instInhabitedState___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_HashSet_instInhabitedHashSet___closed__1;
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_CollectMVars_instInhabitedState() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_CollectMVars_instInhabitedState___closed__1;
return x_1;
}
}
uint8_t l_List_elem___at_Lean_CollectMVars_visit___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_expr_eqv(x_1, x_4);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Expr_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_List_elem___at_Lean_CollectMVars_visit___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_List_foldl___at_Lean_CollectMVars_visit___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Expr_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 1, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_array_get_size(x_1);
x_15 = l_Lean_Expr_hash(x_12);
x_16 = lean_usize_modn(x_15, x_14);
lean_dec(x_14);
x_17 = lean_array_uget(x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_array_uset(x_1, x_16, x_18);
x_1 = x_19;
x_2 = x_13;
goto _start;
}
}
}
}
lean_object* l_Std_HashSetImp_moveEntries___at_Lean_CollectMVars_visit___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_List_foldl___at_Lean_CollectMVars_visit___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashSetImp_expand___at_Lean_CollectMVars_visit___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashSetImp_moveEntries___at_Lean_CollectMVars_visit___spec__5(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_List_replace___at_Lean_CollectMVars_visit___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_expr_eqv(x_6, x_2);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_List_replace___at_Lean_CollectMVars_visit___spec__7(x_7, x_2, x_3);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_dec(x_6);
lean_ctor_set(x_1, 0, x_3);
return x_1;
}
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_expr_eqv(x_10, x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_List_replace___at_Lean_CollectMVars_visit___spec__7(x_11, x_2, x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
}
}
}
}
lean_object* l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_array_get_size(x_5);
x_7 = l_Lean_Expr_hash(x_2);
x_8 = lean_usize_modn(x_7, x_6);
x_9 = lean_array_uget(x_5, x_8);
x_10 = l_List_elem___at_Lean_CollectMVars_visit___spec__2(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
x_14 = lean_array_uset(x_5, x_8, x_13);
x_15 = lean_nat_dec_le(x_12, x_6);
lean_dec(x_6);
if (x_15 == 0)
{
lean_object* x_16; 
lean_free_object(x_1);
x_16 = l_Std_HashSetImp_expand___at_Lean_CollectMVars_visit___spec__4(x_12, x_14);
return x_16;
}
else
{
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_inc(x_2);
x_17 = l_List_replace___at_Lean_CollectMVars_visit___spec__7(x_9, x_2, x_2);
lean_dec(x_2);
x_18 = lean_array_uset(x_5, x_8, x_17);
lean_ctor_set(x_1, 1, x_18);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = lean_array_get_size(x_20);
x_22 = l_Lean_Expr_hash(x_2);
x_23 = lean_usize_modn(x_22, x_21);
x_24 = lean_array_uget(x_20, x_23);
x_25 = l_List_elem___at_Lean_CollectMVars_visit___spec__2(x_2, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_19, x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_24);
x_29 = lean_array_uset(x_20, x_23, x_28);
x_30 = lean_nat_dec_le(x_27, x_21);
lean_dec(x_21);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = l_Std_HashSetImp_expand___at_Lean_CollectMVars_visit___spec__4(x_27, x_29);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_21);
lean_inc(x_2);
x_33 = l_List_replace___at_Lean_CollectMVars_visit___spec__7(x_24, x_2, x_2);
lean_dec(x_2);
x_34 = lean_array_uset(x_20, x_23, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_CollectMVars_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_2);
if (x_4 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_5, x_2);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_3, 0);
lean_dec(x_10);
lean_inc(x_2);
x_11 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_5, x_2);
lean_ctor_set(x_3, 0, x_11);
x_12 = lean_apply_2(x_1, x_2, x_3);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_inc(x_2);
x_13 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_5, x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
x_15 = lean_apply_2(x_1, x_2, x_14);
return x_15;
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
}
}
lean_object* l_List_elem___at_Lean_CollectMVars_visit___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_elem___at_Lean_CollectMVars_visit___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_replace___at_Lean_CollectMVars_visit___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_replace___at_Lean_CollectMVars_visit___spec__7(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_CollectMVars_main_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_2(x_8, x_10, x_12);
return x_13;
}
case 5:
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_17 = lean_box_uint64(x_16);
x_18 = lean_apply_3(x_6, x_14, x_15, x_17);
return x_18;
}
case 6:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_4(x_4, x_19, x_20, x_21, x_23);
return x_24;
}
case 7:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint64_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 2);
lean_inc(x_27);
x_28 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_29 = lean_box_uint64(x_28);
x_30 = lean_apply_4(x_3, x_25, x_26, x_27, x_29);
return x_30;
}
case 8:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 3);
lean_inc(x_34);
x_35 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_36 = lean_box_uint64(x_35);
x_37 = lean_apply_5(x_5, x_31, x_32, x_33, x_34, x_36);
return x_37;
}
case 10:
{
lean_object* x_38; lean_object* x_39; uint64_t x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_40 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_41 = lean_box_uint64(x_40);
x_42 = lean_apply_3(x_7, x_38, x_39, x_41);
return x_42;
}
case 11:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint64_t x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 2);
lean_inc(x_45);
x_46 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_47 = lean_box_uint64(x_46);
x_48 = lean_apply_4(x_2, x_43, x_44, x_45, x_47);
return x_48;
}
default: 
{
lean_object* x_49; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = lean_apply_1(x_9, x_1);
return x_49;
}
}
}
}
lean_object* l_Lean_CollectMVars_main_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_CollectMVars_main_match__1___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_CollectMVars_main(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_push(x_5, x_3);
lean_ctor_set(x_2, 1, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_9 = lean_array_push(x_8, x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
case 5:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = l_Lean_Expr_hasMVar(x_11);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
x_16 = l_Lean_Expr_hasMVar(x_12);
if (x_13 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
x_17 = x_2;
goto block_29;
}
else
{
uint8_t x_30; 
x_30 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_14, x_11);
if (x_30 == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_2);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_2, 1);
lean_dec(x_32);
x_33 = lean_ctor_get(x_2, 0);
lean_dec(x_33);
lean_inc(x_11);
x_34 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_14, x_11);
lean_ctor_set(x_2, 0, x_34);
x_35 = l_Lean_CollectMVars_main(x_11, x_2);
x_17 = x_35;
goto block_29;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_2);
lean_inc(x_11);
x_36 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_14, x_11);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_15);
x_38 = l_Lean_CollectMVars_main(x_11, x_37);
x_17 = x_38;
goto block_29;
}
}
else
{
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
x_17 = x_2;
goto block_29;
}
}
block_29:
{
if (x_16 == 0)
{
lean_dec(x_12);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_18, x_12);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_17, 0);
lean_dec(x_23);
lean_inc(x_12);
x_24 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_18, x_12);
lean_ctor_set(x_17, 0, x_24);
x_1 = x_12;
x_2 = x_17;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_17);
lean_inc(x_12);
x_26 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_18, x_12);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
x_1 = x_12;
x_2 = x_27;
goto _start;
}
}
else
{
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
return x_17;
}
}
}
}
case 6:
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 2);
lean_inc(x_40);
lean_dec(x_1);
x_41 = l_Lean_Expr_hasMVar(x_39);
x_42 = lean_ctor_get(x_2, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_2, 1);
lean_inc(x_43);
x_44 = l_Lean_Expr_hasMVar(x_40);
if (x_41 == 0)
{
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_39);
x_45 = x_2;
goto block_57;
}
else
{
uint8_t x_58; 
x_58 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_42, x_39);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_2);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_2, 1);
lean_dec(x_60);
x_61 = lean_ctor_get(x_2, 0);
lean_dec(x_61);
lean_inc(x_39);
x_62 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_42, x_39);
lean_ctor_set(x_2, 0, x_62);
x_63 = l_Lean_CollectMVars_main(x_39, x_2);
x_45 = x_63;
goto block_57;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_2);
lean_inc(x_39);
x_64 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_42, x_39);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_43);
x_66 = l_Lean_CollectMVars_main(x_39, x_65);
x_45 = x_66;
goto block_57;
}
}
else
{
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_39);
x_45 = x_2;
goto block_57;
}
}
block_57:
{
if (x_44 == 0)
{
lean_dec(x_40);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
x_48 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_46, x_40);
if (x_48 == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_45);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_45, 1);
lean_dec(x_50);
x_51 = lean_ctor_get(x_45, 0);
lean_dec(x_51);
lean_inc(x_40);
x_52 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_46, x_40);
lean_ctor_set(x_45, 0, x_52);
x_1 = x_40;
x_2 = x_45;
goto _start;
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_45);
lean_inc(x_40);
x_54 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_46, x_40);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_47);
x_1 = x_40;
x_2 = x_55;
goto _start;
}
}
else
{
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_40);
return x_45;
}
}
}
}
case 7:
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; 
x_67 = lean_ctor_get(x_1, 1);
lean_inc(x_67);
x_68 = lean_ctor_get(x_1, 2);
lean_inc(x_68);
lean_dec(x_1);
x_69 = l_Lean_Expr_hasMVar(x_67);
x_70 = lean_ctor_get(x_2, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 1);
lean_inc(x_71);
x_72 = l_Lean_Expr_hasMVar(x_68);
if (x_69 == 0)
{
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_67);
x_73 = x_2;
goto block_85;
}
else
{
uint8_t x_86; 
x_86 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_70, x_67);
if (x_86 == 0)
{
uint8_t x_87; 
x_87 = !lean_is_exclusive(x_2);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_2, 1);
lean_dec(x_88);
x_89 = lean_ctor_get(x_2, 0);
lean_dec(x_89);
lean_inc(x_67);
x_90 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_70, x_67);
lean_ctor_set(x_2, 0, x_90);
x_91 = l_Lean_CollectMVars_main(x_67, x_2);
x_73 = x_91;
goto block_85;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_2);
lean_inc(x_67);
x_92 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_70, x_67);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_71);
x_94 = l_Lean_CollectMVars_main(x_67, x_93);
x_73 = x_94;
goto block_85;
}
}
else
{
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_67);
x_73 = x_2;
goto block_85;
}
}
block_85:
{
if (x_72 == 0)
{
lean_dec(x_68);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
x_76 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_74, x_68);
if (x_76 == 0)
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_73);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_73, 1);
lean_dec(x_78);
x_79 = lean_ctor_get(x_73, 0);
lean_dec(x_79);
lean_inc(x_68);
x_80 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_74, x_68);
lean_ctor_set(x_73, 0, x_80);
x_1 = x_68;
x_2 = x_73;
goto _start;
}
else
{
lean_object* x_82; lean_object* x_83; 
lean_dec(x_73);
lean_inc(x_68);
x_82 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_74, x_68);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_75);
x_1 = x_68;
x_2 = x_83;
goto _start;
}
}
else
{
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_68);
return x_73;
}
}
}
}
case 8:
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; uint8_t x_102; lean_object* x_103; lean_object* x_116; 
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
x_96 = lean_ctor_get(x_1, 2);
lean_inc(x_96);
x_97 = lean_ctor_get(x_1, 3);
lean_inc(x_97);
lean_dec(x_1);
x_98 = l_Lean_Expr_hasMVar(x_95);
x_99 = lean_ctor_get(x_2, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_2, 1);
lean_inc(x_100);
x_101 = l_Lean_Expr_hasMVar(x_96);
x_102 = l_Lean_Expr_hasMVar(x_97);
if (x_98 == 0)
{
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_95);
x_116 = x_2;
goto block_128;
}
else
{
uint8_t x_129; 
x_129 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_99, x_95);
if (x_129 == 0)
{
uint8_t x_130; 
x_130 = !lean_is_exclusive(x_2);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_131 = lean_ctor_get(x_2, 1);
lean_dec(x_131);
x_132 = lean_ctor_get(x_2, 0);
lean_dec(x_132);
lean_inc(x_95);
x_133 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_99, x_95);
lean_ctor_set(x_2, 0, x_133);
x_134 = l_Lean_CollectMVars_main(x_95, x_2);
x_116 = x_134;
goto block_128;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_2);
lean_inc(x_95);
x_135 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_99, x_95);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_100);
x_137 = l_Lean_CollectMVars_main(x_95, x_136);
x_116 = x_137;
goto block_128;
}
}
else
{
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_95);
x_116 = x_2;
goto block_128;
}
}
block_115:
{
if (x_102 == 0)
{
lean_dec(x_97);
return x_103;
}
else
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
x_106 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_104, x_97);
if (x_106 == 0)
{
uint8_t x_107; 
x_107 = !lean_is_exclusive(x_103);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_103, 1);
lean_dec(x_108);
x_109 = lean_ctor_get(x_103, 0);
lean_dec(x_109);
lean_inc(x_97);
x_110 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_104, x_97);
lean_ctor_set(x_103, 0, x_110);
x_1 = x_97;
x_2 = x_103;
goto _start;
}
else
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_103);
lean_inc(x_97);
x_112 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_104, x_97);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_105);
x_1 = x_97;
x_2 = x_113;
goto _start;
}
}
else
{
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_97);
return x_103;
}
}
}
block_128:
{
if (x_101 == 0)
{
lean_dec(x_96);
x_103 = x_116;
goto block_115;
}
else
{
lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
x_119 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_117, x_96);
if (x_119 == 0)
{
uint8_t x_120; 
x_120 = !lean_is_exclusive(x_116);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_116, 1);
lean_dec(x_121);
x_122 = lean_ctor_get(x_116, 0);
lean_dec(x_122);
lean_inc(x_96);
x_123 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_117, x_96);
lean_ctor_set(x_116, 0, x_123);
x_124 = l_Lean_CollectMVars_main(x_96, x_116);
x_103 = x_124;
goto block_115;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_116);
lean_inc(x_96);
x_125 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_117, x_96);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_118);
x_127 = l_Lean_CollectMVars_main(x_96, x_126);
x_103 = x_127;
goto block_115;
}
}
else
{
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_96);
x_103 = x_116;
goto block_115;
}
}
}
}
case 10:
{
lean_object* x_138; uint8_t x_139; 
x_138 = lean_ctor_get(x_1, 1);
lean_inc(x_138);
lean_dec(x_1);
x_139 = l_Lean_Expr_hasMVar(x_138);
if (x_139 == 0)
{
lean_dec(x_138);
return x_2;
}
else
{
lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_140 = lean_ctor_get(x_2, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_2, 1);
lean_inc(x_141);
x_142 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_140, x_138);
if (x_142 == 0)
{
uint8_t x_143; 
x_143 = !lean_is_exclusive(x_2);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_2, 1);
lean_dec(x_144);
x_145 = lean_ctor_get(x_2, 0);
lean_dec(x_145);
lean_inc(x_138);
x_146 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_140, x_138);
lean_ctor_set(x_2, 0, x_146);
x_1 = x_138;
goto _start;
}
else
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_2);
lean_inc(x_138);
x_148 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_140, x_138);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_141);
x_1 = x_138;
x_2 = x_149;
goto _start;
}
}
else
{
lean_dec(x_141);
lean_dec(x_140);
lean_dec(x_138);
return x_2;
}
}
}
case 11:
{
lean_object* x_151; uint8_t x_152; 
x_151 = lean_ctor_get(x_1, 2);
lean_inc(x_151);
lean_dec(x_1);
x_152 = l_Lean_Expr_hasMVar(x_151);
if (x_152 == 0)
{
lean_dec(x_151);
return x_2;
}
else
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_153 = lean_ctor_get(x_2, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_2, 1);
lean_inc(x_154);
x_155 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_153, x_151);
if (x_155 == 0)
{
uint8_t x_156; 
x_156 = !lean_is_exclusive(x_2);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_2, 1);
lean_dec(x_157);
x_158 = lean_ctor_get(x_2, 0);
lean_dec(x_158);
lean_inc(x_151);
x_159 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_153, x_151);
lean_ctor_set(x_2, 0, x_159);
x_1 = x_151;
goto _start;
}
else
{
lean_object* x_161; lean_object* x_162; 
lean_dec(x_2);
lean_inc(x_151);
x_161 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_153, x_151);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_154);
x_1 = x_151;
x_2 = x_162;
goto _start;
}
}
else
{
lean_dec(x_154);
lean_dec(x_153);
lean_dec(x_151);
return x_2;
}
}
}
default: 
{
lean_dec(x_1);
return x_2;
}
}
}
}
lean_object* l_Lean_Expr_collectMVars(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Expr_hasMVar(x_2);
if (x_3 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = l_Std_HashSetImp_contains___at_Lean_CollectMVars_visit___spec__1(x_4, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_1, 0);
lean_dec(x_9);
lean_inc(x_2);
x_10 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_4, x_2);
lean_ctor_set(x_1, 0, x_10);
x_11 = l_Lean_CollectMVars_main(x_2, x_1);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
lean_inc(x_2);
x_12 = l_Std_HashSetImp_insert___at_Lean_CollectMVars_visit___spec__3(x_4, x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
x_14 = l_Lean_CollectMVars_main(x_2, x_13);
return x_14;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_1;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Expr(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Util_CollectMVars(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Expr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_CollectMVars_State_visitedExpr___default___closed__1 = _init_l_Lean_CollectMVars_State_visitedExpr___default___closed__1();
lean_mark_persistent(l_Lean_CollectMVars_State_visitedExpr___default___closed__1);
l_Lean_CollectMVars_State_visitedExpr___default = _init_l_Lean_CollectMVars_State_visitedExpr___default();
lean_mark_persistent(l_Lean_CollectMVars_State_visitedExpr___default);
l_Lean_CollectMVars_State_result___default = _init_l_Lean_CollectMVars_State_result___default();
lean_mark_persistent(l_Lean_CollectMVars_State_result___default);
l_Lean_CollectMVars_instInhabitedState___closed__1 = _init_l_Lean_CollectMVars_instInhabitedState___closed__1();
lean_mark_persistent(l_Lean_CollectMVars_instInhabitedState___closed__1);
l_Lean_CollectMVars_instInhabitedState = _init_l_Lean_CollectMVars_instInhabitedState();
lean_mark_persistent(l_Lean_CollectMVars_instInhabitedState);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Init.Data.Hashable
// Imports: Init.Data.UInt Init.Data.String
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
lean_object* l_instHashableProd_match__1(lean_object*, lean_object*, lean_object*);
size_t l_instHashableProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableList(lean_object*);
lean_object* l_List_foldl___at_instHashableList___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
size_t l_Option_hash___rarg(lean_object*, lean_object*);
lean_object* l_instHashableOption(lean_object*);
lean_object* l_Option_hash_match__1(lean_object*, lean_object*);
lean_object* l_List_foldl___at_instHashableList___spec__1(lean_object*);
lean_object* l_instHashableProd(lean_object*);
lean_object* l_Option_hash___rarg___boxed(lean_object*, lean_object*);
lean_object* l_instHashableOption_match__1(lean_object*, lean_object*);
lean_object* l_instHashableList___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Option_hash_match__1___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t l_instHashableNat(lean_object*);
size_t l_instHashableList___rarg(lean_object*, lean_object*);
lean_object* l_instHashableOption_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableOption___rarg___boxed(lean_object*, lean_object*);
lean_object* l_instHashableProd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableNat___boxed(lean_object*);
size_t lean_usize_mix_hash(size_t, size_t);
size_t l_instHashableOption___rarg(lean_object*, lean_object*);
lean_object* l_instHashableProd_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Option_hash(lean_object*);
size_t l_List_foldl___at_instHashableList___spec__1___rarg(lean_object*, size_t, lean_object*);
size_t l_instHashableNat(lean_object* x_1) {
_start:
{
size_t x_2; 
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
lean_object* l_instHashableNat___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = l_instHashableNat(x_1);
lean_dec(x_1);
x_3 = lean_box_usize(x_2);
return x_3;
}
}
lean_object* l_instHashableProd_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_instHashableProd_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_instHashableProd_match__1___rarg), 2, 0);
return x_4;
}
}
size_t l_instHashableProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_9 = lean_apply_1(x_3, x_6);
x_10 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_11 = lean_usize_mix_hash(x_8, x_10);
return x_11;
}
}
lean_object* l_instHashableProd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_instHashableProd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = l_instHashableProd___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_Option_hash_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Option_hash_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Option_hash_match__1___rarg), 3, 0);
return x_3;
}
}
size_t l_Option_hash___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
size_t x_3; 
lean_dec(x_1);
x_3 = 11;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_7 = 13;
x_8 = lean_usize_mix_hash(x_6, x_7);
return x_8;
}
}
}
lean_object* l_Option_hash(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Option_hash___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Option_hash___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = l_Option_hash___rarg(x_1, x_2);
x_4 = lean_box_usize(x_3);
return x_4;
}
}
lean_object* l_instHashableOption_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_instHashableOption_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instHashableOption_match__1___rarg), 3, 0);
return x_3;
}
}
size_t l_instHashableOption___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
size_t x_3; 
lean_dec(x_1);
x_3 = 11;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_7 = 13;
x_8 = lean_usize_mix_hash(x_6, x_7);
return x_8;
}
}
}
lean_object* l_instHashableOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instHashableOption___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_instHashableOption___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = l_instHashableOption___rarg(x_1, x_2);
x_4 = lean_box_usize(x_3);
return x_4;
}
}
size_t l_List_foldl___at_instHashableList___spec__1___rarg(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_1);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_8 = lean_usize_mix_hash(x_2, x_7);
x_2 = x_8;
x_3 = x_5;
goto _start;
}
}
}
lean_object* l_List_foldl___at_instHashableList___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldl___at_instHashableList___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
size_t l_instHashableList___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; 
x_3 = 7;
x_4 = l_List_foldl___at_instHashableList___spec__1___rarg(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l_instHashableList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instHashableList___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_foldl___at_instHashableList___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_List_foldl___at_instHashableList___spec__1___rarg(x_1, x_4, x_3);
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_instHashableList___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = l_instHashableList___rarg(x_1, x_2);
x_4 = lean_box_usize(x_3);
return x_4;
}
}
lean_object* initialize_Init_Data_UInt(lean_object*);
lean_object* initialize_Init_Data_String(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Hashable(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_UInt(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

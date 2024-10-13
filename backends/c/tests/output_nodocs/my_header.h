// Automatically generated by Interoptopus.

#ifndef interoptopus_generated
#define interoptopus_generated

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>



const uint8_t MY_LIBRARY_U8 = 255;
const float MY_LIBRARY_F32_MIN_POSITIVE = 0.000000000000000000000000000000000000011754944;
const int32_t MY_LIBRARY_COMPUTED_I32 = -2147483647;

typedef enum my_library_enumdocumented
    {
    MY_LIBRARY_ENUMDOCUMENTED_A = 0,
    MY_LIBRARY_ENUMDOCUMENTED_B = 1,
    MY_LIBRARY_ENUMDOCUMENTED_C = 2,
    } my_library_enumdocumented;

typedef enum my_library_enumrenamed
    {
    MY_LIBRARY_ENUMRENAMED_X = 0,
    } my_library_enumrenamed;

typedef struct my_library_generic2u8 my_library_generic2u8;
typedef struct my_library_generic3 my_library_generic3;
typedef struct my_library_generic4 my_library_generic4;
typedef struct my_library_simpleservice my_library_simpleservice;
typedef struct my_library_simpleservicelifetime my_library_simpleservicelifetime;
typedef enum my_library_ffierror
    {
    MY_LIBRARY_FFIERROR_OK = 0,
    MY_LIBRARY_FFIERROR_NULL = 100,
    MY_LIBRARY_FFIERROR_PANIC = 200,
    MY_LIBRARY_FFIERROR_DELEGATE = 300,
    MY_LIBRARY_FFIERROR_FAIL = 400,
    } my_library_ffierror;

typedef struct my_library_booleanalignment
    {
    int32_t a;
    int16_t b;
    int16_t c;
    uint8_t d;
    uint8_t e;
    uint8_t f;
    uint8_t g;
    uint8_t h;
    uint8_t i;
    uint8_t j;
    uint8_t k;
    uint64_t id;
    bool is_valid;
    uint64_t datum;
    } my_library_booleanalignment;

typedef struct my_library_extratypef32
    {
    float x;
    } my_library_extratypef32;

typedef struct my_library_inner
    {
    float x;
    } my_library_inner;

typedef struct my_library_local
    {
    uint32_t x;
    } my_library_local;

typedef struct my_library_packed1
    {
    uint8_t x;
    uint16_t y;
    } my_library_packed1;

typedef struct my_library_packed2
    {
    uint16_t y;
    uint8_t x;
    } my_library_packed2;

typedef struct my_library_phantomu8
    {
    uint32_t x;
    } my_library_phantomu8;

typedef struct my_library_structdocumented
    {
    float x;
    } my_library_structdocumented;

typedef struct my_library_structrenamed
    {
    my_library_enumrenamed e;
    } my_library_structrenamed;

typedef struct my_library_tupled
    {
    uint8_t x0;
    } my_library_tupled;

typedef struct my_library_useasciistringpattern
    {
    const char* ascii_string;
    } my_library_useasciistringpattern;

typedef struct my_library_vec
    {
    double x;
    double z;
    } my_library_vec;

typedef struct my_library_vec1
    {
    float x;
    float y;
    } my_library_vec1;

typedef struct my_library_vec2
    {
    double x;
    double z;
    } my_library_vec2;

typedef struct my_library_vec3f32
    {
    float x;
    float y;
    float z;
    } my_library_vec3f32;

typedef struct my_library_visibility1
    {
    uint8_t pblc;
    uint8_t prvt;
    } my_library_visibility1;

typedef struct my_library_visibility2
    {
    uint8_t pblc1;
    uint8_t pblc2;
    } my_library_visibility2;

typedef struct my_library_weird1u32
    {
    uint32_t x;
    } my_library_weird1u32;

typedef uint8_t (*my_library_fptr_fn_u8_rval_u8)(uint8_t x0);

typedef uint8_t (*my_library_callbacku8)(uint8_t value);

typedef uint32_t (*my_library_mycallback)(uint32_t value);

typedef uint32_t (*my_library_mycallbacknamespaced)(uint32_t value);

typedef void (*my_library_sumdelegate1)();

typedef int32_t (*my_library_sumdelegate2)(int32_t x, int32_t y);

typedef my_library_ffierror (*my_library_sumdelegatereturn)(int32_t x, int32_t y);

typedef void (*my_library_sumdelegatereturn2)(int32_t x, int32_t y);

typedef struct my_library_array
    {
    uint8_t data[16];
    } my_library_array;

typedef struct my_library_container
    {
    my_library_local foreign;
    } my_library_container;

typedef struct my_library_genericu32
    {
    const uint32_t* x;
    } my_library_genericu32;

typedef struct my_library_genericu8
    {
    const uint8_t* x;
    } my_library_genericu8;

typedef struct my_library_weird2u8
    {
    uint8_t t;
    uint8_t a[5];
    const uint8_t* r;
    } my_library_weird2u8;

typedef struct my_library_slicebool
    {
    const uint8_t* data;
    uint64_t len;
    } my_library_slicebool;

typedef struct my_library_slicei32
    {
    const int32_t* data;
    uint64_t len;
    } my_library_slicei32;

typedef struct my_library_sliceu32
    {
    const uint32_t* data;
    uint64_t len;
    } my_library_sliceu32;

typedef struct my_library_sliceu8
    {
    const uint8_t* data;
    uint64_t len;
    } my_library_sliceu8;

typedef struct my_library_slicemutu32
    {
    const uint32_t* data;
    uint64_t len;
    } my_library_slicemutu32;

typedef struct my_library_slicemutu8
    {
    const uint8_t* data;
    uint64_t len;
    } my_library_slicemutu8;

typedef struct my_library_optioninner
    {
    my_library_inner t;
    uint8_t is_some;
    } my_library_optioninner;

typedef struct my_library_optionvec
    {
    my_library_vec t;
    uint8_t is_some;
    } my_library_optionvec;

typedef void (*my_library_mycallbackcontextual)(const void* context, uint32_t value);

typedef void (*my_library_mycallbackvoid)(const void* ptr);

typedef struct my_library_delegatecallbackmycallbackcontextual
    {
    my_library_mycallbackcontextual callback;
    const void* context;
    } my_library_delegatecallbackmycallbackcontextual;

typedef struct my_library_sliceuseasciistringpattern
    {
    const my_library_useasciistringpattern* data;
    uint64_t len;
    } my_library_sliceuseasciistringpattern;

typedef struct my_library_slicevec
    {
    const my_library_vec* data;
    uint64_t len;
    } my_library_slicevec;

typedef struct my_library_slicevec3f32
    {
    const my_library_vec3f32* data;
    uint64_t len;
    } my_library_slicevec3f32;

typedef struct my_library_slicemutvec
    {
    const my_library_vec* data;
    uint64_t len;
    } my_library_slicemutvec;

typedef uint8_t (*my_library_callbackffislice)(my_library_sliceu8 slice);

typedef void (*my_library_callbackslicemut)(my_library_slicemutu8 slice);

typedef my_library_vec3f32 (*my_library_callbackhugevecslice)(my_library_slicevec3f32 slice);


void primitive_void();
void primitive_void2();
bool primitive_bool(bool x);
uint8_t primitive_u8(uint8_t x);
uint16_t primitive_u16(uint16_t x);
uint32_t primitive_u32(uint32_t x);
uint64_t primitive_u64(uint64_t x);
int8_t primitive_i8(int8_t x);
int16_t primitive_i16(int16_t x);
int32_t primitive_i32(int32_t x);
int64_t primitive_i64(int64_t x);
my_library_booleanalignment boolean_alignment(my_library_booleanalignment x);
my_library_booleanalignment boolean_alignment2(bool rval);
my_library_packed2 packed_to_packed1(my_library_packed1 a);
int64_t many_args_5(int64_t x0, int64_t x1, int64_t x2, int64_t x3, int64_t x4);
int64_t many_args_10(int64_t x0, int64_t x1, int64_t x2, int64_t x3, int64_t x4, int64_t x5, int64_t x6, int64_t x7, int64_t x8, int64_t x9);
const int64_t* ptr(const int64_t* x);
int64_t* ptr_mut(int64_t* x);
const const int64_t** ptr_ptr(const const int64_t** x);
const int64_t* ref_simple(const int64_t* x);
int64_t* ref_mut_simple(int64_t* x);
bool ref_option(const int64_t* x);
bool ref_mut_option(int64_t* x);
my_library_tupled tupled(my_library_tupled x);
my_library_ffierror complex_args_1(my_library_vec3f32 a, const my_library_tupled* b);
uint8_t callback(my_library_fptr_fn_u8_rval_u8 callback, uint8_t value);
uint32_t generic_1a(my_library_genericu32 x, my_library_phantomu8 y);
uint8_t generic_1b(my_library_genericu8 x, my_library_phantomu8 y);
uint8_t generic_1c(const my_library_genericu8* x, const my_library_genericu8* y);
uint8_t generic_2(const my_library_generic2u8* x);
uint8_t generic_3(const my_library_generic3* x);
uint8_t generic_4(const my_library_generic4* x);
uint8_t array_1(my_library_array x);
my_library_enumdocumented documented(my_library_structdocumented x);
my_library_vec1 ambiguous_1(my_library_vec1 x);
my_library_vec2 ambiguous_2(my_library_vec2 x);
bool ambiguous_3(my_library_vec1 x, my_library_vec2 y);
my_library_vec namespaced_type(my_library_vec x);
my_library_optionvec namespaced_inner_option(my_library_optionvec x);
my_library_slicevec namespaced_inner_slice(my_library_slicevec x);
my_library_slicemutvec namespaced_inner_slice_mut(my_library_slicemutvec x);
my_library_ffierror panics();
my_library_enumrenamed renamed(my_library_structrenamed x);
void sleep(uint64_t millis);
bool weird_1(my_library_weird1u32 x, my_library_weird2u8 y);
void visibility(my_library_visibility1 x, my_library_visibility2 y);
my_library_tupled repr_transparent(my_library_tupled x, const my_library_tupled* r);
uint32_t pattern_ascii_pointer_1(const char* x);
const char* pattern_ascii_pointer_2();
uint32_t pattern_ascii_pointer_len(const char* x, my_library_useasciistringpattern y);
my_library_sliceuseasciistringpattern pattern_ascii_pointer_return_slice();
uint32_t pattern_ffi_slice_1(my_library_sliceu32 ffi_slice);
uint32_t pattern_ffi_slice_1b(my_library_slicemutu32 ffi_slice);
my_library_vec3f32 pattern_ffi_slice_2(my_library_slicevec3f32 ffi_slice, int32_t i);
void pattern_ffi_slice_3(my_library_slicemutu8 slice, my_library_callbackslicemut callback);
void pattern_ffi_slice_4(my_library_sliceu8 slice, my_library_slicemutu8 slice2);
void pattern_ffi_slice_5(const my_library_sliceu8* slice, my_library_slicemutu8* slice2);
void pattern_ffi_slice_6(const my_library_slicemutu8* slice, my_library_callbacku8 callback);
uint8_t pattern_ffi_slice_delegate(my_library_callbackffislice callback);
my_library_vec3f32 pattern_ffi_slice_delegate_huge(my_library_callbackhugevecslice callback);
my_library_optioninner pattern_ffi_option_1(my_library_optioninner ffi_slice);
my_library_inner pattern_ffi_option_2(my_library_optioninner ffi_slice);
uint8_t pattern_ffi_bool(uint8_t ffi_bool);
char pattern_ffi_cchar(char ffi_cchar);
const char* pattern_ffi_cchar_const_pointer(const char* ffi_cchar);
char* pattern_ffi_cchar_mut_pointer(char* ffi_cchar);
uint64_t pattern_api_guard();
uint32_t pattern_callback_1(my_library_mycallback callback, uint32_t x);
my_library_mycallbackvoid pattern_callback_2(my_library_mycallbackvoid callback);
void pattern_callback_3(my_library_delegatecallbackmycallbackcontextual callback, uint32_t x);
uint32_t pattern_callback_4(my_library_mycallbacknamespaced callback, uint32_t x);
my_library_sumdelegate1 pattern_callback_5();
my_library_sumdelegate2 pattern_callback_6();
my_library_ffierror pattern_callback_7(my_library_sumdelegatereturn c1, my_library_sumdelegatereturn2 c2, int32_t x, int32_t i, int32_t* o);
void pattern_surrogates_1(my_library_local s, my_library_container* c);
my_library_ffierror simple_service_destroy(my_library_simpleservice** context);
my_library_ffierror simple_service_new_with(my_library_simpleservice** context, uint32_t some_value);
my_library_ffierror simple_service_new_without(my_library_simpleservice** context);
my_library_ffierror simple_service_new_with_string(my_library_simpleservice** context, const char* ascii);
my_library_ffierror simple_service_new_failing(my_library_simpleservice** context, uint8_t some_value);
my_library_ffierror simple_service_method_result(const my_library_simpleservice* context, uint32_t anon1);
uint32_t simple_service_method_value(const my_library_simpleservice* context, uint32_t x);
void simple_service_method_void(const my_library_simpleservice* context);
void simple_service_method_void2(const my_library_simpleservice* context);
uint8_t simple_service_method_mut_self(my_library_simpleservice* context, my_library_sliceu8 slice);
void simple_service_method_mut_self_void(my_library_simpleservice* context, my_library_slicebool slice);
uint8_t simple_service_method_mut_self_ref(my_library_simpleservice* context, const uint8_t* x, uint8_t* y);
uint8_t simple_service_method_mut_self_ref_slice(my_library_simpleservice* context, const uint8_t* x, uint8_t* y, my_library_sliceu8 slice);
uint8_t simple_service_method_mut_self_ref_slice_limited(my_library_simpleservice* context, const uint8_t* x, uint8_t* y, my_library_sliceu8 slice, my_library_sliceu8 slice2);
my_library_ffierror simple_service_method_mut_self_ffi_error(my_library_simpleservice* context, my_library_slicemutu8 slice);
my_library_ffierror simple_service_method_mut_self_no_error(my_library_simpleservice* context, my_library_slicemutu8 slice);
my_library_sliceu32 simple_service_return_slice(my_library_simpleservice* context);
my_library_slicemutu32 simple_service_return_slice_mut(my_library_simpleservice* context);
const char* simple_service_return_string(my_library_simpleservice* context);
my_library_ffierror simple_service_method_void_ffi_error(my_library_simpleservice* context);
my_library_ffierror simple_service_method_callback(my_library_simpleservice* context, my_library_mycallback callback);
my_library_ffierror simple_service_method_callback_ffi_return(my_library_simpleservice* context, my_library_sumdelegatereturn callback);
my_library_ffierror simple_service_method_callback_ffi_return_with_slice(my_library_simpleservice* context, my_library_sumdelegatereturn callback, my_library_slicei32 input);
my_library_ffierror simple_service_lifetime_destroy(my_library_simpleservicelifetime** context);
my_library_ffierror simple_service_lifetime_new_with(my_library_simpleservicelifetime** context, const uint32_t* some_value);
void simple_service_lifetime_method_lt(my_library_simpleservicelifetime* context, my_library_slicebool slice);
void simple_service_lifetime_method_lt2(my_library_simpleservicelifetime* context, my_library_slicebool slice);
const char* simple_service_lifetime_return_string_accept_slice(my_library_simpleservicelifetime* anon0, my_library_sliceu8 anon1);
my_library_ffierror simple_service_lifetime_method_void_ffi_error(my_library_simpleservicelifetime* context);

#ifdef __cplusplus
}
#endif

#endif /* interoptopus_generated */

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

/// Documented enum.
typedef enum my_library_enum_documented
{
    /// Variant A.
    MY_LIBRARY_ENUM_DOCUMENTED_A = 0,
    /// Variant B.
    MY_LIBRARY_ENUM_DOCUMENTED_B = 1,
    /// Variant B.
    MY_LIBRARY_ENUM_DOCUMENTED_C = 2,
} my_library_enum_documented;

typedef enum my_library_enum_renamed
{
    MY_LIBRARY_ENUM_RENAMED_X = 0,
} my_library_enum_renamed;

typedef struct my_library_generic2u8 my_library_generic2u8;

typedef struct my_library_generic3 my_library_generic3;

typedef struct my_library_generic4 my_library_generic4;

/// Some struct we want to expose as a class.
typedef struct my_library_simple_service my_library_simple_service;

typedef struct my_library_simple_service_lifetime my_library_simple_service_lifetime;

typedef enum my_library_ffi_error
{
    MY_LIBRARY_FFI_ERROR_OK = 0,
    MY_LIBRARY_FFI_ERROR_NULL = 100,
    MY_LIBRARY_FFI_ERROR_PANIC = 200,
    MY_LIBRARY_FFI_ERROR_DELEGATE = 300,
    MY_LIBRARY_FFI_ERROR_FAIL = 400,
} my_library_ffi_error;

typedef struct my_library_boolean_alignment
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
} my_library_boolean_alignment;

typedef struct my_library_extra_typef32
{
    float x;
} my_library_extra_typef32;

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

/// Documented struct.
typedef struct my_library_struct_documented
{
    /// Documented field.
    float x;
} my_library_struct_documented;

typedef struct my_library_struct_renamed
{
    my_library_enum_renamed e;
} my_library_struct_renamed;

typedef struct my_library_tupled
{
    uint8_t x0;
} my_library_tupled;

typedef struct my_library_use_ascii_string_pattern
{
    const char* ascii_string;
} my_library_use_ascii_string_pattern;

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

typedef uint8_t (*my_library_callback_u8)(uint8_t value);

typedef uint32_t (*my_library_my_callback)(uint32_t value);

typedef uint32_t (*my_library_my_callback_namespaced)(uint32_t value);

typedef void (*my_library_sum_delegate1)();

typedef int32_t (*my_library_sum_delegate2)(int32_t x, int32_t y);

typedef my_library_ffi_error (*my_library_sum_delegate_return)(int32_t x, int32_t y);

typedef void (*my_library_sum_delegate_return2)(int32_t x, int32_t y);

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

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_bool
{
    ///Pointer to start of immutable data.
    const uint8_t* data;
    ///Number of elements.
    uint64_t len;
} my_library_slice_bool;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slicei32
{
    ///Pointer to start of immutable data.
    const int32_t* data;
    ///Number of elements.
    uint64_t len;
} my_library_slicei32;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_sliceu32
{
    ///Pointer to start of immutable data.
    const uint32_t* data;
    ///Number of elements.
    uint64_t len;
} my_library_sliceu32;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_sliceu8
{
    ///Pointer to start of immutable data.
    const uint8_t* data;
    ///Number of elements.
    uint64_t len;
} my_library_sliceu8;

///A pointer to an array of data someone else owns which may be modified.
typedef struct my_library_slice_mutu32
{
    ///Pointer to start of mutable data.
    const uint32_t* data;
    ///Number of elements.
    uint64_t len;
} my_library_slice_mutu32;

///A pointer to an array of data someone else owns which may be modified.
typedef struct my_library_slice_mutu8
{
    ///Pointer to start of mutable data.
    const uint8_t* data;
    ///Number of elements.
    uint64_t len;
} my_library_slice_mutu8;

///Option type containing boolean flag and maybe valid data.
typedef struct my_library_option_inner
{
    ///Element that is maybe valid.
    my_library_inner t;
    ///Byte where `1` means element `t` is valid.
    uint8_t is_some;
} my_library_option_inner;

///Option type containing boolean flag and maybe valid data.
typedef struct my_library_option_vec
{
    ///Element that is maybe valid.
    my_library_vec t;
    ///Byte where `1` means element `t` is valid.
    uint8_t is_some;
} my_library_option_vec;

typedef void (*my_library_my_callback_contextual)(const void* context, uint32_t value);

typedef void (*my_library_my_callback_void)(const void* ptr);

typedef struct my_library_delegate_callback_my_callback_contextual
{
    my_library_my_callback_contextual callback;
    const void* context;
} my_library_delegate_callback_my_callback_contextual;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_use_ascii_string_pattern
{
    ///Pointer to start of immutable data.
    const my_library_use_ascii_string_pattern* data;
    ///Number of elements.
    uint64_t len;
} my_library_slice_use_ascii_string_pattern;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_vec
{
    ///Pointer to start of immutable data.
    const my_library_vec* data;
    ///Number of elements.
    uint64_t len;
} my_library_slice_vec;

///A pointer to an array of data someone else owns which may not be modified.
typedef struct my_library_slice_vec3f32
{
    ///Pointer to start of immutable data.
    const my_library_vec3f32* data;
    ///Number of elements.
    uint64_t len;
} my_library_slice_vec3f32;

///A pointer to an array of data someone else owns which may be modified.
typedef struct my_library_slice_mut_vec
{
    ///Pointer to start of mutable data.
    const my_library_vec* data;
    ///Number of elements.
    uint64_t len;
} my_library_slice_mut_vec;

typedef uint8_t (*my_library_callback_ffi_slice)(my_library_sliceu8 slice);

typedef void (*my_library_callback_slice_mut)(my_library_slice_mutu8 slice);

typedef my_library_vec3f32 (*my_library_callback_huge_vec_slice)(my_library_slice_vec3f32 slice);


typedef void (*primitive_void)();

typedef void (*primitive_void2)();

typedef bool (*primitive_bool)(bool);

typedef uint8_t (*primitive_u8)(uint8_t);

typedef uint16_t (*primitive_u16)(uint16_t);

typedef uint32_t (*primitive_u32)(uint32_t);

typedef uint64_t (*primitive_u64)(uint64_t);

typedef int8_t (*primitive_i8)(int8_t);

typedef int16_t (*primitive_i16)(int16_t);

typedef int32_t (*primitive_i32)(int32_t);

typedef int64_t (*primitive_i64)(int64_t);

typedef my_library_boolean_alignment (*boolean_alignment)(my_library_boolean_alignment);

typedef my_library_boolean_alignment (*boolean_alignment2)(bool);

typedef my_library_packed2 (*packed_to_packed1)(my_library_packed1);

typedef int64_t (*many_args_5)(int64_t, int64_t, int64_t, int64_t, int64_t);

typedef int64_t (*many_args_10)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t);

typedef const int64_t* (*ptr)(const int64_t*);

/// # Safety
///
/// Parameter x must point to valid data.
typedef int64_t* (*ptr_mut)(int64_t*);

typedef const const int64_t** (*ptr_ptr)(const const int64_t**);

typedef const int64_t* (*ref_simple)(const int64_t*);

typedef int64_t* (*ref_mut_simple)(int64_t*);

typedef bool (*ref_option)(const int64_t*);

typedef bool (*ref_mut_option)(int64_t*);

typedef my_library_tupled (*tupled)(my_library_tupled);

typedef my_library_ffi_error (*complex_args_1)(my_library_vec3f32, const my_library_tupled*);

typedef uint8_t (*callback)(my_library_fptr_fn_u8_rval_u8, uint8_t);

typedef uint32_t (*generic_1a)(my_library_genericu32, my_library_phantomu8);

typedef uint8_t (*generic_1b)(my_library_genericu8, my_library_phantomu8);

typedef uint8_t (*generic_1c)(const my_library_genericu8*, const my_library_genericu8*);

typedef uint8_t (*generic_2)(const my_library_generic2u8*);

typedef uint8_t (*generic_3)(const my_library_generic3*);

typedef uint8_t (*generic_4)(const my_library_generic4*);

typedef uint8_t (*array_1)(my_library_array);

/// This function has documentation.
typedef my_library_enum_documented (*documented)(my_library_struct_documented);

typedef my_library_vec1 (*ambiguous_1)(my_library_vec1);

typedef my_library_vec2 (*ambiguous_2)(my_library_vec2);

typedef bool (*ambiguous_3)(my_library_vec1, my_library_vec2);

typedef my_library_vec (*namespaced_type)(my_library_vec);

typedef my_library_option_vec (*namespaced_inner_option)(my_library_option_vec);

typedef my_library_slice_vec (*namespaced_inner_slice)(my_library_slice_vec);

typedef my_library_slice_mut_vec (*namespaced_inner_slice_mut)(my_library_slice_mut_vec);

typedef my_library_ffi_error (*panics)();

typedef my_library_enum_renamed (*renamed)(my_library_struct_renamed);

typedef void (*sleep)(uint64_t);

typedef bool (*weird_1)(my_library_weird1u32, my_library_weird2u8);

typedef void (*visibility)(my_library_visibility1, my_library_visibility2);

typedef my_library_tupled (*repr_transparent)(my_library_tupled, const my_library_tupled*);

typedef uint32_t (*pattern_ascii_pointer_1)(const char*);

typedef const char* (*pattern_ascii_pointer_2)();

typedef uint32_t (*pattern_ascii_pointer_len)(const char*, my_library_use_ascii_string_pattern);

typedef my_library_slice_use_ascii_string_pattern (*pattern_ascii_pointer_return_slice)();

typedef uint32_t (*pattern_ffi_slice_1)(my_library_sliceu32);

typedef uint32_t (*pattern_ffi_slice_1b)(my_library_slice_mutu32);

typedef my_library_vec3f32 (*pattern_ffi_slice_2)(my_library_slice_vec3f32, int32_t);

typedef void (*pattern_ffi_slice_3)(my_library_slice_mutu8, my_library_callback_slice_mut);

typedef void (*pattern_ffi_slice_4)(my_library_sliceu8, my_library_slice_mutu8);

typedef void (*pattern_ffi_slice_5)(const my_library_sliceu8*, my_library_slice_mutu8*);

typedef void (*pattern_ffi_slice_6)(const my_library_slice_mutu8*, my_library_callback_u8);

typedef uint8_t (*pattern_ffi_slice_delegate)(my_library_callback_ffi_slice);

typedef my_library_vec3f32 (*pattern_ffi_slice_delegate_huge)(my_library_callback_huge_vec_slice);

typedef my_library_option_inner (*pattern_ffi_option_1)(my_library_option_inner);

typedef my_library_inner (*pattern_ffi_option_2)(my_library_option_inner);

typedef uint8_t (*pattern_ffi_bool)(uint8_t);

typedef char (*pattern_ffi_cchar)(char);

typedef const char* (*pattern_ffi_cchar_const_pointer)(const char*);

typedef char* (*pattern_ffi_cchar_mut_pointer)(char*);

typedef uint64_t (*pattern_api_guard)();

typedef uint32_t (*pattern_callback_1)(my_library_my_callback, uint32_t);

typedef my_library_my_callback_void (*pattern_callback_2)(my_library_my_callback_void);

typedef void (*pattern_callback_3)(my_library_delegate_callback_my_callback_contextual, uint32_t);

typedef uint32_t (*pattern_callback_4)(my_library_my_callback_namespaced, uint32_t);

typedef my_library_sum_delegate1 (*pattern_callback_5)();

typedef my_library_sum_delegate2 (*pattern_callback_6)();

typedef my_library_ffi_error (*pattern_callback_7)(my_library_sum_delegate_return, my_library_sum_delegate_return2, int32_t, int32_t, int32_t*);

typedef void (*pattern_surrogates_1)(my_library_local, my_library_container*);

/// Destroys the given instance.
///
/// # Safety
///
/// The passed parameter MUST have been created with the corresponding init function;
/// passing any other value results in undefined behavior.
typedef my_library_ffi_error (*simple_service_destroy)(my_library_simple_service**);

/// The constructor must return a `Result<Self, Error>`.
typedef my_library_ffi_error (*simple_service_new_with)(my_library_simple_service**, uint32_t);

typedef my_library_ffi_error (*simple_service_new_without)(my_library_simple_service**);

typedef my_library_ffi_error (*simple_service_new_with_string)(my_library_simple_service**, const char*);

typedef my_library_ffi_error (*simple_service_new_failing)(my_library_simple_service**, uint8_t);

/// Methods returning a Result<(), _> are the default and do not
/// need annotations.
typedef my_library_ffi_error (*simple_service_method_result)(const my_library_simple_service*, uint32_t);

typedef uint32_t (*simple_service_method_value)(const my_library_simple_service*, uint32_t);

/// This method should be documented.
///
/// Multiple lines.
typedef void (*simple_service_method_void)(const my_library_simple_service*);

/// Regular void functions don't need an annotation.
typedef void (*simple_service_method_void2)(const my_library_simple_service*);

typedef uint8_t (*simple_service_method_mut_self)(my_library_simple_service*, my_library_sliceu8);

/// Single line.
typedef void (*simple_service_method_mut_self_void)(my_library_simple_service*, my_library_slice_bool);

typedef uint8_t (*simple_service_method_mut_self_ref)(my_library_simple_service*, const uint8_t*, uint8_t*);

typedef uint8_t (*simple_service_method_mut_self_ref_slice)(my_library_simple_service*, const uint8_t*, uint8_t*, my_library_sliceu8);

typedef uint8_t (*simple_service_method_mut_self_ref_slice_limited)(my_library_simple_service*, const uint8_t*, uint8_t*, my_library_sliceu8, my_library_sliceu8);

typedef my_library_ffi_error (*simple_service_method_mut_self_ffi_error)(my_library_simple_service*, my_library_slice_mutu8);

typedef my_library_ffi_error (*simple_service_method_mut_self_no_error)(my_library_simple_service*, my_library_slice_mutu8);

/// Warning, you _must_ discard the returned slice object before calling into this service
/// again, as otherwise undefined behavior might happen.
typedef my_library_sliceu32 (*simple_service_return_slice)(my_library_simple_service*);

/// Warning, you _must_ discard the returned slice object before calling into this service
/// again, as otherwise undefined behavior might happen.
typedef my_library_slice_mutu32 (*simple_service_return_slice_mut)(my_library_simple_service*);

/// This function has no panic safeguards. It will be a bit faster to
/// call, but if it panics your host app will be in an undefined state.
typedef const char* (*simple_service_return_string)(my_library_simple_service*);

typedef my_library_ffi_error (*simple_service_method_void_ffi_error)(my_library_simple_service*);

typedef my_library_ffi_error (*simple_service_method_callback)(my_library_simple_service*, my_library_my_callback);

typedef my_library_ffi_error (*simple_service_method_callback_ffi_return)(my_library_simple_service*, my_library_sum_delegate_return);

typedef my_library_ffi_error (*simple_service_method_callback_ffi_return_with_slice)(my_library_simple_service*, my_library_sum_delegate_return, my_library_slicei32);

/// Destroys the given instance.
///
/// # Safety
///
/// The passed parameter MUST have been created with the corresponding init function;
/// passing any other value results in undefined behavior.
typedef my_library_ffi_error (*simple_service_lifetime_destroy)(my_library_simple_service_lifetime**);

typedef my_library_ffi_error (*simple_service_lifetime_new_with)(my_library_simple_service_lifetime**, const uint32_t*);

typedef void (*simple_service_lifetime_method_lt)(my_library_simple_service_lifetime*, my_library_slice_bool);

typedef void (*simple_service_lifetime_method_lt2)(my_library_simple_service_lifetime*, my_library_slice_bool);

typedef const char* (*simple_service_lifetime_return_string_accept_slice)(my_library_simple_service_lifetime*, my_library_sliceu8);

typedef my_library_ffi_error (*simple_service_lifetime_method_void_ffi_error)(my_library_simple_service_lifetime*);


#ifdef __cplusplus
}
#endif

#endif /* interoptopus_generated */

mod common;
mod ffi;
mod thirdparty;

interoptopus::inventory_function!(
    ffi_inventory,
    [ffi::THE_MAGIC_CONSTANT],
    [
        ffi::example_api_version,
        ffi::example_create_context,
        ffi::example_destroy_context,
        ffi::example_print_score,
        ffi::example_return_score,
        ffi::example_update_score_by_callback,
        ffi::example_write_foreign_type,
        ffi::example_double_super_complex_entity
    ]
);

// fn fff() {
//     let n = stringify!(X);
//     let x = PrimitiveValue::from(X);
// }
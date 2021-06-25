// Automatically generated by Interoptopus.

using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using My.Company;
using My.Company.Common;

namespace My.Company
{
    public static partial class Interop
    {
        public const string NativeLib = "interoptopus_reference_project";

        public const byte U8 = (byte) 255;

        public const float F32_MIN_POSITIVE = (float) 0.000000000000000000000000000000000000011754944;

        public const int COMPUTED_I32 = (int) -2147483647;


        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_void")]
        public static extern void primitive_void();

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_void2")]
        public static extern void primitive_void2();

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_bool")]
        public static extern bool primitive_bool(bool x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_u8")]
        public static extern byte primitive_u8(byte x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_u16")]
        public static extern ushort primitive_u16(ushort x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_u32")]
        public static extern uint primitive_u32(uint x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_u64")]
        public static extern ulong primitive_u64(ulong x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_i8")]
        public static extern sbyte primitive_i8(sbyte x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_i16")]
        public static extern short primitive_i16(short x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_i32")]
        public static extern int primitive_i32(int x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "primitive_i64")]
        public static extern long primitive_i64(long x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ptr")]
        public static extern IntPtr ptr(ref long x);

        /// # Safety
        /// 
        /// Parameter x must point to valid data.
        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ptr_mut")]
        public static extern IntPtr ptr_mut(out long x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ptr_ptr")]
        public static extern IntPtr ptr_ptr(ref IntPtr x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ref_simple")]
        public static extern IntPtr ref_simple(ref long x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ref_mut_simple")]
        public static extern IntPtr ref_mut_simple(out long x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ref_option")]
        public static extern bool ref_option(ref long x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ref_mut_option")]
        public static extern bool ref_mut_option(out long x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "tupled")]
        public static extern Tupled tupled(Tupled x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "complex_args_1")]
        public static extern FFIError complex_args_1(Vec3f32 _a, ref Empty _b);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "complex_args_2")]
        public static extern IntPtr complex_args_2(SomeForeignType _cmplx);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "callback")]
        public static extern byte callback(InteropDelegate_fn_u8_rval_u8 callback, byte value);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "generic_1")]
        public static extern uint generic_1(Genericu32 x, Phantomu8 _y);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "generic_2")]
        public static extern byte generic_2(Genericu8 x, Phantomu8 _y);

        /// This function has documentation.
        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "documented")]
        public static extern EnumDocumented documented(StructDocumented _x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ambiguous_1")]
        public static extern Vec1 ambiguous_1(Vec1 x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ambiguous_2")]
        public static extern Vec2 ambiguous_2(Vec2 x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "ambiguous_3")]
        public static extern bool ambiguous_3(Vec1 x, Vec2 y);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "namespaced_type")]
        public static extern Vec namespaced_type(Vec x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_ascii_pointer_1")]
        public static extern uint pattern_ascii_pointer_1(string x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_ascii_pointer_len")]
        public static extern uint pattern_ascii_pointer_len(string x, UseAsciiStringPattern y);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_ffi_slice_1")]
        public static extern uint pattern_ffi_slice_1(FFISliceu32 ffi_slice);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_ffi_slice_2")]
        public static extern Vec3f32 pattern_ffi_slice_2(FFISliceVec3f32 ffi_slice, int i);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_ffi_slice_delegate")]
        public static extern byte pattern_ffi_slice_delegate(InteropDelegate_fn_FFISliceu8_rval_u8 callback);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_ffi_option_1")]
        public static extern FFIOptionInner pattern_ffi_option_1(FFIOptionInner ffi_slice);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_ffi_option_2")]
        public static extern Inner pattern_ffi_option_2(FFIOptionInner ffi_slice);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_service_create")]
        public static extern FFIError pattern_service_create(out IntPtr context_ptr, uint value);

        /// # Safety
        /// 
        /// This function may only be called with a context returned by a succeeding `pattern_service_create`.
        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_service_destroy")]
        public static extern FFIError pattern_service_destroy(out IntPtr context_ptr);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_service_method")]
        public static extern uint pattern_service_method(IntPtr context);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_service_method_success_enum_ok")]
        public static extern FFIError pattern_service_method_success_enum_ok(IntPtr _context);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "pattern_service_method_success_enum_fail")]
        public static extern FFIError pattern_service_method_success_enum_fail(IntPtr _context);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "simple_service_create")]
        public static extern FFIError simple_service_create(out IntPtr context_ptr, uint x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "simple_service_destroy")]
        public static extern FFIError simple_service_destroy(out IntPtr context_ptr);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "simple_service_result")]
        public static extern FFIError simple_service_result(IntPtr context_ptr, uint x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "simple_service_value")]
        public static extern uint simple_service_value(IntPtr context_ptr, uint x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "simple_service_mut_self")]
        public static extern uint simple_service_mut_self(IntPtr context_ptr, uint x);

        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "simple_service_void")]
        public static extern void simple_service_void(IntPtr context_ptr);

        /// An extra exposed method.
        [DllImport(NativeLib, CallingConvention = CallingConvention.Cdecl, EntryPoint = "simple_service_extra_method")]
        public static extern uint simple_service_extra_method(IntPtr _context);

    }

    /// Documented enum.
    public enum EnumDocumented
    {
        /// Variant A.
        A = 0,
        /// Variant B.
        B = 1,
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Empty
    {
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Genericu32
    {
        public IntPtr x;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Genericu8
    {
        public IntPtr x;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Inner
    {
        public float x;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Phantomu8
    {
        public uint x;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct SomeForeignType
    {
        public uint x;
    }

    /// Documented struct.
    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct StructDocumented
    {
        /// Documented field.
        public float x;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Tupled
    {
        public byte x0;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct UseAsciiStringPattern
    {
        public string ascii_string;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Vec1
    {
        public float x;
        public float y;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Vec2
    {
        public double x;
        public double z;
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct Vec3f32
    {
        public float x;
        public float y;
        public float z;
    }

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate byte InteropDelegate_fn_u8_rval_u8(byte x0);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate byte InteropDelegate_fn_FFISliceu8_rval_u8(FFISliceu8 x0);

    public enum FFIError
    {
        Ok = 0,
        Null = 100,
        Fail = 200,
    }

    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct FFISliceVec3f32
    {
        public IntPtr data;
        public ulong len;
    }

    public partial struct FFISliceVec3f32 : IEnumerable<Vec3f32>
    {
        public Vec3f32 this[int i]
        {
            get
            {
                var size = Marshal.SizeOf(typeof(Vec3f32));
                var ptr = new IntPtr(data.ToInt64() + i * size);
                return Marshal.PtrToStructure<Vec3f32>(ptr);
            }
        }
        public Vec3f32[] Copied
        {
            get
            {
                var rval = new Vec3f32[len];
                for (var i = 0; i < (int) len; i++) {
                    rval[i] = this[i];
                }
                return rval;
            }
        }
        public int Count
        {
            get
            {
                return (int) len;
            }
        }
        public IEnumerator<Vec3f32> GetEnumerator()
        {
            for (int i = 0; i < (int)len; ++i)
            {
                yield return this[i];
            }
        }
        IEnumerator IEnumerable.GetEnumerator()
        {
            return this.GetEnumerator();
        }
    }


    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct FFISliceu32
    {
        public IntPtr data;
        public ulong len;
    }

    public partial struct FFISliceu32 : IEnumerable<uint>
    {
        public uint this[int i]
        {
            get
            {
                var size = Marshal.SizeOf(typeof(uint));
                var ptr = new IntPtr(data.ToInt64() + i * size);
                return Marshal.PtrToStructure<uint>(ptr);
            }
        }
        public uint[] Copied
        {
            get
            {
                var rval = new uint[len];
                for (var i = 0; i < (int) len; i++) {
                    rval[i] = this[i];
                }
                return rval;
            }
        }
        public int Count
        {
            get
            {
                return (int) len;
            }
        }
        public IEnumerator<uint> GetEnumerator()
        {
            for (int i = 0; i < (int)len; ++i)
            {
                yield return this[i];
            }
        }
        IEnumerator IEnumerable.GetEnumerator()
        {
            return this.GetEnumerator();
        }
    }


    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct FFISliceu8
    {
        public IntPtr data;
        public ulong len;
    }

    public partial struct FFISliceu8 : IEnumerable<byte>
    {
        public byte this[int i]
        {
            get
            {
                var size = Marshal.SizeOf(typeof(byte));
                var ptr = new IntPtr(data.ToInt64() + i * size);
                return Marshal.PtrToStructure<byte>(ptr);
            }
        }
        public byte[] Copied
        {
            get
            {
                var rval = new byte[len];
                for (var i = 0; i < (int) len; i++) {
                    rval[i] = this[i];
                }
                return rval;
            }
        }
        public int Count
        {
            get
            {
                return (int) len;
            }
        }
        public IEnumerator<byte> GetEnumerator()
        {
            for (int i = 0; i < (int)len; ++i)
            {
                yield return this[i];
            }
        }
        IEnumerator IEnumerable.GetEnumerator()
        {
            return this.GetEnumerator();
        }
    }


    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public partial struct FFIOptionInner
    {
        public Inner t;
        public byte is_some;
    }


    /// This can also be used for the `class` pattern.
    public partial class Context : IDisposable
    {
        private IntPtr _context;
        public Context(uint value)
        {
            var rval = Interop.pattern_service_create(out _context ,  value);
            if (rval != FFIError.Ok)
            {
                throw new Exception("Something went wrong");
            }
        }

        public void Dispose()
        {
            var rval = Interop.pattern_service_destroy(out _context );
            if (rval != FFIError.Ok)
            {
                throw new Exception("Something went wrong");
            }
        }

        public uint Method()
        {
            return Interop.pattern_service_method(_context );
        }

        public void MethodSuccessEnumOk()
        {
            var rval = Interop.pattern_service_method_success_enum_ok(_context );
            if (rval != FFIError.Ok)
            {
                throw new Exception("Something went wrong");
            }
        }

        public void MethodSuccessEnumFail()
        {
            var rval = Interop.pattern_service_method_success_enum_fail(_context );
            if (rval != FFIError.Ok)
            {
                throw new Exception("Something went wrong");
            }
        }

    }


    public partial class SimpleService : IDisposable
    {
        private IntPtr _context;
        public SimpleService(uint x)
        {
            var rval = Interop.simple_service_create(out _context ,  x);
            if (rval != FFIError.Ok)
            {
                throw new Exception("Something went wrong");
            }
        }

        public void Dispose()
        {
            var rval = Interop.simple_service_destroy(out _context );
            if (rval != FFIError.Ok)
            {
                throw new Exception("Something went wrong");
            }
        }

        public void Result(uint x)
        {
            var rval = Interop.simple_service_result(_context ,  x);
            if (rval != FFIError.Ok)
            {
                throw new Exception("Something went wrong");
            }
        }

        public uint Value(uint x)
        {
            return Interop.simple_service_value(_context ,  x);
        }

        public uint MutSelf(uint x)
        {
            return Interop.simple_service_mut_self(_context ,  x);
        }

        public void Void()
        {
            Interop.simple_service_void(_context );
        }

        /// An extra exposed method.
        public uint ExtraMethod()
        {
            return Interop.simple_service_extra_method(_context );
        }

    }


}

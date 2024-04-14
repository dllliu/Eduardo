#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>
struct List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// NAudio.Wave.Mp3Index[]
struct Mp3IndexU5BU5D_t94D02B0535BA4DE2F8EF3E6CD88BAE0F9B94EA2F;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
// System.Int32[,,]
struct Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D;
// NAudio.Wave.AcmMp3FrameDecompressor
struct AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A;
// NAudio.Wave.Compression.AcmStream
struct AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7;
// NAudio.Wave.Compression.AcmStreamHeader
struct AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78;
// NAudio.Wave.Compression.AcmStreamHeaderStruct
struct AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5;
// NAudio.Wave.AdpcmWaveFormat
struct AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// NAudio.Wave.Gsm610WaveFormat
struct Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB;
// System.Runtime.InteropServices.ICustomMarshaler
struct ICustomMarshaler_t6D46EF4FA72FD9690553E779A7E65CA1734ED5D2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// NAudio.Wave.IMp3FrameDecompressor
struct IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223;
// NAudio.Wave.ISampleProvider
struct ISampleProvider_tC0E024BCC6A07C2D64E785D8AD8257A1E9500D33;
// NAudio.Wave.IWaveProvider
struct IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E;
// NAudio.Wave.Id3v2Tag
struct Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A;
// System.IO.InvalidDataException
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// NAudio.MmException
struct MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE;
// NAudio.Wave.Mp3FileReader
struct Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB;
// NAudio.Wave.Mp3Frame
struct Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F;
// NAudio.Wave.Mp3Index
struct Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E;
// NAudio.Wave.Mp3WaveFormat
struct Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// NAudio.Wave.SampleProviders.Pcm16BitToSampleProvider
struct Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1;
// NAudio.Wave.SampleProviders.Pcm24BitToSampleProvider
struct Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9;
// NAudio.Wave.SampleProviders.Pcm32BitToSampleProvider
struct Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35;
// NAudio.Wave.SampleProviders.Pcm8BitToSampleProvider
struct Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// NAudio.Wave.SampleProviders.SampleProviderConverterBase
struct SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NAudio.Wave.Compression.WaveFilter
struct WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75;
// NAudio.Wave.WaveFormat
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4;
// NAudio.Wave.WaveFormatCustomMarshaler
struct WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E;
// NAudio.Wave.WaveFormatExtensible
struct WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809;
// NAudio.Wave.WaveFormatExtraData
struct WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C;
// NAudio.Wave.WaveStream
struct WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34;
// NAudio.Wave.SampleProviders.WaveToSampleProvider
struct WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01;
// NAudio.Wave.SampleProviders.WaveToSampleProvider64
struct WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385;
// NAudio.Wave.XingHeader
struct XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66;
// NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder
struct FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelMode_t26A6ECD0CC32405EE4CB128A0EF25B2AE3669020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MmResult_t9AE6607FB7ADAAB16461494D60F3C65DA7BA8D58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveFormatEncoding_tA15F20ECDFB7BB2DBC78F0719622544C6578A734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____092DE122C0E518AB6C965A67F2A6700C5C154012_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____0E8DA6E28C905EAE0C6E8EC68029638F77B7F0E7_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____82564237E57F0539E27547E57C418093CE731C12_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____BA3AD38225074714E59E5C141A634AD9B79DCEAC_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____BCF14D7DFE00EC65ACE5BE991ECCBC2ACB9FB2B6_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____E9A0235C10033F675F5D2FB14F1C1B682E505042_5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7995F0B43143612EA58B49BE72D9875CEE0085;
IL2CPP_EXTERN_C String_t* _stringLiteral14601C6603DF42FCFDBD75DBC7CBE0782C230B62;
IL2CPP_EXTERN_C String_t* _stringLiteral22B8948CFE88CD4B2ECBE84F16025EA213BCBA10;
IL2CPP_EXTERN_C String_t* _stringLiteral264CF0E01264A0CFE021D0089A6E299A62781A41;
IL2CPP_EXTERN_C String_t* _stringLiteral35C63B367C70822079B0A34A6CB542E5D911727E;
IL2CPP_EXTERN_C String_t* _stringLiteral4038FF8D4C1012E66E2B2D332E0CAB0D149AD9FF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FB3B17CEC619C238633561C3FAE9D8ADED19582;
IL2CPP_EXTERN_C String_t* _stringLiteral52601ED7F00B67705F4E274C1B7F7327F4BA4B0D;
IL2CPP_EXTERN_C String_t* _stringLiteral570CF29C91115E1C5021F1408BB52855091F4D23;
IL2CPP_EXTERN_C String_t* _stringLiteral5BCC7BA6B4C68F9672170679E147D2CB17148A74;
IL2CPP_EXTERN_C String_t* _stringLiteral64641FAF30E157CBE0B17F427765DDDD68C2F6DD;
IL2CPP_EXTERN_C String_t* _stringLiteral6ACBB891617528C0FE404A467216405A0785F126;
IL2CPP_EXTERN_C String_t* _stringLiteral70581AC0E3E29971244AE894FA0E32D5BB2E7B11;
IL2CPP_EXTERN_C String_t* _stringLiteral809A1B87298692B3EA923C210C9BF898E6769B53;
IL2CPP_EXTERN_C String_t* _stringLiteral86D5699BBCD35D3447AA366922C30F7260FC7FCB;
IL2CPP_EXTERN_C String_t* _stringLiteral910B5C6D6DF26A0DEA7365E20334234847E8C426;
IL2CPP_EXTERN_C String_t* _stringLiteralA343E90DF0B1D0B8EE396B95DCCC100DCB8B98A4;
IL2CPP_EXTERN_C String_t* _stringLiteralAEFF043AD58E2FE7AD2B6B2F35F216BB897EEFEF;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFD3634540B86B2344EAF1AEE8434D5049A2C25;
IL2CPP_EXTERN_C String_t* _stringLiteralC4E3A62A37608580A59C7331E4BFECBBC68BD8BC;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC1D6CA9F51D402C7445BE154CBC5EBB935D523;
IL2CPP_EXTERN_C String_t* _stringLiteralD1AB6616BF9578984C009BCD6A188E983662EB37;
IL2CPP_EXTERN_C String_t* _stringLiteralD419BA77CD464BAB49740A2BDDCF3D0962348876;
IL2CPP_EXTERN_C String_t* _stringLiteralDC0D607C0460F90BB1884E8FF104443022FD565C;
IL2CPP_EXTERN_C String_t* _stringLiteralFC9846D11C7ACF2D7160C3DBA297059DD352D7F4;
IL2CPP_EXTERN_C String_t* _stringLiteralFF023DAA5214383C785FC3F59F06098D3E538DEE;
IL2CPP_EXTERN_C const RuntimeMethod* AcmMp3FrameDecompressor_DecompressFrame_m9B5344AF409D017EAE8F35B03522F50DDD3F4730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AcmStreamHeader_Unprepare_mA7C33BB2C4430DBEBD38B0566314A5B56C2076A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AcmStream_Dispose_m14C6B739BBCA45821207285817950C8EC9BB1632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Id3v2Tag__ctor_m3E216245F94177481120C86C748E11E7199D7DBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCDA1C1C94555441ED573D3962A9A992500FA0A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34ED4C1C8BB150DEE0B68C0CF52DED6F404BBCA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6810DF9B292E01ECED33DE12CDDBD41B00171725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalHelpers_PtrToStructure_TisAdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_m2958B92153AA4642A00EF144B0E2D5145029D91F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalHelpers_PtrToStructure_TisGsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_mCBE400732A977199A9FA3868D2F445C4FB131186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalHelpers_PtrToStructure_TisWaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_mDBAD911BED518C3E00F5D0545F45F1F466EB74AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalHelpers_PtrToStructure_TisWaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_m4D3F82489D8E7B30EDC554EBE52ED470D7096566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalHelpers_PtrToStructure_TisWaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_mE8C19AD04D158A8E2AF2FEDFF7A13E939D01C4A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mp3FileReader_CreateAcmFrameDecompressor_mC644C52D32260353FA7C7E4363B4136B0E5A3C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mp3FileReader_ValidateFrameFormat_m8F97E9002C867FCDA38B1019EFA351F378F4CFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mp3FileReader__ctor_m4C39DBDD5ACDE0E0ECECC44736F221017DC87CC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mp3Frame_LoadFromStream_m569B4189A98416A467920E4CC1EEFC7C171E2146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleProviderConverters_ConvertWaveProviderIntoSampleProvider_m25E5FA36E87346F19461E4C223533D615C53AE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormatCustomMarshaler_GetNativeDataSize_mE269C85D96CEA9AE0852FC859355AACD18A09522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat__ctor_m950E9AF47FEFD410899461E608FA502BFC2810B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveStream_SetLength_mBC420BE4232EF88D4B95A2CF430E2D0402F6D2AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveStream_Write_m88515B0CE7A9907402C93FB4C2191B7BC2B5EA6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveToSampleProvider64__ctor_mDEEC490E2897AE5BD27C8802FAB1FE5FF670A2B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveToSampleProvider__ctor_m5016CDB720B13AFFCF064F69F12663D0A18CA2BA_RuntimeMethod_var;
struct AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5;;
struct AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke;
struct AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75;;
struct WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke;
struct WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke;;
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4;;
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke;
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
struct Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t38B56A43005DA3D7F1485DAB15A11DAFF58C904D 
{
};

// System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>
struct List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Mp3IndexU5BU5D_t94D02B0535BA4DE2F8EF3E6CD88BAE0F9B94EA2F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F  : public RuntimeObject
{
};

// NAudio.Wave.Compression.AcmInterop
struct AcmInterop_t6233E85496E1930CA32D2DC88082707332C7798B  : public RuntimeObject
{
};

// NAudio.Wave.AcmMp3FrameDecompressor
struct AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A  : public RuntimeObject
{
	// NAudio.Wave.Compression.AcmStream NAudio.Wave.AcmMp3FrameDecompressor::conversionStream
	AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* ___conversionStream_0;
	// NAudio.Wave.WaveFormat NAudio.Wave.AcmMp3FrameDecompressor::pcmFormat
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___pcmFormat_1;
	// System.Boolean NAudio.Wave.AcmMp3FrameDecompressor::disposed
	bool ___disposed_2;
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// NAudio.Utils.BufferHelpers
struct BufferHelpers_tD7E28532072BE87BDFC72C042164AEAD2CB6C30C  : public RuntimeObject
{
};

// NAudio.Wave.Id3v2Tag
struct Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A  : public RuntimeObject
{
	// System.Int64 NAudio.Wave.Id3v2Tag::tagStartPosition
	int64_t ___tagStartPosition_0;
	// System.Int64 NAudio.Wave.Id3v2Tag::tagEndPosition
	int64_t ___tagEndPosition_1;
	// System.Byte[] NAudio.Wave.Id3v2Tag::rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NAudio.Utils.MarshalHelpers
struct MarshalHelpers_tF3894C02AD674DDB8DBDE3F50B2A2059E3578F82  : public RuntimeObject
{
};

// NAudio.Wave.Mp3Index
struct Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E  : public RuntimeObject
{
	// System.Int64 NAudio.Wave.Mp3Index::<FilePosition>k__BackingField
	int64_t ___U3CFilePositionU3Ek__BackingField_0;
	// System.Int64 NAudio.Wave.Mp3Index::<SamplePosition>k__BackingField
	int64_t ___U3CSamplePositionU3Ek__BackingField_1;
	// System.Int32 NAudio.Wave.Mp3Index::<SampleCount>k__BackingField
	int32_t ___U3CSampleCountU3Ek__BackingField_2;
	// System.Int32 NAudio.Wave.Mp3Index::<ByteCount>k__BackingField
	int32_t ___U3CByteCountU3Ek__BackingField_3;
};

// NAudio.Wave.SampleProviders.SampleProviderConverterBase
struct SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E  : public RuntimeObject
{
	// NAudio.Wave.IWaveProvider NAudio.Wave.SampleProviders.SampleProviderConverterBase::source
	RuntimeObject* ___source_0;
	// NAudio.Wave.WaveFormat NAudio.Wave.SampleProviders.SampleProviderConverterBase::waveFormat
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___waveFormat_1;
	// System.Byte[] NAudio.Wave.SampleProviders.SampleProviderConverterBase::sourceBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sourceBuffer_2;
};

// NAudio.Wave.SampleProviders.SampleProviderConverters
struct SampleProviderConverters_t508E5F4A0DC51479342DD2F1A5420688B0607C1D  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// NAudio.Wave.WaveExtensionMethods
struct WaveExtensionMethods_t4F5AD5D6D75027B000E3D6A2AD3FD2D7ADB97838  : public RuntimeObject
{
};

// NAudio.Wave.WaveFormatCustomMarshaler
struct WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E  : public RuntimeObject
{
};

// NAudio.Wave.XingHeader
struct XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66  : public RuntimeObject
{
	// System.Int32 NAudio.Wave.XingHeader::vbrScale
	int32_t ___vbrScale_1;
	// System.Int32 NAudio.Wave.XingHeader::startOffset
	int32_t ___startOffset_2;
	// System.Int32 NAudio.Wave.XingHeader::endOffset
	int32_t ___endOffset_3;
	// System.Int32 NAudio.Wave.XingHeader::tocOffset
	int32_t ___tocOffset_4;
	// System.Int32 NAudio.Wave.XingHeader::framesOffset
	int32_t ___framesOffset_5;
	// System.Int32 NAudio.Wave.XingHeader::bytesOffset
	int32_t ___bytesOffset_6;
	// NAudio.Wave.Mp3Frame NAudio.Wave.XingHeader::frame
	Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___frame_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// NAudio.Wave.SampleProviders.Pcm16BitToSampleProvider
struct Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1  : public SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E
{
};

// NAudio.Wave.SampleProviders.Pcm24BitToSampleProvider
struct Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9  : public SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E
{
};

// NAudio.Wave.SampleProviders.Pcm32BitToSampleProvider
struct Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35  : public SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E
{
};

// NAudio.Wave.SampleProviders.Pcm8BitToSampleProvider
struct Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF  : public SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// NAudio.Wave.SampleProviders.WaveToSampleProvider
struct WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01  : public SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E
{
};

// NAudio.Wave.SampleProviders.WaveToSampleProvider64
struct WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385  : public SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t573CB5FA24C9F83113106657402F1B9B7B676884 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t573CB5FA24C9F83113106657402F1B9B7B676884__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t7DFF2EFDCE254CFABACD3B896BD1A6260DE190DB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t7DFF2EFDCE254CFABACD3B896BD1A6260DE190DB__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tCCA133B092BAA6877A2873ACC1DD0767D0A0D2A7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tCCA133B092BAA6877A2873ACC1DD0767D0A0D2A7__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct __StaticArrayInitTypeSizeU3D360_t7F461C576ACFB26A9F5F2292AC04BF9AAC45A568 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_t7F461C576ACFB26A9F5F2292AC04BF9AAC45A568__padding[360];
	};
};

// NAudio.Wave.Compression.AcmFormatSuggestFlags
struct AcmFormatSuggestFlags_tA1238D9458DFC04EFF6778065F42F2FD05A1B4B6 
{
	// System.Int32 NAudio.Wave.Compression.AcmFormatSuggestFlags::value__
	int32_t ___value___2;
};

// NAudio.Wave.Compression.AcmStream
struct AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7  : public RuntimeObject
{
	// System.IntPtr NAudio.Wave.Compression.AcmStream::streamHandle
	intptr_t ___streamHandle_0;
	// System.IntPtr NAudio.Wave.Compression.AcmStream::driverHandle
	intptr_t ___driverHandle_1;
	// NAudio.Wave.Compression.AcmStreamHeader NAudio.Wave.Compression.AcmStream::streamHeader
	AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* ___streamHeader_2;
	// NAudio.Wave.WaveFormat NAudio.Wave.Compression.AcmStream::sourceFormat
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___sourceFormat_3;
};

// NAudio.Wave.AcmStreamConvertFlags
struct AcmStreamConvertFlags_t9E04976BB9FF5723E87517ED58DEA90B4D95249E 
{
	// System.Int32 NAudio.Wave.AcmStreamConvertFlags::value__
	int32_t ___value___2;
};

// NAudio.Wave.Compression.AcmStreamHeaderStatusFlags
struct AcmStreamHeaderStatusFlags_t4CB0501223789957828B9B950B142F976B31177F 
{
	// System.Int32 NAudio.Wave.Compression.AcmStreamHeaderStatusFlags::value__
	int32_t ___value___2;
};

// NAudio.Wave.Compression.AcmStreamOpenFlags
struct AcmStreamOpenFlags_tA811E0E65955FCCBF94FC0C00A74BF2EBCB6E181 
{
	// System.Int32 NAudio.Wave.Compression.AcmStreamOpenFlags::value__
	int32_t ___value___2;
};

// NAudio.Wave.Compression.AcmStreamSizeFlags
struct AcmStreamSizeFlags_tDAB0966F76DFC775432773DDC13A026F273ABAAF 
{
	// System.Int32 NAudio.Wave.Compression.AcmStreamSizeFlags::value__
	int32_t ___value___2;
};

// NAudio.Wave.ChannelMode
struct ChannelMode_t26A6ECD0CC32405EE4CB128A0EF25B2AE3669020 
{
	// System.Int32 NAudio.Wave.ChannelMode::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileAccess
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;
};

// NAudio.MmResult
struct MmResult_t9AE6607FB7ADAAB16461494D60F3C65DA7BA8D58 
{
	// System.Int32 NAudio.MmResult::value__
	int32_t ___value___2;
};

// NAudio.Wave.Mp3WaveFormatFlags
struct Mp3WaveFormatFlags_tF6984AB7DA81ED523252185ACC3FE4F6D75E7821 
{
	// System.Int32 NAudio.Wave.Mp3WaveFormatFlags::value__
	int32_t ___value___2;
};

// NAudio.Wave.Mp3WaveFormatId
struct Mp3WaveFormatId_tDAF3B36C158AE0BC6B8F85DA75259A988351F7A0 
{
	// System.UInt16 NAudio.Wave.Mp3WaveFormatId::value__
	uint16_t ___value___2;
};

// NAudio.Wave.MpegLayer
struct MpegLayer_t659822A987590AAE2C7C05D03B9F1DB71F841EBC 
{
	// System.Int32 NAudio.Wave.MpegLayer::value__
	int32_t ___value___2;
};

// NAudio.Wave.MpegVersion
struct MpegVersion_tE9EFE7AE2F5CA2F96448D2B1A0CE0FD2FA8D1DCC 
{
	// System.Int32 NAudio.Wave.MpegVersion::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.IO.SeekOrigin
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;
};

// NAudio.Wave.Compression.WaveFilter
struct WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75  : public RuntimeObject
{
	// System.Int32 NAudio.Wave.Compression.WaveFilter::StructureSize
	int32_t ___StructureSize_0;
	// System.Int32 NAudio.Wave.Compression.WaveFilter::FilterTag
	int32_t ___FilterTag_1;
	// System.Int32 NAudio.Wave.Compression.WaveFilter::Filter
	int32_t ___Filter_2;
	// System.Int32[] NAudio.Wave.Compression.WaveFilter::Reserved
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Reserved_3;
};
// Native definition for P/Invoke marshalling of NAudio.Wave.Compression.WaveFilter
struct WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke
{
	int32_t ___StructureSize_0;
	int32_t ___FilterTag_1;
	int32_t ___Filter_2;
	int32_t ___Reserved_3[5];
};
// Native definition for COM marshalling of NAudio.Wave.Compression.WaveFilter
struct WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_com
{
	int32_t ___StructureSize_0;
	int32_t ___FilterTag_1;
	int32_t ___Filter_2;
	int32_t ___Reserved_3[5];
};

// NAudio.Wave.WaveFormatEncoding
struct WaveFormatEncoding_tA15F20ECDFB7BB2DBC78F0719622544C6578A734 
{
	// System.UInt16 NAudio.Wave.WaveFormatEncoding::value__
	uint16_t ___value___2;
};

// NAudio.Wave.WaveStream
struct WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
};

// NAudio.Wave.Compression.AcmStreamHeader
struct AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78  : public RuntimeObject
{
	// NAudio.Wave.Compression.AcmStreamHeaderStruct NAudio.Wave.Compression.AcmStreamHeader::streamHeader
	AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* ___streamHeader_0;
	// System.Byte[] NAudio.Wave.Compression.AcmStreamHeader::sourceBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sourceBuffer_1;
	// System.Runtime.InteropServices.GCHandle NAudio.Wave.Compression.AcmStreamHeader::hSourceBuffer
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___hSourceBuffer_2;
	// System.Byte[] NAudio.Wave.Compression.AcmStreamHeader::destBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destBuffer_3;
	// System.Runtime.InteropServices.GCHandle NAudio.Wave.Compression.AcmStreamHeader::hDestBuffer
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___hDestBuffer_4;
	// System.IntPtr NAudio.Wave.Compression.AcmStreamHeader::streamHandle
	intptr_t ___streamHandle_5;
	// System.Boolean NAudio.Wave.Compression.AcmStreamHeader::firstTime
	bool ___firstTime_6;
	// System.Boolean NAudio.Wave.Compression.AcmStreamHeader::disposed
	bool ___disposed_7;
};

// NAudio.Wave.Compression.AcmStreamHeaderStruct
struct AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5  : public RuntimeObject
{
	union
	{
		struct
		{
			// System.Int32 NAudio.Wave.Compression.AcmStreamHeaderStruct::cbStruct
			int32_t ___cbStruct_0;
			// NAudio.Wave.Compression.AcmStreamHeaderStatusFlags NAudio.Wave.Compression.AcmStreamHeaderStruct::fdwStatus
			int32_t ___fdwStatus_1;
			// System.IntPtr NAudio.Wave.Compression.AcmStreamHeaderStruct::userData
			intptr_t ___userData_2;
			// System.IntPtr NAudio.Wave.Compression.AcmStreamHeaderStruct::sourceBufferPointer
			intptr_t ___sourceBufferPointer_3;
			// System.Int32 NAudio.Wave.Compression.AcmStreamHeaderStruct::sourceBufferLength
			int32_t ___sourceBufferLength_4;
			// System.Int32 NAudio.Wave.Compression.AcmStreamHeaderStruct::sourceBufferLengthUsed
			int32_t ___sourceBufferLengthUsed_5;
			// System.IntPtr NAudio.Wave.Compression.AcmStreamHeaderStruct::sourceUserData
			intptr_t ___sourceUserData_6;
			// System.IntPtr NAudio.Wave.Compression.AcmStreamHeaderStruct::destBufferPointer
			intptr_t ___destBufferPointer_7;
			// System.Int32 NAudio.Wave.Compression.AcmStreamHeaderStruct::destBufferLength
			int32_t ___destBufferLength_8;
			// System.Int32 NAudio.Wave.Compression.AcmStreamHeaderStruct::destBufferLengthUsed
			int32_t ___destBufferLengthUsed_9;
			// System.IntPtr NAudio.Wave.Compression.AcmStreamHeaderStruct::destUserData
			intptr_t ___destUserData_10;
		};
		uint8_t AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5__padding[128];
	};
};
// Native definition for P/Invoke marshalling of NAudio.Wave.Compression.AcmStreamHeaderStruct
struct AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___cbStruct_0;
			int32_t ___fdwStatus_1;
			intptr_t ___userData_2;
			intptr_t ___sourceBufferPointer_3;
			int32_t ___sourceBufferLength_4;
			int32_t ___sourceBufferLengthUsed_5;
			intptr_t ___sourceUserData_6;
			intptr_t ___destBufferPointer_7;
			int32_t ___destBufferLength_8;
			int32_t ___destBufferLengthUsed_9;
			intptr_t ___destUserData_10;
		};
		uint8_t AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5__padding[128];
	};
};
// Native definition for COM marshalling of NAudio.Wave.Compression.AcmStreamHeaderStruct
struct AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___cbStruct_0;
			int32_t ___fdwStatus_1;
			intptr_t ___userData_2;
			intptr_t ___sourceBufferPointer_3;
			int32_t ___sourceBufferLength_4;
			int32_t ___sourceBufferLengthUsed_5;
			intptr_t ___sourceUserData_6;
			intptr_t ___destBufferPointer_7;
			int32_t ___destBufferLength_8;
			int32_t ___destBufferLengthUsed_9;
			intptr_t ___destUserData_10;
		};
		uint8_t AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5__padding[128];
	};
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

// NAudio.MmException
struct MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE  : public Exception_t
{
	// NAudio.MmResult NAudio.MmException::result
	int32_t ___result_18;
	// System.String NAudio.MmException::function
	String_t* ___function_19;
};

// NAudio.Wave.Mp3FileReader
struct Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB  : public WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34
{
	// NAudio.Wave.WaveFormat NAudio.Wave.Mp3FileReader::waveFormat
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___waveFormat_5;
	// System.IO.Stream NAudio.Wave.Mp3FileReader::mp3Stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___mp3Stream_6;
	// System.Int64 NAudio.Wave.Mp3FileReader::mp3DataLength
	int64_t ___mp3DataLength_7;
	// System.Int64 NAudio.Wave.Mp3FileReader::dataStartPosition
	int64_t ___dataStartPosition_8;
	// NAudio.Wave.Mp3WaveFormat NAudio.Wave.Mp3FileReader::<Mp3WaveFormat>k__BackingField
	Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* ___U3CMp3WaveFormatU3Ek__BackingField_9;
	// NAudio.Wave.XingHeader NAudio.Wave.Mp3FileReader::xingHeader
	XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* ___xingHeader_10;
	// System.Boolean NAudio.Wave.Mp3FileReader::ownInputStream
	bool ___ownInputStream_11;
	// System.Collections.Generic.List`1<NAudio.Wave.Mp3Index> NAudio.Wave.Mp3FileReader::tableOfContents
	List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* ___tableOfContents_12;
	// System.Int32 NAudio.Wave.Mp3FileReader::tocIndex
	int32_t ___tocIndex_13;
	// System.Int64 NAudio.Wave.Mp3FileReader::totalSamples
	int64_t ___totalSamples_14;
	// System.Int32 NAudio.Wave.Mp3FileReader::bytesPerSample
	int32_t ___bytesPerSample_15;
	// System.Int32 NAudio.Wave.Mp3FileReader::bytesPerDecodedFrame
	int32_t ___bytesPerDecodedFrame_16;
	// NAudio.Wave.IMp3FrameDecompressor NAudio.Wave.Mp3FileReader::decompressor
	RuntimeObject* ___decompressor_17;
	// System.Byte[] NAudio.Wave.Mp3FileReader::decompressBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressBuffer_18;
	// System.Int32 NAudio.Wave.Mp3FileReader::decompressBufferOffset
	int32_t ___decompressBufferOffset_19;
	// System.Int32 NAudio.Wave.Mp3FileReader::decompressLeftovers
	int32_t ___decompressLeftovers_20;
	// System.Boolean NAudio.Wave.Mp3FileReader::repositionedFlag
	bool ___repositionedFlag_21;
	// System.Int64 NAudio.Wave.Mp3FileReader::position
	int64_t ___position_22;
	// System.Object NAudio.Wave.Mp3FileReader::repositionLock
	RuntimeObject* ___repositionLock_23;
	// NAudio.Wave.Id3v2Tag NAudio.Wave.Mp3FileReader::<Id3v2Tag>k__BackingField
	Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* ___U3CId3v2TagU3Ek__BackingField_24;
	// System.Byte[] NAudio.Wave.Mp3FileReader::<Id3v1Tag>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CId3v1TagU3Ek__BackingField_25;
};

// NAudio.Wave.Mp3Frame
struct Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F  : public RuntimeObject
{
	// System.Int32 NAudio.Wave.Mp3Frame::<SampleRate>k__BackingField
	int32_t ___U3CSampleRateU3Ek__BackingField_6;
	// System.Int32 NAudio.Wave.Mp3Frame::<FrameLength>k__BackingField
	int32_t ___U3CFrameLengthU3Ek__BackingField_7;
	// System.Int32 NAudio.Wave.Mp3Frame::<BitRate>k__BackingField
	int32_t ___U3CBitRateU3Ek__BackingField_8;
	// System.Byte[] NAudio.Wave.Mp3Frame::<RawData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRawDataU3Ek__BackingField_9;
	// NAudio.Wave.MpegVersion NAudio.Wave.Mp3Frame::<MpegVersion>k__BackingField
	int32_t ___U3CMpegVersionU3Ek__BackingField_10;
	// NAudio.Wave.MpegLayer NAudio.Wave.Mp3Frame::<MpegLayer>k__BackingField
	int32_t ___U3CMpegLayerU3Ek__BackingField_11;
	// NAudio.Wave.ChannelMode NAudio.Wave.Mp3Frame::<ChannelMode>k__BackingField
	int32_t ___U3CChannelModeU3Ek__BackingField_12;
	// System.Int32 NAudio.Wave.Mp3Frame::<SampleCount>k__BackingField
	int32_t ___U3CSampleCountU3Ek__BackingField_13;
	// System.Int32 NAudio.Wave.Mp3Frame::<ChannelExtension>k__BackingField
	int32_t ___U3CChannelExtensionU3Ek__BackingField_14;
	// System.Int32 NAudio.Wave.Mp3Frame::<BitRateIndex>k__BackingField
	int32_t ___U3CBitRateIndexU3Ek__BackingField_15;
	// System.Boolean NAudio.Wave.Mp3Frame::<Copyright>k__BackingField
	bool ___U3CCopyrightU3Ek__BackingField_16;
	// System.Boolean NAudio.Wave.Mp3Frame::<CrcPresent>k__BackingField
	bool ___U3CCrcPresentU3Ek__BackingField_17;
	// System.Int64 NAudio.Wave.Mp3Frame::<FileOffset>k__BackingField
	int64_t ___U3CFileOffsetU3Ek__BackingField_18;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// NAudio.Wave.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4  : public RuntimeObject
{
	// NAudio.Wave.WaveFormatEncoding NAudio.Wave.WaveFormat::waveFormatTag
	uint16_t ___waveFormatTag_0;
	// System.Int16 NAudio.Wave.WaveFormat::channels
	int16_t ___channels_1;
	// System.Int32 NAudio.Wave.WaveFormat::sampleRate
	int32_t ___sampleRate_2;
	// System.Int32 NAudio.Wave.WaveFormat::averageBytesPerSecond
	int32_t ___averageBytesPerSecond_3;
	// System.Int16 NAudio.Wave.WaveFormat::blockAlign
	int16_t ___blockAlign_4;
	// System.Int16 NAudio.Wave.WaveFormat::bitsPerSample
	int16_t ___bitsPerSample_5;
	// System.Int16 NAudio.Wave.WaveFormat::extraSize
	int16_t ___extraSize_6;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of NAudio.Wave.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke
{
	uint16_t ___waveFormatTag_0;
	int16_t ___channels_1;
	int32_t ___sampleRate_2;
	int32_t ___averageBytesPerSecond_3;
	int16_t ___blockAlign_4;
	int16_t ___bitsPerSample_5;
	int16_t ___extraSize_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of NAudio.Wave.WaveFormat
#pragma pack(push, tp, 2)
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com
{
	uint16_t ___waveFormatTag_0;
	int16_t ___channels_1;
	int32_t ___sampleRate_2;
	int32_t ___averageBytesPerSecond_3;
	int16_t ___blockAlign_4;
	int16_t ___bitsPerSample_5;
	int16_t ___extraSize_6;
};
#pragma pack(pop, tp)

// NAudio.Wave.AdpcmWaveFormat
struct AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6  : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4
{
	// System.Int16 NAudio.Wave.AdpcmWaveFormat::samplesPerBlock
	int16_t ___samplesPerBlock_7;
	// System.Int16 NAudio.Wave.AdpcmWaveFormat::numCoeff
	int16_t ___numCoeff_8;
	// System.Int16[] NAudio.Wave.AdpcmWaveFormat::coefficients
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___coefficients_9;
};
// Native definition for P/Invoke marshalling of NAudio.Wave.AdpcmWaveFormat
#pragma pack(push, tp, 2)
struct AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_pinvoke : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke
{
	int16_t ___samplesPerBlock_7;
	int16_t ___numCoeff_8;
	int16_t ___coefficients_9[14];
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of NAudio.Wave.AdpcmWaveFormat
#pragma pack(push, tp, 2)
struct AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_com : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com
{
	int16_t ___samplesPerBlock_7;
	int16_t ___numCoeff_8;
	int16_t ___coefficients_9[14];
};
#pragma pack(pop, tp)

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// NAudio.Wave.Gsm610WaveFormat
#pragma pack(push, tp, 2)
struct Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB  : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4
{
	// System.Int16 NAudio.Wave.Gsm610WaveFormat::samplesPerBlock
	int16_t ___samplesPerBlock_7;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of NAudio.Wave.Gsm610WaveFormat
#pragma pack(push, tp, 2)
struct Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_pinvoke : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke
{
	int16_t ___samplesPerBlock_7;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of NAudio.Wave.Gsm610WaveFormat
#pragma pack(push, tp, 2)
struct Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_com : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com
{
	int16_t ___samplesPerBlock_7;
};
#pragma pack(pop, tp)

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.InvalidDataException
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// NAudio.Wave.Mp3WaveFormat
#pragma pack(push, tp, 2)
struct Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154  : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4
{
	// NAudio.Wave.Mp3WaveFormatId NAudio.Wave.Mp3WaveFormat::id
	uint16_t ___id_7;
	// NAudio.Wave.Mp3WaveFormatFlags NAudio.Wave.Mp3WaveFormat::flags
	int32_t ___flags_8;
	// System.UInt16 NAudio.Wave.Mp3WaveFormat::blockSize
	uint16_t ___blockSize_9;
	// System.UInt16 NAudio.Wave.Mp3WaveFormat::framesPerBlock
	uint16_t ___framesPerBlock_10;
	// System.UInt16 NAudio.Wave.Mp3WaveFormat::codecDelay
	uint16_t ___codecDelay_11;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of NAudio.Wave.Mp3WaveFormat
#pragma pack(push, tp, 2)
struct Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_pinvoke : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke
{
	uint16_t ___id_7;
	int32_t ___flags_8;
	uint16_t ___blockSize_9;
	uint16_t ___framesPerBlock_10;
	uint16_t ___codecDelay_11;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of NAudio.Wave.Mp3WaveFormat
#pragma pack(push, tp, 2)
struct Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_com : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com
{
	uint16_t ___id_7;
	int32_t ___flags_8;
	uint16_t ___blockSize_9;
	uint16_t ___framesPerBlock_10;
	uint16_t ___codecDelay_11;
};
#pragma pack(pop, tp)

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// NAudio.Wave.WaveFormatExtensible
#pragma pack(push, tp, 2)
struct WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809  : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4
{
	// System.Int16 NAudio.Wave.WaveFormatExtensible::wValidBitsPerSample
	int16_t ___wValidBitsPerSample_7;
	// System.Int32 NAudio.Wave.WaveFormatExtensible::dwChannelMask
	int32_t ___dwChannelMask_8;
	// System.Guid NAudio.Wave.WaveFormatExtensible::subFormat
	Guid_t ___subFormat_9;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of NAudio.Wave.WaveFormatExtensible
#pragma pack(push, tp, 2)
struct WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_pinvoke : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke
{
	int16_t ___wValidBitsPerSample_7;
	int32_t ___dwChannelMask_8;
	Guid_t ___subFormat_9;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of NAudio.Wave.WaveFormatExtensible
#pragma pack(push, tp, 2)
struct WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_com : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com
{
	int16_t ___wValidBitsPerSample_7;
	int32_t ___dwChannelMask_8;
	Guid_t ___subFormat_9;
};
#pragma pack(pop, tp)

// NAudio.Wave.WaveFormatExtraData
struct WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C  : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4
{
	// System.Byte[] NAudio.Wave.WaveFormatExtraData::extraData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extraData_7;
};
// Native definition for P/Invoke marshalling of NAudio.Wave.WaveFormatExtraData
#pragma pack(push, tp, 2)
struct WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_pinvoke : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke
{
	uint8_t ___extraData_7[100];
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of NAudio.Wave.WaveFormatExtraData
#pragma pack(push, tp, 2)
struct WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_com : public WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com
{
	uint8_t ___extraData_7[100];
};
#pragma pack(pop, tp)

// NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder
struct FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>
struct List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Mp3IndexU5BU5D_t94D02B0535BA4DE2F8EF3E6CD88BAE0F9B94EA2F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::092DE122C0E518AB6C965A67F2A6700C5C154012
	__StaticArrayInitTypeSizeU3D24_tCCA133B092BAA6877A2873ACC1DD0767D0A0D2A7 ___092DE122C0E518AB6C965A67F2A6700C5C154012_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0E8DA6E28C905EAE0C6E8EC68029638F77B7F0E7
	__StaticArrayInitTypeSizeU3D12_t573CB5FA24C9F83113106657402F1B9B7B676884 ___0E8DA6E28C905EAE0C6E8EC68029638F77B7F0E7_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::82564237E57F0539E27547E57C418093CE731C12
	__StaticArrayInitTypeSizeU3D360_t7F461C576ACFB26A9F5F2292AC04BF9AAC45A568 ___82564237E57F0539E27547E57C418093CE731C12_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BA3AD38225074714E59E5C141A634AD9B79DCEAC
	__StaticArrayInitTypeSizeU3D12_t573CB5FA24C9F83113106657402F1B9B7B676884 ___BA3AD38225074714E59E5C141A634AD9B79DCEAC_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCF14D7DFE00EC65ACE5BE991ECCBC2ACB9FB2B6
	__StaticArrayInitTypeSizeU3D12_t573CB5FA24C9F83113106657402F1B9B7B676884 ___BCF14D7DFE00EC65ACE5BE991ECCBC2ACB9FB2B6_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E9A0235C10033F675F5D2FB14F1C1B682E505042
	__StaticArrayInitTypeSizeU3D16_t7DFF2EFDCE254CFABACD3B896BD1A6260DE190DB ___E9A0235C10033F675F5D2FB14F1C1B682E505042_5;
};

// <PrivateImplementationDetails>

// NAudio.Wave.Compression.AcmInterop

// NAudio.Wave.Compression.AcmInterop

// NAudio.Wave.AcmMp3FrameDecompressor

// NAudio.Wave.AcmMp3FrameDecompressor

// System.IO.BinaryReader

// System.IO.BinaryReader

// NAudio.Utils.BufferHelpers

// NAudio.Utils.BufferHelpers

// NAudio.Wave.Id3v2Tag

// NAudio.Wave.Id3v2Tag

// NAudio.Utils.MarshalHelpers

// NAudio.Utils.MarshalHelpers

// NAudio.Wave.Mp3Index

// NAudio.Wave.Mp3Index

// NAudio.Wave.SampleProviders.SampleProviderConverterBase

// NAudio.Wave.SampleProviders.SampleProviderConverterBase

// NAudio.Wave.SampleProviders.SampleProviderConverters

// NAudio.Wave.SampleProviders.SampleProviderConverters

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// NAudio.Wave.WaveExtensionMethods

// NAudio.Wave.WaveExtensionMethods

// NAudio.Wave.WaveFormatCustomMarshaler
struct WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_StaticFields
{
	// NAudio.Wave.WaveFormatCustomMarshaler NAudio.Wave.WaveFormatCustomMarshaler::marshaler
	WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* ___marshaler_0;
};

// NAudio.Wave.WaveFormatCustomMarshaler

// NAudio.Wave.XingHeader
struct XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_StaticFields
{
	// System.Int32[] NAudio.Wave.XingHeader::sr_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___sr_table_0;
};

// NAudio.Wave.XingHeader

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// NAudio.Wave.SampleProviders.Pcm16BitToSampleProvider

// NAudio.Wave.SampleProviders.Pcm16BitToSampleProvider

// NAudio.Wave.SampleProviders.Pcm24BitToSampleProvider

// NAudio.Wave.SampleProviders.Pcm24BitToSampleProvider

// NAudio.Wave.SampleProviders.Pcm32BitToSampleProvider

// NAudio.Wave.SampleProviders.Pcm32BitToSampleProvider

// NAudio.Wave.SampleProviders.Pcm8BitToSampleProvider

// NAudio.Wave.SampleProviders.Pcm8BitToSampleProvider

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt16

// System.UInt16

// System.Void

// System.Void

// NAudio.Wave.SampleProviders.WaveToSampleProvider

// NAudio.Wave.SampleProviders.WaveToSampleProvider

// NAudio.Wave.SampleProviders.WaveToSampleProvider64

// NAudio.Wave.SampleProviders.WaveToSampleProvider64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360

// NAudio.Wave.Compression.AcmFormatSuggestFlags

// NAudio.Wave.Compression.AcmFormatSuggestFlags

// NAudio.Wave.Compression.AcmStream

// NAudio.Wave.Compression.AcmStream

// NAudio.Wave.AcmStreamConvertFlags

// NAudio.Wave.AcmStreamConvertFlags

// NAudio.Wave.Compression.AcmStreamHeaderStatusFlags

// NAudio.Wave.Compression.AcmStreamHeaderStatusFlags

// NAudio.Wave.Compression.AcmStreamOpenFlags

// NAudio.Wave.Compression.AcmStreamOpenFlags

// NAudio.Wave.Compression.AcmStreamSizeFlags

// NAudio.Wave.Compression.AcmStreamSizeFlags

// NAudio.Wave.ChannelMode

// NAudio.Wave.ChannelMode

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandleType

// System.Runtime.InteropServices.GCHandleType

// NAudio.MmResult

// NAudio.MmResult

// NAudio.Wave.Mp3WaveFormatFlags

// NAudio.Wave.Mp3WaveFormatFlags

// NAudio.Wave.Mp3WaveFormatId

// NAudio.Wave.Mp3WaveFormatId

// NAudio.Wave.MpegLayer

// NAudio.Wave.MpegLayer

// NAudio.Wave.MpegVersion

// NAudio.Wave.MpegVersion

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.IO.SeekOrigin

// System.IO.SeekOrigin

// NAudio.Wave.Compression.WaveFilter

// NAudio.Wave.Compression.WaveFilter

// NAudio.Wave.WaveFormatEncoding

// NAudio.Wave.WaveFormatEncoding

// NAudio.Wave.WaveStream

// NAudio.Wave.WaveStream

// NAudio.Wave.Compression.AcmStreamHeader

// NAudio.Wave.Compression.AcmStreamHeader

// NAudio.Wave.Compression.AcmStreamHeaderStruct

// NAudio.Wave.Compression.AcmStreamHeaderStruct

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// System.IO.FileStream

// NAudio.MmException

// NAudio.MmException

// NAudio.Wave.Mp3FileReader

// NAudio.Wave.Mp3FileReader

// NAudio.Wave.Mp3Frame
struct Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields
{
	// System.Int32[,,] NAudio.Wave.Mp3Frame::bitRates
	Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D* ___bitRates_0;
	// System.Int32[,] NAudio.Wave.Mp3Frame::samplesPerFrame
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___samplesPerFrame_1;
	// System.Int32[] NAudio.Wave.Mp3Frame::sampleRatesVersion1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___sampleRatesVersion1_2;
	// System.Int32[] NAudio.Wave.Mp3Frame::sampleRatesVersion2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___sampleRatesVersion2_3;
	// System.Int32[] NAudio.Wave.Mp3Frame::sampleRatesVersion25
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___sampleRatesVersion25_4;
};

// NAudio.Wave.Mp3Frame

// NAudio.Wave.WaveFormat

// NAudio.Wave.WaveFormat

// NAudio.Wave.AdpcmWaveFormat

// NAudio.Wave.AdpcmWaveFormat

// System.ArgumentException

// System.ArgumentException

// System.FormatException

// System.FormatException

// NAudio.Wave.Gsm610WaveFormat

// NAudio.Wave.Gsm610WaveFormat

// System.IO.InvalidDataException

// System.IO.InvalidDataException

// System.InvalidOperationException

// System.InvalidOperationException

// NAudio.Wave.Mp3WaveFormat

// NAudio.Wave.Mp3WaveFormat

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// NAudio.Wave.WaveFormatExtensible

// NAudio.Wave.WaveFormatExtensible

// NAudio.Wave.WaveFormatExtraData

// NAudio.Wave.WaveFormatExtraData

// NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder

// NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.IO.EndOfStreamException

// System.IO.EndOfStreamException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[,,]
struct Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke(const WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4& unmarshaled, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_back(const WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke& marshaled, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4& unmarshaled);
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_cleanup(WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke(const WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75& unmarshaled, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_back(const WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke& marshaled, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75& unmarshaled);
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_cleanup(WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke(const AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5& unmarshaled, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_back(const AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke& marshaled, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5& unmarshaled);
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_cleanup(AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke& marshaled);

// T NAudio.Utils.MarshalHelpers::PtrToStructure<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MarshalHelpers_PtrToStructure_TisRuntimeObject_mCD9B50263F782C9E260C821DBDD9E1FCC6754835_gshared (intptr_t ___0_pointer, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.String NAudio.MmException::ErrorMessage(NAudio.MmResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MmException_ErrorMessage_m1B26321FF4720548C9E1A4284BF2DDE3B5D2C6B3 (int32_t ___0_result, String_t* ___1_function, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void NAudio.MmException::.ctor(NAudio.MmResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MmException__ctor_m20CFD6073C94C60FFF256F13E5F0263E3DFE4ABE (MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE* __this, int32_t ___0_result, String_t* ___1_function, const RuntimeMethod* method) ;
// NAudio.Wave.ISampleProvider NAudio.Wave.SampleProviders.SampleProviderConverters::ConvertWaveProviderIntoSampleProvider(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SampleProviderConverters_ConvertWaveProviderIntoSampleProvider_m25E5FA36E87346F19461E4C223533D615C53AE87 (RuntimeObject* ___0_waveProvider, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Id3v2Tag::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Id3v2Tag__ctor_m3E216245F94177481120C86C748E11E7199D7DBE (Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3Frame::LoadFromStream(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3Frame_LoadFromStream_m569B4189A98416A467920E4CC1EEFC7C171E2146 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, bool ___1_readData, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame__ctor_m8A3312151165B73A88318597406B3E0D63DB8AF8 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_FileOffset(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_FileOffset_mDD5E94785FEA2B98C105AEC5C770ED65870C68CB_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Int64 NAudio.Wave.Mp3Frame::get_FileOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Mp3Frame_get_FileOffset_m0EA767DEF0145B0E9C6AB3944525EA5CB32F4EC6_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Boolean NAudio.Wave.Mp3Frame::IsValidHeader(System.Byte[],NAudio.Wave.Mp3Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mp3Frame_IsValidHeader_mBE99FA865BE101D74ED1365C26CB39486C80A218 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_headerBytes, Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___1_frame, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Mp3Frame::get_FrameLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_RawData(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_RawData_m8FBBC1A5679F3557D44414CC89696B30A8E05BDC_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] NAudio.Wave.Mp3Frame::get_RawData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_MpegVersion(NAudio.Wave.MpegVersion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_MpegVersion_m7EE0656440CD7BC3082F5BBC8BEBAA735E3A74A6_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// NAudio.Wave.MpegVersion NAudio.Wave.Mp3Frame::get_MpegVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_MpegLayer(NAudio.Wave.MpegLayer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_MpegLayer_m84C3EC897E816464CD89EA1168CB8A0F625A0F2C_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// NAudio.Wave.MpegLayer NAudio.Wave.Mp3Frame::get_MpegLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_MpegLayer_m514242280336E1677A408F9B24E5B7BCD290CDA3_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_CrcPresent(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_CrcPresent_m270FF919E7BEF5241AFD746D6C524EF2FC8F6AD2_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_BitRateIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_BitRateIndex_m6F23263C841E99194ECF99CA31F1400AE5E537B9_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Mp3Frame::get_BitRateIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_BitRateIndex_m4D5DF9243546C697A0E470F85CE25F946A2B852F_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_BitRate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_BitRate_m68B6AAD9A2A72943B2455B256AA7E855A40E495D_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Mp3Frame::get_BitRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_BitRate_m422B535002A96669B5BD8B72C16206B68B53915C_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_SampleRate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_SampleRate_m6AD7789BDD850909D0187E8D0EFAFCECD10C6081_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_ChannelMode(NAudio.Wave.ChannelMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_ChannelMode_mF079204FC1054D2091E1A66EDF266FA92D79C921_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_ChannelExtension(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_ChannelExtension_m679189A69EF245778F389076DD5619AF0C9F5602_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Mp3Frame::get_ChannelExtension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_ChannelExtension_m6142B24794DFD850D6186721BF531B00E825BC87_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// NAudio.Wave.ChannelMode NAudio.Wave.Mp3Frame::get_ChannelMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_Copyright(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_Copyright_m7184DBEB5BA633FA9D4E873E221DA418480B1B52_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_SampleCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_SampleCount_mCE1C08A830D1FD4228A9BF48E106EF28D0E4CB46_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Mp3Frame::get_SampleCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_SampleCount_m6D99B5EB4D4F4E0AAB6846431BB6F036E3E249CE_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Mp3Frame::get_SampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Frame::set_FrameLength(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_FrameLength_mA56E8F798863128DF398B94D3E2528D661428F41_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// NAudio.Wave.WaveFormat NAudio.Wave.Compression.AcmStream::SuggestPcmFormat(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* AcmStream_SuggestPcmFormat_m5F7CFEBB0EE96D4A741B27AE6FCC072ABB09ECA0 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_compressedFormat, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStream::.ctor(NAudio.Wave.WaveFormat,NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream__ctor_m67160DE442F21278A9CFD74D8F31B1D20AD8C3A7 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_sourceFormat, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___1_destFormat, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Byte[] NAudio.Wave.Compression.AcmStream::get_SourceBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStream_get_SourceBuffer_m1ACC09AE24011B012C0A7440CC30E3EAA931571F (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Compression.AcmStream::Convert(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmStream_Convert_m6FA5A3C9EA2E3EDC6110EF1B130C54E96C5FE1F9 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, int32_t ___0_bytesToConvert, int32_t* ___1_sourceBytesConverted, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] NAudio.Wave.Compression.AcmStream::get_DestBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStream_get_DestBuffer_m61DFC6E8957976B0D3454F631B26F2062D7CC39D (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStream::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream_Reposition_mEAB7297FA28A5F708ABEFB1FA1A9D0F99E912C73 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream_Dispose_m46F586D9B290B86C6D64DF0F8B72ADC96B62E0A5 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.AcmMp3FrameDecompressor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmMp3FrameDecompressor_Dispose_mF79D71FB74D55699D10F40E6B31C9E9B8BE57AA6 (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.XingHeader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XingHeader__ctor_m7F848420392CC0C3A7508AE06324CDDC7A97F25D (XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* __this, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.XingHeader::ReadBigEndian(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XingHeader_ReadBigEndian_m12DD07E97598C9DB34FD1E9682A37AC765BAC28A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.WaveFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m1CC2B2191800F3701831FC33CC343CF846657D7D (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m950E9AF47FEFD410899461E608FA502BFC2810B8 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, int32_t ___0_rate, int32_t ___1_bits, int32_t ___2_channels, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// T NAudio.Utils.MarshalHelpers::PtrToStructure<NAudio.Wave.WaveFormat>(System.IntPtr)
inline WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* MarshalHelpers_PtrToStructure_TisWaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_mE8C19AD04D158A8E2AF2FEDFF7A13E939D01C4A7 (intptr_t ___0_pointer, const RuntimeMethod* method)
{
	return ((  WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* (*) (intptr_t, const RuntimeMethod*))MarshalHelpers_PtrToStructure_TisRuntimeObject_mCD9B50263F782C9E260C821DBDD9E1FCC6754835_gshared)(___0_pointer, method);
}
// NAudio.Wave.WaveFormatEncoding NAudio.Wave.WaveFormat::get_Encoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) ;
// T NAudio.Utils.MarshalHelpers::PtrToStructure<NAudio.Wave.WaveFormatExtensible>(System.IntPtr)
inline WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809* MarshalHelpers_PtrToStructure_TisWaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_mDBAD911BED518C3E00F5D0545F45F1F466EB74AB (intptr_t ___0_pointer, const RuntimeMethod* method)
{
	return ((  WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809* (*) (intptr_t, const RuntimeMethod*))MarshalHelpers_PtrToStructure_TisRuntimeObject_mCD9B50263F782C9E260C821DBDD9E1FCC6754835_gshared)(___0_pointer, method);
}
// T NAudio.Utils.MarshalHelpers::PtrToStructure<NAudio.Wave.AdpcmWaveFormat>(System.IntPtr)
inline AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6* MarshalHelpers_PtrToStructure_TisAdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_m2958B92153AA4642A00EF144B0E2D5145029D91F (intptr_t ___0_pointer, const RuntimeMethod* method)
{
	return ((  AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6* (*) (intptr_t, const RuntimeMethod*))MarshalHelpers_PtrToStructure_TisRuntimeObject_mCD9B50263F782C9E260C821DBDD9E1FCC6754835_gshared)(___0_pointer, method);
}
// T NAudio.Utils.MarshalHelpers::PtrToStructure<NAudio.Wave.Gsm610WaveFormat>(System.IntPtr)
inline Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB* MarshalHelpers_PtrToStructure_TisGsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_mCBE400732A977199A9FA3868D2F445C4FB131186 (intptr_t ___0_pointer, const RuntimeMethod* method)
{
	return ((  Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB* (*) (intptr_t, const RuntimeMethod*))MarshalHelpers_PtrToStructure_TisRuntimeObject_mCD9B50263F782C9E260C821DBDD9E1FCC6754835_gshared)(___0_pointer, method);
}
// System.Int32 NAudio.Wave.WaveFormat::get_ExtraSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_ExtraSize_mDBDEF0961D9449135ED9A723716FCBAA5F71E426_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) ;
// T NAudio.Utils.MarshalHelpers::PtrToStructure<NAudio.Wave.WaveFormatExtraData>(System.IntPtr)
inline WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C* MarshalHelpers_PtrToStructure_TisWaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_m4D3F82489D8E7B30EDC554EBE52ED470D7096566 (intptr_t ___0_pointer, const RuntimeMethod* method)
{
	return ((  WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C* (*) (intptr_t, const RuntimeMethod*))MarshalHelpers_PtrToStructure_TisRuntimeObject_mCD9B50263F782C9E260C821DBDD9E1FCC6754835_gshared)(___0_pointer, method);
}
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m596657DAE86DB62FCC24730A3A6FB0F19B4C6B2E (RuntimeObject* ___0_structure, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_mA1B296E1739D0481FACE3D9B43D94FF86091DD4E (RuntimeObject* ___0_structure, intptr_t ___1_ptr, bool ___2_fDeleteOld, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.WaveFormatCustomMarshaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatCustomMarshaler__ctor_m04F9C826DD3C7185B0320099A5A62BE492C4094F (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.IntPtr NAudio.Wave.WaveFormat::MarshalToPtr(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WaveFormat_MarshalToPtr_m5FA8B8A4BFF2AD7A5A9D9FD2AACE5BB352877BC7 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_format, const RuntimeMethod* method) ;
// NAudio.Wave.WaveFormat NAudio.Wave.WaveFormat::MarshalFromPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* WaveFormat_MarshalFromPtr_mBC7E9CE8CBE72535A15C0F9E1CA529651551528A (intptr_t ___0_pointer, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameDecompressorBuilder__ctor_m996DD148F62CF763EDB24060226CE5EDB5D8DA83 (FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3FileReader::.ctor(System.IO.Stream,NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader__ctor_m4C39DBDD5ACDE0E0ECECC44736F221017DC87CC9 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inputStream, FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* ___1_frameDecompressorBuilder, bool ___2_ownInputStream, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.WaveStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveStream__ctor_m4A8FADBEDA604ACB9746EDE329B6D6DA1B11738D (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// NAudio.Wave.Id3v2Tag NAudio.Wave.Id3v2Tag::ReadTag(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* Id3v2Tag_ReadTag_m4989A81FC07FF431584E017BC0EAD49FE4438427 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3Frame::LoadFromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3Frame_LoadFromStream_mE175E6AECDF2521725FC79DBDFC7398763406889 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Void System.IO.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532 (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// NAudio.Wave.XingHeader NAudio.Wave.XingHeader::LoadXingHeader(NAudio.Wave.Mp3Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* XingHeader_LoadXingHeader_mF0EEC56484E3E319789109FBFAF2AD0D33A21D9A (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___0_frame, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3WaveFormat::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3WaveFormat__ctor_mAEFBE4CFFB393F721E5719D047626A435F5733B3 (Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* __this, int32_t ___0_sampleRate, int32_t ___1_channels, int32_t ___2_blockSize, int32_t ___3_bitRate, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3FileReader::set_Mp3WaveFormat(NAudio.Wave.Mp3WaveFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3FileReader_set_Mp3WaveFormat_m5038632FAC9AAFFF31AF0E1B6DCDF0ED764845FE_inline (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* ___0_value, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3FileReader::CreateTableOfContents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader_CreateTableOfContents_mCC2579182A76A721A8E1587910B6931CE085DA88 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) ;
// System.Double NAudio.Wave.Mp3FileReader::TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Mp3FileReader_TotalSeconds_m47483784A80F2E37663F4D2E95D8CCD975707E84 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) ;
// NAudio.Wave.Mp3WaveFormat NAudio.Wave.Mp3FileReader::get_Mp3WaveFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) ;
// NAudio.Wave.IMp3FrameDecompressor NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder::Invoke(NAudio.Wave.WaveFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_inline (FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.WaveFormat::get_BitsPerSample()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.WaveFormat::get_Channels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.AcmMp3FrameDecompressor::.ctor(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmMp3FrameDecompressor__ctor_mF8814BC87942B7396EA2F6046793E90254F64DB4 (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_sourceFormat, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>::.ctor(System.Int32)
inline void List_1__ctor_m34ED4C1C8BB150DEE0B68C0CF52DED6F404BBCA9 (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void NAudio.Wave.Mp3Index::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Index__ctor_mCEEBFA8673005814935CFE4CABD1AED44C6A3CB0 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Index::set_FilePosition(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_FilePosition_mF5A1F30A0B9F2290F5D7DB1AC57CD6C01AB5D5BD_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Index::set_SamplePosition(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_SamplePosition_m5A803CF02BF6A38B4D4F5C7FBD04D3D92842A675_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3FileReader::ReadNextFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3FileReader_ReadNextFrame_mA20C14E176229FA1975B2B05FF0156D6F9736850 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, bool ___0_readData, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3FileReader::ValidateFrameFormat(NAudio.Wave.Mp3Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader_ValidateFrameFormat_m8F97E9002C867FCDA38B1019EFA351F378F4CFF1 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___0_frame, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Index::set_SampleCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_SampleCount_m5E6DDDBE635B21A4276D6C8C3D3D4AECFDEA58B1_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int64 NAudio.Wave.Mp3Index::get_FilePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Mp3Index_get_FilePosition_m15371E31E080A180EBE72D9C6855C78BEB7199D7_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Mp3Index::set_ByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_ByteCount_mAF78B634A2C55DFF49D92CCADAD81A8BD61B72D7_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>::Add(T)
inline void List_1_Add_mCDA1C1C94555441ED573D3962A9A992500FA0A22_inline (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* __this, Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894*, Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 NAudio.Wave.WaveFormat::get_SampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079 (int64_t ___0_val1, int64_t ___1_val2, const RuntimeMethod* method) ;
// System.Int64 System.Math::Max(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Max_mD37411571F0547F04F280D5A8D1F044819AFA597 (int64_t ___0_val1, int64_t ___1_val2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>::get_Item(System.Int32)
inline Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204 (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* (*) (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int64 NAudio.Wave.Mp3Index::get_SamplePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Mp3Index_get_SamplePosition_m6350A85D4AA83C4C665B963C515D6F24655A8D92_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Mp3Index::get_SampleCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Index_get_SampleCount_m0FFA0218060867BD6F34F5E3F795CABC1AD9B146_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<NAudio.Wave.Mp3Index>::get_Count()
inline int32_t List_1_get_Count_m6810DF9B292E01ECED33DE12CDDBD41B00171725_inline (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3FileReader::ReadNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3FileReader_ReadNextFrame_m760B0B8CC84C3B104C192CBE9FA64C11E6BEF288 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.SampleProviderConverterBase::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061 (SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.SampleProviderConverterBase::EnsureSourceBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B (SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E* __this, int32_t ___0_sourceBytesRequired, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.Pcm8BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm8BitToSampleProvider__ctor_m91ACEEB019074DEA6B5C2AC7C38CCF6061476F62 (Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.Pcm16BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm16BitToSampleProvider__ctor_mAEE07A63F794F979EFAF7F3960824905AAD0B3F9 (Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.Pcm24BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm24BitToSampleProvider__ctor_mBB0F83E7E01C4C474009D5EE6FD5DD1D61D78645 (Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.Pcm32BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm32BitToSampleProvider__ctor_mD608E2CB9E7E143AD06B58D4EDBE4123C715C9D7 (Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.WaveToSampleProvider64::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveToSampleProvider64__ctor_mDEEC490E2897AE5BD27C8802FAB1FE5FF670A2B9 (WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.SampleProviders.WaveToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveToSampleProvider__ctor_m5016CDB720B13AFFCF064F69F12663D0A18CA2BA (WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Double System.BitConverter::Int64BitsToDouble(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BitConverter_Int64BitsToDouble_m0471A5DA68629692DE031E855EB537CBB4CA9A55_inline (int64_t ___0_value, const RuntimeMethod* method) ;
// NAudio.Wave.WaveFormat NAudio.Wave.WaveFormat::CreateIeeeFloatWaveFormat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* WaveFormat_CreateIeeeFloatWaveFormat_m4F828BB52C1F4C909B345A573395587E14F66103 (int32_t ___0_sampleRate, int32_t ___1_channels, const RuntimeMethod* method) ;
// System.Byte[] NAudio.Utils.BufferHelpers::Ensure(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferHelpers_Ensure_mA9470F1144B83A833FC82B35E0A8BAED7E42C24A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_bytesRequired, const RuntimeMethod* method) ;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.WaveFormat::get_AverageBytesPerSecond()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_AverageBytesPerSecond_mED5E2621C0B0BC7B926FF04BF848CE00C19045BB_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamOpen(System.IntPtr&,System.IntPtr,NAudio.Wave.WaveFormat,NAudio.Wave.WaveFormat,NAudio.Wave.Compression.WaveFilter,System.IntPtr,System.IntPtr,NAudio.Wave.Compression.AcmStreamOpenFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamOpen_m341F1D25ABE467E72AB895122DEC97D82C8C3F1B (intptr_t* ___0_hAcmStream, intptr_t ___1_hAcmDriver, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___2_sourceFormat, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___3_destFormat, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75* ___4_waveFilter, intptr_t ___5_callback, intptr_t ___6_instance, int32_t ___7_openFlags, const RuntimeMethod* method) ;
// System.Void NAudio.MmException::Try(NAudio.MmResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C (int32_t ___0_result, String_t* ___1_function, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Compression.AcmStream::SourceToDest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmStream_SourceToDest_mC2EEA55A2085287AB79B713231F6D998ECD158F0 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, int32_t ___0_source, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStreamHeader::.ctor(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader__ctor_m857603CE6B7CCBBD20BA6407A53EB4401E732E1A (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, intptr_t ___0_streamHandle, int32_t ___1_sourceBufferLength, int32_t ___2_destBufferLength, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamSize(System.IntPtr,System.Int32,System.Int32&,NAudio.Wave.Compression.AcmStreamSizeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamSize_mF50192945E2BE606DCC827263A9F237C4F4DD933 (intptr_t ___0_hAcmStream, int32_t ___1_inputBufferSize, int32_t* ___2_outputBufferSize, int32_t ___3_flags, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmFormatSuggest(System.IntPtr,NAudio.Wave.WaveFormat,NAudio.Wave.WaveFormat,System.Int32,NAudio.Wave.Compression.AcmFormatSuggestFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmFormatSuggest_m3FB9584EBEEED6DEFEA55ABADCFB9198F43B5D4B (intptr_t ___0_hAcmDriver, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___1_sourceFormat, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___2_destFormat, int32_t ___3_sizeDestFormat, int32_t ___4_suggestFlags, const RuntimeMethod* method) ;
// System.Byte[] NAudio.Wave.Compression.AcmStreamHeader::get_SourceBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStreamHeader_get_SourceBuffer_mF779867A2D634F050DAB6337B80B192FCB62D26B_inline (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) ;
// System.Byte[] NAudio.Wave.Compression.AcmStreamHeader::get_DestBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStreamHeader_get_DestBuffer_m0F5AB028B57FBA4B6D5A54AE7D0120F95417A852_inline (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Reposition_m8F106D562C934ED1AB73703575FFC70EAC665FFA (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) ;
// System.Int32 NAudio.Wave.Compression.AcmStreamHeader::Convert(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmStreamHeader_Convert_mF37655F056CBD638FC3DDCC7F13A201CDE161119 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, int32_t ___0_bytesToConvert, int32_t* ___1_sourceBytesConverted, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Dispose_m4663DE62F2BF573733C5835891CAB910A10506B1 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamClose(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamClose_m64E19223A9EC5AE5F4AFA67A0981A8AA7014B719 (intptr_t ___0_hAcmStream, int32_t ___1_closeFlags, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmDriverClose(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmDriverClose_m9E89CECA41C5C08E34D7D27DF223F6DA18371071 (intptr_t ___0_hAcmDriver, int32_t ___1_closeFlags, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStreamHeaderStruct::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeaderStruct__ctor_mDB1372345D32F151860C37B4AA8496D4A8629824 (AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamPrepareHeader(System.IntPtr,NAudio.Wave.Compression.AcmStreamHeaderStruct,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamPrepareHeader_m9B9A12D26792F22FD09782D7892F1EBC955826D8 (intptr_t ___0_hAcmStream, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* ___1_streamHeader, int32_t ___2_prepareFlags, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamUnprepareHeader(System.IntPtr,NAudio.Wave.Compression.AcmStreamHeaderStruct,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamUnprepareHeader_mD8B291DEF5A3955632669AA72F5457C434B8AD43 (intptr_t ___0_hAcmStream, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* ___1_streamHeader, int32_t ___2_flags, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Prepare_m0EBFE3DAD86A2E9DD0DE4D6933A2B8F33567AB9A (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) ;
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Unprepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Unprepare_mA7C33BB2C4430DBEBD38B0566314A5B56C2076A8 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) ;
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamConvert(System.IntPtr,NAudio.Wave.Compression.AcmStreamHeaderStruct,NAudio.Wave.AcmStreamConvertFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamConvert_m09A720755E1EFC292BC2BAB498F57C69E85D5D86 (intptr_t ___0_hAcmStream, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* ___1_streamHeader, int32_t ___2_streamConvertFlags, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmDriverClose(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmFormatSuggest(intptr_t, void*, void*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmStreamOpen(intptr_t*, intptr_t, void*, void*, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke*, intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmStreamClose(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmStreamConvert(intptr_t, void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmStreamPrepareHeader(intptr_t, void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmStreamSize(intptr_t, int32_t, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL acmStreamUnprepareHeader(intptr_t, void*, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.MmException::.ctor(NAudio.MmResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MmException__ctor_m20CFD6073C94C60FFF256F13E5F0263E3DFE4ABE (MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE* __this, int32_t ___0_result, String_t* ___1_function, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_result;
		String_t* L_1 = ___1_function;
		String_t* L_2;
		L_2 = MmException_ErrorMessage_m1B26321FF4720548C9E1A4284BF2DDE3B5D2C6B3(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_2, NULL);
		int32_t L_3 = ___0_result;
		__this->___result_18 = L_3;
		String_t* L_4 = ___1_function;
		__this->___function_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___function_19), (void*)L_4);
		return;
	}
}
// System.String NAudio.MmException::ErrorMessage(NAudio.MmResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MmException_ErrorMessage_m1B26321FF4720548C9E1A4284BF2DDE3B5D2C6B3 (int32_t ___0_result, String_t* ___1_function, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MmResult_t9AE6607FB7ADAAB16461494D60F3C65DA7BA8D58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BCC7BA6B4C68F9672170679E147D2CB17148A74);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_result;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(MmResult_t9AE6607FB7ADAAB16461494D60F3C65DA7BA8D58_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___1_function;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral5BCC7BA6B4C68F9672170679E147D2CB17148A74, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void NAudio.MmException::Try(NAudio.MmResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C (int32_t ___0_result, String_t* ___1_function, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_result;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_result;
		String_t* L_2 = ___1_function;
		MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE* L_3 = (MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MmException__ctor_m20CFD6073C94C60FFF256F13E5F0263E3DFE4ABE(L_3, L_1, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C_RuntimeMethod_var)));
	}

IL_000b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NAudio.Wave.ISampleProvider NAudio.Wave.WaveExtensionMethods::ToSampleProvider(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveExtensionMethods_ToSampleProvider_mC993ADECBE1EE00ECF11CC3CADF049BE5E8ED066 (RuntimeObject* ___0_waveProvider, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_waveProvider;
		RuntimeObject* L_1;
		L_1 = SampleProviderConverters_ConvertWaveProviderIntoSampleProvider_m25E5FA36E87346F19461E4C223533D615C53AE87(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NAudio.Wave.Id3v2Tag NAudio.Wave.Id3v2Tag::ReadTag(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* Id3v2Tag_ReadTag_m4989A81FC07FF431584E017BC0EAD49FE4438427 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_input;
		Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* L_1 = (Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A*)il2cpp_codegen_object_new(Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Id3v2Tag__ctor_m3E216245F94177481120C86C748E11E7199D7DBE(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.FormatException)
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_2 = ((FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)IL2CPP_GET_ACTIVE_EXCEPTION(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*));;
		V_0 = (Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_000e;
	}// end catch (depth: 1)

IL_000e:
	{
		Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* L_3 = V_0;
		return L_3;
	}
}
// System.Void NAudio.Wave.Id3v2Tag::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Id3v2Tag__ctor_m3E216245F94177481120C86C748E11E7199D7DBE (Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_input;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		__this->___tagStartPosition_0 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_input;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_3, L_2, NULL);
		V_0 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_4, ((int32_t)10));
		V_1 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) < ((int32_t)3)))
		{
			goto IL_00c0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_00c0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = 1;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_00c0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)51)))))
		{
			goto IL_00c0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = 5;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&((int32_t)64)))) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_007a;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = V_0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_19, 4);
		V_3 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = 0;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = 1;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = 3;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = 6;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)2097152)));
		int32_t L_36 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		NullCheck(L_37);
		int32_t L_38 = 7;
		uint8_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)16384)))));
		int32_t L_40 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = 8;
		uint8_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)128)))));
		int32_t L_44 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)9);
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, (int32_t)L_47));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = V_0;
		int32_t L_49 = V_2;
		NullCheck(L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_48, L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)((int32_t)((int32_t)L_53&((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00d7;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_54 = V_0;
		NullCheck(L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
		L_55 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_54, ((int32_t)10));
		goto IL_00d7;
	}

IL_00c0:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_56 = ___0_input;
		int64_t L_57 = __this->___tagStartPosition_0;
		NullCheck(L_56);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_56, L_57);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_58 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_58);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_58, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral910B5C6D6DF26A0DEA7365E20334234847E8C426)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Id3v2Tag__ctor_m3E216245F94177481120C86C748E11E7199D7DBE_RuntimeMethod_var)));
	}

IL_00d7:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_59 = ___0_input;
		NullCheck(L_59);
		int64_t L_60;
		L_60 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_59);
		__this->___tagEndPosition_1 = L_60;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_61 = ___0_input;
		int64_t L_62 = __this->___tagStartPosition_0;
		NullCheck(L_61);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_61, L_62);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_63 = V_0;
		int64_t L_64 = __this->___tagEndPosition_1;
		int64_t L_65 = __this->___tagStartPosition_0;
		NullCheck(L_63);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_63, ((int32_t)((int64_t)il2cpp_codegen_subtract(L_64, L_65))));
		__this->___rawData_2 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawData_2), (void*)L_66);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3Frame::LoadFromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3Frame_LoadFromStream_mE175E6AECDF2521725FC79DBDFC7398763406889 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_1;
		L_1 = Mp3Frame_LoadFromStream_m569B4189A98416A467920E4CC1EEFC7C171E2146(L_0, (bool)1, NULL);
		return L_1;
	}
}
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3Frame::LoadFromStream(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3Frame_LoadFromStream_m569B4189A98416A467920E4CC1EEFC7C171E2146 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, bool ___1_readData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_0 = (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F*)il2cpp_codegen_object_new(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mp3Frame__ctor_m8A3312151165B73A88318597406B3E0D63DB8AF8(L_0, NULL);
		V_0 = L_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_1 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_input;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		NullCheck(L_1);
		Mp3Frame_set_FileOffset_mDD5E94785FEA2B98C105AEC5C770ED65870C68CB_inline(L_1, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_005c;
		}
	}
	{
		return (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F*)NULL;
	}

IL_002b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = 2;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = 3;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_21);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 3, 1);
		if ((((int32_t)L_24) >= ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		return (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F*)NULL;
	}

IL_004b:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_25 = V_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_26 = L_25;
		NullCheck(L_26);
		int64_t L_27;
		L_27 = Mp3Frame_get_FileOffset_m0EA767DEF0145B0E9C6AB3944525EA5CB32F4EC6_inline(L_26, NULL);
		V_3 = L_27;
		int64_t L_28 = V_3;
		NullCheck(L_26);
		Mp3Frame_set_FileOffset_mDD5E94785FEA2B98C105AEC5C770ED65870C68CB_inline(L_26, ((int64_t)il2cpp_codegen_add(L_28, ((int64_t)1))), NULL);
	}

IL_005c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_30 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Mp3Frame_IsValidHeader_mBE99FA865BE101D74ED1365C26CB39486C80A218(L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_002b;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_32, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_33, 4));
		bool L_34 = ___1_readData;
		if (!L_34)
		{
			goto IL_00ab;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_35 = V_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_36, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_37);
		NullCheck(L_35);
		Mp3Frame_set_RawData_m8FBBC1A5679F3557D44414CC89696B30A8E05BDC_inline(L_35, L_38, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_40 = V_0;
		NullCheck(L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_40, NULL);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_39, (RuntimeArray*)L_41, 4, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_42 = ___0_input;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_43 = V_0;
		NullCheck(L_43);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_43, NULL);
		int32_t L_45 = V_2;
		NullCheck(L_42);
		int32_t L_46;
		L_46 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_42, L_44, 4, L_45);
		int32_t L_47 = V_2;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_00ba;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_48 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBFD3634540B86B2344EAF1AEE8434D5049A2C25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mp3Frame_LoadFromStream_m569B4189A98416A467920E4CC1EEFC7C171E2146_RuntimeMethod_var)));
	}

IL_00ab:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_49 = ___0_input;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_50 = L_49;
		NullCheck(L_50);
		int64_t L_51;
		L_51 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_50);
		int32_t L_52 = V_2;
		NullCheck(L_50);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_50, ((int64_t)il2cpp_codegen_add(L_51, ((int64_t)L_52))));
	}

IL_00ba:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_53 = V_0;
		return L_53;
	}
}
// System.Void NAudio.Wave.Mp3Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame__ctor_m8A3312151165B73A88318597406B3E0D63DB8AF8 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean NAudio.Wave.Mp3Frame::IsValidHeader(System.Byte[],NAudio.Wave.Mp3Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mp3Frame_IsValidHeader_mBE99FA865BE101D74ED1365C26CB39486C80A218 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_headerBytes, Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___1_frame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B31_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_headerBytes;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_headerBytes;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)((int32_t)((int32_t)L_5&((int32_t)224)))) == ((uint32_t)((int32_t)224)))))
		{
			goto IL_01e1;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_6 = ___1_frame;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_headerBytes;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		Mp3Frame_set_MpegVersion_m7EE0656440CD7BC3082F5BBC8BEBAA735E3A74A6_inline(L_6, ((int32_t)(((int32_t)((int32_t)L_9&((int32_t)24)))>>3)), NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_10 = ___1_frame;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_12 = ___1_frame;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_headerBytes;
		NullCheck(L_13);
		int32_t L_14 = 1;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		Mp3Frame_set_MpegLayer_m84C3EC897E816464CD89EA1168CB8A0F625A0F2C_inline(L_12, ((int32_t)(((int32_t)((int32_t)L_15&6))>>1)), NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_16 = ___1_frame;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Mp3Frame_get_MpegLayer_m514242280336E1677A408F9B24E5B7BCD290CDA3_inline(L_16, NULL);
		if (L_17)
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0050:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_18 = ___1_frame;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Mp3Frame_get_MpegLayer_m514242280336E1677A408F9B24E5B7BCD290CDA3_inline(L_18, NULL);
		if ((((int32_t)L_19) == ((int32_t)3)))
		{
			goto IL_0068;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_20 = ___1_frame;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Mp3Frame_get_MpegLayer_m514242280336E1677A408F9B24E5B7BCD290CDA3_inline(L_20, NULL);
		if ((((int32_t)L_21) == ((int32_t)2)))
		{
			goto IL_0065;
		}
	}
	{
		G_B11_0 = 2;
		goto IL_0069;
	}

IL_0065:
	{
		G_B11_0 = 1;
		goto IL_0069;
	}

IL_0068:
	{
		G_B11_0 = 0;
	}

IL_0069:
	{
		V_0 = G_B11_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_22 = ___1_frame;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___0_headerBytes;
		NullCheck(L_23);
		int32_t L_24 = 1;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		Mp3Frame_set_CrcPresent_m270FF919E7BEF5241AFD746D6C524EF2FC8F6AD2_inline(L_22, (bool)((((int32_t)((int32_t)((int32_t)L_25&1))) == ((int32_t)0))? 1 : 0), NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_26 = ___1_frame;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___0_headerBytes;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_26);
		Mp3Frame_set_BitRateIndex_m6F23263C841E99194ECF99CA31F1400AE5E537B9_inline(L_26, ((int32_t)(((int32_t)((int32_t)L_29&((int32_t)240)))>>4)), NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_30 = ___1_frame;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Mp3Frame_get_BitRateIndex_m4D5DF9243546C697A0E470F85CE25F946A2B852F_inline(L_30, NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0095;
		}
	}
	{
		return (bool)0;
	}

IL_0095:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_32 = ___1_frame;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline(L_32, NULL);
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00a1;
		}
	}
	{
		G_B16_0 = 1;
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B16_0 = 0;
	}

IL_00a2:
	{
		V_1 = G_B16_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_34 = ___1_frame;
		il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D* L_35 = ((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___bitRates_0;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_38 = ___1_frame;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Mp3Frame_get_BitRateIndex_m4D5DF9243546C697A0E470F85CE25F946A2B852F_inline(L_38, NULL);
		NullCheck(L_35);
		int32_t L_40;
		L_40 = (L_35)->GetAt(L_36, L_37, L_39);
		NullCheck(L_34);
		Mp3Frame_set_BitRate_m68B6AAD9A2A72943B2455B256AA7E855A40E495D_inline(L_34, ((int32_t)il2cpp_codegen_multiply(L_40, ((int32_t)1000))), NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_41 = ___1_frame;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Mp3Frame_get_BitRate_m422B535002A96669B5BD8B72C16206B68B53915C_inline(L_41, NULL);
		if (L_42)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)0;
	}

IL_00cb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___0_headerBytes;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_2 = ((int32_t)(((int32_t)((int32_t)L_45&((int32_t)12)))>>2));
		int32_t L_46 = V_2;
		if ((!(((uint32_t)L_46) == ((uint32_t)3))))
		{
			goto IL_00da;
		}
	}
	{
		return (bool)0;
	}

IL_00da:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_47 = ___1_frame;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline(L_47, NULL);
		if ((!(((uint32_t)L_48) == ((uint32_t)3))))
		{
			goto IL_00f2;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_49 = ___1_frame;
		il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion1_2;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_49);
		Mp3Frame_set_SampleRate_m6AD7789BDD850909D0187E8D0EFAFCECD10C6081_inline(L_49, L_53, NULL);
		goto IL_0117;
	}

IL_00f2:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_54 = ___1_frame;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline(L_54, NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)2))))
		{
			goto IL_010a;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_56 = ___1_frame;
		il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion2_3;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_56);
		Mp3Frame_set_SampleRate_m6AD7789BDD850909D0187E8D0EFAFCECD10C6081_inline(L_56, L_60, NULL);
		goto IL_0117;
	}

IL_010a:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_61 = ___1_frame;
		il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion25_4;
		int32_t L_63 = V_2;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_61);
		Mp3Frame_set_SampleRate_m6AD7789BDD850909D0187E8D0EFAFCECD10C6081_inline(L_61, L_65, NULL);
	}

IL_0117:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___0_headerBytes;
		NullCheck(L_66);
		int32_t L_67 = 2;
		uint8_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)L_68&2))) == ((int32_t)2))? 1 : 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___0_headerBytes;
		NullCheck(L_69);
		int32_t L_70 = 2;
		uint8_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_72 = ___1_frame;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___0_headerBytes;
		NullCheck(L_73);
		int32_t L_74 = 3;
		uint8_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		Mp3Frame_set_ChannelMode_mF079204FC1054D2091E1A66EDF266FA92D79C921_inline(L_72, ((int32_t)(((int32_t)((int32_t)L_75&((int32_t)192)))>>6)), NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_76 = ___1_frame;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___0_headerBytes;
		NullCheck(L_77);
		int32_t L_78 = 3;
		uint8_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_76);
		Mp3Frame_set_ChannelExtension_m679189A69EF245778F389076DD5619AF0C9F5602_inline(L_76, ((int32_t)(((int32_t)((int32_t)L_79&((int32_t)48)))>>4)), NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_80 = ___1_frame;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = Mp3Frame_get_ChannelExtension_m6142B24794DFD850D6186721BF531B00E825BC87_inline(L_80, NULL);
		if (!L_81)
		{
			goto IL_0156;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_82 = ___1_frame;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_82, NULL);
		if ((((int32_t)L_83) == ((int32_t)1)))
		{
			goto IL_0156;
		}
	}
	{
		return (bool)0;
	}

IL_0156:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_84 = ___1_frame;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ___0_headerBytes;
		NullCheck(L_85);
		int32_t L_86 = 3;
		uint8_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_84);
		Mp3Frame_set_Copyright_m7184DBEB5BA633FA9D4E873E221DA418480B1B52_inline(L_84, (bool)((((int32_t)((int32_t)((int32_t)L_87&8))) == ((int32_t)8))? 1 : 0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___0_headerBytes;
		NullCheck(L_88);
		int32_t L_89 = 3;
		uint8_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = ___0_headerBytes;
		NullCheck(L_91);
		int32_t L_92 = 3;
		uint8_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		bool L_94 = V_3;
		if (L_94)
		{
			goto IL_0172;
		}
	}
	{
		G_B31_0 = 0;
		goto IL_0173;
	}

IL_0172:
	{
		G_B31_0 = 1;
	}

IL_0173:
	{
		V_4 = G_B31_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_95 = ___1_frame;
		il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_96 = ((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___samplesPerFrame_1;
		int32_t L_97 = V_1;
		int32_t L_98 = V_0;
		NullCheck(L_96);
		int32_t L_99;
		L_99 = (L_96)->GetAt(L_97, L_98);
		NullCheck(L_95);
		Mp3Frame_set_SampleCount_mCE1C08A830D1FD4228A9BF48E106EF28D0E4CB46_inline(L_95, L_99, NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_100 = ___1_frame;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = Mp3Frame_get_SampleCount_m6D99B5EB4D4F4E0AAB6846431BB6F036E3E249CE_inline(L_100, NULL);
		V_5 = ((int32_t)(L_101/8));
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_102 = ___1_frame;
		NullCheck(L_102);
		int32_t L_103;
		L_103 = Mp3Frame_get_MpegLayer_m514242280336E1677A408F9B24E5B7BCD290CDA3_inline(L_102, NULL);
		if ((!(((uint32_t)L_103) == ((uint32_t)3))))
		{
			goto IL_01b7;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_104 = ___1_frame;
		int32_t L_105 = V_5;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_106 = ___1_frame;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = Mp3Frame_get_BitRate_m422B535002A96669B5BD8B72C16206B68B53915C_inline(L_106, NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_108 = ___1_frame;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_108, NULL);
		int32_t L_110 = V_4;
		NullCheck(L_104);
		Mp3Frame_set_FrameLength_mA56E8F798863128DF398B94D3E2528D661428F41_inline(L_104, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_105, L_107))/L_109)), L_110)), 4)), NULL);
		goto IL_01d0;
	}

IL_01b7:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_111 = ___1_frame;
		int32_t L_112 = V_5;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_113 = ___1_frame;
		NullCheck(L_113);
		int32_t L_114;
		L_114 = Mp3Frame_get_BitRate_m422B535002A96669B5BD8B72C16206B68B53915C_inline(L_113, NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_115 = ___1_frame;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_115, NULL);
		int32_t L_117 = V_4;
		NullCheck(L_111);
		Mp3Frame_set_FrameLength_mA56E8F798863128DF398B94D3E2528D661428F41_inline(L_111, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_112, L_114))/L_116)), L_117)), NULL);
	}

IL_01d0:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_118 = ___1_frame;
		NullCheck(L_118);
		int32_t L_119;
		L_119 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_118, NULL);
		if ((((int32_t)L_119) <= ((int32_t)((int32_t)16384))))
		{
			goto IL_01df;
		}
	}
	{
		return (bool)0;
	}

IL_01df:
	{
		return (bool)1;
	}

IL_01e1:
	{
		return (bool)0;
	}
}
// System.Int32 NAudio.Wave.Mp3Frame::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_SampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_SampleRate_m6AD7789BDD850909D0187E8D0EFAFCECD10C6081 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleRateU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 NAudio.Wave.Mp3Frame::get_FrameLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFrameLengthU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_FrameLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_FrameLength_mA56E8F798863128DF398B94D3E2528D661428F41 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFrameLengthU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Int32 NAudio.Wave.Mp3Frame::get_BitRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_BitRate_m422B535002A96669B5BD8B72C16206B68B53915C (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitRateU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_BitRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_BitRate_m68B6AAD9A2A72943B2455B256AA7E855A40E495D (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitRateU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Byte[] NAudio.Wave.Mp3Frame::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRawDataU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_RawData_m8FBBC1A5679F3557D44414CC89696B30A8E05BDC (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRawDataU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawDataU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// NAudio.Wave.MpegVersion NAudio.Wave.Mp3Frame::get_MpegVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMpegVersionU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_MpegVersion(NAudio.Wave.MpegVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_MpegVersion_m7EE0656440CD7BC3082F5BBC8BEBAA735E3A74A6 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMpegVersionU3Ek__BackingField_10 = L_0;
		return;
	}
}
// NAudio.Wave.MpegLayer NAudio.Wave.Mp3Frame::get_MpegLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_MpegLayer_m514242280336E1677A408F9B24E5B7BCD290CDA3 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMpegLayerU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_MpegLayer(NAudio.Wave.MpegLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_MpegLayer_m84C3EC897E816464CD89EA1168CB8A0F625A0F2C (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMpegLayerU3Ek__BackingField_11 = L_0;
		return;
	}
}
// NAudio.Wave.ChannelMode NAudio.Wave.Mp3Frame::get_ChannelMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelModeU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_ChannelMode(NAudio.Wave.ChannelMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_ChannelMode_mF079204FC1054D2091E1A66EDF266FA92D79C921 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelModeU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Int32 NAudio.Wave.Mp3Frame::get_SampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_SampleCount_m6D99B5EB4D4F4E0AAB6846431BB6F036E3E249CE (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_SampleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_SampleCount_mCE1C08A830D1FD4228A9BF48E106EF28D0E4CB46 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleCountU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Int32 NAudio.Wave.Mp3Frame::get_ChannelExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_ChannelExtension_m6142B24794DFD850D6186721BF531B00E825BC87 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelExtensionU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_ChannelExtension(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_ChannelExtension_m679189A69EF245778F389076DD5619AF0C9F5602 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelExtensionU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Int32 NAudio.Wave.Mp3Frame::get_BitRateIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_BitRateIndex_m4D5DF9243546C697A0E470F85CE25F946A2B852F (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitRateIndexU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_BitRateIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_BitRateIndex_m6F23263C841E99194ECF99CA31F1400AE5E537B9 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitRateIndexU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_Copyright(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_Copyright_m7184DBEB5BA633FA9D4E873E221DA418480B1B52 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CCopyrightU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_CrcPresent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_CrcPresent_m270FF919E7BEF5241AFD746D6C524EF2FC8F6AD2 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CCrcPresentU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Int64 NAudio.Wave.Mp3Frame::get_FileOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Mp3Frame_get_FileOffset_m0EA767DEF0145B0E9C6AB3944525EA5CB32F4EC6 (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CFileOffsetU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Frame::set_FileOffset(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame_set_FileOffset_mDD5E94785FEA2B98C105AEC5C770ED65870C68CB (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CFileOffsetU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Void NAudio.Wave.Mp3Frame::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Frame__cctor_m7E68BC25C63619593A97B09E6502631C00766558 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____092DE122C0E518AB6C965A67F2A6700C5C154012_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____0E8DA6E28C905EAE0C6E8EC68029638F77B7F0E7_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____82564237E57F0539E27547E57C418093CE731C12_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____BA3AD38225074714E59E5C141A634AD9B79DCEAC_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____BCF14D7DFE00EC65ACE5BE991ECCBC2ACB9FB2B6_4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)3, (il2cpp_array_size_t)((int32_t)15) };
		Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D* L_0 = (Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D*)GenArrayNew(Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D_il2cpp_TypeInfo_var, L_1);
		Int32U5BU2CU2CU5D_t402EE1CD7E202B219E9B0430748BCBCD773BA52D* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____82564237E57F0539E27547E57C418093CE731C12_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___bitRates_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___bitRates_0), (void*)L_2);
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)3 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_4 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_5);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_6 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____092DE122C0E518AB6C965A67F2A6700C5C154012_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_6, L_7, NULL);
		((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___samplesPerFrame_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___samplesPerFrame_1), (void*)L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____BCF14D7DFE00EC65ACE5BE991ECCBC2ACB9FB2B6_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion1_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion1_2), (void*)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_13 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____BA3AD38225074714E59E5C141A634AD9B79DCEAC_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_12, L_13, NULL);
		((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion2_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion2_3), (void*)L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____0E8DA6E28C905EAE0C6E8EC68029638F77B7F0E7_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_15, L_16, NULL);
		((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion25_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_StaticFields*)il2cpp_codegen_static_fields_for(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var))->___sampleRatesVersion25_4), (void*)L_15);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.AcmMp3FrameDecompressor::.ctor(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmMp3FrameDecompressor__ctor_mF8814BC87942B7396EA2F6046793E90254F64DB4 (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_sourceFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_0 = ___0_sourceFormat;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1;
		L_1 = AcmStream_SuggestPcmFormat_m5F7CFEBB0EE96D4A741B27AE6FCC072ABB09ECA0(L_0, NULL);
		__this->___pcmFormat_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pcmFormat_1), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2 = ___0_sourceFormat;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_3 = __this->___pcmFormat_1;
		AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* L_4 = (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7*)il2cpp_codegen_object_new(AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AcmStream__ctor_m67160DE442F21278A9CFD74D8F31B1D20AD8C3A7(L_4, L_2, L_3, NULL);
		__this->___conversionStream_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___conversionStream_0), (void*)L_4);
		goto IL_0036;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Exception)
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		__this->___disposed_2 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var)));
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
// NAudio.Wave.WaveFormat NAudio.Wave.AcmMp3FrameDecompressor::get_OutputFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* AcmMp3FrameDecompressor_get_OutputFormat_mA23A04AFE4361B05F833D0E603DAE3A0561A4B46 (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, const RuntimeMethod* method) 
{
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_0 = __this->___pcmFormat_1;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.AcmMp3FrameDecompressor::DecompressFrame(NAudio.Wave.Mp3Frame,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmMp3FrameDecompressor_DecompressFrame_m9B5344AF409D017EAE8F35B03522F50DDD3F4730 (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___0_frame, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dest, int32_t ___2_destOffset, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_0 = ___0_frame;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1AB6616BF9578984C009BCD6A188E983662EB37)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4038FF8D4C1012E66E2B2D332E0CAB0D149AD9FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AcmMp3FrameDecompressor_DecompressFrame_m9B5344AF409D017EAE8F35B03522F50DDD3F4730_RuntimeMethod_var)));
	}

IL_0013:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_2 = ___0_frame;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_2, NULL);
		AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* L_4 = __this->___conversionStream_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = AcmStream_get_SourceBuffer_m1ACC09AE24011B012C0A7440CC30E3EAA931571F(L_4, NULL);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_6 = ___0_frame;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_6, NULL);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_3, (RuntimeArray*)L_5, L_7, NULL);
		V_0 = 0;
		AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* L_8 = __this->___conversionStream_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_9 = ___0_frame;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_9, NULL);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = AcmStream_Convert_m6FA5A3C9EA2E3EDC6110EF1B130C54E96C5FE1F9(L_8, L_10, (&V_0), NULL);
		V_1 = L_11;
		int32_t L_12 = V_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_13 = ___0_frame;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_13, NULL);
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_18 = ___0_frame;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_18, NULL);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_20);
		String_t* L_22;
		L_22 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral809A1B87298692B3EA923C210C9BF898E6769B53)), L_17, L_21, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AcmMp3FrameDecompressor_DecompressFrame_m9B5344AF409D017EAE8F35B03522F50DDD3F4730_RuntimeMethod_var)));
	}

IL_006f:
	{
		AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* L_24 = __this->___conversionStream_0;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = AcmStream_get_DestBuffer_m61DFC6E8957976B0D3454F631B26F2062D7CC39D(L_24, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___1_dest;
		int32_t L_27 = ___2_destOffset;
		int32_t L_28 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_25, 0, (RuntimeArray*)L_26, L_27, L_28, NULL);
		int32_t L_29 = V_1;
		return L_29;
	}
}
// System.Void NAudio.Wave.AcmMp3FrameDecompressor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmMp3FrameDecompressor_Reset_m162C7AE8E57A7083BAC16D9823B9EDB23AAD071E (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, const RuntimeMethod* method) 
{
	{
		AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* L_0 = __this->___conversionStream_0;
		NullCheck(L_0);
		AcmStream_Reposition_mEAB7297FA28A5F708ABEFB1FA1A9D0F99E912C73(L_0, NULL);
		return;
	}
}
// System.Void NAudio.Wave.AcmMp3FrameDecompressor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmMp3FrameDecompressor_Dispose_mF79D71FB74D55699D10F40E6B31C9E9B8BE57AA6 (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_2;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		__this->___disposed_2 = (bool)1;
		AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* L_1 = __this->___conversionStream_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* L_2 = __this->___conversionStream_0;
		NullCheck(L_2);
		AcmStream_Dispose_m46F586D9B290B86C6D64DF0F8B72ADC96B62E0A5(L_2, NULL);
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void NAudio.Wave.AcmMp3FrameDecompressor::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmMp3FrameDecompressor_Finalize_mE179CB6B829C5C16C12783B3580A95A32A326BB4 (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AcmMp3FrameDecompressor_Dispose_mF79D71FB74D55699D10F40E6B31C9E9B8BE57AA6(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 NAudio.Wave.XingHeader::ReadBigEndian(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XingHeader_ReadBigEndian_m12DD07E97598C9DB34FD1E9682A37AC765BAC28A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_buffer;
		int32_t L_5 = ___1_offset;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_buffer;
		int32_t L_9 = ___1_offset;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_buffer;
		int32_t L_13 = ___1_offset;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<8))|(int32_t)L_7))<<8))|(int32_t)L_11))<<8))|(int32_t)L_15));
	}
}
// NAudio.Wave.XingHeader NAudio.Wave.XingHeader::LoadXingHeader(NAudio.Wave.Mp3Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* XingHeader_LoadXingHeader_mF0EEC56484E3E319789109FBFAF2AD0D33A21D9A (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___0_frame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B20_0 = 0;
	{
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_0 = (XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66*)il2cpp_codegen_object_new(XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XingHeader__ctor_m7F848420392CC0C3A7508AE06324CDDC7A97F25D(L_0, NULL);
		V_0 = L_0;
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_1 = V_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_2 = ___0_frame;
		NullCheck(L_1);
		L_1->___frame_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___frame_7), (void*)L_2);
		V_1 = 0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_3 = ___0_frame;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline(L_3, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002b;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_5 = ___0_frame;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0026;
		}
	}
	{
		V_1 = ((int32_t)36);
		goto IL_0049;
	}

IL_0026:
	{
		V_1 = ((int32_t)21);
		goto IL_0049;
	}

IL_002b:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_7 = ___0_frame;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0047;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_9 = ___0_frame;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_9, NULL);
		if ((((int32_t)L_10) == ((int32_t)3)))
		{
			goto IL_0042;
		}
	}
	{
		V_1 = ((int32_t)21);
		goto IL_0049;
	}

IL_0042:
	{
		V_1 = ((int32_t)13);
		goto IL_0049;
	}

IL_0047:
	{
		return (XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66*)NULL;
	}

IL_0049:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_11 = ___0_frame;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_11, NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_008c;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_16 = ___0_frame;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_16, NULL);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)105)))))
		{
			goto IL_008c;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_21 = ___0_frame;
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_21, NULL);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 2));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_008c;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_26 = ___0_frame;
		NullCheck(L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_26, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 3));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)103)))))
		{
			goto IL_008c;
		}
	}
	{
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		L_31->___startOffset_2 = L_32;
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 4));
		goto IL_008e;
	}

IL_008c:
	{
		return (XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66*)NULL;
	}

IL_008e:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_34 = ___0_frame;
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_34, NULL);
		int32_t L_36 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = XingHeader_ReadBigEndian_m12DD07E97598C9DB34FD1E9682A37AC765BAC28A(L_35, L_36, NULL);
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 4));
		int32_t L_39 = L_37;
		G_B16_0 = L_39;
		if (!((int32_t)(L_39&1)))
		{
			G_B17_0 = L_39;
			goto IL_00ae;
		}
	}
	{
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_40 = V_0;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		L_40->___framesOffset_5 = L_41;
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 4));
		G_B17_0 = G_B16_0;
	}

IL_00ae:
	{
		int32_t L_43 = G_B17_0;
		G_B18_0 = L_43;
		if (!((int32_t)(L_43&2)))
		{
			G_B19_0 = L_43;
			goto IL_00be;
		}
	}
	{
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_44 = V_0;
		int32_t L_45 = V_1;
		NullCheck(L_44);
		L_44->___bytesOffset_6 = L_45;
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 4));
		G_B19_0 = G_B18_0;
	}

IL_00be:
	{
		int32_t L_47 = G_B19_0;
		G_B20_0 = L_47;
		if (!((int32_t)(L_47&4)))
		{
			G_B21_0 = L_47;
			goto IL_00cf;
		}
	}
	{
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		L_48->___tocOffset_4 = L_49;
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, ((int32_t)100)));
		G_B21_0 = G_B20_0;
	}

IL_00cf:
	{
		if (!((int32_t)(G_B21_0&8)))
		{
			goto IL_00e9;
		}
	}
	{
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_51 = V_0;
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_52 = ___0_frame;
		NullCheck(L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53;
		L_53 = Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline(L_52, NULL);
		int32_t L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = XingHeader_ReadBigEndian_m12DD07E97598C9DB34FD1E9682A37AC765BAC28A(L_53, L_54, NULL);
		NullCheck(L_51);
		L_51->___vbrScale_1 = L_55;
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 4));
	}

IL_00e9:
	{
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_57 = V_0;
		int32_t L_58 = V_1;
		NullCheck(L_57);
		L_57->___endOffset_3 = L_58;
		XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_59 = V_0;
		return L_59;
	}
}
// System.Void NAudio.Wave.XingHeader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XingHeader__ctor_m7F848420392CC0C3A7508AE06324CDDC7A97F25D (XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* __this, const RuntimeMethod* method) 
{
	{
		__this->___vbrScale_1 = (-1);
		__this->___tocOffset_4 = (-1);
		__this->___framesOffset_5 = (-1);
		__this->___bytesOffset_6 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NAudio.Wave.XingHeader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XingHeader__cctor_m2073AD196BCC2A0A2ACF0407D544705D03E9A307 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____E9A0235C10033F675F5D2FB14F1C1B682E505042_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF868D6416903347759250360A72F45733F06DC1F____E9A0235C10033F675F5D2FB14F1C1B682E505042_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_StaticFields*)il2cpp_codegen_static_fields_for(XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var))->___sr_table_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_StaticFields*)il2cpp_codegen_static_fields_for(XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var))->___sr_table_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.Gsm610WaveFormat
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke(const Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB& unmarshaled, Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_pinvoke& marshaled)
{
	marshaled.___samplesPerBlock_7 = unmarshaled.___samplesPerBlock_7;
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke_back(const Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_pinvoke& marshaled, Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB& unmarshaled)
{
	int16_t unmarshaledsamplesPerBlock_temp_0 = 0;
	unmarshaledsamplesPerBlock_temp_0 = marshaled.___samplesPerBlock_7;
	unmarshaled.___samplesPerBlock_7 = unmarshaledsamplesPerBlock_temp_0;
	uint16_t unmarshaledwaveFormatTag_temp_1 = 0;
	unmarshaledwaveFormatTag_temp_1 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_1;
	int16_t unmarshaledchannels_temp_2 = 0;
	unmarshaledchannels_temp_2 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_2;
	int32_t unmarshaledsampleRate_temp_3 = 0;
	unmarshaledsampleRate_temp_3 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_3;
	int32_t unmarshaledaverageBytesPerSecond_temp_4 = 0;
	unmarshaledaverageBytesPerSecond_temp_4 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_4;
	int16_t unmarshaledblockAlign_temp_5 = 0;
	unmarshaledblockAlign_temp_5 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_5;
	int16_t unmarshaledbitsPerSample_temp_6 = 0;
	unmarshaledbitsPerSample_temp_6 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_6;
	int16_t unmarshaledextraSize_temp_7 = 0;
	unmarshaledextraSize_temp_7 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_7;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Gsm610WaveFormat
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke_cleanup(Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.Gsm610WaveFormat
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_com(const Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB& unmarshaled, Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_com& marshaled)
{
	marshaled.___samplesPerBlock_7 = unmarshaled.___samplesPerBlock_7;
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_com_back(const Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_com& marshaled, Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB& unmarshaled)
{
	int16_t unmarshaledsamplesPerBlock_temp_0 = 0;
	unmarshaledsamplesPerBlock_temp_0 = marshaled.___samplesPerBlock_7;
	unmarshaled.___samplesPerBlock_7 = unmarshaledsamplesPerBlock_temp_0;
	uint16_t unmarshaledwaveFormatTag_temp_1 = 0;
	unmarshaledwaveFormatTag_temp_1 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_1;
	int16_t unmarshaledchannels_temp_2 = 0;
	unmarshaledchannels_temp_2 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_2;
	int32_t unmarshaledsampleRate_temp_3 = 0;
	unmarshaledsampleRate_temp_3 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_3;
	int32_t unmarshaledaverageBytesPerSecond_temp_4 = 0;
	unmarshaledaverageBytesPerSecond_temp_4 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_4;
	int16_t unmarshaledblockAlign_temp_5 = 0;
	unmarshaledblockAlign_temp_5 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_5;
	int16_t unmarshaledbitsPerSample_temp_6 = 0;
	unmarshaledbitsPerSample_temp_6 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_6;
	int16_t unmarshaledextraSize_temp_7 = 0;
	unmarshaledextraSize_temp_7 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_7;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Gsm610WaveFormat
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_com_cleanup(Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.Mp3WaveFormat
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke(const Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154& unmarshaled, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_pinvoke& marshaled)
{
	marshaled.___id_7 = unmarshaled.___id_7;
	marshaled.___flags_8 = unmarshaled.___flags_8;
	marshaled.___blockSize_9 = unmarshaled.___blockSize_9;
	marshaled.___framesPerBlock_10 = unmarshaled.___framesPerBlock_10;
	marshaled.___codecDelay_11 = unmarshaled.___codecDelay_11;
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke_back(const Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_pinvoke& marshaled, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154& unmarshaled)
{
	uint16_t unmarshaledid_temp_0 = 0;
	unmarshaledid_temp_0 = marshaled.___id_7;
	unmarshaled.___id_7 = unmarshaledid_temp_0;
	int32_t unmarshaledflags_temp_1 = 0;
	unmarshaledflags_temp_1 = marshaled.___flags_8;
	unmarshaled.___flags_8 = unmarshaledflags_temp_1;
	uint16_t unmarshaledblockSize_temp_2 = 0;
	unmarshaledblockSize_temp_2 = marshaled.___blockSize_9;
	unmarshaled.___blockSize_9 = unmarshaledblockSize_temp_2;
	uint16_t unmarshaledframesPerBlock_temp_3 = 0;
	unmarshaledframesPerBlock_temp_3 = marshaled.___framesPerBlock_10;
	unmarshaled.___framesPerBlock_10 = unmarshaledframesPerBlock_temp_3;
	uint16_t unmarshaledcodecDelay_temp_4 = 0;
	unmarshaledcodecDelay_temp_4 = marshaled.___codecDelay_11;
	unmarshaled.___codecDelay_11 = unmarshaledcodecDelay_temp_4;
	uint16_t unmarshaledwaveFormatTag_temp_5 = 0;
	unmarshaledwaveFormatTag_temp_5 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_5;
	int16_t unmarshaledchannels_temp_6 = 0;
	unmarshaledchannels_temp_6 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_6;
	int32_t unmarshaledsampleRate_temp_7 = 0;
	unmarshaledsampleRate_temp_7 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_7;
	int32_t unmarshaledaverageBytesPerSecond_temp_8 = 0;
	unmarshaledaverageBytesPerSecond_temp_8 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_8;
	int16_t unmarshaledblockAlign_temp_9 = 0;
	unmarshaledblockAlign_temp_9 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_9;
	int16_t unmarshaledbitsPerSample_temp_10 = 0;
	unmarshaledbitsPerSample_temp_10 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_10;
	int16_t unmarshaledextraSize_temp_11 = 0;
	unmarshaledextraSize_temp_11 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_11;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Mp3WaveFormat
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke_cleanup(Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.Mp3WaveFormat
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_com(const Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154& unmarshaled, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_com& marshaled)
{
	marshaled.___id_7 = unmarshaled.___id_7;
	marshaled.___flags_8 = unmarshaled.___flags_8;
	marshaled.___blockSize_9 = unmarshaled.___blockSize_9;
	marshaled.___framesPerBlock_10 = unmarshaled.___framesPerBlock_10;
	marshaled.___codecDelay_11 = unmarshaled.___codecDelay_11;
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_com_back(const Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_com& marshaled, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154& unmarshaled)
{
	uint16_t unmarshaledid_temp_0 = 0;
	unmarshaledid_temp_0 = marshaled.___id_7;
	unmarshaled.___id_7 = unmarshaledid_temp_0;
	int32_t unmarshaledflags_temp_1 = 0;
	unmarshaledflags_temp_1 = marshaled.___flags_8;
	unmarshaled.___flags_8 = unmarshaledflags_temp_1;
	uint16_t unmarshaledblockSize_temp_2 = 0;
	unmarshaledblockSize_temp_2 = marshaled.___blockSize_9;
	unmarshaled.___blockSize_9 = unmarshaledblockSize_temp_2;
	uint16_t unmarshaledframesPerBlock_temp_3 = 0;
	unmarshaledframesPerBlock_temp_3 = marshaled.___framesPerBlock_10;
	unmarshaled.___framesPerBlock_10 = unmarshaledframesPerBlock_temp_3;
	uint16_t unmarshaledcodecDelay_temp_4 = 0;
	unmarshaledcodecDelay_temp_4 = marshaled.___codecDelay_11;
	unmarshaled.___codecDelay_11 = unmarshaledcodecDelay_temp_4;
	uint16_t unmarshaledwaveFormatTag_temp_5 = 0;
	unmarshaledwaveFormatTag_temp_5 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_5;
	int16_t unmarshaledchannels_temp_6 = 0;
	unmarshaledchannels_temp_6 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_6;
	int32_t unmarshaledsampleRate_temp_7 = 0;
	unmarshaledsampleRate_temp_7 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_7;
	int32_t unmarshaledaverageBytesPerSecond_temp_8 = 0;
	unmarshaledaverageBytesPerSecond_temp_8 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_8;
	int16_t unmarshaledblockAlign_temp_9 = 0;
	unmarshaledblockAlign_temp_9 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_9;
	int16_t unmarshaledbitsPerSample_temp_10 = 0;
	unmarshaledbitsPerSample_temp_10 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_10;
	int16_t unmarshaledextraSize_temp_11 = 0;
	unmarshaledextraSize_temp_11 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_11;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Mp3WaveFormat
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_com_cleanup(Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshaled_com& marshaled)
{
}
// System.Void NAudio.Wave.Mp3WaveFormat::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3WaveFormat__ctor_mAEFBE4CFFB393F721E5719D047626A435F5733B3 (Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* __this, int32_t ___0_sampleRate, int32_t ___1_channels, int32_t ___2_blockSize, int32_t ___3_bitRate, const RuntimeMethod* method) 
{
	{
		WaveFormat__ctor_m1CC2B2191800F3701831FC33CC343CF846657D7D(__this, NULL);
		((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)__this)->___waveFormatTag_0 = ((int32_t)85);
		int32_t L_0 = ___1_channels;
		((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)__this)->___channels_1 = ((int16_t)L_0);
		int32_t L_1 = ___3_bitRate;
		((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)__this)->___averageBytesPerSecond_3 = ((int32_t)(L_1/8));
		((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)__this)->___bitsPerSample_5 = (int16_t)0;
		((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)__this)->___blockAlign_4 = (int16_t)1;
		int32_t L_2 = ___0_sampleRate;
		((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)__this)->___sampleRate_2 = L_2;
		((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)__this)->___extraSize_6 = (int16_t)((int32_t)12);
		__this->___id_7 = 1;
		__this->___flags_8 = 0;
		int32_t L_3 = ___2_blockSize;
		__this->___blockSize_9 = (uint16_t)((int32_t)(uint16_t)L_3);
		__this->___framesPerBlock_10 = (uint16_t)1;
		__this->___codecDelay_11 = (uint16_t)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke(const WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4& unmarshaled, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke& marshaled)
{
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_back(const WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke& marshaled, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4& unmarshaled)
{
	uint16_t unmarshaledwaveFormatTag_temp_0 = 0;
	unmarshaledwaveFormatTag_temp_0 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_0;
	int16_t unmarshaledchannels_temp_1 = 0;
	unmarshaledchannels_temp_1 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_1;
	int32_t unmarshaledsampleRate_temp_2 = 0;
	unmarshaledsampleRate_temp_2 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_2;
	int32_t unmarshaledaverageBytesPerSecond_temp_3 = 0;
	unmarshaledaverageBytesPerSecond_temp_3 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_3;
	int16_t unmarshaledblockAlign_temp_4 = 0;
	unmarshaledblockAlign_temp_4 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_4;
	int16_t unmarshaledbitsPerSample_temp_5 = 0;
	unmarshaledbitsPerSample_temp_5 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_5;
	int16_t unmarshaledextraSize_temp_6 = 0;
	unmarshaledextraSize_temp_6 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_6;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_cleanup(WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_com(const WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4& unmarshaled, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com& marshaled)
{
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_com_back(const WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com& marshaled, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4& unmarshaled)
{
	uint16_t unmarshaledwaveFormatTag_temp_0 = 0;
	unmarshaledwaveFormatTag_temp_0 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_0;
	int16_t unmarshaledchannels_temp_1 = 0;
	unmarshaledchannels_temp_1 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_1;
	int32_t unmarshaledsampleRate_temp_2 = 0;
	unmarshaledsampleRate_temp_2 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_2;
	int32_t unmarshaledaverageBytesPerSecond_temp_3 = 0;
	unmarshaledaverageBytesPerSecond_temp_3 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_3;
	int16_t unmarshaledblockAlign_temp_4 = 0;
	unmarshaledblockAlign_temp_4 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_4;
	int16_t unmarshaledbitsPerSample_temp_5 = 0;
	unmarshaledbitsPerSample_temp_5 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_5;
	int16_t unmarshaledextraSize_temp_6 = 0;
	unmarshaledextraSize_temp_6 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_6;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.WaveFormat
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_com_cleanup(WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com& marshaled)
{
}
// System.Void NAudio.Wave.WaveFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m1CC2B2191800F3701831FC33CC343CF846657D7D (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		WaveFormat__ctor_m950E9AF47FEFD410899461E608FA502BFC2810B8(__this, ((int32_t)44100), ((int32_t)16), 2, NULL);
		return;
	}
}
// System.Void NAudio.Wave.WaveFormat::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m950E9AF47FEFD410899461E608FA502BFC2810B8 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, int32_t ___0_rate, int32_t ___1_bits, int32_t ___2_channels, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___2_channels;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FB3B17CEC619C238633561C3FAE9D8ADED19582)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52601ED7F00B67705F4E274C1B7F7327F4BA4B0D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveFormat__ctor_m950E9AF47FEFD410899461E608FA502BFC2810B8_RuntimeMethod_var)));
	}

IL_001a:
	{
		__this->___waveFormatTag_0 = 1;
		int32_t L_2 = ___2_channels;
		__this->___channels_1 = ((int16_t)L_2);
		int32_t L_3 = ___0_rate;
		__this->___sampleRate_2 = L_3;
		int32_t L_4 = ___1_bits;
		__this->___bitsPerSample_5 = ((int16_t)L_4);
		__this->___extraSize_6 = (int16_t)0;
		int32_t L_5 = ___2_channels;
		int32_t L_6 = ___1_bits;
		__this->___blockAlign_4 = ((int16_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)(L_6/8)))));
		int32_t L_7 = __this->___sampleRate_2;
		int16_t L_8 = __this->___blockAlign_4;
		__this->___averageBytesPerSecond_3 = ((int32_t)il2cpp_codegen_multiply(L_7, (int32_t)L_8));
		return;
	}
}
// NAudio.Wave.WaveFormat NAudio.Wave.WaveFormat::CreateIeeeFloatWaveFormat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* WaveFormat_CreateIeeeFloatWaveFormat_m4F828BB52C1F4C909B345A573395587E14F66103 (int32_t ___0_sampleRate, int32_t ___1_channels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* V_0 = NULL;
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_0 = (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)il2cpp_codegen_object_new(WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WaveFormat__ctor_m1CC2B2191800F3701831FC33CC343CF846657D7D(L_0, NULL);
		V_0 = L_0;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1 = V_0;
		NullCheck(L_1);
		L_1->___waveFormatTag_0 = 3;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2 = V_0;
		int32_t L_3 = ___1_channels;
		NullCheck(L_2);
		L_2->___channels_1 = ((int16_t)L_3);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_4 = V_0;
		NullCheck(L_4);
		L_4->___bitsPerSample_5 = (int16_t)((int32_t)32);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_5 = V_0;
		int32_t L_6 = ___0_sampleRate;
		NullCheck(L_5);
		L_5->___sampleRate_2 = L_6;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_7 = V_0;
		int32_t L_8 = ___1_channels;
		NullCheck(L_7);
		L_7->___blockAlign_4 = ((int16_t)((int32_t)il2cpp_codegen_multiply(4, L_8)));
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_9 = V_0;
		int32_t L_10 = ___0_sampleRate;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_11 = V_0;
		NullCheck(L_11);
		int16_t L_12 = L_11->___blockAlign_4;
		NullCheck(L_9);
		L_9->___averageBytesPerSecond_3 = ((int32_t)il2cpp_codegen_multiply(L_10, (int32_t)L_12));
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_13 = V_0;
		NullCheck(L_13);
		L_13->___extraSize_6 = (int16_t)0;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_14 = V_0;
		return L_14;
	}
}
// NAudio.Wave.WaveFormat NAudio.Wave.WaveFormat::MarshalFromPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* WaveFormat_MarshalFromPtr_mBC7E9CE8CBE72535A15C0F9E1CA529651551528A (intptr_t ___0_pointer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalHelpers_PtrToStructure_TisAdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_m2958B92153AA4642A00EF144B0E2D5145029D91F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalHelpers_PtrToStructure_TisGsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_mCBE400732A977199A9FA3868D2F445C4FB131186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalHelpers_PtrToStructure_TisWaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_mDBAD911BED518C3E00F5D0545F45F1F466EB74AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalHelpers_PtrToStructure_TisWaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_m4D3F82489D8E7B30EDC554EBE52ED470D7096566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalHelpers_PtrToStructure_TisWaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_mE8C19AD04D158A8E2AF2FEDFF7A13E939D01C4A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* V_0 = NULL;
	uint16_t V_1 = 0;
	{
		intptr_t L_0 = ___0_pointer;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1;
		L_1 = MarshalHelpers_PtrToStructure_TisWaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_mE8C19AD04D158A8E2AF2FEDFF7A13E939D01C4A7(L_0, MarshalHelpers_PtrToStructure_TisWaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_mE8C19AD04D158A8E2AF2FEDFF7A13E939D01C4A7_RuntimeMethod_var);
		V_0 = L_1;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2 = V_0;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21_inline(L_2, NULL);
		V_1 = L_3;
		uint16_t L_4 = V_1;
		if ((!(((uint32_t)L_4) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		uint16_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_004f;
	}

IL_001c:
	{
		uint16_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49))))
		{
			goto IL_0046;
		}
	}
	{
		uint16_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)65534))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_004f;
	}

IL_002b:
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_9 = V_0;
		NullCheck(L_9);
		L_9->___extraSize_6 = (int16_t)0;
		goto IL_005f;
	}

IL_0034:
	{
		intptr_t L_10 = ___0_pointer;
		WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809* L_11;
		L_11 = MarshalHelpers_PtrToStructure_TisWaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_mDBAD911BED518C3E00F5D0545F45F1F466EB74AB(L_10, MarshalHelpers_PtrToStructure_TisWaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_mDBAD911BED518C3E00F5D0545F45F1F466EB74AB_RuntimeMethod_var);
		V_0 = L_11;
		goto IL_005f;
	}

IL_003d:
	{
		intptr_t L_12 = ___0_pointer;
		AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6* L_13;
		L_13 = MarshalHelpers_PtrToStructure_TisAdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_m2958B92153AA4642A00EF144B0E2D5145029D91F(L_12, MarshalHelpers_PtrToStructure_TisAdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_m2958B92153AA4642A00EF144B0E2D5145029D91F_RuntimeMethod_var);
		V_0 = L_13;
		goto IL_005f;
	}

IL_0046:
	{
		intptr_t L_14 = ___0_pointer;
		Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB* L_15;
		L_15 = MarshalHelpers_PtrToStructure_TisGsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_mCBE400732A977199A9FA3868D2F445C4FB131186(L_14, MarshalHelpers_PtrToStructure_TisGsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_mCBE400732A977199A9FA3868D2F445C4FB131186_RuntimeMethod_var);
		V_0 = L_15;
		goto IL_005f;
	}

IL_004f:
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = WaveFormat_get_ExtraSize_mDBDEF0961D9449135ED9A723716FCBAA5F71E426_inline(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		intptr_t L_18 = ___0_pointer;
		WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C* L_19;
		L_19 = MarshalHelpers_PtrToStructure_TisWaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_m4D3F82489D8E7B30EDC554EBE52ED470D7096566(L_18, MarshalHelpers_PtrToStructure_TisWaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_m4D3F82489D8E7B30EDC554EBE52ED470D7096566_RuntimeMethod_var);
		V_0 = L_19;
	}

IL_005f:
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_20 = V_0;
		return L_20;
	}
}
// System.IntPtr NAudio.Wave.WaveFormat::MarshalToPtr(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WaveFormat_MarshalToPtr_m5FA8B8A4BFF2AD7A5A9D9FD2AACE5BB352877BC7 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_0 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Marshal_SizeOf_m596657DAE86DB62FCC24730A3A6FB0F19B4C6B2E(L_0, NULL);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_1, NULL);
		V_0 = L_2;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_3 = ___0_format;
		intptr_t L_4 = V_0;
		Marshal_StructureToPtr_mA1B296E1739D0481FACE3D9B43D94FF86091DD4E(L_3, L_4, (bool)0, NULL);
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.String NAudio.Wave.WaveFormat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaveFormat_ToString_mD9ECF10394ADBBB61CB3BD341F446828F050938E (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormatEncoding_tA15F20ECDFB7BB2DBC78F0719622544C6578A734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4E3A62A37608580A59C7331E4BFECBBC68BD8BC);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___waveFormatTag_0;
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		uint16_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)65534)))))
		{
			goto IL_0045;
		}
	}

IL_0013:
	{
		int16_t L_3 = __this->___bitsPerSample_5;
		int16_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___sampleRate_2;
		int32_t L_7 = ((int32_t)(L_6/((int32_t)1000)));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		int16_t L_9 = __this->___channels_1;
		int16_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralC4E3A62A37608580A59C7331E4BFECBBC68BD8BC, L_5, L_8, L_11, NULL);
		return L_12;
	}

IL_0045:
	{
		uint16_t* L_13 = (uint16_t*)(&__this->___waveFormatTag_0);
		Il2CppFakeBox<uint16_t> L_14(WaveFormatEncoding_tA15F20ECDFB7BB2DBC78F0719622544C6578A734_il2cpp_TypeInfo_var, L_13);
		String_t* L_15;
		L_15 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_14), NULL);
		return L_15;
	}
}
// System.Boolean NAudio.Wave.WaveFormat::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFormat_Equals_m9A6E3946E0CFC6798E7A25530496C7857912979B (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)IsInstClass((RuntimeObject*)L_0, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var));
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_2 = __this->___waveFormatTag_0;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_3 = V_0;
		NullCheck(L_3);
		uint16_t L_4 = L_3->___waveFormatTag_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_005f;
		}
	}
	{
		int16_t L_5 = __this->___channels_1;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_6 = V_0;
		NullCheck(L_6);
		int16_t L_7 = L_6->___channels_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = __this->___sampleRate_2;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___sampleRate_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = __this->___averageBytesPerSecond_3;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___averageBytesPerSecond_3;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_005f;
		}
	}
	{
		int16_t L_14 = __this->___blockAlign_4;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_15 = V_0;
		NullCheck(L_15);
		int16_t L_16 = L_15->___blockAlign_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_005f;
		}
	}
	{
		int16_t L_17 = __this->___bitsPerSample_5;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_18 = V_0;
		NullCheck(L_18);
		int16_t L_19 = L_18->___bitsPerSample_5;
		return (bool)((((int32_t)L_17) == ((int32_t)L_19))? 1 : 0);
	}

IL_005f:
	{
		return (bool)0;
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_GetHashCode_mBDEBE4B9B4151F448544425D8AF04C5562340A10 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___waveFormatTag_0;
		int16_t L_1 = __this->___channels_1;
		int32_t L_2 = __this->___sampleRate_2;
		int32_t L_3 = __this->___averageBytesPerSecond_3;
		int16_t L_4 = __this->___blockAlign_4;
		int16_t L_5 = __this->___bitsPerSample_5;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^L_2))^L_3))^(int32_t)L_4))^(int32_t)L_5));
	}
}
// NAudio.Wave.WaveFormatEncoding NAudio.Wave.WaveFormat::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___waveFormatTag_0;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___channels_1;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sampleRate_2;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::get_AverageBytesPerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_AverageBytesPerSecond_mED5E2621C0B0BC7B926FF04BF848CE00C19045BB (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___averageBytesPerSecond_3;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::get_BlockAlign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BlockAlign_mF9408D35C034579047A4E267947CACF1C962D672 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___blockAlign_4;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::get_BitsPerSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___bitsPerSample_5;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::get_ExtraSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_ExtraSize_mDBDEF0961D9449135ED9A723716FCBAA5F71E426 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___extraSize_6;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.AdpcmWaveFormat
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke(const AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6& unmarshaled, AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_pinvoke& marshaled)
{
	marshaled.___samplesPerBlock_7 = unmarshaled.___samplesPerBlock_7;
	marshaled.___numCoeff_8 = unmarshaled.___numCoeff_8;
	if (unmarshaled.___coefficients_9 != NULL)
	{
		if (14 > (unmarshaled.___coefficients_9)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(14); i++)
		{
			(marshaled.___coefficients_9)[i] = (unmarshaled.___coefficients_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke_back(const AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_pinvoke& marshaled, AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t unmarshaledsamplesPerBlock_temp_0 = 0;
	unmarshaledsamplesPerBlock_temp_0 = marshaled.___samplesPerBlock_7;
	unmarshaled.___samplesPerBlock_7 = unmarshaledsamplesPerBlock_temp_0;
	int16_t unmarshalednumCoeff_temp_1 = 0;
	unmarshalednumCoeff_temp_1 = marshaled.___numCoeff_8;
	unmarshaled.___numCoeff_8 = unmarshalednumCoeff_temp_1;
	unmarshaled.___coefficients_9 = reinterpret_cast<Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*>((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, 14));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___coefficients_9), (void*)reinterpret_cast<Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*>((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, 14)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(14); i++)
	{
		(unmarshaled.___coefficients_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___coefficients_9)[i]);
	}
	uint16_t unmarshaledwaveFormatTag_temp_3 = 0;
	unmarshaledwaveFormatTag_temp_3 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_3;
	int16_t unmarshaledchannels_temp_4 = 0;
	unmarshaledchannels_temp_4 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_4;
	int32_t unmarshaledsampleRate_temp_5 = 0;
	unmarshaledsampleRate_temp_5 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_5;
	int32_t unmarshaledaverageBytesPerSecond_temp_6 = 0;
	unmarshaledaverageBytesPerSecond_temp_6 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_6;
	int16_t unmarshaledblockAlign_temp_7 = 0;
	unmarshaledblockAlign_temp_7 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_7;
	int16_t unmarshaledbitsPerSample_temp_8 = 0;
	unmarshaledbitsPerSample_temp_8 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_8;
	int16_t unmarshaledextraSize_temp_9 = 0;
	unmarshaledextraSize_temp_9 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_9;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.AdpcmWaveFormat
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke_cleanup(AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.AdpcmWaveFormat
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_com(const AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6& unmarshaled, AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_com& marshaled)
{
	marshaled.___samplesPerBlock_7 = unmarshaled.___samplesPerBlock_7;
	marshaled.___numCoeff_8 = unmarshaled.___numCoeff_8;
	if (unmarshaled.___coefficients_9 != NULL)
	{
		if (14 > (unmarshaled.___coefficients_9)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(14); i++)
		{
			(marshaled.___coefficients_9)[i] = (unmarshaled.___coefficients_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_com_back(const AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_com& marshaled, AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t unmarshaledsamplesPerBlock_temp_0 = 0;
	unmarshaledsamplesPerBlock_temp_0 = marshaled.___samplesPerBlock_7;
	unmarshaled.___samplesPerBlock_7 = unmarshaledsamplesPerBlock_temp_0;
	int16_t unmarshalednumCoeff_temp_1 = 0;
	unmarshalednumCoeff_temp_1 = marshaled.___numCoeff_8;
	unmarshaled.___numCoeff_8 = unmarshalednumCoeff_temp_1;
	unmarshaled.___coefficients_9 = reinterpret_cast<Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*>((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, 14));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___coefficients_9), (void*)reinterpret_cast<Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*>((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, 14)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(14); i++)
	{
		(unmarshaled.___coefficients_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___coefficients_9)[i]);
	}
	uint16_t unmarshaledwaveFormatTag_temp_3 = 0;
	unmarshaledwaveFormatTag_temp_3 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_3;
	int16_t unmarshaledchannels_temp_4 = 0;
	unmarshaledchannels_temp_4 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_4;
	int32_t unmarshaledsampleRate_temp_5 = 0;
	unmarshaledsampleRate_temp_5 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_5;
	int32_t unmarshaledaverageBytesPerSecond_temp_6 = 0;
	unmarshaledaverageBytesPerSecond_temp_6 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_6;
	int16_t unmarshaledblockAlign_temp_7 = 0;
	unmarshaledblockAlign_temp_7 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_7;
	int16_t unmarshaledbitsPerSample_temp_8 = 0;
	unmarshaledbitsPerSample_temp_8 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_8;
	int16_t unmarshaledextraSize_temp_9 = 0;
	unmarshaledextraSize_temp_9 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_9;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.AdpcmWaveFormat
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_com_cleanup(AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.ICustomMarshaler NAudio.Wave.WaveFormatCustomMarshaler::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveFormatCustomMarshaler_GetInstance_m3E80BB40E67989330A57FB845ED9EA696302EC23 (String_t* ___0_cookie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* L_0 = ((WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_StaticFields*)il2cpp_codegen_static_fields_for(WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_il2cpp_TypeInfo_var))->___marshaler_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* L_1 = (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E*)il2cpp_codegen_object_new(WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WaveFormatCustomMarshaler__ctor_m04F9C826DD3C7185B0320099A5A62BE492C4094F(L_1, NULL);
		((WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_StaticFields*)il2cpp_codegen_static_fields_for(WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_il2cpp_TypeInfo_var))->___marshaler_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_StaticFields*)il2cpp_codegen_static_fields_for(WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_il2cpp_TypeInfo_var))->___marshaler_0), (void*)L_1);
	}

IL_0011:
	{
		WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* L_2 = ((WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_StaticFields*)il2cpp_codegen_static_fields_for(WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E_il2cpp_TypeInfo_var))->___marshaler_0;
		return L_2;
	}
}
// System.Void NAudio.Wave.WaveFormatCustomMarshaler::CleanUpManagedData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatCustomMarshaler_CleanUpManagedData_m655BF832DF3386F08B56CD85F64515018712AF46 (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* __this, RuntimeObject* ___0_ManagedObj, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void NAudio.Wave.WaveFormatCustomMarshaler::CleanUpNativeData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatCustomMarshaler_CleanUpNativeData_m839A314B3CE7634EA1F890720A118D0FE970BBDC (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* __this, intptr_t ___0_pNativeData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_pNativeData;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_0, NULL);
		return;
	}
}
// System.Int32 NAudio.Wave.WaveFormatCustomMarshaler::GetNativeDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormatCustomMarshaler_GetNativeDataSize_mE269C85D96CEA9AE0852FC859355AACD18A09522 (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveFormatCustomMarshaler_GetNativeDataSize_mE269C85D96CEA9AE0852FC859355AACD18A09522_RuntimeMethod_var)));
	}
}
// System.IntPtr NAudio.Wave.WaveFormatCustomMarshaler::MarshalManagedToNative(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WaveFormatCustomMarshaler_MarshalManagedToNative_m2FA0717D63A889D990C54DAE4CD43B3DACF875CB (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* __this, RuntimeObject* ___0_ManagedObj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_ManagedObj;
		intptr_t L_1;
		L_1 = WaveFormat_MarshalToPtr_m5FA8B8A4BFF2AD7A5A9D9FD2AACE5BB352877BC7(((WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)CastclassClass((RuntimeObject*)L_0, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Object NAudio.Wave.WaveFormatCustomMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveFormatCustomMarshaler_MarshalNativeToManaged_mB22015D6ECE0404902DAA0D0C05915B80681D6FB (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* __this, intptr_t ___0_pNativeData, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_pNativeData;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1;
		L_1 = WaveFormat_MarshalFromPtr_mBC7E9CE8CBE72535A15C0F9E1CA529651551528A(L_0, NULL);
		return L_1;
	}
}
// System.Void NAudio.Wave.WaveFormatCustomMarshaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormatCustomMarshaler__ctor_m04F9C826DD3C7185B0320099A5A62BE492C4094F (WaveFormatCustomMarshaler_tCA8EA7CE74410EB9C15BD374E6DB0018918EF32E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke(const WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809& unmarshaled, WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_pinvoke& marshaled)
{
	marshaled.___wValidBitsPerSample_7 = unmarshaled.___wValidBitsPerSample_7;
	marshaled.___dwChannelMask_8 = unmarshaled.___dwChannelMask_8;
	marshaled.___subFormat_9 = unmarshaled.___subFormat_9;
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke_back(const WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_pinvoke& marshaled, WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809& unmarshaled)
{
	int16_t unmarshaledwValidBitsPerSample_temp_0 = 0;
	unmarshaledwValidBitsPerSample_temp_0 = marshaled.___wValidBitsPerSample_7;
	unmarshaled.___wValidBitsPerSample_7 = unmarshaledwValidBitsPerSample_temp_0;
	int32_t unmarshaleddwChannelMask_temp_1 = 0;
	unmarshaleddwChannelMask_temp_1 = marshaled.___dwChannelMask_8;
	unmarshaled.___dwChannelMask_8 = unmarshaleddwChannelMask_temp_1;
	Guid_t unmarshaledsubFormat_temp_2;
	memset((&unmarshaledsubFormat_temp_2), 0, sizeof(unmarshaledsubFormat_temp_2));
	unmarshaledsubFormat_temp_2 = marshaled.___subFormat_9;
	unmarshaled.___subFormat_9 = unmarshaledsubFormat_temp_2;
	uint16_t unmarshaledwaveFormatTag_temp_3 = 0;
	unmarshaledwaveFormatTag_temp_3 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_3;
	int16_t unmarshaledchannels_temp_4 = 0;
	unmarshaledchannels_temp_4 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_4;
	int32_t unmarshaledsampleRate_temp_5 = 0;
	unmarshaledsampleRate_temp_5 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_5;
	int32_t unmarshaledaverageBytesPerSecond_temp_6 = 0;
	unmarshaledaverageBytesPerSecond_temp_6 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_6;
	int16_t unmarshaledblockAlign_temp_7 = 0;
	unmarshaledblockAlign_temp_7 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_7;
	int16_t unmarshaledbitsPerSample_temp_8 = 0;
	unmarshaledbitsPerSample_temp_8 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_8;
	int16_t unmarshaledextraSize_temp_9 = 0;
	unmarshaledextraSize_temp_9 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_9;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke_cleanup(WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_com(const WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809& unmarshaled, WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_com& marshaled)
{
	marshaled.___wValidBitsPerSample_7 = unmarshaled.___wValidBitsPerSample_7;
	marshaled.___dwChannelMask_8 = unmarshaled.___dwChannelMask_8;
	marshaled.___subFormat_9 = unmarshaled.___subFormat_9;
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_com_back(const WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_com& marshaled, WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809& unmarshaled)
{
	int16_t unmarshaledwValidBitsPerSample_temp_0 = 0;
	unmarshaledwValidBitsPerSample_temp_0 = marshaled.___wValidBitsPerSample_7;
	unmarshaled.___wValidBitsPerSample_7 = unmarshaledwValidBitsPerSample_temp_0;
	int32_t unmarshaleddwChannelMask_temp_1 = 0;
	unmarshaleddwChannelMask_temp_1 = marshaled.___dwChannelMask_8;
	unmarshaled.___dwChannelMask_8 = unmarshaleddwChannelMask_temp_1;
	Guid_t unmarshaledsubFormat_temp_2;
	memset((&unmarshaledsubFormat_temp_2), 0, sizeof(unmarshaledsubFormat_temp_2));
	unmarshaledsubFormat_temp_2 = marshaled.___subFormat_9;
	unmarshaled.___subFormat_9 = unmarshaledsubFormat_temp_2;
	uint16_t unmarshaledwaveFormatTag_temp_3 = 0;
	unmarshaledwaveFormatTag_temp_3 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_3;
	int16_t unmarshaledchannels_temp_4 = 0;
	unmarshaledchannels_temp_4 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_4;
	int32_t unmarshaledsampleRate_temp_5 = 0;
	unmarshaledsampleRate_temp_5 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_5;
	int32_t unmarshaledaverageBytesPerSecond_temp_6 = 0;
	unmarshaledaverageBytesPerSecond_temp_6 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_6;
	int16_t unmarshaledblockAlign_temp_7 = 0;
	unmarshaledblockAlign_temp_7 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_7;
	int16_t unmarshaledbitsPerSample_temp_8 = 0;
	unmarshaledbitsPerSample_temp_8 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_8;
	int16_t unmarshaledextraSize_temp_9 = 0;
	unmarshaledextraSize_temp_9 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_9;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.WaveFormatExtensible
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_com_cleanup(WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.WaveFormatExtraData
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke(const WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C& unmarshaled, WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___extraData_7 != NULL)
	{
		if (100 > (unmarshaled.___extraData_7)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
		{
			(marshaled.___extraData_7)[i] = (unmarshaled.___extraData_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke_back(const WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_pinvoke& marshaled, WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___extraData_7 = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, 100));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___extraData_7), (void*)reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, 100)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
	{
		(unmarshaled.___extraData_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___extraData_7)[i]);
	}
	uint16_t unmarshaledwaveFormatTag_temp_1 = 0;
	unmarshaledwaveFormatTag_temp_1 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_1;
	int16_t unmarshaledchannels_temp_2 = 0;
	unmarshaledchannels_temp_2 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_2;
	int32_t unmarshaledsampleRate_temp_3 = 0;
	unmarshaledsampleRate_temp_3 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_3;
	int32_t unmarshaledaverageBytesPerSecond_temp_4 = 0;
	unmarshaledaverageBytesPerSecond_temp_4 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_4;
	int16_t unmarshaledblockAlign_temp_5 = 0;
	unmarshaledblockAlign_temp_5 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_5;
	int16_t unmarshaledbitsPerSample_temp_6 = 0;
	unmarshaledbitsPerSample_temp_6 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_6;
	int16_t unmarshaledextraSize_temp_7 = 0;
	unmarshaledextraSize_temp_7 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_7;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.WaveFormatExtraData
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke_cleanup(WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.WaveFormatExtraData
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_com(const WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C& unmarshaled, WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_com& marshaled)
{
	if (unmarshaled.___extraData_7 != NULL)
	{
		if (100 > (unmarshaled.___extraData_7)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
		{
			(marshaled.___extraData_7)[i] = (unmarshaled.___extraData_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___waveFormatTag_0 = unmarshaled.___waveFormatTag_0;
	marshaled.___channels_1 = unmarshaled.___channels_1;
	marshaled.___sampleRate_2 = unmarshaled.___sampleRate_2;
	marshaled.___averageBytesPerSecond_3 = unmarshaled.___averageBytesPerSecond_3;
	marshaled.___blockAlign_4 = unmarshaled.___blockAlign_4;
	marshaled.___bitsPerSample_5 = unmarshaled.___bitsPerSample_5;
	marshaled.___extraSize_6 = unmarshaled.___extraSize_6;
}
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_com_back(const WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_com& marshaled, WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___extraData_7 = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, 100));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___extraData_7), (void*)reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, 100)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
	{
		(unmarshaled.___extraData_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___extraData_7)[i]);
	}
	uint16_t unmarshaledwaveFormatTag_temp_1 = 0;
	unmarshaledwaveFormatTag_temp_1 = marshaled.___waveFormatTag_0;
	unmarshaled.___waveFormatTag_0 = unmarshaledwaveFormatTag_temp_1;
	int16_t unmarshaledchannels_temp_2 = 0;
	unmarshaledchannels_temp_2 = marshaled.___channels_1;
	unmarshaled.___channels_1 = unmarshaledchannels_temp_2;
	int32_t unmarshaledsampleRate_temp_3 = 0;
	unmarshaledsampleRate_temp_3 = marshaled.___sampleRate_2;
	unmarshaled.___sampleRate_2 = unmarshaledsampleRate_temp_3;
	int32_t unmarshaledaverageBytesPerSecond_temp_4 = 0;
	unmarshaledaverageBytesPerSecond_temp_4 = marshaled.___averageBytesPerSecond_3;
	unmarshaled.___averageBytesPerSecond_3 = unmarshaledaverageBytesPerSecond_temp_4;
	int16_t unmarshaledblockAlign_temp_5 = 0;
	unmarshaledblockAlign_temp_5 = marshaled.___blockAlign_4;
	unmarshaled.___blockAlign_4 = unmarshaledblockAlign_temp_5;
	int16_t unmarshaledbitsPerSample_temp_6 = 0;
	unmarshaledbitsPerSample_temp_6 = marshaled.___bitsPerSample_5;
	unmarshaled.___bitsPerSample_5 = unmarshaledbitsPerSample_temp_6;
	int16_t unmarshaledextraSize_temp_7 = 0;
	unmarshaledextraSize_temp_7 = marshaled.___extraSize_6;
	unmarshaled.___extraSize_6 = unmarshaledextraSize_temp_7;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.WaveFormatExtraData
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_com_cleanup(WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 NAudio.Wave.Mp3Index::get_FilePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Mp3Index_get_FilePosition_m15371E31E080A180EBE72D9C6855C78BEB7199D7 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CFilePositionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Index::set_FilePosition(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Index_set_FilePosition_mF5A1F30A0B9F2290F5D7DB1AC57CD6C01AB5D5BD (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CFilePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int64 NAudio.Wave.Mp3Index::get_SamplePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Mp3Index_get_SamplePosition_m6350A85D4AA83C4C665B963C515D6F24655A8D92 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CSamplePositionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Index::set_SamplePosition(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Index_set_SamplePosition_m5A803CF02BF6A38B4D4F5C7FBD04D3D92842A675 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSamplePositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 NAudio.Wave.Mp3Index::get_SampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3Index_get_SampleCount_m0FFA0218060867BD6F34F5E3F795CABC1AD9B146 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3Index::set_SampleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Index_set_SampleCount_m5E6DDDBE635B21A4276D6C8C3D3D4AECFDEA58B1 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void NAudio.Wave.Mp3Index::set_ByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Index_set_ByteCount_mAF78B634A2C55DFF49D92CCADAD81A8BD61B72D7 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CByteCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void NAudio.Wave.Mp3Index::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3Index__ctor_mCEEBFA8673005814935CFE4CABD1AED44C6A3CB0 (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NAudio.Wave.Mp3WaveFormat NAudio.Wave.Mp3FileReader::get_Mp3WaveFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	{
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_0 = __this->___U3CMp3WaveFormatU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3FileReader::set_Mp3WaveFormat(NAudio.Wave.Mp3WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader_set_Mp3WaveFormat_m5038632FAC9AAFFF31AF0E1B6DCDF0ED764845FE (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* ___0_value, const RuntimeMethod* method) 
{
	{
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_0 = ___0_value;
		__this->___U3CMp3WaveFormatU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMp3WaveFormatU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void NAudio.Wave.Mp3FileReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader__ctor_m3F7B61D746BFDBFC39CE6E570576C6ACCDB4E79E (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, String_t* ___0_mp3FileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3FileReader_CreateAcmFrameDecompressor_mC644C52D32260353FA7C7E4363B4136B0E5A3C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_mp3FileName;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_0, NULL);
		FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* L_2 = (FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4*)il2cpp_codegen_object_new(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FrameDecompressorBuilder__ctor_m996DD148F62CF763EDB24060226CE5EDB5D8DA83(L_2, NULL, (intptr_t)((void*)Mp3FileReader_CreateAcmFrameDecompressor_mC644C52D32260353FA7C7E4363B4136B0E5A3C3E_RuntimeMethod_var), NULL);
		Mp3FileReader__ctor_m4C39DBDD5ACDE0E0ECECC44736F221017DC87CC9(__this, L_1, L_2, (bool)1, NULL);
		return;
	}
}
// System.Void NAudio.Wave.Mp3FileReader::.ctor(System.IO.Stream,NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader__ctor_m4C39DBDD5ACDE0E0ECECC44736F221017DC87CC9 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inputStream, FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* ___1_frameDecompressorBuilder, bool ___2_ownInputStream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* V_0 = NULL;
	double V_1 = 0.0;
	Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B19_0 = 0;
	Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* G_B19_1 = NULL;
	int32_t G_B18_0 = 0;
	Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* G_B18_1 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* G_B20_2 = NULL;
	int32_t G_B22_0 = 0;
	Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* G_B22_1 = NULL;
	int32_t G_B21_0 = 0;
	Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* G_B21_1 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* G_B23_2 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___repositionLock_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___repositionLock_23), (void*)L_0);
		WaveStream__ctor_m4A8FADBEDA604ACB9746EDE329B6D6DA1B11738D(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_inputStream;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD419BA77CD464BAB49740A2BDDCF3D0962348876)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mp3FileReader__ctor_m4C39DBDD5ACDE0E0ECECC44736F221017DC87CC9_RuntimeMethod_var)));
	}

IL_001f:
	{
		FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* L_3 = ___1_frameDecompressorBuilder;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC0D607C0460F90BB1884E8FF104443022FD565C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mp3FileReader__ctor_m4C39DBDD5ACDE0E0ECECC44736F221017DC87CC9_RuntimeMethod_var)));
	}

IL_002d:
	{
		bool L_5 = ___2_ownInputStream;
		__this->___ownInputStream_11 = L_5;
	}
	try
	{// begin try (depth: 1)
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_inputStream;
			__this->___mp3Stream_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___mp3Stream_6), (void*)L_6);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___mp3Stream_6;
			Id3v2Tag_tCD30A212681065EBFD60ACD80D8E5CF70B89AD8A* L_8;
			L_8 = Id3v2Tag_ReadTag_m4989A81FC07FF431584E017BC0EAD49FE4438427(L_7, NULL);
			__this->___U3CId3v2TagU3Ek__BackingField_24 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CId3v2TagU3Ek__BackingField_24), (void*)L_8);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->___mp3Stream_6;
			NullCheck(L_9);
			int64_t L_10;
			L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
			__this->___dataStartPosition_8 = L_10;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___mp3Stream_6;
			il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_12;
			L_12 = Mp3Frame_LoadFromStream_mE175E6AECDF2521725FC79DBDFC7398763406889(L_11, NULL);
			V_0 = L_12;
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_13 = V_0;
			if (L_13)
			{
				goto IL_0077_1;
			}
		}
		{
			InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_14 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
			NullCheck(L_14);
			InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35C63B367C70822079B0A34A6CB542E5D911727E)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mp3FileReader__ctor_m4C39DBDD5ACDE0E0ECECC44736F221017DC87CC9_RuntimeMethod_var)));
		}

IL_0077_1:
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_15 = V_0;
			NullCheck(L_15);
			int32_t L_16;
			L_16 = Mp3Frame_get_BitRate_m422B535002A96669B5BD8B72C16206B68B53915C_inline(L_15, NULL);
			V_1 = ((double)L_16);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_17 = V_0;
			il2cpp_codegen_runtime_class_init_inline(XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66_il2cpp_TypeInfo_var);
			XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_18;
			L_18 = XingHeader_LoadXingHeader_mF0EEC56484E3E319789109FBFAF2AD0D33A21D9A(L_17, NULL);
			__this->___xingHeader_10 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___xingHeader_10), (void*)L_18);
			XingHeader_tBCC342636FE746242D6646EAA1408FD7871C4E66* L_19 = __this->___xingHeader_10;
			if (!L_19)
			{
				goto IL_00a4_1;
			}
		}
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = __this->___mp3Stream_6;
			NullCheck(L_20);
			int64_t L_21;
			L_21 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_20);
			__this->___dataStartPosition_8 = L_21;
		}

IL_00a4_1:
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = __this->___mp3Stream_6;
			il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_23;
			L_23 = Mp3Frame_LoadFromStream_mE175E6AECDF2521725FC79DBDFC7398763406889(L_22, NULL);
			V_2 = L_23;
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_24 = V_2;
			if (!L_24)
			{
				goto IL_00dd_1;
			}
		}
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_25 = V_2;
			NullCheck(L_25);
			int32_t L_26;
			L_26 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_25, NULL);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_27 = V_0;
			NullCheck(L_27);
			int32_t L_28;
			L_28 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_27, NULL);
			if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
			{
				goto IL_00cf_1;
			}
		}
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_29 = V_2;
			NullCheck(L_29);
			int32_t L_30;
			L_30 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_29, NULL);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_31 = V_0;
			NullCheck(L_31);
			int32_t L_32;
			L_32 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_31, NULL);
			if ((((int32_t)L_30) == ((int32_t)L_32)))
			{
				goto IL_00dd_1;
			}
		}

IL_00cf_1:
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_33 = V_2;
			NullCheck(L_33);
			int64_t L_34;
			L_34 = Mp3Frame_get_FileOffset_m0EA767DEF0145B0E9C6AB3944525EA5CB32F4EC6_inline(L_33, NULL);
			__this->___dataStartPosition_8 = L_34;
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_35 = V_2;
			V_0 = L_35;
		}

IL_00dd_1:
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = __this->___mp3Stream_6;
			NullCheck(L_36);
			int64_t L_37;
			L_37 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_36);
			int64_t L_38 = __this->___dataStartPosition_8;
			__this->___mp3DataLength_7 = ((int64_t)il2cpp_codegen_subtract(L_37, L_38));
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_39 = __this->___mp3Stream_6;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_40 = __this->___mp3Stream_6;
			NullCheck(L_40);
			int64_t L_41;
			L_41 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_40);
			NullCheck(L_39);
			VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_39, ((int64_t)il2cpp_codegen_subtract(L_41, ((int64_t)((int32_t)128)))));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
			V_3 = L_42;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_43 = __this->___mp3Stream_6;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_3;
			NullCheck(L_43);
			int32_t L_45;
			L_45 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_43, L_44, 0, ((int32_t)128));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_3;
			NullCheck(L_46);
			int32_t L_47 = 0;
			uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
			if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)84)))))
			{
				goto IL_015f_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_3;
			NullCheck(L_49);
			int32_t L_50 = 1;
			uint8_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
			if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)65)))))
			{
				goto IL_015f_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_3;
			NullCheck(L_52);
			int32_t L_53 = 2;
			uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
			if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)71)))))
			{
				goto IL_015f_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_3;
			__this->___U3CId3v1TagU3Ek__BackingField_25 = L_55;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CId3v1TagU3Ek__BackingField_25), (void*)L_55);
			int64_t L_56 = __this->___mp3DataLength_7;
			__this->___mp3DataLength_7 = ((int64_t)il2cpp_codegen_subtract(L_56, ((int64_t)((int32_t)128))));
		}

IL_015f_1:
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_57 = __this->___mp3Stream_6;
			int64_t L_58 = __this->___dataStartPosition_8;
			NullCheck(L_57);
			VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_57, L_58);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_59 = V_0;
			NullCheck(L_59);
			int32_t L_60;
			L_60 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_59, NULL);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_61 = V_0;
			NullCheck(L_61);
			int32_t L_62;
			L_62 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_61, NULL);
			G_B18_0 = L_60;
			G_B18_1 = __this;
			if ((((int32_t)L_62) == ((int32_t)3)))
			{
				G_B19_0 = L_60;
				G_B19_1 = __this;
				goto IL_0183_1;
			}
		}
		{
			G_B20_0 = 2;
			G_B20_1 = G_B18_0;
			G_B20_2 = G_B18_1;
			goto IL_0184_1;
		}

IL_0183_1:
		{
			G_B20_0 = 1;
			G_B20_1 = G_B19_0;
			G_B20_2 = G_B19_1;
		}

IL_0184_1:
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_63 = V_0;
			NullCheck(L_63);
			int32_t L_64;
			L_64 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_63, NULL);
			double L_65 = V_1;
			Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_66 = (Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154*)il2cpp_codegen_object_new(Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_il2cpp_TypeInfo_var);
			NullCheck(L_66);
			Mp3WaveFormat__ctor_mAEFBE4CFFB393F721E5719D047626A435F5733B3(L_66, G_B20_1, G_B20_0, L_64, il2cpp_codegen_cast_double_to_int<int32_t>(L_65), NULL);
			NullCheck(G_B20_2);
			Mp3FileReader_set_Mp3WaveFormat_m5038632FAC9AAFFF31AF0E1B6DCDF0ED764845FE_inline(G_B20_2, L_66, NULL);
			Mp3FileReader_CreateTableOfContents_mCC2579182A76A721A8E1587910B6931CE085DA88(__this, NULL);
			__this->___tocIndex_13 = 0;
			int64_t L_67 = __this->___mp3DataLength_7;
			double L_68;
			L_68 = Mp3FileReader_TotalSeconds_m47483784A80F2E37663F4D2E95D8CCD975707E84(__this, NULL);
			V_1 = ((double)(((double)il2cpp_codegen_multiply(((double)L_67), (8.0)))/L_68));
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_69 = __this->___mp3Stream_6;
			int64_t L_70 = __this->___dataStartPosition_8;
			NullCheck(L_69);
			VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_69, L_70);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_71 = V_0;
			NullCheck(L_71);
			int32_t L_72;
			L_72 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_71, NULL);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_73 = V_0;
			NullCheck(L_73);
			int32_t L_74;
			L_74 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_73, NULL);
			G_B21_0 = L_72;
			G_B21_1 = __this;
			if ((((int32_t)L_74) == ((int32_t)3)))
			{
				G_B22_0 = L_72;
				G_B22_1 = __this;
				goto IL_01e0_1;
			}
		}
		{
			G_B23_0 = 2;
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			goto IL_01e1_1;
		}

IL_01e0_1:
		{
			G_B23_0 = 1;
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
		}

IL_01e1_1:
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_75 = V_0;
			NullCheck(L_75);
			int32_t L_76;
			L_76 = Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline(L_75, NULL);
			double L_77 = V_1;
			Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_78 = (Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154*)il2cpp_codegen_object_new(Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_il2cpp_TypeInfo_var);
			NullCheck(L_78);
			Mp3WaveFormat__ctor_mAEFBE4CFFB393F721E5719D047626A435F5733B3(L_78, G_B23_1, G_B23_0, L_76, il2cpp_codegen_cast_double_to_int<int32_t>(L_77), NULL);
			NullCheck(G_B23_2);
			Mp3FileReader_set_Mp3WaveFormat_m5038632FAC9AAFFF31AF0E1B6DCDF0ED764845FE_inline(G_B23_2, L_78, NULL);
			FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* L_79 = ___1_frameDecompressorBuilder;
			Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_80;
			L_80 = Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline(__this, NULL);
			NullCheck(L_79);
			RuntimeObject* L_81;
			L_81 = FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_inline(L_79, L_80, NULL);
			__this->___decompressor_17 = L_81;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___decompressor_17), (void*)L_81);
			RuntimeObject* L_82 = __this->___decompressor_17;
			NullCheck(L_82);
			WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_83;
			L_83 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(2 /* NAudio.Wave.WaveFormat NAudio.Wave.IMp3FrameDecompressor::get_OutputFormat() */, IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var, L_82);
			__this->___waveFormat_5 = L_83;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___waveFormat_5), (void*)L_83);
			RuntimeObject* L_84 = __this->___decompressor_17;
			NullCheck(L_84);
			WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_85;
			L_85 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(2 /* NAudio.Wave.WaveFormat NAudio.Wave.IMp3FrameDecompressor::get_OutputFormat() */, IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var, L_84);
			NullCheck(L_85);
			int32_t L_86;
			L_86 = WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline(L_85, NULL);
			RuntimeObject* L_87 = __this->___decompressor_17;
			NullCheck(L_87);
			WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_88;
			L_88 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(2 /* NAudio.Wave.WaveFormat NAudio.Wave.IMp3FrameDecompressor::get_OutputFormat() */, IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var, L_87);
			NullCheck(L_88);
			int32_t L_89;
			L_89 = WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A_inline(L_88, NULL);
			__this->___bytesPerSample_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_86/8)), L_89));
			int32_t L_90 = __this->___bytesPerSample_15;
			__this->___bytesPerDecodedFrame_16 = ((int32_t)il2cpp_codegen_multiply(((int32_t)1152), L_90));
			int32_t L_91 = __this->___bytesPerDecodedFrame_16;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_91, 2)));
			__this->___decompressBuffer_18 = L_92;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___decompressBuffer_18), (void*)L_92);
			goto IL_0272;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0266;
		}
		throw e;
	}

CATCH_0266:
	{// begin catch(System.Exception)
		{
			Exception_t* L_93 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			bool L_94 = ___2_ownInputStream;
			if (!L_94)
			{
				goto IL_0270;
			}
		}
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_95 = ___0_inputStream;
			NullCheck(L_95);
			Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_95, NULL);
		}

IL_0270:
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

IL_0272:
	{
		return;
	}
}
// NAudio.Wave.IMp3FrameDecompressor NAudio.Wave.Mp3FileReader::CreateAcmFrameDecompressor(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mp3FileReader_CreateAcmFrameDecompressor_mC644C52D32260353FA7C7E4363B4136B0E5A3C3E (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_0 = ___0_mp3Format;
		AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A* L_1 = (AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A*)il2cpp_codegen_object_new(AcmMp3FrameDecompressor_t3929D6B2BE1638A58F2832AF79B7477DB9FCFC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AcmMp3FrameDecompressor__ctor_mF8814BC87942B7396EA2F6046793E90254F64DB4(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void NAudio.Wave.Mp3FileReader::CreateTableOfContents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader_CreateTableOfContents_mCC2579182A76A721A8E1587910B6931CE085DA88 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCDA1C1C94555441ED573D3962A9A992500FA0A22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34ED4C1C8BB150DEE0B68C0CF52DED6F404BBCA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* V_0 = NULL;
	Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int64_t L_0 = __this->___mp3DataLength_7;
			List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* L_1 = (List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894*)il2cpp_codegen_object_new(List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			List_1__ctor_m34ED4C1C8BB150DEE0B68C0CF52DED6F404BBCA9(L_1, ((int32_t)((int64_t)(L_0/((int64_t)((int32_t)400))))), List_1__ctor_m34ED4C1C8BB150DEE0B68C0CF52DED6F404BBCA9_RuntimeMethod_var);
			__this->___tableOfContents_12 = L_1;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___tableOfContents_12), (void*)L_1);
		}

IL_0019_1:
		{
			Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_2 = (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E*)il2cpp_codegen_object_new(Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			Mp3Index__ctor_mCEEBFA8673005814935CFE4CABD1AED44C6A3CB0(L_2, NULL);
			V_1 = L_2;
			Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_3 = V_1;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___mp3Stream_6;
			NullCheck(L_4);
			int64_t L_5;
			L_5 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_4);
			NullCheck(L_3);
			Mp3Index_set_FilePosition_mF5A1F30A0B9F2290F5D7DB1AC57CD6C01AB5D5BD_inline(L_3, L_5, NULL);
			Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_6 = V_1;
			int64_t L_7 = __this->___totalSamples_14;
			NullCheck(L_6);
			Mp3Index_set_SamplePosition_m5A803CF02BF6A38B4D4F5C7FBD04D3D92842A675_inline(L_6, L_7, NULL);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_8;
			L_8 = Mp3FileReader_ReadNextFrame_mA20C14E176229FA1975B2B05FF0156D6F9736850(__this, (bool)0, NULL);
			V_0 = L_8;
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_9 = V_0;
			if (!L_9)
			{
				goto IL_0093_1;
			}
		}
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_10 = V_0;
			Mp3FileReader_ValidateFrameFormat_m8F97E9002C867FCDA38B1019EFA351F378F4CFF1(__this, L_10, NULL);
			int64_t L_11 = __this->___totalSamples_14;
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_12 = V_0;
			NullCheck(L_12);
			int32_t L_13;
			L_13 = Mp3Frame_get_SampleCount_m6D99B5EB4D4F4E0AAB6846431BB6F036E3E249CE_inline(L_12, NULL);
			__this->___totalSamples_14 = ((int64_t)il2cpp_codegen_add(L_11, ((int64_t)L_13)));
			Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_14 = V_1;
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_15 = V_0;
			NullCheck(L_15);
			int32_t L_16;
			L_16 = Mp3Frame_get_SampleCount_m6D99B5EB4D4F4E0AAB6846431BB6F036E3E249CE_inline(L_15, NULL);
			NullCheck(L_14);
			Mp3Index_set_SampleCount_m5E6DDDBE635B21A4276D6C8C3D3D4AECFDEA58B1_inline(L_14, L_16, NULL);
			Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_17 = V_1;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = __this->___mp3Stream_6;
			NullCheck(L_18);
			int64_t L_19;
			L_19 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
			Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_20 = V_1;
			NullCheck(L_20);
			int64_t L_21;
			L_21 = Mp3Index_get_FilePosition_m15371E31E080A180EBE72D9C6855C78BEB7199D7_inline(L_20, NULL);
			NullCheck(L_17);
			Mp3Index_set_ByteCount_mAF78B634A2C55DFF49D92CCADAD81A8BD61B72D7_inline(L_17, ((int32_t)((int64_t)il2cpp_codegen_subtract(L_19, L_21))), NULL);
			List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* L_22 = __this->___tableOfContents_12;
			Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_23 = V_1;
			NullCheck(L_22);
			List_1_Add_mCDA1C1C94555441ED573D3962A9A992500FA0A22_inline(L_22, L_23, List_1_Add_mCDA1C1C94555441ED573D3962A9A992500FA0A22_RuntimeMethod_var);
		}

IL_0093_1:
		{
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_24 = V_0;
			if (L_24)
			{
				goto IL_0019_1;
			}
		}
		{
			goto IL_009b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0098;
		}
		throw e;
	}

CATCH_0098:
	{// begin catch(System.IO.EndOfStreamException)
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_25 = ((EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)IL2CPP_GET_ACTIVE_EXCEPTION(EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_009b;
	}// end catch (depth: 1)

IL_009b:
	{
		return;
	}
}
// System.Void NAudio.Wave.Mp3FileReader::ValidateFrameFormat(NAudio.Wave.Mp3Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader_ValidateFrameFormat_m8F97E9002C867FCDA38B1019EFA351F378F4CFF1 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* ___0_frame, const RuntimeMethod* method) 
{
	int32_t G_B5_0 = 0;
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_0 = ___0_frame;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_0, NULL);
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_2;
		L_2 = Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_4 = ___0_frame;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_8;
		L_8 = Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80_inline(L_8, NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22B8948CFE88CD4B2ECBE84F16025EA213BCBA10)), L_7, L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mp3FileReader_ValidateFrameFormat_m8F97E9002C867FCDA38B1019EFA351F378F4CFF1_RuntimeMethod_var)));
	}

IL_003e:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_14 = ___0_frame;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_14, NULL);
		if ((((int32_t)L_15) == ((int32_t)3)))
		{
			goto IL_004a;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_16;
		L_16 = Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A_inline(L_16, NULL);
		if ((((int32_t)G_B5_0) == ((int32_t)L_17)))
		{
			goto IL_0083;
		}
	}
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_18 = ___0_frame;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline(L_18, NULL);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChannelMode_t26A6ECD0CC32405EE4CB128A0EF25B2AE3669020_il2cpp_TypeInfo_var)), &L_20);
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_22;
		L_22 = Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline(__this, NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A_inline(L_22, NULL);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_24);
		String_t* L_26;
		L_26 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC9846D11C7ACF2D7160C3DBA297059DD352D7F4)), L_21, L_25, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_27 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mp3FileReader_ValidateFrameFormat_m8F97E9002C867FCDA38B1019EFA351F378F4CFF1_RuntimeMethod_var)));
	}

IL_0083:
	{
		return;
	}
}
// System.Double NAudio.Wave.Mp3FileReader::TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Mp3FileReader_TotalSeconds_m47483784A80F2E37663F4D2E95D8CCD975707E84 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___totalSamples_14;
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_1;
		L_1 = Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80_inline(L_1, NULL);
		return ((double)(((double)L_0)/((double)L_2)));
	}
}
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3FileReader::ReadNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3FileReader_ReadNextFrame_m760B0B8CC84C3B104C192CBE9FA64C11E6BEF288 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_0;
		L_0 = Mp3FileReader_ReadNextFrame_mA20C14E176229FA1975B2B05FF0156D6F9736850(__this, (bool)1, NULL);
		return L_0;
	}
}
// NAudio.Wave.Mp3Frame NAudio.Wave.Mp3FileReader::ReadNextFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* Mp3FileReader_ReadNextFrame_mA20C14E176229FA1975B2B05FF0156D6F9736850 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, bool ___0_readData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F*)NULL;
	}
	try
	{// begin try (depth: 1)
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___mp3Stream_6;
			bool L_1 = ___0_readData;
			il2cpp_codegen_runtime_class_init_inline(Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F_il2cpp_TypeInfo_var);
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_2;
			L_2 = Mp3Frame_LoadFromStream_m569B4189A98416A467920E4CC1EEFC7C171E2146(L_0, L_1, NULL);
			V_0 = L_2;
			Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_3 = V_0;
			if (!L_3)
			{
				goto IL_0020_1;
			}
		}
		{
			int32_t L_4 = __this->___tocIndex_13;
			__this->___tocIndex_13 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		}

IL_0020_1:
		{
			goto IL_0025;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.IO.EndOfStreamException)
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_5 = ((EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)IL2CPP_GET_ACTIVE_EXCEPTION(EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0025;
	}// end catch (depth: 1)

IL_0025:
	{
		Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_6 = V_0;
		return L_6;
	}
}
// System.Int64 NAudio.Wave.Mp3FileReader::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Mp3FileReader_get_Length_mCD83AB2AFE9C783A869EB9C88BDEE3E24F33EBCC (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___totalSamples_14;
		int32_t L_1 = __this->___bytesPerSample_15;
		return ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
	}
}
// NAudio.Wave.WaveFormat NAudio.Wave.Mp3FileReader::get_WaveFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* Mp3FileReader_get_WaveFormat_m04B172979172C5A33B38C0291F76930E41E58111 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_0 = __this->___waveFormat_5;
		return L_0;
	}
}
// System.Int64 NAudio.Wave.Mp3FileReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Mp3FileReader_get_Position_mAAA72F1B21F9D6118E32239116F0646C8ED60725 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___position_22;
		return L_0;
	}
}
// System.Void NAudio.Wave.Mp3FileReader::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader_set_Position_mD88FC7713F8CC2EB57A297CFABDC9D5EF43A9A8B (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6810DF9B292E01ECED33DE12CDDBD41B00171725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int64_t V_1 = 0;
	Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	{
		RuntimeObject* L_0 = __this->___repositionLock_23;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ed:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int64_t L_3 = ___0_value;
				int64_t L_4;
				L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, __this);
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int64_t L_5;
				L_5 = Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079(L_3, L_4, NULL);
				int64_t L_6;
				L_6 = Math_Max_mD37411571F0547F04F280D5A8D1F044819AFA597(L_5, ((int64_t)0), NULL);
				___0_value = L_6;
				int64_t L_7 = ___0_value;
				int32_t L_8 = __this->___bytesPerSample_15;
				V_1 = ((int64_t)(L_7/((int64_t)L_8)));
				V_2 = (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E*)NULL;
				V_3 = 0;
				goto IL_0073_1;
			}

IL_0032_1:
			{
				List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* L_9 = __this->___tableOfContents_12;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_11;
				L_11 = List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204(L_9, L_10, List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204_RuntimeMethod_var);
				NullCheck(L_11);
				int64_t L_12;
				L_12 = Mp3Index_get_SamplePosition_m6350A85D4AA83C4C665B963C515D6F24655A8D92_inline(L_11, NULL);
				List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* L_13 = __this->___tableOfContents_12;
				int32_t L_14 = V_3;
				NullCheck(L_13);
				Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_15;
				L_15 = List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204(L_13, L_14, List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204_RuntimeMethod_var);
				NullCheck(L_15);
				int32_t L_16;
				L_16 = Mp3Index_get_SampleCount_m0FFA0218060867BD6F34F5E3F795CABC1AD9B146_inline(L_15, NULL);
				int64_t L_17 = V_1;
				if ((((int64_t)((int64_t)il2cpp_codegen_add(L_12, ((int64_t)L_16)))) <= ((int64_t)L_17)))
				{
					goto IL_006f_1;
				}
			}
			{
				List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* L_18 = __this->___tableOfContents_12;
				int32_t L_19 = V_3;
				NullCheck(L_18);
				Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_20;
				L_20 = List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204(L_18, L_19, List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204_RuntimeMethod_var);
				V_2 = L_20;
				int32_t L_21 = V_3;
				__this->___tocIndex_13 = L_21;
				goto IL_0081_1;
			}

IL_006f_1:
			{
				int32_t L_22 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
			}

IL_0073_1:
			{
				int32_t L_23 = V_3;
				List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* L_24 = __this->___tableOfContents_12;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = List_1_get_Count_m6810DF9B292E01ECED33DE12CDDBD41B00171725_inline(L_24, List_1_get_Count_m6810DF9B292E01ECED33DE12CDDBD41B00171725_RuntimeMethod_var);
				if ((((int32_t)L_23) < ((int32_t)L_25)))
				{
					goto IL_0032_1;
				}
			}

IL_0081_1:
			{
				__this->___decompressBufferOffset_19 = 0;
				__this->___decompressLeftovers_20 = 0;
				__this->___repositionedFlag_21 = (bool)1;
				Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_26 = V_2;
				if (!L_26)
				{
					goto IL_00cc_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27 = __this->___mp3Stream_6;
				Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_28 = V_2;
				NullCheck(L_28);
				int64_t L_29;
				L_29 = Mp3Index_get_FilePosition_m15371E31E080A180EBE72D9C6855C78BEB7199D7_inline(L_28, NULL);
				NullCheck(L_27);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_27, L_29);
				int64_t L_30 = V_1;
				Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_31 = V_2;
				NullCheck(L_31);
				int64_t L_32;
				L_32 = Mp3Index_get_SamplePosition_m6350A85D4AA83C4C665B963C515D6F24655A8D92_inline(L_31, NULL);
				V_4 = ((int64_t)il2cpp_codegen_subtract(L_30, L_32));
				int64_t L_33 = V_4;
				if ((((int64_t)L_33) <= ((int64_t)((int64_t)0))))
				{
					goto IL_00e4_1;
				}
			}
			{
				int64_t L_34 = V_4;
				int32_t L_35 = __this->___bytesPerSample_15;
				__this->___decompressBufferOffset_19 = ((int32_t)il2cpp_codegen_multiply(((int32_t)L_34), L_35));
				goto IL_00e4_1;
			}

IL_00cc_1:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = __this->___mp3Stream_6;
				int64_t L_37 = __this->___mp3DataLength_7;
				int64_t L_38 = __this->___dataStartPosition_8;
				NullCheck(L_36);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_36, ((int64_t)il2cpp_codegen_add(L_37, L_38)));
			}

IL_00e4_1:
			{
				int64_t L_39 = ___0_value;
				__this->___position_22 = L_39;
				goto IL_00f4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		return;
	}
}
// System.Int32 NAudio.Wave.Mp3FileReader::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mp3FileReader_Read_mE77121A2370C9D68F6485AF1257C4EA0EC1678DE (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sampleBuffer, int32_t ___1_offset, int32_t ___2_numBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = __this->___repositionLock_23;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b8:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_3 = __this->___decompressLeftovers_20;
				if (!L_3)
				{
					goto IL_006e_1;
				}
			}
			{
				int32_t L_4 = __this->___decompressLeftovers_20;
				int32_t L_5 = ___2_numBytes;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_6;
				L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, L_5, NULL);
				V_3 = L_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___decompressBuffer_18;
				int32_t L_8 = __this->___decompressBufferOffset_19;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_sampleBuffer;
				int32_t L_10 = ___1_offset;
				int32_t L_11 = V_3;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, L_10, L_11, NULL);
				int32_t L_12 = __this->___decompressLeftovers_20;
				int32_t L_13 = V_3;
				__this->___decompressLeftovers_20 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
				int32_t L_14 = __this->___decompressLeftovers_20;
				if (L_14)
				{
					goto IL_0057_1;
				}
			}
			{
				__this->___decompressBufferOffset_19 = 0;
				goto IL_0065_1;
			}

IL_0057_1:
			{
				int32_t L_15 = __this->___decompressBufferOffset_19;
				int32_t L_16 = V_3;
				__this->___decompressBufferOffset_19 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
			}

IL_0065_1:
			{
				int32_t L_17 = V_0;
				int32_t L_18 = V_3;
				V_0 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
				int32_t L_19 = ___1_offset;
				int32_t L_20 = V_3;
				___1_offset = ((int32_t)il2cpp_codegen_add(L_19, L_20));
			}

IL_006e_1:
			{
				int32_t L_21 = __this->___tocIndex_13;
				V_2 = L_21;
				bool L_22 = __this->___repositionedFlag_21;
				if (!L_22)
				{
					goto IL_01af_1;
				}
			}
			{
				RuntimeObject* L_23 = __this->___decompressor_17;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(1 /* System.Void NAudio.Wave.IMp3FrameDecompressor::Reset() */, IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var, L_23);
				int32_t L_24 = __this->___tocIndex_13;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_25;
				L_25 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_24, 3)), NULL);
				__this->___tocIndex_13 = L_25;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_26 = __this->___mp3Stream_6;
				List_1_tD5387A1F14E27E91345E95BC8449BFCEFBEB5894* L_27 = __this->___tableOfContents_12;
				int32_t L_28 = __this->___tocIndex_13;
				NullCheck(L_27);
				Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* L_29;
				L_29 = List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204(L_27, L_28, List_1_get_Item_m5BECC66AE1E12F7D37FB91710FB34C9A14ED1204_RuntimeMethod_var);
				NullCheck(L_29);
				int64_t L_30;
				L_30 = Mp3Index_get_FilePosition_m15371E31E080A180EBE72D9C6855C78BEB7199D7_inline(L_29, NULL);
				NullCheck(L_26);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_26, L_30);
				__this->___repositionedFlag_21 = (bool)0;
				goto IL_01af_1;
			}

IL_00cc_1:
			{
				Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_31;
				L_31 = Mp3FileReader_ReadNextFrame_m760B0B8CC84C3B104C192CBE9FA64C11E6BEF288(__this, NULL);
				V_4 = L_31;
				Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_32 = V_4;
				if (!L_32)
				{
					goto IL_01b6_1;
				}
			}
			{
				RuntimeObject* L_33 = __this->___decompressor_17;
				Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* L_34 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___decompressBuffer_18;
				NullCheck(L_33);
				int32_t L_36;
				L_36 = InterfaceFuncInvoker3< int32_t, Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(0 /* System.Int32 NAudio.Wave.IMp3FrameDecompressor::DecompressFrame(NAudio.Wave.Mp3Frame,System.Byte[],System.Int32) */, IMp3FrameDecompressor_tC84B3F460FA9A0B309F02E53313DF401231B9223_il2cpp_TypeInfo_var, L_33, L_34, L_35, 0);
				V_5 = L_36;
				int32_t L_37 = __this->___tocIndex_13;
				int32_t L_38 = V_2;
				if ((((int32_t)L_37) <= ((int32_t)L_38)))
				{
					goto IL_01af_1;
				}
			}
			{
				int32_t L_39 = V_5;
				if (!L_39)
				{
					goto IL_01af_1;
				}
			}
			{
				int32_t L_40 = __this->___tocIndex_13;
				int32_t L_41 = V_2;
				if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_41, 1))))))
				{
					goto IL_0141_1;
				}
			}
			{
				int32_t L_42 = V_5;
				int32_t L_43 = __this->___bytesPerDecodedFrame_16;
				if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_43, 2))))))
				{
					goto IL_0141_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = __this->___decompressBuffer_18;
				int32_t L_45 = __this->___bytesPerDecodedFrame_16;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___decompressBuffer_18;
				int32_t L_47 = __this->___bytesPerDecodedFrame_16;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_44, L_45, (RuntimeArray*)L_46, 0, L_47, NULL);
				int32_t L_48 = __this->___bytesPerDecodedFrame_16;
				V_5 = L_48;
			}

IL_0141_1:
			{
				int32_t L_49 = V_5;
				int32_t L_50 = __this->___decompressBufferOffset_19;
				int32_t L_51 = ___2_numBytes;
				int32_t L_52 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_49, L_50)), ((int32_t)il2cpp_codegen_subtract(L_51, L_52)), NULL);
				V_6 = L_53;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___decompressBuffer_18;
				int32_t L_55 = __this->___decompressBufferOffset_19;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_sampleBuffer;
				int32_t L_57 = ___1_offset;
				int32_t L_58 = V_6;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_54, L_55, (RuntimeArray*)L_56, L_57, L_58, NULL);
				int32_t L_59 = V_6;
				int32_t L_60 = __this->___decompressBufferOffset_19;
				int32_t L_61 = V_5;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_59, L_60))) >= ((int32_t)L_61)))
				{
					goto IL_0196_1;
				}
			}
			{
				int32_t L_62 = V_6;
				int32_t L_63 = __this->___decompressBufferOffset_19;
				__this->___decompressBufferOffset_19 = ((int32_t)il2cpp_codegen_add(L_62, L_63));
				int32_t L_64 = V_5;
				int32_t L_65 = __this->___decompressBufferOffset_19;
				__this->___decompressLeftovers_20 = ((int32_t)il2cpp_codegen_subtract(L_64, L_65));
				goto IL_01a4_1;
			}

IL_0196_1:
			{
				__this->___decompressBufferOffset_19 = 0;
				__this->___decompressLeftovers_20 = 0;
			}

IL_01a4_1:
			{
				int32_t L_66 = ___1_offset;
				int32_t L_67 = V_6;
				___1_offset = ((int32_t)il2cpp_codegen_add(L_66, L_67));
				int32_t L_68 = V_0;
				int32_t L_69 = V_6;
				V_0 = ((int32_t)il2cpp_codegen_add(L_68, L_69));
			}

IL_01af_1:
			{
				int32_t L_70 = V_0;
				int32_t L_71 = ___2_numBytes;
				if ((((int32_t)L_70) < ((int32_t)L_71)))
				{
					goto IL_00cc_1;
				}
			}

IL_01b6_1:
			{
				goto IL_01bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01bf:
	{
		int64_t L_72 = __this->___position_22;
		int32_t L_73 = V_0;
		__this->___position_22 = ((int64_t)il2cpp_codegen_add(L_72, ((int64_t)L_73)));
		int32_t L_74 = V_0;
		return L_74;
	}
}
// System.Void NAudio.Wave.Mp3FileReader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mp3FileReader_Dispose_mDFFD7231DB5B077EBB70B928DCC4969008988C60 (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___mp3Stream_6;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		bool L_2 = __this->___ownInputStream_11;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___mp3Stream_6;
		NullCheck(L_3);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
	}

IL_001e:
	{
		__this->___mp3Stream_6 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mp3Stream_6), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_0025:
	{
		RuntimeObject* L_4 = __this->___decompressor_17;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_5 = __this->___decompressor_17;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
		__this->___decompressor_17 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___decompressor_17), (void*)(RuntimeObject*)NULL);
	}

IL_003f:
	{
		bool L_6 = ___0_disposing;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_6, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_Multicast(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* currentDelegate = reinterpret_cast<FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_mp3Format, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenInst(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	NullCheck(___0_mp3Format);
	typedef RuntimeObject* (*FunctionPointerType) (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_mp3Format, method);
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenStatic(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_mp3Format, method);
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenStaticInvoker(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_mp3Format);
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_ClosedStaticInvoker(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_mp3Format);
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenVirtual(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	NullCheck(___0_mp3Format);
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_mp3Format);
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenInterface(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	NullCheck(___0_mp3Format);
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_mp3Format);
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenGenericVirtual(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	NullCheck(___0_mp3Format);
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_mp3Format);
}
RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenGenericInterface(FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method)
{
	NullCheck(___0_mp3Format);
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_mp3Format);
}
// System.Void NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameDecompressorBuilder__ctor_m996DD148F62CF763EDB24060226CE5EDB5D8DA83 (FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_Multicast;
}
// NAudio.Wave.IMp3FrameDecompressor NAudio.Wave.Mp3FileReader/FrameDecompressorBuilder::Invoke(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E (FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_mp3Format, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean NAudio.Wave.WaveStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveStream_get_CanRead_m9D946E1C73DAF72B0E1D3D4B512891F66C6C7561 (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean NAudio.Wave.WaveStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveStream_get_CanSeek_mB6586BF95301A63E4ABBF81A60DD2337342A36B3 (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean NAudio.Wave.WaveStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveStream_get_CanWrite_m17D62A44E7A9B2276788390AE8247F573F5CC59C (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void NAudio.Wave.WaveStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveStream_Flush_mE818EFD110C6B3AC02704D6324F9215EA8AEB59D (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int64 NAudio.Wave.WaveStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WaveStream_Seek_m278596715A12A25FC81DA837C0ABB713FDB5BCAE (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_origin;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = ___0_offset;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_1);
		goto IL_002e;
	}

IL_000c:
	{
		int32_t L_2 = ___1_origin;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		int64_t L_4 = ___0_offset;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, ((int64_t)il2cpp_codegen_add(L_3, L_4)));
		goto IL_002e;
	}

IL_0020:
	{
		int64_t L_5;
		L_5 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, __this);
		int64_t L_6 = ___0_offset;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, ((int64_t)il2cpp_codegen_add(L_5, L_6)));
	}

IL_002e:
	{
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		return L_7;
	}
}
// System.Void NAudio.Wave.WaveStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveStream_SetLength_mBC420BE4232EF88D4B95A2CF430E2D0402F6D2AD (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, int64_t ___0_length, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral570CF29C91115E1C5021F1408BB52855091F4D23)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveStream_SetLength_mBC420BE4232EF88D4B95A2CF430E2D0402F6D2AD_RuntimeMethod_var)));
	}
}
// System.Void NAudio.Wave.WaveStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveStream_Write_m88515B0CE7A9907402C93FB4C2191B7BC2B5EA6E (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64641FAF30E157CBE0B17F427765DDDD68C2F6DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveStream_Write_m88515B0CE7A9907402C93FB4C2191B7BC2B5EA6E_RuntimeMethod_var)));
	}
}
// System.Void NAudio.Wave.WaveStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveStream__ctor_m4A8FADBEDA604ACB9746EDE329B6D6DA1B11738D (WaveStream_tE5B9A9E0A3FBFA39B81353AA6D2A521CB3C51B34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.SampleProviders.Pcm32BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm32BitToSampleProvider__ctor_mD608E2CB9E7E143AD06B58D4EDBE4123C715C9D7 (Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061(__this, L_0, NULL);
		return;
	}
}
// System.Int32 NAudio.Wave.SampleProviders.Pcm32BitToSampleProvider::Read(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pcm32BitToSampleProvider_Read_m96ABF3D384C09057DACAA0672E17F9559A0F0807 (Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 4));
		int32_t L_1 = V_0;
		SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B(__this, L_1, NULL);
		RuntimeObject* L_2 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___source_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Int32 NAudio.Wave.IWaveProvider::Read(System.Byte[],System.Int32,System.Int32) */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4);
		V_1 = L_5;
		int32_t L_6 = ___1_offset;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0069;
	}

IL_0025:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_buffer;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 3));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)((float)(((float)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)((int8_t)L_13)<<((int32_t)24)))|((int32_t)((int32_t)L_17<<((int32_t)16)))))|((int32_t)((int32_t)L_21<<8))))|(int32_t)L_25)))/(2.14748365E+09f))));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 4));
	}

IL_0069:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_29 = V_1;
		return ((int32_t)(L_29/4));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NAudio.Wave.ISampleProvider NAudio.Wave.SampleProviders.SampleProviderConverters::ConvertWaveProviderIntoSampleProvider(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SampleProviderConverters_ConvertWaveProviderIntoSampleProvider_m25E5FA36E87346F19461E4C223533D615C53AE87 (RuntimeObject* ___0_waveProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_waveProvider;
		NullCheck(L_0);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1;
		L_1 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21_inline(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject* L_3 = ___0_waveProvider;
		NullCheck(L_3);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_4;
		L_4 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)8))))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_6 = ___0_waveProvider;
		Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF* L_7 = (Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF*)il2cpp_codegen_object_new(Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Pcm8BitToSampleProvider__ctor_m91ACEEB019074DEA6B5C2AC7C38CCF6061476F62(L_7, L_6, NULL);
		V_0 = L_7;
		goto IL_00b5;
	}

IL_0028:
	{
		RuntimeObject* L_8 = ___0_waveProvider;
		NullCheck(L_8);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_9;
		L_9 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline(L_9, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_11 = ___0_waveProvider;
		Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1* L_12 = (Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1*)il2cpp_codegen_object_new(Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Pcm16BitToSampleProvider__ctor_mAEE07A63F794F979EFAF7F3960824905AAD0B3F9(L_12, L_11, NULL);
		V_0 = L_12;
		goto IL_00b5;
	}

IL_0040:
	{
		RuntimeObject* L_13 = ___0_waveProvider;
		NullCheck(L_13);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_14;
		L_14 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_16 = ___0_waveProvider;
		Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9* L_17 = (Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9*)il2cpp_codegen_object_new(Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Pcm24BitToSampleProvider__ctor_mBB0F83E7E01C4C474009D5EE6FD5DD1D61D78645(L_17, L_16, NULL);
		V_0 = L_17;
		goto IL_00b5;
	}

IL_0058:
	{
		RuntimeObject* L_18 = ___0_waveProvider;
		NullCheck(L_18);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_19;
		L_19 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_21 = ___0_waveProvider;
		Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35* L_22 = (Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35*)il2cpp_codegen_object_new(Pcm32BitToSampleProvider_t8EE454E6A248E2746D465A6AF054B6F10ADD2C35_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Pcm32BitToSampleProvider__ctor_mD608E2CB9E7E143AD06B58D4EDBE4123C715C9D7(L_22, L_21, NULL);
		V_0 = L_22;
		goto IL_00b5;
	}

IL_0070:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral264CF0E01264A0CFE021D0089A6E299A62781A41)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SampleProviderConverters_ConvertWaveProviderIntoSampleProvider_m25E5FA36E87346F19461E4C223533D615C53AE87_RuntimeMethod_var)));
	}

IL_007b:
	{
		RuntimeObject* L_24 = ___0_waveProvider;
		NullCheck(L_24);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_25;
		L_25 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		uint16_t L_26;
		L_26 = WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21_inline(L_25, NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_27 = ___0_waveProvider;
		NullCheck(L_27);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_28;
		L_28 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline(L_28, NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_00a1;
		}
	}
	{
		RuntimeObject* L_30 = ___0_waveProvider;
		WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385* L_31 = (WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385*)il2cpp_codegen_object_new(WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaveToSampleProvider64__ctor_mDEEC490E2897AE5BD27C8802FAB1FE5FF670A2B9(L_31, L_30, NULL);
		V_0 = L_31;
		goto IL_00b5;
	}

IL_00a1:
	{
		RuntimeObject* L_32 = ___0_waveProvider;
		WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01* L_33 = (WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01*)il2cpp_codegen_object_new(WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		WaveToSampleProvider__ctor_m5016CDB720B13AFFCF064F69F12663D0A18CA2BA(L_33, L_32, NULL);
		V_0 = L_33;
		goto IL_00b5;
	}

IL_00aa:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEFF043AD58E2FE7AD2B6B2F35F216BB897EEFEF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SampleProviderConverters_ConvertWaveProviderIntoSampleProvider_m25E5FA36E87346F19461E4C223533D615C53AE87_RuntimeMethod_var)));
	}

IL_00b5:
	{
		RuntimeObject* L_35 = V_0;
		return L_35;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.SampleProviders.WaveToSampleProvider64::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveToSampleProvider64__ctor_mDEEC490E2897AE5BD27C8802FAB1FE5FF670A2B9 (WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_source;
		SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061(__this, L_0, NULL);
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2;
		L_2 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14601C6603DF42FCFDBD75DBC7CBE0782C230B62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveToSampleProvider64__ctor_mDEEC490E2897AE5BD27C8802FAB1FE5FF670A2B9_RuntimeMethod_var)));
	}

IL_0020:
	{
		return;
	}
}
// System.Int32 NAudio.Wave.SampleProviders.WaveToSampleProvider64::Read(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveToSampleProvider64_Read_m1E00A5664253121E8FAA9BE7643FE6D611190B5B (WaveToSampleProvider64_tBF925C00F70AB622B4DB1A8D763814F6435FD385* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	{
		int32_t L_0 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		int32_t L_1 = V_0;
		SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B(__this, L_1, NULL);
		RuntimeObject* L_2 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___source_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Int32 NAudio.Wave.IWaveProvider::Read(System.Byte[],System.Int32,System.Int32) */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(L_6/8));
		int32_t L_7 = ___1_offset;
		V_3 = L_7;
		V_4 = 0;
		goto IL_004e;
	}

IL_002a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_9 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_10;
		L_10 = BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0(L_8, L_9, NULL);
		V_5 = L_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___0_buffer;
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int64_t L_14 = V_5;
		double L_15;
		L_15 = BitConverter_Int64BitsToDouble_m0471A5DA68629692DE031E855EB537CBB4CA9A55_inline(L_14, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (float)((float)L_15));
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 8));
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_19 = V_2;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.SampleProviders.SampleProviderConverterBase::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061 (SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2;
		L_2 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80_inline(L_2, NULL);
		RuntimeObject* L_4 = ___0_source;
		NullCheck(L_4);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_5;
		L_5 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A_inline(L_5, NULL);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_7;
		L_7 = WaveFormat_CreateIeeeFloatWaveFormat_m4F828BB52C1F4C909B345A573395587E14F66103(L_3, L_6, NULL);
		__this->___waveFormat_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waveFormat_1), (void*)L_7);
		return;
	}
}
// System.Void NAudio.Wave.SampleProviders.SampleProviderConverterBase::EnsureSourceBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B (SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E* __this, int32_t ___0_sourceBytesRequired, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sourceBuffer_2;
		int32_t L_1 = ___0_sourceBytesRequired;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BufferHelpers_Ensure_mA9470F1144B83A833FC82B35E0A8BAED7E42C24A(L_0, L_1, NULL);
		__this->___sourceBuffer_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceBuffer_2), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.SampleProviders.WaveToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveToSampleProvider__ctor_m5016CDB720B13AFFCF064F69F12663D0A18CA2BA (WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_source;
		SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061(__this, L_0, NULL);
		RuntimeObject* L_1 = ___0_source;
		NullCheck(L_1);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2;
		L_2 = InterfaceFuncInvoker0< WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* >::Invoke(0 /* NAudio.Wave.WaveFormat NAudio.Wave.IWaveProvider::get_WaveFormat() */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14601C6603DF42FCFDBD75DBC7CBE0782C230B62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WaveToSampleProvider__ctor_m5016CDB720B13AFFCF064F69F12663D0A18CA2BA_RuntimeMethod_var)));
	}

IL_0020:
	{
		return;
	}
}
// System.Int32 NAudio.Wave.SampleProviders.WaveToSampleProvider::Read(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveToSampleProvider_Read_m03A90C01CB206676862A4D6DB850C234C61ED6EF (WaveToSampleProvider_tF8253765A4BAF29E0422B1EB8B61DFCD7DC2FC01* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 4));
		int32_t L_1 = V_0;
		SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B(__this, L_1, NULL);
		RuntimeObject* L_2 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___source_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Int32 NAudio.Wave.IWaveProvider::Read(System.Byte[],System.Int32,System.Int32) */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(L_6/4));
		int32_t L_7 = ___1_offset;
		V_3 = L_7;
		V_4 = 0;
		goto IL_0044;
	}

IL_002a:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___0_buffer;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_12 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_13;
		L_13 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_11, L_12, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_13);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 4));
	}

IL_0044:
	{
		int32_t L_15 = V_4;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_17 = V_2;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.SampleProviders.Pcm16BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm16BitToSampleProvider__ctor_mAEE07A63F794F979EFAF7F3960824905AAD0B3F9 (Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061(__this, L_0, NULL);
		return;
	}
}
// System.Int32 NAudio.Wave.SampleProviders.Pcm16BitToSampleProvider::Read(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pcm16BitToSampleProvider_Read_mA3470CE8A92E8471A31ACB6C4F2D40DA032F38C9 (Pcm16BitToSampleProvider_t07104D2C46A458CD8A939D0BD98D1A054EA30BE1* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 2));
		int32_t L_1 = V_0;
		SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B(__this, L_1, NULL);
		RuntimeObject* L_2 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___source_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Int32 NAudio.Wave.IWaveProvider::Read(System.Byte[],System.Int32,System.Int32) */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4);
		V_1 = L_5;
		int32_t L_6 = ___1_offset;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0043;
	}

IL_0025:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_buffer;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int16_t L_12;
		L_12 = BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61(L_10, L_11, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)((float)(((float)L_12)/(32768.0f))));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 2));
	}

IL_0043:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_16 = V_1;
		return ((int32_t)(L_16/2));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.SampleProviders.Pcm24BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm24BitToSampleProvider__ctor_mBB0F83E7E01C4C474009D5EE6FD5DD1D61D78645 (Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061(__this, L_0, NULL);
		return;
	}
}
// System.Int32 NAudio.Wave.SampleProviders.Pcm24BitToSampleProvider::Read(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pcm24BitToSampleProvider_Read_m91D1D4EBFF37C9E45AF99BABFE3B932AB5EDDE07 (Pcm24BitToSampleProvider_t295B6CF5B9E44934C76FA565887E2DC2DA8C2FF9* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 3));
		int32_t L_1 = V_0;
		SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B(__this, L_1, NULL);
		RuntimeObject* L_2 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___source_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Int32 NAudio.Wave.IWaveProvider::Read(System.Byte[],System.Int32,System.Int32) */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4);
		V_1 = L_5;
		int32_t L_6 = ___1_offset;
		V_2 = L_6;
		V_3 = 0;
		goto IL_005b;
	}

IL_0025:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_buffer;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 2));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)((float)(((float)((int32_t)(((int32_t)(((int32_t)((int32_t)((int8_t)L_13)<<((int32_t)16)))|((int32_t)((int32_t)L_17<<8))))|(int32_t)L_21)))/(8388608.0f))));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 3));
	}

IL_005b:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_25 = V_1;
		return ((int32_t)(L_25/3));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.SampleProviders.Pcm8BitToSampleProvider::.ctor(NAudio.Wave.IWaveProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pcm8BitToSampleProvider__ctor_m91ACEEB019074DEA6B5C2AC7C38CCF6061476F62 (Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		SampleProviderConverterBase__ctor_mE69854AD4FF46161BDA8F2BC29B7C0A8CD262061(__this, L_0, NULL);
		return;
	}
}
// System.Int32 NAudio.Wave.SampleProviders.Pcm8BitToSampleProvider::Read(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pcm8BitToSampleProvider_Read_m08EBB504737B5E24C8593E060B8868F92577DC9E (Pcm8BitToSampleProvider_t521206B09CB8181120A73744FD5B1CA968A3ECBF* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___2_count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		SampleProviderConverterBase_EnsureSourceBuffer_m6F22E56FE1491CEDF61A7C3E277B973B1D69AF7B(__this, L_1, NULL);
		RuntimeObject* L_2 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___source_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Int32 NAudio.Wave.IWaveProvider::Read(System.Byte[],System.Int32,System.Int32) */, IWaveProvider_tFD3270A18E398EFA745A9084DF77BDA5BE666C0E_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4);
		V_1 = L_5;
		int32_t L_6 = ___1_offset;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0043;
	}

IL_0023:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_buffer;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((SampleProviderConverterBase_tD2777EFF214E9028B389B89E78323D602A358F4E*)__this)->___sourceBuffer_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)((float)il2cpp_codegen_subtract(((float)(((float)L_13)/(128.0f))), (1.0f))));
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0043:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmDriverClose(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmDriverClose_m9E89CECA41C5C08E34D7D27DF223F6DA18371071 (intptr_t ___0_hAcmDriver, int32_t ___1_closeFlags, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmDriverClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmDriverClose)(___0_hAcmDriver, ___1_closeFlags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmDriver, ___1_closeFlags);
	#endif

	return returnValue;
}
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmFormatSuggest(System.IntPtr,NAudio.Wave.WaveFormat,NAudio.Wave.WaveFormat,System.Int32,NAudio.Wave.Compression.AcmFormatSuggestFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmFormatSuggest_m3FB9584EBEEED6DEFEA55ABADCFB9198F43B5D4B (intptr_t ___0_hAcmDriver, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___1_sourceFormat, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___2_destFormat, int32_t ___3_sizeDestFormat, int32_t ___4_suggestFlags, const RuntimeMethod* method) 
{




	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, void*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmFormatSuggest", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmFormatSuggest)(___0_hAcmDriver, (___1_sourceFormat ? ((RuntimeObject*)___1_sourceFormat)+1 : NULL), (___2_destFormat ? ((RuntimeObject*)___2_destFormat)+1 : NULL), ___3_sizeDestFormat, ___4_suggestFlags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmDriver, (___1_sourceFormat ? ((RuntimeObject*)___1_sourceFormat)+1 : NULL), (___2_destFormat ? ((RuntimeObject*)___2_destFormat)+1 : NULL), ___3_sizeDestFormat, ___4_suggestFlags);
	#endif

	return returnValue;
}
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamOpen(System.IntPtr&,System.IntPtr,NAudio.Wave.WaveFormat,NAudio.Wave.WaveFormat,NAudio.Wave.Compression.WaveFilter,System.IntPtr,System.IntPtr,NAudio.Wave.Compression.AcmStreamOpenFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamOpen_m341F1D25ABE467E72AB895122DEC97D82C8C3F1B (intptr_t* ___0_hAcmStream, intptr_t ___1_hAcmDriver, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___2_sourceFormat, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___3_destFormat, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75* ___4_waveFilter, intptr_t ___5_callback, intptr_t ___6_instance, int32_t ___7_openFlags, const RuntimeMethod* method) 
{






	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*, intptr_t, void*, void*, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke*, intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmStreamOpen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___4_waveFilter' to native representation
	WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke ____4_waveFilter_marshaled = {};
	if (___4_waveFilter != NULL)
	{
		WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke(*___4_waveFilter, ____4_waveFilter_marshaled);
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmStreamOpen)(___0_hAcmStream, ___1_hAcmDriver, (___2_sourceFormat ? ((RuntimeObject*)___2_sourceFormat)+1 : NULL), (___3_destFormat ? ((RuntimeObject*)___3_destFormat)+1 : NULL), ___4_waveFilter != NULL ? (&____4_waveFilter_marshaled) : NULL, ___5_callback, ___6_instance, ___7_openFlags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmStream, ___1_hAcmDriver, (___2_sourceFormat ? ((RuntimeObject*)___2_sourceFormat)+1 : NULL), (___3_destFormat ? ((RuntimeObject*)___3_destFormat)+1 : NULL), ___4_waveFilter != NULL ? (&____4_waveFilter_marshaled) : NULL, ___5_callback, ___6_instance, ___7_openFlags);
	#endif

	// Marshaling cleanup of parameter '___4_waveFilter' native representation
	if ((&____4_waveFilter_marshaled) != NULL)
	{
		WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_cleanup(____4_waveFilter_marshaled);
	}

	return returnValue;
}
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamClose(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamClose_m64E19223A9EC5AE5F4AFA67A0981A8AA7014B719 (intptr_t ___0_hAcmStream, int32_t ___1_closeFlags, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmStreamClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmStreamClose)(___0_hAcmStream, ___1_closeFlags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmStream, ___1_closeFlags);
	#endif

	return returnValue;
}
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamConvert(System.IntPtr,NAudio.Wave.Compression.AcmStreamHeaderStruct,NAudio.Wave.AcmStreamConvertFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamConvert_m09A720755E1EFC292BC2BAB498F57C69E85D5D86 (intptr_t ___0_hAcmStream, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* ___1_streamHeader, int32_t ___2_streamConvertFlags, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmStreamConvert", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmStreamConvert)(___0_hAcmStream, (___1_streamHeader ? ((RuntimeObject*)___1_streamHeader)+1 : NULL), ___2_streamConvertFlags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmStream, (___1_streamHeader ? ((RuntimeObject*)___1_streamHeader)+1 : NULL), ___2_streamConvertFlags);
	#endif

	return returnValue;
}
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamPrepareHeader(System.IntPtr,NAudio.Wave.Compression.AcmStreamHeaderStruct,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamPrepareHeader_m9B9A12D26792F22FD09782D7892F1EBC955826D8 (intptr_t ___0_hAcmStream, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* ___1_streamHeader, int32_t ___2_prepareFlags, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmStreamPrepareHeader", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmStreamPrepareHeader)(___0_hAcmStream, (___1_streamHeader ? ((RuntimeObject*)___1_streamHeader)+1 : NULL), ___2_prepareFlags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmStream, (___1_streamHeader ? ((RuntimeObject*)___1_streamHeader)+1 : NULL), ___2_prepareFlags);
	#endif

	return returnValue;
}
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamSize(System.IntPtr,System.Int32,System.Int32&,NAudio.Wave.Compression.AcmStreamSizeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamSize_mF50192945E2BE606DCC827263A9F237C4F4DD933 (intptr_t ___0_hAcmStream, int32_t ___1_inputBufferSize, int32_t* ___2_outputBufferSize, int32_t ___3_flags, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmStreamSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmStreamSize)(___0_hAcmStream, ___1_inputBufferSize, ___2_outputBufferSize, ___3_flags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmStream, ___1_inputBufferSize, ___2_outputBufferSize, ___3_flags);
	#endif

	return returnValue;
}
// NAudio.MmResult NAudio.Wave.Compression.AcmInterop::acmStreamUnprepareHeader(System.IntPtr,NAudio.Wave.Compression.AcmStreamHeaderStruct,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmInterop_acmStreamUnprepareHeader_mD8B291DEF5A3955632669AA72F5457C434B8AD43 (intptr_t ___0_hAcmStream, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* ___1_streamHeader, int32_t ___2_flags, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Msacm32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Msacm32.dll"), "acmStreamUnprepareHeader", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Msacm32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(acmStreamUnprepareHeader)(___0_hAcmStream, (___1_streamHeader ? ((RuntimeObject*)___1_streamHeader)+1 : NULL), ___2_flags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hAcmStream, (___1_streamHeader ? ((RuntimeObject*)___1_streamHeader)+1 : NULL), ___2_flags);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.Compression.AcmStream::.ctor(NAudio.Wave.WaveFormat,NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream__ctor_m67160DE442F21278A9CFD74D8F31B1D20AD8C3A7 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_sourceFormat, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___1_destFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7995F0B43143612EA58B49BE72D9875CEE0085);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___streamHandle_0 = L_0;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1 = ___0_sourceFormat;
		__this->___sourceFormat_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceFormat_3), (void*)L_1);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2 = ___0_sourceFormat;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WaveFormat_get_AverageBytesPerSecond_mED5E2621C0B0BC7B926FF04BF848CE00C19045BB_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)65536), L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_7 = ___0_sourceFormat;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 NAudio.Wave.WaveFormat::get_BlockAlign() */, L_7);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)(L_6%L_8))));
		intptr_t* L_9 = (intptr_t*)(&__this->___streamHandle_0);
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_11 = ___0_sourceFormat;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_12 = ___1_destFormat;
		intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		int32_t L_15;
		L_15 = AcmInterop_acmStreamOpen_m341F1D25ABE467E72AB895122DEC97D82C8C3F1B(L_9, L_10, L_11, L_12, (WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75*)NULL, L_13, L_14, 4, NULL);
		MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C(L_15, _stringLiteral0A7995F0B43143612EA58B49BE72D9875CEE0085, NULL);
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = AcmStream_SourceToDest_mC2EEA55A2085287AB79B713231F6D998ECD158F0(__this, L_16, NULL);
		V_1 = L_17;
		intptr_t L_18 = __this->___streamHandle_0;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* L_21 = (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78*)il2cpp_codegen_object_new(AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		AcmStreamHeader__ctor_m857603CE6B7CCBBD20BA6407A53EB4401E732E1A(L_21, L_18, L_19, L_20, NULL);
		__this->___streamHeader_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___streamHeader_2), (void*)L_21);
		intptr_t L_22 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___driverHandle_1 = L_22;
		goto IL_008d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_0084:
	{// begin catch(System.Object)
		RuntimeObject* L_23 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		AcmStream_Dispose_m46F586D9B290B86C6D64DF0F8B72ADC96B62E0A5(__this, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_008d:
	{
		return;
	}
}
// System.Int32 NAudio.Wave.Compression.AcmStream::SourceToDest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmStream_SourceToDest_mC2EEA55A2085287AB79B713231F6D998ECD158F0 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, int32_t ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86D5699BBCD35D3447AA366922C30F7260FC7FCB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		intptr_t L_1 = __this->___streamHandle_0;
		int32_t L_2 = ___0_source;
		int32_t L_3;
		L_3 = AcmInterop_acmStreamSize_mF50192945E2BE606DCC827263A9F237C4F4DD933(L_1, L_2, (&V_0), 0, NULL);
		MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C(L_3, _stringLiteral86D5699BBCD35D3447AA366922C30F7260FC7FCB, NULL);
		int32_t L_4 = V_0;
		return L_4;
	}
}
// NAudio.Wave.WaveFormat NAudio.Wave.Compression.AcmStream::SuggestPcmFormat(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* AcmStream_SuggestPcmFormat_m5F7CFEBB0EE96D4A741B27AE6FCC072ABB09ECA0 (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_compressedFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF023DAA5214383C785FC3F59F06098D3E538DEE);
		s_Il2CppMethodInitialized = true;
	}
	WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* V_0 = NULL;
	{
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_0 = ___0_compressedFormat;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80_inline(L_0, NULL);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_2 = ___0_compressedFormat;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A_inline(L_2, NULL);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_4 = (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*)il2cpp_codegen_object_new(WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaveFormat__ctor_m950E9AF47FEFD410899461E608FA502BFC2810B8(L_4, L_1, ((int32_t)16), L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_6 = ___0_compressedFormat;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_7 = V_0;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Marshal_SizeOf_m596657DAE86DB62FCC24730A3A6FB0F19B4C6B2E(L_8, NULL);
		int32_t L_10;
		L_10 = AcmInterop_acmFormatSuggest_m3FB9584EBEEED6DEFEA55ABADCFB9198F43B5D4B(L_5, L_6, L_7, L_9, ((int32_t)65536), NULL);
		MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C(L_10, _stringLiteralFF023DAA5214383C785FC3F59F06098D3E538DEE, NULL);
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NAudio.Wave.Compression.AcmStream::get_SourceBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStream_get_SourceBuffer_m1ACC09AE24011B012C0A7440CC30E3EAA931571F (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) 
{
	{
		AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* L_0 = __this->___streamHeader_2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = AcmStreamHeader_get_SourceBuffer_mF779867A2D634F050DAB6337B80B192FCB62D26B_inline(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] NAudio.Wave.Compression.AcmStream::get_DestBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStream_get_DestBuffer_m61DFC6E8957976B0D3454F631B26F2062D7CC39D (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) 
{
	{
		AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* L_0 = __this->___streamHeader_2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = AcmStreamHeader_get_DestBuffer_m0F5AB028B57FBA4B6D5A54AE7D0120F95417A852_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void NAudio.Wave.Compression.AcmStream::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream_Reposition_mEAB7297FA28A5F708ABEFB1FA1A9D0F99E912C73 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) 
{
	{
		AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* L_0 = __this->___streamHeader_2;
		NullCheck(L_0);
		AcmStreamHeader_Reposition_m8F106D562C934ED1AB73703575FFC70EAC665FFA(L_0, NULL);
		return;
	}
}
// System.Int32 NAudio.Wave.Compression.AcmStream::Convert(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmStream_Convert_m6FA5A3C9EA2E3EDC6110EF1B130C54E96C5FE1F9 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, int32_t ___0_bytesToConvert, int32_t* ___1_sourceBytesConverted, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_bytesToConvert;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_1 = __this->___sourceFormat_3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 NAudio.Wave.WaveFormat::get_BlockAlign() */, L_1);
		if (!((int32_t)(L_0%L_2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___0_bytesToConvert;
		int32_t L_4 = ___0_bytesToConvert;
		WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* L_5 = __this->___sourceFormat_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 NAudio.Wave.WaveFormat::get_BlockAlign() */, L_5);
		___0_bytesToConvert = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)(L_4%L_6))));
	}

IL_0020:
	{
		AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* L_7 = __this->___streamHeader_2;
		int32_t L_8 = ___0_bytesToConvert;
		int32_t* L_9 = ___1_sourceBytesConverted;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = AcmStreamHeader_Convert_mF37655F056CBD638FC3DDCC7F13A201CDE161119(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void NAudio.Wave.Compression.AcmStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream_Dispose_m46F586D9B290B86C6D64DF0F8B72ADC96B62E0A5 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void NAudio.Wave.Compression.AcmStream::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void NAudio.Wave.Compression.AcmStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream_Dispose_m14C6B739BBCA45821207285817950C8EC9BB1632 (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* L_1 = __this->___streamHeader_2;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* L_2 = __this->___streamHeader_2;
		NullCheck(L_2);
		AcmStreamHeader_Dispose_m4663DE62F2BF573733C5835891CAB910A10506B1(L_2, NULL);
		__this->___streamHeader_2 = (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___streamHeader_2), (void*)(AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78*)NULL);
	}

IL_001d:
	{
		intptr_t L_3 = __this->___streamHandle_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		intptr_t L_6 = __this->___streamHandle_0;
		int32_t L_7;
		L_7 = AcmInterop_acmStreamClose_m64E19223A9EC5AE5F4AFA67A0981A8AA7014B719(L_6, 0, NULL);
		V_0 = L_7;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___streamHandle_0 = L_8;
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_10 = V_0;
		MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE* L_11 = (MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		MmException__ctor_m20CFD6073C94C60FFF256F13E5F0263E3DFE4ABE(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCC1D6CA9F51D402C7445BE154CBC5EBB935D523)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AcmStream_Dispose_m14C6B739BBCA45821207285817950C8EC9BB1632_RuntimeMethod_var)));
	}

IL_0056:
	{
		intptr_t L_12 = __this->___driverHandle_1;
		intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_14;
		L_14 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		intptr_t L_15 = __this->___driverHandle_1;
		int32_t L_16;
		L_16 = AcmInterop_acmDriverClose_m9E89CECA41C5C08E34D7D27DF223F6DA18371071(L_15, 0, NULL);
		intptr_t L_17 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___driverHandle_1 = L_17;
	}

IL_0080:
	{
		return;
	}
}
// System.Void NAudio.Wave.Compression.AcmStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStream_Finalize_mA62BD920431BD2E0EB595101E212CA2C26FB22FD (AcmStream_tA80B398D1184198A30E89216EDE16A42F2B083D7* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void NAudio.Wave.Compression.AcmStream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.Compression.AcmStreamHeader::.ctor(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader__ctor_m857603CE6B7CCBBD20BA6407A53EB4401E732E1A (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, intptr_t ___0_streamHandle, int32_t ___1_sourceBufferLength, int32_t ___2_destBufferLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_0 = (AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5*)il2cpp_codegen_object_new(AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AcmStreamHeaderStruct__ctor_mDB1372345D32F151860C37B4AA8496D4A8629824(L_0, NULL);
		__this->___streamHeader_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___streamHeader_0), (void*)L_0);
		int32_t L_1 = ___1_sourceBufferLength;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___sourceBuffer_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceBuffer_1), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___sourceBuffer_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_3, 3, NULL);
		__this->___hSourceBuffer_2 = L_4;
		int32_t L_5 = ___2_destBufferLength;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___destBuffer_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destBuffer_3), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___destBuffer_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_8;
		L_8 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_7, 3, NULL);
		__this->___hDestBuffer_4 = L_8;
		intptr_t L_9 = ___0_streamHandle;
		__this->___streamHandle_5 = L_9;
		__this->___firstTime_6 = (bool)1;
		return;
	}
}
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Prepare_m0EBFE3DAD86A2E9DD0DE4D6933A2B8F33567AB9A (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA343E90DF0B1D0B8EE396B95DCCC100DCB8B98A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_0 = __this->___streamHeader_0;
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_1 = __this->___streamHeader_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_m596657DAE86DB62FCC24730A3A6FB0F19B4C6B2E(L_1, NULL);
		NullCheck(L_0);
		L_0->___cbStruct_0 = L_2;
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_3 = __this->___streamHeader_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sourceBuffer_1;
		NullCheck(L_4);
		NullCheck(L_3);
		L_3->___sourceBufferLength_4 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_5 = __this->___streamHeader_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_6 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___hSourceBuffer_2);
		intptr_t L_7;
		L_7 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(L_6, NULL);
		NullCheck(L_5);
		L_5->___sourceBufferPointer_3 = L_7;
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_8 = __this->___streamHeader_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___destBuffer_3;
		NullCheck(L_9);
		NullCheck(L_8);
		L_8->___destBufferLength_8 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_10 = __this->___streamHeader_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_11 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___hDestBuffer_4);
		intptr_t L_12;
		L_12 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(L_11, NULL);
		NullCheck(L_10);
		L_10->___destBufferPointer_7 = L_12;
		intptr_t L_13 = __this->___streamHandle_5;
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_14 = __this->___streamHeader_0;
		int32_t L_15;
		L_15 = AcmInterop_acmStreamPrepareHeader_m9B9A12D26792F22FD09782D7892F1EBC955826D8(L_13, L_14, 0, NULL);
		MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C(L_15, _stringLiteralA343E90DF0B1D0B8EE396B95DCCC100DCB8B98A4, NULL);
		return;
	}
}
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Unprepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Unprepare_mA7C33BB2C4430DBEBD38B0566314A5B56C2076A8 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_0 = __this->___streamHeader_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___sourceBuffer_1;
		NullCheck(L_1);
		NullCheck(L_0);
		L_0->___sourceBufferLength_4 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_2 = __this->___streamHeader_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_3 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___hSourceBuffer_2);
		intptr_t L_4;
		L_4 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(L_3, NULL);
		NullCheck(L_2);
		L_2->___sourceBufferPointer_3 = L_4;
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_5 = __this->___streamHeader_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___destBuffer_3;
		NullCheck(L_6);
		NullCheck(L_5);
		L_5->___destBufferLength_8 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_7 = __this->___streamHeader_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_8 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___hDestBuffer_4);
		intptr_t L_9;
		L_9 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(L_8, NULL);
		NullCheck(L_7);
		L_7->___destBufferPointer_7 = L_9;
		intptr_t L_10 = __this->___streamHandle_5;
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_11 = __this->___streamHeader_0;
		int32_t L_12;
		L_12 = AcmInterop_acmStreamUnprepareHeader_mD8B291DEF5A3955632669AA72F5457C434B8AD43(L_10, L_11, 0, NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = V_0;
		MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE* L_15 = (MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MmException_t4CE01649BA812DADC13258AAE739A13A36AB94FE_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		MmException__ctor_m20CFD6073C94C60FFF256F13E5F0263E3DFE4ABE(L_15, L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ACBB891617528C0FE404A467216405A0785F126)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AcmStreamHeader_Unprepare_mA7C33BB2C4430DBEBD38B0566314A5B56C2076A8_RuntimeMethod_var)));
	}

IL_0074:
	{
		return;
	}
}
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Reposition_m8F106D562C934ED1AB73703575FFC70EAC665FFA (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	{
		__this->___firstTime_6 = (bool)1;
		return;
	}
}
// System.Int32 NAudio.Wave.Compression.AcmStreamHeader::Convert(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AcmStreamHeader_Convert_mF37655F056CBD638FC3DDCC7F13A201CDE161119 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, int32_t ___0_bytesToConvert, int32_t* ___1_sourceBytesConverted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70581AC0E3E29971244AE894FA0E32D5BB2E7B11);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		AcmStreamHeader_Prepare_m0EBFE3DAD86A2E9DD0DE4D6933A2B8F33567AB9A(__this, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				AcmStreamHeader_Unprepare_mA7C33BB2C4430DBEBD38B0566314A5B56C2076A8(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_0 = __this->___streamHeader_0;
				int32_t L_1 = ___0_bytesToConvert;
				NullCheck(L_0);
				L_0->___sourceBufferLength_4 = L_1;
				AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_2 = __this->___streamHeader_0;
				int32_t L_3 = ___0_bytesToConvert;
				NullCheck(L_2);
				L_2->___sourceBufferLengthUsed_5 = L_3;
				bool L_4 = __this->___firstTime_6;
				if (L_4)
				{
					goto IL_0029_1;
				}
			}
			{
				G_B4_0 = 4;
				goto IL_002b_1;
			}

IL_0029_1:
			{
				G_B4_0 = ((int32_t)20);
			}

IL_002b_1:
			{
				V_0 = G_B4_0;
				intptr_t L_5 = __this->___streamHandle_5;
				AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_6 = __this->___streamHeader_0;
				int32_t L_7 = V_0;
				int32_t L_8;
				L_8 = AcmInterop_acmStreamConvert_m09A720755E1EFC292BC2BAB498F57C69E85D5D86(L_5, L_6, L_7, NULL);
				MmException_Try_mD0013030627728EC4450E153960FECFFDF115C0C(L_8, _stringLiteral70581AC0E3E29971244AE894FA0E32D5BB2E7B11, NULL);
				__this->___firstTime_6 = (bool)0;
				int32_t* L_9 = ___1_sourceBytesConverted;
				AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_10 = __this->___streamHeader_0;
				NullCheck(L_10);
				int32_t L_11 = L_10->___sourceBufferLengthUsed_5;
				*((int32_t*)L_9) = (int32_t)L_11;
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* L_12 = __this->___streamHeader_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___destBufferLengthUsed_9;
		return L_13;
	}
}
// System.Byte[] NAudio.Wave.Compression.AcmStreamHeader::get_SourceBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStreamHeader_get_SourceBuffer_mF779867A2D634F050DAB6337B80B192FCB62D26B (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sourceBuffer_1;
		return L_0;
	}
}
// System.Byte[] NAudio.Wave.Compression.AcmStreamHeader::get_DestBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStreamHeader_get_DestBuffer_m0F5AB028B57FBA4B6D5A54AE7D0120F95417A852 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___destBuffer_3;
		return L_0;
	}
}
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Dispose_m4663DE62F2BF573733C5835891CAB910A10506B1 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void NAudio.Wave.Compression.AcmStreamHeader::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Dispose_m01BB37816FEEF81946846E6377AB8007B6FB7647 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		__this->___sourceBuffer_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceBuffer_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___destBuffer_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destBuffer_3), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___hSourceBuffer_2);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_1, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_2 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___hDestBuffer_4);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_2, NULL);
	}

IL_002c:
	{
		__this->___disposed_7 = (bool)1;
		return;
	}
}
// System.Void NAudio.Wave.Compression.AcmStreamHeader::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeader_Finalize_m12F193D9E985A2ED9D5AF0AFCC918D113F45AC63 (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void NAudio.Wave.Compression.AcmStreamHeader::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.Compression.AcmStreamHeaderStruct
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke(const AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5& unmarshaled, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke& marshaled)
{
	marshaled.___cbStruct_0 = unmarshaled.___cbStruct_0;
	marshaled.___fdwStatus_1 = unmarshaled.___fdwStatus_1;
	marshaled.___userData_2 = unmarshaled.___userData_2;
	marshaled.___sourceBufferPointer_3 = unmarshaled.___sourceBufferPointer_3;
	marshaled.___sourceBufferLength_4 = unmarshaled.___sourceBufferLength_4;
	marshaled.___sourceBufferLengthUsed_5 = unmarshaled.___sourceBufferLengthUsed_5;
	marshaled.___sourceUserData_6 = unmarshaled.___sourceUserData_6;
	marshaled.___destBufferPointer_7 = unmarshaled.___destBufferPointer_7;
	marshaled.___destBufferLength_8 = unmarshaled.___destBufferLength_8;
	marshaled.___destBufferLengthUsed_9 = unmarshaled.___destBufferLengthUsed_9;
	marshaled.___destUserData_10 = unmarshaled.___destUserData_10;
}
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_back(const AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke& marshaled, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5& unmarshaled)
{
	int32_t unmarshaledcbStruct_temp_0 = 0;
	unmarshaledcbStruct_temp_0 = marshaled.___cbStruct_0;
	unmarshaled.___cbStruct_0 = unmarshaledcbStruct_temp_0;
	int32_t unmarshaledfdwStatus_temp_1 = 0;
	unmarshaledfdwStatus_temp_1 = marshaled.___fdwStatus_1;
	unmarshaled.___fdwStatus_1 = unmarshaledfdwStatus_temp_1;
	intptr_t unmarshaleduserData_temp_2;
	memset((&unmarshaleduserData_temp_2), 0, sizeof(unmarshaleduserData_temp_2));
	unmarshaleduserData_temp_2 = marshaled.___userData_2;
	unmarshaled.___userData_2 = unmarshaleduserData_temp_2;
	intptr_t unmarshaledsourceBufferPointer_temp_3;
	memset((&unmarshaledsourceBufferPointer_temp_3), 0, sizeof(unmarshaledsourceBufferPointer_temp_3));
	unmarshaledsourceBufferPointer_temp_3 = marshaled.___sourceBufferPointer_3;
	unmarshaled.___sourceBufferPointer_3 = unmarshaledsourceBufferPointer_temp_3;
	int32_t unmarshaledsourceBufferLength_temp_4 = 0;
	unmarshaledsourceBufferLength_temp_4 = marshaled.___sourceBufferLength_4;
	unmarshaled.___sourceBufferLength_4 = unmarshaledsourceBufferLength_temp_4;
	int32_t unmarshaledsourceBufferLengthUsed_temp_5 = 0;
	unmarshaledsourceBufferLengthUsed_temp_5 = marshaled.___sourceBufferLengthUsed_5;
	unmarshaled.___sourceBufferLengthUsed_5 = unmarshaledsourceBufferLengthUsed_temp_5;
	intptr_t unmarshaledsourceUserData_temp_6;
	memset((&unmarshaledsourceUserData_temp_6), 0, sizeof(unmarshaledsourceUserData_temp_6));
	unmarshaledsourceUserData_temp_6 = marshaled.___sourceUserData_6;
	unmarshaled.___sourceUserData_6 = unmarshaledsourceUserData_temp_6;
	intptr_t unmarshaleddestBufferPointer_temp_7;
	memset((&unmarshaleddestBufferPointer_temp_7), 0, sizeof(unmarshaleddestBufferPointer_temp_7));
	unmarshaleddestBufferPointer_temp_7 = marshaled.___destBufferPointer_7;
	unmarshaled.___destBufferPointer_7 = unmarshaleddestBufferPointer_temp_7;
	int32_t unmarshaleddestBufferLength_temp_8 = 0;
	unmarshaleddestBufferLength_temp_8 = marshaled.___destBufferLength_8;
	unmarshaled.___destBufferLength_8 = unmarshaleddestBufferLength_temp_8;
	int32_t unmarshaleddestBufferLengthUsed_temp_9 = 0;
	unmarshaleddestBufferLengthUsed_temp_9 = marshaled.___destBufferLengthUsed_9;
	unmarshaled.___destBufferLengthUsed_9 = unmarshaleddestBufferLengthUsed_temp_9;
	intptr_t unmarshaleddestUserData_temp_10;
	memset((&unmarshaleddestUserData_temp_10), 0, sizeof(unmarshaleddestUserData_temp_10));
	unmarshaleddestUserData_temp_10 = marshaled.___destUserData_10;
	unmarshaled.___destUserData_10 = unmarshaleddestUserData_temp_10;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Compression.AcmStreamHeaderStruct
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_cleanup(AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.Compression.AcmStreamHeaderStruct
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_com(const AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5& unmarshaled, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_com& marshaled)
{
	marshaled.___cbStruct_0 = unmarshaled.___cbStruct_0;
	marshaled.___fdwStatus_1 = unmarshaled.___fdwStatus_1;
	marshaled.___userData_2 = unmarshaled.___userData_2;
	marshaled.___sourceBufferPointer_3 = unmarshaled.___sourceBufferPointer_3;
	marshaled.___sourceBufferLength_4 = unmarshaled.___sourceBufferLength_4;
	marshaled.___sourceBufferLengthUsed_5 = unmarshaled.___sourceBufferLengthUsed_5;
	marshaled.___sourceUserData_6 = unmarshaled.___sourceUserData_6;
	marshaled.___destBufferPointer_7 = unmarshaled.___destBufferPointer_7;
	marshaled.___destBufferLength_8 = unmarshaled.___destBufferLength_8;
	marshaled.___destBufferLengthUsed_9 = unmarshaled.___destBufferLengthUsed_9;
	marshaled.___destUserData_10 = unmarshaled.___destUserData_10;
}
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_com_back(const AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_com& marshaled, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5& unmarshaled)
{
	int32_t unmarshaledcbStruct_temp_0 = 0;
	unmarshaledcbStruct_temp_0 = marshaled.___cbStruct_0;
	unmarshaled.___cbStruct_0 = unmarshaledcbStruct_temp_0;
	int32_t unmarshaledfdwStatus_temp_1 = 0;
	unmarshaledfdwStatus_temp_1 = marshaled.___fdwStatus_1;
	unmarshaled.___fdwStatus_1 = unmarshaledfdwStatus_temp_1;
	intptr_t unmarshaleduserData_temp_2;
	memset((&unmarshaleduserData_temp_2), 0, sizeof(unmarshaleduserData_temp_2));
	unmarshaleduserData_temp_2 = marshaled.___userData_2;
	unmarshaled.___userData_2 = unmarshaleduserData_temp_2;
	intptr_t unmarshaledsourceBufferPointer_temp_3;
	memset((&unmarshaledsourceBufferPointer_temp_3), 0, sizeof(unmarshaledsourceBufferPointer_temp_3));
	unmarshaledsourceBufferPointer_temp_3 = marshaled.___sourceBufferPointer_3;
	unmarshaled.___sourceBufferPointer_3 = unmarshaledsourceBufferPointer_temp_3;
	int32_t unmarshaledsourceBufferLength_temp_4 = 0;
	unmarshaledsourceBufferLength_temp_4 = marshaled.___sourceBufferLength_4;
	unmarshaled.___sourceBufferLength_4 = unmarshaledsourceBufferLength_temp_4;
	int32_t unmarshaledsourceBufferLengthUsed_temp_5 = 0;
	unmarshaledsourceBufferLengthUsed_temp_5 = marshaled.___sourceBufferLengthUsed_5;
	unmarshaled.___sourceBufferLengthUsed_5 = unmarshaledsourceBufferLengthUsed_temp_5;
	intptr_t unmarshaledsourceUserData_temp_6;
	memset((&unmarshaledsourceUserData_temp_6), 0, sizeof(unmarshaledsourceUserData_temp_6));
	unmarshaledsourceUserData_temp_6 = marshaled.___sourceUserData_6;
	unmarshaled.___sourceUserData_6 = unmarshaledsourceUserData_temp_6;
	intptr_t unmarshaleddestBufferPointer_temp_7;
	memset((&unmarshaleddestBufferPointer_temp_7), 0, sizeof(unmarshaleddestBufferPointer_temp_7));
	unmarshaleddestBufferPointer_temp_7 = marshaled.___destBufferPointer_7;
	unmarshaled.___destBufferPointer_7 = unmarshaleddestBufferPointer_temp_7;
	int32_t unmarshaleddestBufferLength_temp_8 = 0;
	unmarshaleddestBufferLength_temp_8 = marshaled.___destBufferLength_8;
	unmarshaled.___destBufferLength_8 = unmarshaleddestBufferLength_temp_8;
	int32_t unmarshaleddestBufferLengthUsed_temp_9 = 0;
	unmarshaleddestBufferLengthUsed_temp_9 = marshaled.___destBufferLengthUsed_9;
	unmarshaled.___destBufferLengthUsed_9 = unmarshaleddestBufferLengthUsed_temp_9;
	intptr_t unmarshaleddestUserData_temp_10;
	memset((&unmarshaleddestUserData_temp_10), 0, sizeof(unmarshaleddestUserData_temp_10));
	unmarshaleddestUserData_temp_10 = marshaled.___destUserData_10;
	unmarshaled.___destUserData_10 = unmarshaleddestUserData_temp_10;
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Compression.AcmStreamHeaderStruct
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_com_cleanup(AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshaled_com& marshaled)
{
}
// System.Void NAudio.Wave.Compression.AcmStreamHeaderStruct::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcmStreamHeaderStruct__ctor_mDB1372345D32F151860C37B4AA8496D4A8629824 (AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NAudio.Wave.Compression.WaveFilter
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke(const WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75& unmarshaled, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke& marshaled)
{
	marshaled.___StructureSize_0 = unmarshaled.___StructureSize_0;
	marshaled.___FilterTag_1 = unmarshaled.___FilterTag_1;
	marshaled.___Filter_2 = unmarshaled.___Filter_2;
	if (unmarshaled.___Reserved_3 != NULL)
	{
		if (5 > (unmarshaled.___Reserved_3)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
		{
			(marshaled.___Reserved_3)[i] = (unmarshaled.___Reserved_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_back(const WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke& marshaled, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledStructureSize_temp_0 = 0;
	unmarshaledStructureSize_temp_0 = marshaled.___StructureSize_0;
	unmarshaled.___StructureSize_0 = unmarshaledStructureSize_temp_0;
	int32_t unmarshaledFilterTag_temp_1 = 0;
	unmarshaledFilterTag_temp_1 = marshaled.___FilterTag_1;
	unmarshaled.___FilterTag_1 = unmarshaledFilterTag_temp_1;
	int32_t unmarshaledFilter_temp_2 = 0;
	unmarshaledFilter_temp_2 = marshaled.___Filter_2;
	unmarshaled.___Filter_2 = unmarshaledFilter_temp_2;
	unmarshaled.___Reserved_3 = reinterpret_cast<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, 5));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Reserved_3), (void*)reinterpret_cast<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, 5)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
	{
		(unmarshaled.___Reserved_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Reserved_3)[i]);
	}
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Compression.WaveFilter
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_cleanup(WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NAudio.Wave.Compression.WaveFilter
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_com(const WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75& unmarshaled, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_com& marshaled)
{
	marshaled.___StructureSize_0 = unmarshaled.___StructureSize_0;
	marshaled.___FilterTag_1 = unmarshaled.___FilterTag_1;
	marshaled.___Filter_2 = unmarshaled.___Filter_2;
	if (unmarshaled.___Reserved_3 != NULL)
	{
		if (5 > (unmarshaled.___Reserved_3)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
		{
			(marshaled.___Reserved_3)[i] = (unmarshaled.___Reserved_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_com_back(const WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_com& marshaled, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledStructureSize_temp_0 = 0;
	unmarshaledStructureSize_temp_0 = marshaled.___StructureSize_0;
	unmarshaled.___StructureSize_0 = unmarshaledStructureSize_temp_0;
	int32_t unmarshaledFilterTag_temp_1 = 0;
	unmarshaledFilterTag_temp_1 = marshaled.___FilterTag_1;
	unmarshaled.___FilterTag_1 = unmarshaledFilterTag_temp_1;
	int32_t unmarshaledFilter_temp_2 = 0;
	unmarshaledFilter_temp_2 = marshaled.___Filter_2;
	unmarshaled.___Filter_2 = unmarshaledFilter_temp_2;
	unmarshaled.___Reserved_3 = reinterpret_cast<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, 5));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Reserved_3), (void*)reinterpret_cast<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, 5)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
	{
		(unmarshaled.___Reserved_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Reserved_3)[i]);
	}
}
// Conversion method for clean up from marshalling of: NAudio.Wave.Compression.WaveFilter
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_com_cleanup(WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] NAudio.Utils.BufferHelpers::Ensure(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferHelpers_Ensure_mA9470F1144B83A833FC82B35E0A8BAED7E42C24A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_bytesRequired, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		NullCheck(L_1);
		int32_t L_2 = ___1_bytesRequired;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}

IL_0009:
	{
		int32_t L_3 = ___1_bytesRequired;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		___0_buffer = L_4;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_buffer;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_FileOffset_mDD5E94785FEA2B98C105AEC5C770ED65870C68CB_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CFileOffsetU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Mp3Frame_get_FileOffset_m0EA767DEF0145B0E9C6AB3944525EA5CB32F4EC6_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CFileOffsetU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_FrameLength_mD3A27E39C85CDFD7D951A196220245966BB201D6_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFrameLengthU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_RawData_m8FBBC1A5679F3557D44414CC89696B30A8E05BDC_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRawDataU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawDataU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Mp3Frame_get_RawData_m46FCFC359C459DC9327E8B3A6C749FC0A93A44A7_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRawDataU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_MpegVersion_m7EE0656440CD7BC3082F5BBC8BEBAA735E3A74A6_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMpegVersionU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_MpegVersion_m7F66FF972A3E280289B07CE01D6BCC0CBD87DC44_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMpegVersionU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_MpegLayer_m84C3EC897E816464CD89EA1168CB8A0F625A0F2C_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMpegLayerU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_MpegLayer_m514242280336E1677A408F9B24E5B7BCD290CDA3_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMpegLayerU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_CrcPresent_m270FF919E7BEF5241AFD746D6C524EF2FC8F6AD2_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CCrcPresentU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_BitRateIndex_m6F23263C841E99194ECF99CA31F1400AE5E537B9_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitRateIndexU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_BitRateIndex_m4D5DF9243546C697A0E470F85CE25F946A2B852F_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitRateIndexU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_BitRate_m68B6AAD9A2A72943B2455B256AA7E855A40E495D_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitRateU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_BitRate_m422B535002A96669B5BD8B72C16206B68B53915C_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitRateU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_SampleRate_m6AD7789BDD850909D0187E8D0EFAFCECD10C6081_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleRateU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_ChannelMode_mF079204FC1054D2091E1A66EDF266FA92D79C921_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelModeU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_ChannelExtension_m679189A69EF245778F389076DD5619AF0C9F5602_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelExtensionU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_ChannelExtension_m6142B24794DFD850D6186721BF531B00E825BC87_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelExtensionU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_ChannelMode_m043D179137337F4595EDF56B4B9602F5F544161C_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelModeU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_Copyright_m7184DBEB5BA633FA9D4E873E221DA418480B1B52_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CCopyrightU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_SampleCount_mCE1C08A830D1FD4228A9BF48E106EF28D0E4CB46_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleCountU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_SampleCount_m6D99B5EB4D4F4E0AAB6846431BB6F036E3E249CE_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Frame_get_SampleRate_m82D6664E9BD3C2067048FFDDCC1C50113032F58B_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Frame_set_FrameLength_mA56E8F798863128DF398B94D3E2528D661428F41_inline (Mp3Frame_tC458D68AEA266D0D8ABB6B7BE7625FD0C845722F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFrameLengthU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t WaveFormat_get_Encoding_mECB99F090D4B853EBC9C4EBCF3E3F1195EC86B21_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___waveFormatTag_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_ExtraSize_mDBDEF0961D9449135ED9A723716FCBAA5F71E426_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___extraSize_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3FileReader_set_Mp3WaveFormat_m5038632FAC9AAFFF31AF0E1B6DCDF0ED764845FE_inline (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* ___0_value, const RuntimeMethod* method) 
{
	{
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_0 = ___0_value;
		__this->___U3CMp3WaveFormatU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMp3WaveFormatU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* Mp3FileReader_get_Mp3WaveFormat_m5B1437F5447CEEA854E50D425E23D12360B6A4BF_inline (Mp3FileReader_tDA66E03EE312DD9D4135D883A2C312128B25E5DB* __this, const RuntimeMethod* method) 
{
	{
		Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154* L_0 = __this->___U3CMp3WaveFormatU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FrameDecompressorBuilder_Invoke_mF3EEDFC1BFD77CA3A08D7755E156D5A4B4773E1E_inline (FrameDecompressorBuilder_tBE51D1B869120BB8439AED5F827BD15DF362F0E4* __this, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* ___0_mp3Format, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_mp3Format, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_BitsPerSample_mFC2B4C2EBC1915A66B779A2412DCF5E711548795_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___bitsPerSample_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_Channels_m3D5B9F75DF0BF4E1B05858B0D71EC61BA637779A_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___channels_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_FilePosition_mF5A1F30A0B9F2290F5D7DB1AC57CD6C01AB5D5BD_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CFilePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_SamplePosition_m5A803CF02BF6A38B4D4F5C7FBD04D3D92842A675_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSamplePositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_SampleCount_m5E6DDDBE635B21A4276D6C8C3D3D4AECFDEA58B1_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Mp3Index_get_FilePosition_m15371E31E080A180EBE72D9C6855C78BEB7199D7_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CFilePositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mp3Index_set_ByteCount_mAF78B634A2C55DFF49D92CCADAD81A8BD61B72D7_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CByteCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_SampleRate_mC10E08677D5A5F48EC27B03C3E78AFE06C11EF80_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sampleRate_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Mp3Index_get_SamplePosition_m6350A85D4AA83C4C665B963C515D6F24655A8D92_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CSamplePositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mp3Index_get_SampleCount_m0FFA0218060867BD6F34F5E3F795CABC1AD9B146_inline (Mp3Index_tD97A444EC3A889FB180E7055EE1E6DD3337E9A6E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BitConverter_Int64BitsToDouble_m0471A5DA68629692DE031E855EB537CBB4CA9A55_inline (int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = *((double*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveFormat_get_AverageBytesPerSecond_mED5E2621C0B0BC7B926FF04BF848CE00C19045BB_inline (WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___averageBytesPerSecond_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStreamHeader_get_SourceBuffer_mF779867A2D634F050DAB6337B80B192FCB62D26B_inline (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sourceBuffer_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AcmStreamHeader_get_DestBuffer_m0F5AB028B57FBA4B6D5A54AE7D0120F95417A852_inline (AcmStreamHeader_t7C6949E0D0459B7C1957B60F98911A3CB0A71A78* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___destBuffer_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}

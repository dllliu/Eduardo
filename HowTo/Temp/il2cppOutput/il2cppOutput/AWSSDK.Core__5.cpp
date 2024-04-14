#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<Amazon.Runtime.IMetricsTiming>>
struct Dictionary_2_tEE1955C2F363A8974309F7AA1B3F41C8CC360FDE;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t5B9E0E286EC298C9E8AE8469E4E87343A2AD2C4A;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Int64>
struct Dictionary_2_t4958449F5D5820516203D35F6D499192859B168B;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,Amazon.Runtime.Internal.Util.Timing>
struct Dictionary_2_t7CCB1499C1EA9F0F64AEE02C50CA92FA5A373297;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>
struct Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE;
// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint>
struct Dictionary_2_t45C8B0CC8C8BD1C10D23FBBB56BDF6DF0FE27376;
// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>
struct Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7;
// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>
struct Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_tFF82757E61ADB2F43ADCC4569ED37780CD25F77C;
// System.Collections.Generic.IDictionary`2<System.String,ThirdParty.Json.LitJson.JsonData>
struct IDictionary_2_tD3CEBF450786077675AD0444F253CB6488344AA8;
// System.Collections.Generic.IDictionary`2<System.String,Amazon.RuntimeDependencies.RuntimeDependencyFactory>
struct IDictionary_2_t02ED36C9354B570F0E350D5538507A1A6D51D09E;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IDictionary`2<System.Type,Amazon.Runtime.Internal.Util.Logger>
struct IDictionary_2_tB9181F0BEEA57A5B1931BE4FC9E2FC34AF54130B;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings>
struct IEnumerator_1_t692CD39122C5356BC9EB08759BF45B5277E0A905;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,ThirdParty.Json.LitJson.JsonData>>
struct IList_1_tF46CA865E66EFEC8CD7DCAFE2C139247EBC7E45C;
// System.Collections.Generic.IList`1<ThirdParty.Json.LitJson.JsonData>
struct IList_1_t89642CCBD38406A6EE336A0ABD3C0085CD7C018E;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IOrderedEnumerable_1_t7606BFE46AACEA1EDC5F775FB6D59D7D505BFD60;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IOrderedEnumerable_1_t6A7028C7CA011CD0D96850847C38AA479786EB7C;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Linq.IOrderedEnumerable`1<System.String>
struct IOrderedEnumerable_1_tCA2A9103AFD3840344CBF518E55C59ACD725552C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,Amazon.Runtime.ParameterValue>
struct KeyCollection_t597373788155FCAF5651D985D2E6C34261FCBAA6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>
struct KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>
struct KeyCollection_t7B35E17D9174DC632AC8386EF627B4E3FE3C01C3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>
struct KeyCollection_tBB259555FA5E2630B6CC6B72DAC54A9B502E16AC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t53AF86BBB805E94F10CAA9B43984EA7E6D7802E2;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<Amazon.Runtime.Internal.Util.InternalLogger>
struct List_1_t6DDA59DB625ECDBFBFFC54CE41256C7DFACED416;
// System.Collections.Generic.List`1<Amazon.Runtime.Internal.Util.MetricError>
struct List_1_t03616FD22E5C15FE5C17BB12C0539BF694587FD3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE;
// System.Collections.Generic.Stack`1<ThirdParty.Json.LitJson.WriterContext>
struct Stack_1_t6C634036633470B95D11513804EEFED836921CAA;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_tA522288A50DBBA4F2B2C1B7903E790568AC5E651;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,Amazon.Runtime.ParameterValue>>
struct TreeSet_1_t9280D44DF69C63A2DC42C3F8E7DB3114AF0C7D70;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct TreeSet_1_tDA45F3E533BFF5C5B658B65637864286B43BA688;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,Amazon.Runtime.ParameterValue>
struct ValueCollection_t3E83033D4FE02181A2795D2023478F89FAC2DBB1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>
struct ValueCollection_tE7B2C3CF4DBD5BBDE03D921BF24610624505C7A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>
struct ValueCollection_t443F15A9B4AEB531B960A226D5BD9FBFA0667AAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>
struct ValueCollection_tBC91CC2EAE9F4E971E4BBA5BAE24FE51DA21CF6A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t85701C476E14C33298DBCC71B6EDB93924F2AD33;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>[]
struct EntryU5BU5D_tE769DBCB00CF8B484C93DA2D11CD49D3856004F6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>[]
struct EntryU5BU5D_tC2A9B1417E7D6150D30FA27F668292F2C6F0E867;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>[]
struct EntryU5BU5D_tB53B3B2CAB577082A97B4A40E030FC0ABEC4B7B1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Amazon.Runtime.Internal.Auth.AWS4Signer
struct AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1;
// Amazon.Runtime.Internal.Auth.AWS4SigningResult
struct AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6;
// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper
struct AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844;
// Amazon.Runtime.Internal.Auth.AWS4aSigningResult
struct AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA;
// Amazon.Runtime.AWSCommonRuntimeException
struct AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B;
// Amazon.Runtime.Internal.Auth.AWSSigningResultBase
struct AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3;
// Amazon.Runtime.Internal.Auth.AbstractAWSSigner
struct AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898;
// Amazon.Runtime.AmazonClientException
struct AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// Amazon.RuntimeDependencies.CheckSumProviderContext
struct CheckSumProviderContext_t2F25726138365A120A5EEDFAD5882C47D3D4D09F;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Amazon.RuntimeDependencies.CreateInstanceContext
struct CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Amazon.Runtime.Internal.Compression.GZipCompression
struct GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3;
// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0;
// Amazon.Internal.GetEndpointForServiceOptions
struct GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210;
// Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry
struct GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17;
// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970;
// Amazon.Runtime.Internal.Transform.HttpResponseMessageBody
struct HttpResponseMessageBody_t318C1D51557B79F15DD0C3DE448BBDE6C6C62858;
// Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider
struct IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D;
// Amazon.Runtime.IClientConfig
struct IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA;
// Amazon.Runtime.Internal.Compression.ICompressionAlgorithm
struct ICompressionAlgorithm_tF4AD274C794BFCC03E9413F6604BC03E31441F9F;
// Amazon.Util.ICryptoUtil
struct ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Amazon.Runtime.Internal.Settings.IPersistenceManager
struct IPersistenceManager_t2A63BF52C218873CFF193FE67C398C550CE5B9E8;
// Amazon.Internal.IRegionEndpointProvider
struct IRegionEndpointProvider_t05F3F16F716D065A2E6E96A0C3EE92E504C333D1;
// Amazon.Runtime.Internal.IRequest
struct IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95;
// Amazon.Runtime.ImmutableCredentials
struct ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D;
// Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager
struct InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908;
// ThirdParty.Json.LitJson.JsonData
struct JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B;
// Amazon.Util.Internal.JsonSerializerContext
struct JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451;
// Amazon.Util.Internal.JsonSerializerOptions
struct JsonSerializerOptions_tDB5A44F6692C63769778AFFBC38381969351FC4A;
// ThirdParty.Json.LitJson.JsonWriter
struct JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9;
// Amazon.Runtime.Internal.Util.Logger
struct Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Amazon.RuntimeDependencies.MissingRuntimeDependencyException
struct MissingRuntimeDependencyException_t3539CD8818800CFDA3DA250922BC5390EC631463;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Amazon.Runtime.Internal.Auth.NullSigner
struct NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// Amazon.Runtime.Internal.ParameterCollection
struct ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002;
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition
struct Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32;
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape
struct PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906;
// Amazon.Runtime.Internal.Settings.PersistenceManager
struct PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4;
// Amazon.Runtime.Endpoints.PropertyBag
struct PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19;
// System.Threading.ReaderWriterCount
struct ReaderWriterCount_tD7361BF31DEB70DC7319519D215F400357543333;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
// Amazon.RegionEndpoint
struct RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1;
// Amazon.Runtime.Internal.Util.RequestMetrics
struct RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0;
// Amazon.RuntimeDependencies.SSOClientContext
struct SSOClientContext_t8E1A5FCAFFA114E8F2F23B6CBD285C304052577B;
// Amazon.RuntimeDependencies.SSOOIDCClientContext
struct SSOOIDCClientContext_tB2249791F291AE57335A4CFE284D8EE4F5737A86;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Amazon.RuntimeDependencies.SecurityTokenServiceClientContext
struct SecurityTokenServiceClientContext_t125EE0E01A059A7348EC4E8BBD2D8A3AD13983F9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Amazon.Runtime.Internal.Settings.SettingsCollection
struct SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383;
// Amazon.Runtime.Internal.Settings.SettingsWatcher
struct SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504;
// Amazon.RuntimeDependencies.SigV4aCrtSignerContext
struct SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ThirdParty.Json.LitJson.WriterContext
struct WriterContext_t1842E4BA8D8C8654A1027A92DEA43159D8076301;
// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c
struct U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854;
// Amazon.Util.CryptoUtilFactory/CryptoUtil
struct CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188;
// Amazon.RegionEndpoint/Endpoint
struct Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3;
// Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11
struct U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F;
// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings
struct ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
struct CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334;

IL2CPP_EXTERN_C RuntimeClass* AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChunkedUploadWrapperStream_tBBA0F8ABE5C48A8B46C8F259EC7A8E9A04B6BA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressionEncodingAlgorithm_t47DCABEF31E4490A77CD3B37B987BC4F6B90CF1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorrectClockSkew_t417A5F0CF8A11F92FD302BA5F80F17ACE7BE3C5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_t84520C50F8398E529BCCABC46209839897BD8109_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalSDKUtils_t98D07FF982E1947106119E126A225757C8621FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tC2C7096CC820784832B8D7FBBD479F23443152A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingRuntimeDependencyException_t3539CD8818800CFDA3DA250922BC5390EC631463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01BE3C5F636D161D8450BADAB6A452F16E161F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral01EF5807833DD0FAAF85EE2CED5F1AA1DDB08692;
IL2CPP_EXTERN_C String_t* _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A;
IL2CPP_EXTERN_C String_t* _stringLiteral0668BAF572FBDE1C15B91C21DF3940B3E09D4AE9;
IL2CPP_EXTERN_C String_t* _stringLiteral08BFAB0C7A3D047B53E710D86A09A4946049B3FA;
IL2CPP_EXTERN_C String_t* _stringLiteral09061AAF6F08B76E77FC5020FD9C87C2933B7D32;
IL2CPP_EXTERN_C String_t* _stringLiteral09C4175DC4068FC0E4DA285C5C20E84195829AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9C7EC66796179F504EE3E8DA0FCDDE429FCBEA;
IL2CPP_EXTERN_C String_t* _stringLiteral0F779762A3542E63C184E2576918C37D0124DD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB59AF1F9DAA66BC5EFE4235C1A32F69F233920;
IL2CPP_EXTERN_C String_t* _stringLiteral105786E0421D893D45321939CC4646611EA7471D;
IL2CPP_EXTERN_C String_t* _stringLiteral1377760A805A701D14524A755E063BA46DE79007;
IL2CPP_EXTERN_C String_t* _stringLiteral14FAA7416684A4D55883815F5734E2EBD1ECC422;
IL2CPP_EXTERN_C String_t* _stringLiteral150614C398CB0B6729E02B8958AAAECF74557375;
IL2CPP_EXTERN_C String_t* _stringLiteral1898CAA0C86529CFB80F9AD61A032DCC69BD00A0;
IL2CPP_EXTERN_C String_t* _stringLiteral1ECD5EA852C261C23068F3A7FE6685FE38D6C8FB;
IL2CPP_EXTERN_C String_t* _stringLiteral238F7412758781006ABE344D6EE66213428E4A8E;
IL2CPP_EXTERN_C String_t* _stringLiteral239B19BA5A73C9BD3A9D95A6DC527B1784E50B28;
IL2CPP_EXTERN_C String_t* _stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129;
IL2CPP_EXTERN_C String_t* _stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836;
IL2CPP_EXTERN_C String_t* _stringLiteral292024B472EA7FC15E4F169AE8C4C7A6DEE900C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3187738C01ADBF0EA34B9FA78C0E57BB5C5574A6;
IL2CPP_EXTERN_C String_t* _stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC;
IL2CPP_EXTERN_C String_t* _stringLiteral3353E5A96E2E650A69A4720B16999C6F26194384;
IL2CPP_EXTERN_C String_t* _stringLiteral335867AEB3830A0F794093F4182DA96C3E34F754;
IL2CPP_EXTERN_C String_t* _stringLiteral34662E2B8C0F6171C3FB0E387D95A6BF1C51DF6C;
IL2CPP_EXTERN_C String_t* _stringLiteral349C30776190825203D5D07031D5CE4046D257B9;
IL2CPP_EXTERN_C String_t* _stringLiteral37982402124BB488E04D03607DB86C153FF935B7;
IL2CPP_EXTERN_C String_t* _stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8;
IL2CPP_EXTERN_C String_t* _stringLiteral39F619F3B54DD262837C9C51C320CB1F0C6AB315;
IL2CPP_EXTERN_C String_t* _stringLiteral3BD5BCC58F7BACDE8F53CD96E4B485F98C5317A9;
IL2CPP_EXTERN_C String_t* _stringLiteral3BDC2A3BF3E3C505BA95E684745BFD1081984CEE;
IL2CPP_EXTERN_C String_t* _stringLiteral3D454DEFF8F002C734F315888F0BF5B65C79804B;
IL2CPP_EXTERN_C String_t* _stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA394190F5A302A19EBCEF5387362C01BFFADA5;
IL2CPP_EXTERN_C String_t* _stringLiteral3EAC0E0D2AFEB00A8829BC2ACD911A36B1CB63CC;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144;
IL2CPP_EXTERN_C String_t* _stringLiteral40F956CFB2FBE9ECDD1C36CC8A144D0C3DFB5E53;
IL2CPP_EXTERN_C String_t* _stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C;
IL2CPP_EXTERN_C String_t* _stringLiteral43FFC218A27250CEFDC3421637EEF026530E2D39;
IL2CPP_EXTERN_C String_t* _stringLiteral44621EB2592613282FDA2B9A8D681C8792AF62F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4596D967BF83C23BBAA84EB41BC0EB8DD254F26C;
IL2CPP_EXTERN_C String_t* _stringLiteral4763B865A78E65F5D0D5CC6272B2EA709418F3CD;
IL2CPP_EXTERN_C String_t* _stringLiteral479A1DD38F61C9B62C0855D17C13BF659287C0C9;
IL2CPP_EXTERN_C String_t* _stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219;
IL2CPP_EXTERN_C String_t* _stringLiteral4957859D6BB01C0300EED32F705F5641C8AB2406;
IL2CPP_EXTERN_C String_t* _stringLiteral4B672BCE6C57CE353143EA7F2219D42AE4FB5504;
IL2CPP_EXTERN_C String_t* _stringLiteral50D9D63ABA4F5B0F4E4A6E78C28FFF44E1C93879;
IL2CPP_EXTERN_C String_t* _stringLiteral52D1972D2E468EFAE967E9E13EA3B44BF8C6AD72;
IL2CPP_EXTERN_C String_t* _stringLiteral534F0070064CF7E71A3C1755BC6024BF5DD8E5BD;
IL2CPP_EXTERN_C String_t* _stringLiteral54410F787AFA08038634B055933A63784C4AD055;
IL2CPP_EXTERN_C String_t* _stringLiteral55F42690C3007F40BA0CED691725B5C6586ED068;
IL2CPP_EXTERN_C String_t* _stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51;
IL2CPP_EXTERN_C String_t* _stringLiteral56CC909BD4F7C7EB4E874D789709CCE1412CFD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral570607594C53495236BE155BD9A3BA6AEC6E77BC;
IL2CPP_EXTERN_C String_t* _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02;
IL2CPP_EXTERN_C String_t* _stringLiteral5E7B25A1CBB02F5095343D84649FA3958229A92F;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE0B6856D8C417B721AA78EBAB7DEC28DAE5C81;
IL2CPP_EXTERN_C String_t* _stringLiteral6087570F9096503FEB39C184D67AB275B22C941C;
IL2CPP_EXTERN_C String_t* _stringLiteral60B407F8DA438A1C3115D511132BC209615C1A3A;
IL2CPP_EXTERN_C String_t* _stringLiteral60D67A7C0F90BA7F8251F9231A0B7B628013F628;
IL2CPP_EXTERN_C String_t* _stringLiteral630B0975C44597114E7F50A533BD3331291FD31E;
IL2CPP_EXTERN_C String_t* _stringLiteral64A6194253C51A33DAD6CD96631E03B1CBD5C334;
IL2CPP_EXTERN_C String_t* _stringLiteral65E8F32CC0FB432888F81177732BA223324177B0;
IL2CPP_EXTERN_C String_t* _stringLiteral6D777DF2FC62168442A2177DD188FF908422D68A;
IL2CPP_EXTERN_C String_t* _stringLiteral6E2143C873D70B6500C8AB8583DFB83B5AC59FD8;
IL2CPP_EXTERN_C String_t* _stringLiteral712D2A1550F63E88E95C516CDB6DFA50E1DD6C49;
IL2CPP_EXTERN_C String_t* _stringLiteral72127D71612084513C374CD310A7756829D8646A;
IL2CPP_EXTERN_C String_t* _stringLiteral7231763F8D403D284DCC9C946364CF5C3B5489E7;
IL2CPP_EXTERN_C String_t* _stringLiteral7317DA622F13931211632F58498B0C9C3A1144DF;
IL2CPP_EXTERN_C String_t* _stringLiteral76D8DC99317457E9712CF785632ECA992A204AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral77F6327F61144826F33253823794A85F6A94A4C9;
IL2CPP_EXTERN_C String_t* _stringLiteral793B527FB51C74988996B0FA68E85BEA3F59EEF6;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA10D17C0971E1982CE3EAD37AAB7FE0AD70CE0;
IL2CPP_EXTERN_C String_t* _stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5;
IL2CPP_EXTERN_C String_t* _stringLiteral8466AD39F3C02094F3DBA482C6C19704D2BCED93;
IL2CPP_EXTERN_C String_t* _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2;
IL2CPP_EXTERN_C String_t* _stringLiteral872277871DD2258AEC0B300118083D54A1DD3B26;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral89FC1CC3BE1F5704CEB65B133FA7835F808E4F74;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8DADFA34E77C97782064E6AD99BF9D625A95AD4D;
IL2CPP_EXTERN_C String_t* _stringLiteral8FF7FD5A14D3588C0E5C1B1C65A0D5A3DBCD51CE;
IL2CPP_EXTERN_C String_t* _stringLiteral9335DCC2B6E3FC885FA4B3C4C8E765AE66A61C55;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9844E838E5A48884CD95F2B3234665DE378AFDD9;
IL2CPP_EXTERN_C String_t* _stringLiteral99A30C5B37BA8C885BC1AB4821AD5D21A1BD7B05;
IL2CPP_EXTERN_C String_t* _stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteral9D68B0B1AE86BCEFD810599A77E2B6E22084EEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9F5E5F570C2151A8396D37556239477353700D;
IL2CPP_EXTERN_C String_t* _stringLiteralA2802C98EA78FAB815D12E486143D1B37DA6421E;
IL2CPP_EXTERN_C String_t* _stringLiteralA2D5214C73E59AD7D2768D3B1ECD4B4CAEBBAEFC;
IL2CPP_EXTERN_C String_t* _stringLiteralA3994FC70D3F6DF4468C430CAF31A859A1E63619;
IL2CPP_EXTERN_C String_t* _stringLiteralA769B85F1DF8458956B70AB90ADB9455282079FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA85134E500DAC77E33AC85D5BC8B3A018D007B21;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1BFFCD3F33BA58D6C579BCC048DC6E9F5FFB80;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA;
IL2CPP_EXTERN_C String_t* _stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D;
IL2CPP_EXTERN_C String_t* _stringLiteralB055F3E99E7D476AA3A4DAF612A255EB4E5C45ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA;
IL2CPP_EXTERN_C String_t* _stringLiteralB3FC35D59D4F82C749EEAE0473946D741BE163FB;
IL2CPP_EXTERN_C String_t* _stringLiteralB693EEC953CF674AB028CD873016998772D35BB9;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E5CFA2A4FC39146B1CEFE8F221DEC5510B1467;
IL2CPP_EXTERN_C String_t* _stringLiteralB825D3172945E8191FD84884D888955CED402C44;
IL2CPP_EXTERN_C String_t* _stringLiteralBF16EEDE2669E9B7011FD77AF5DE5E850687C54D;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC36F9CDDF13DDB28684738079C2A3061043C55AD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FD635D5D74D20D4BC26FA3FC2719C9E911CDB5;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C7C696403AFAC9172E6DDB083EB2742017DBC4;
IL2CPP_EXTERN_C String_t* _stringLiteralC79DDFD4CFEBEEB514CB1DD51AF82AAEC45D7C19;
IL2CPP_EXTERN_C String_t* _stringLiteralCADAB1058F9E2B6319DB4170558B1BD03A84845F;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF65ABFBE811FC9014FCF8E87E83AF758DFE992;
IL2CPP_EXTERN_C String_t* _stringLiteralCCBD049AB01A453E2AA323B566466E7EFD5E5D83;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD63AE8496DF16CA83A2973ACB14210B26FB7E1;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66;
IL2CPP_EXTERN_C String_t* _stringLiteralD181AF2E5811D814F82F53A69B252E82F41D56D0;
IL2CPP_EXTERN_C String_t* _stringLiteralD2B6B327094498CA07F1AD00518D11DC7B4011F9;
IL2CPP_EXTERN_C String_t* _stringLiteralD450882D2FD0C357A1421C9DAB7D1477475BC718;
IL2CPP_EXTERN_C String_t* _stringLiteralD536A1CDB30A364EB3C5FBAA4D37F4EA09BD0E86;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F99667CFC6FB677E60C0535D5264678FD51040;
IL2CPP_EXTERN_C String_t* _stringLiteralD689561CF37BA29AEB8668EBE94095E3F960EF9A;
IL2CPP_EXTERN_C String_t* _stringLiteralD69F9EC21087D22656DA059773494239B182B120;
IL2CPP_EXTERN_C String_t* _stringLiteralD6C203D57A30CB5FC078C57629BF7B4562276B5C;
IL2CPP_EXTERN_C String_t* _stringLiteralE07E7303A625433AD6B384AD1F50C49B14516AE1;
IL2CPP_EXTERN_C String_t* _stringLiteralE0FB5171A0CFB7CEC4D3EE2F5114D541152ED56D;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC9CE0E43D34F6D8F3ADAB3EDC9EEA9D1B4E4;
IL2CPP_EXTERN_C String_t* _stringLiteralE58C2B7ADB9CAC27846220F4D9EEB0239F91E100;
IL2CPP_EXTERN_C String_t* _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F;
IL2CPP_EXTERN_C String_t* _stringLiteralE73A7BD9028ABC2837D38C483732640BA01BA85F;
IL2CPP_EXTERN_C String_t* _stringLiteralEAEEF6D3F23974B5E3BD5E818811345B8441BC26;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7CA0531882B1DDB9C72F1A028D3EF51F90A429;
IL2CPP_EXTERN_C String_t* _stringLiteralEC969F3224F7F185E2D1AFCE455F9040CA18CADC;
IL2CPP_EXTERN_C String_t* _stringLiteralED391E80759A7124962CF84BA1A28BE268AB7A48;
IL2CPP_EXTERN_C String_t* _stringLiteralF038D85198D2F234D0F3A85A6896B043F1946E52;
IL2CPP_EXTERN_C String_t* _stringLiteralF277F055431226806CAEBFFF8FD03D0158B95071;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF6AE5EC7C6AB1BF2649960B2C55FD0675412A705;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D537A4FD29DDFA75B9EAD4265818E0B711F259;
IL2CPP_EXTERN_C String_t* _stringLiteralF88E385C32CF5028732AAB152A7CBFD1A6659685;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0367AC6EDAD831BFC1DFD4227FE612583486E8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDF887978D4ED6170BCF4E697D131821E8B6F1FD;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C String_t* _stringLiteralFEF40E2F9F0EA0B2DA43E4EE34B50EDC91FE806B;
IL2CPP_EXTERN_C const RuntimeMethod* AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWS4aSignerCRTWrapper_Sign_mA9E2B8061AD6CF139B8F479686A8641DD08185DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseRuntimeDependencyRegistry_GetInstance_TisIAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_m93C686A8F83D2840DE830F7299B925C97F2686CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionFactory_GetCompressionAlgorithm_mA35202D3A7849629DC99ACE9B37069A9072F3D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB6C1079BB59A4F556ED18B3F6C61CD2689DBDD72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAD6B412B39BBBB1E51EA303D4D292D43E9E42742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7214792241966DB46DBE70D29F0E0A10607985CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m15739907ABA4CE4042AD8BBB9E0F4B2A855FC336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5CF696430D0AB0098F473DEE0C9B43C335FED36D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD8862FC09A09F0A1BA5AC3795A6B6F7C36945464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0EF75522C77E671C9BE6034EA94D70AB4706DB39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB410DF53792B87B5EF853A2EF1051EC770B933D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mCD17F024660A8F6817894B4F912756C35BA77590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m868E0026AB736F38ABB29BC0FE9F3623A816FD43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA1C1C9955BF4E1347741C70C2425AD455116C148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5CA09CEAD355871AE5A53C0D0B091F81B8318D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m914DBB022746497AB3D84A348F0E740DF5894D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0EF02344BB69E1DD4C7F0332AC77BADA3D49BB28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m77705BF94807E0D60DA750FE55C25B6D81DC3B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m02767CEE01FB031C474BB851787FF3FFCA3CEA57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9EA030DBF626CC7EBCCBB80612ED02B7E4C67370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fn_GetAttr_m07FEC12C0AEE89B7B3E9ACC98D3DC941E77E01C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fn_Interpolate_m0111267FF7F38F812C2836DDA4E63AF9F8F40292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpResponseMessageBody_OpenResponseAsync_m906360FC408ADF653392C319E78830144C38D641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpResponseMessageBody_OpenResponse_mC19551BE960C320E58EECCDDF0F435D3FF0CAF43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializerHelper_Deserialize_TisDictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_m0CE19CB2ADAA270ED98B5A6FE7A39302327DD284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_CopyTo_mBD574373AE2938E023C99276336940AE6D07BE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mFB3570FF8177199C646FC0DDFB24E41670D2EDAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_mB566DE0820BEE8FD6ADD3E72A67DA4BBCFB4B533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m20E2936558C3148CCA5B7133CAF427BF064E6A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD20FA646854CDF3EA44AF202C0E9634CEC7DB668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m2BB68DED361146A30A1DA4405D2D072EB7F2E780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__11_System_Collections_IEnumerator_Reset_m055EACDBCB487F6051E3C3E5EA6DCA92690AF747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserCrypto_Decrypt_m9C88CCE708837E24B18CEAC6A27C158520695307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserCrypto_Encrypt_m5E35CF81DA34E31BDFC6091EFADDEF298A58A5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_0_0_0_var;
struct CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334;;
struct CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke;
struct CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke;;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>
struct Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE769DBCB00CF8B484C93DA2D11CD49D3856004F6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE7B2C3CF4DBD5BBDE03D921BF24610624505C7A2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>
struct Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC2A9B1417E7D6150D30FA27F668292F2C6F0E867* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7B35E17D9174DC632AC8386EF627B4E3FE3C01C3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t443F15A9B4AEB531B960A226D5BD9FBFA0667AAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>
struct Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB53B3B2CAB577082A97B4A40E030FC0ABEC4B7B1* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tBB259555FA5E2630B6CC6B72DAC54A9B502E16AC* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBC91CC2EAE9F4E971E4BBA5BAE24FE51DA21CF6A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>
struct KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.SortedDictionary`2<System.String,Amazon.Runtime.ParameterValue>
struct SortedDictionary_2_tCEABB58DDEF1F260999E350A84DB6BCB675DF2AF  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t597373788155FCAF5651D985D2E6C34261FCBAA6* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t3E83033D4FE02181A2795D2023478F89FAC2DBB1* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t9280D44DF69C63A2DC42C3F8E7DB3114AF0C7D70* ____set_2;
};

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t53AF86BBB805E94F10CAA9B43984EA7E6D7802E2* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t85701C476E14C33298DBCC71B6EDB93924F2AD33* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tDA45F3E533BFF5C5B658B65637864286B43BA688* ____set_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5EAEA638D87F23FF9A3441A43F297B2CB1FA54C5  : public RuntimeObject
{
};

// Amazon.Runtime.Internal.Auth.AbstractAWSSigner
struct AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898  : public RuntimeObject
{
	// System.Object Amazon.Runtime.Internal.Auth.AbstractAWSSigner::_lock
	RuntimeObject* ____lock_0;
	// System.Boolean Amazon.Runtime.Internal.Auth.AbstractAWSSigner::<RequiresCredentials>k__BackingField
	bool ___U3CRequiresCredentialsU3Ek__BackingField_1;
};

// Amazon.RuntimeDependencies.BaseRuntimeDependencyRegistry
struct BaseRuntimeDependencyRegistry_t8A2C29A94100C14288E42341796A0F3942511B92  : public RuntimeObject
{
	// System.Threading.ReaderWriterLockSlim Amazon.RuntimeDependencies.BaseRuntimeDependencyRegistry::_rwlock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ____rwlock_0;
	// System.Collections.Generic.IDictionary`2<System.String,Amazon.RuntimeDependencies.RuntimeDependencyFactory> Amazon.RuntimeDependencies.BaseRuntimeDependencyRegistry::_runtimeDependency
	RuntimeObject* ____runtimeDependency_1;
	// System.Boolean Amazon.RuntimeDependencies.BaseRuntimeDependencyRegistry::_disposedValue
	bool ____disposedValue_2;
};

// Amazon.Runtime.Internal.Compression.CompressionFactory
struct CompressionFactory_t6EF2F8FAD99F843BE862E0D4B7B57ADF5CC78EAC  : public RuntimeObject
{
};

// Amazon.Util.CryptoUtilFactory
struct CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn
struct Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F  : public RuntimeObject
{
};

// Amazon.Runtime.Internal.Compression.GZipCompression
struct GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3  : public RuntimeObject
{
};

// Amazon.Internal.GetEndpointForServiceOptions
struct GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210  : public RuntimeObject
{
	// System.Boolean Amazon.Internal.GetEndpointForServiceOptions::<DualStack>k__BackingField
	bool ___U3CDualStackU3Ek__BackingField_0;
	// System.Boolean Amazon.Internal.GetEndpointForServiceOptions::<FIPS>k__BackingField
	bool ___U3CFIPSU3Ek__BackingField_1;
};

// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C  : public RuntimeObject
{
	// System.Net.Http.HttpContent/FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188* ___buffer_0;
	// System.IO.Stream System.Net.Http.HttpContent::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_1;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_2;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* ___headers_3;
};

// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800  : public RuntimeObject
{
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;
};

// Amazon.Runtime.Internal.Transform.HttpResponseMessageBody
struct HttpResponseMessageBody_t318C1D51557B79F15DD0C3DE448BBDE6C6C62858  : public RuntimeObject
{
	// System.Net.Http.HttpClient Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::_httpClient
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient_0;
	// System.Net.Http.HttpResponseMessage Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::_response
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ____response_1;
	// System.Boolean Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::_disposeClient
	bool ____disposeClient_2;
	// System.Boolean Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::_disposed
	bool ____disposed_3;
};

// Amazon.Runtime.ImmutableCredentials
struct ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D  : public RuntimeObject
{
	// System.String Amazon.Runtime.ImmutableCredentials::<AccessKey>k__BackingField
	String_t* ___U3CAccessKeyU3Ek__BackingField_0;
	// System.String Amazon.Runtime.ImmutableCredentials::<SecretKey>k__BackingField
	String_t* ___U3CSecretKeyU3Ek__BackingField_1;
	// System.String Amazon.Runtime.ImmutableCredentials::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_2;
};

// Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager
struct InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection> Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager::_settingsDictionary
	Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* ____settingsDictionary_0;
};

// Amazon.Util.Internal.JsonSerializerContext
struct JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451  : public RuntimeObject
{
	// Amazon.Util.Internal.JsonSerializerOptions Amazon.Util.Internal.JsonSerializerContext::<Options>k__BackingField
	JsonSerializerOptions_tDB5A44F6692C63769778AFFBC38381969351FC4A* ___U3COptionsU3Ek__BackingField_0;
};

// ThirdParty.Json.LitJson.JsonWriter
struct JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9  : public RuntimeObject
{
	// ThirdParty.Json.LitJson.WriterContext ThirdParty.Json.LitJson.JsonWriter::context
	WriterContext_t1842E4BA8D8C8654A1027A92DEA43159D8076301* ___context_1;
	// System.Collections.Generic.Stack`1<ThirdParty.Json.LitJson.WriterContext> ThirdParty.Json.LitJson.JsonWriter::ctx_stack
	Stack_1_t6C634036633470B95D11513804EEFED836921CAA* ___ctx_stack_2;
	// System.Boolean ThirdParty.Json.LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] ThirdParty.Json.LitJson.JsonWriter::hex_seq
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex_seq_4;
	// System.Int32 ThirdParty.Json.LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 ThirdParty.Json.LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder ThirdParty.Json.LitJson.JsonWriter::inst_string_builder
	StringBuilder_t* ___inst_string_builder_7;
	// System.Boolean ThirdParty.Json.LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean ThirdParty.Json.LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter ThirdParty.Json.LitJson.JsonWriter::writer
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer_10;
};

// Amazon.Runtime.Internal.Util.Logger
struct Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Amazon.Runtime.Internal.Util.InternalLogger> Amazon.Runtime.Internal.Util.Logger::loggers
	List_1_t6DDA59DB625ECDBFBFFC54CE41256C7DFACED416* ___loggers_1;
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape
struct PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906  : public RuntimeObject
{
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<dnsSuffix>k__BackingField
	String_t* ___U3CdnsSuffixU3Ek__BackingField_1;
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<dualStackDnsSuffix>k__BackingField
	String_t* ___U3CdualStackDnsSuffixU3Ek__BackingField_2;
	// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<supportsFIPS>k__BackingField
	bool ___U3CsupportsFIPSU3Ek__BackingField_3;
	// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<supportsDualStack>k__BackingField
	bool ___U3CsupportsDualStackU3Ek__BackingField_4;
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<implicitGlobalRegion>k__BackingField
	String_t* ___U3CimplicitGlobalRegionU3Ek__BackingField_5;
};

// Amazon.Runtime.Internal.Settings.PersistenceManager
struct PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher> Amazon.Runtime.Internal.Settings.PersistenceManager::_watchers
	Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697* ____watchers_2;
};

// Amazon.Runtime.Endpoints.PropertyBag
struct PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Amazon.Runtime.Endpoints.PropertyBag::properties
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties_0;
};

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906  : public RuntimeObject
{
	// System.Boolean System.Threading.ReaderWriterLockSlim::fIsReentrant
	bool ___fIsReentrant_0;
	// System.Int32 System.Threading.ReaderWriterLockSlim::myLock
	int32_t ___myLock_1;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteWaiters
	uint32_t ___numWriteWaiters_2;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numReadWaiters
	uint32_t ___numReadWaiters_3;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteUpgradeWaiters
	uint32_t ___numWriteUpgradeWaiters_4;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numUpgradeWaiters
	uint32_t ___numUpgradeWaiters_5;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fNoWaiters
	bool ___fNoWaiters_6;
	// System.Int32 System.Threading.ReaderWriterLockSlim::upgradeLockOwnerId
	int32_t ___upgradeLockOwnerId_7;
	// System.Int32 System.Threading.ReaderWriterLockSlim::writeLockOwnerId
	int32_t ___writeLockOwnerId_8;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::writeEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___writeEvent_9;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::readEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___readEvent_10;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::upgradeEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___upgradeEvent_11;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::waitUpgradeEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___waitUpgradeEvent_12;
	// System.Int64 System.Threading.ReaderWriterLockSlim::lockID
	int64_t ___lockID_14;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fUpgradeThreadHoldingRead
	bool ___fUpgradeThreadHoldingRead_16;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::owners
	uint32_t ___owners_17;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fDisposed
	bool ___fDisposed_18;
};

// Amazon.RegionEndpoint
struct RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1  : public RuntimeObject
{
	// System.String Amazon.RegionEndpoint::<SystemName>k__BackingField
	String_t* ___U3CSystemNameU3Ek__BackingField_4;
	// System.String Amazon.RegionEndpoint::<OriginalSystemName>k__BackingField
	String_t* ___U3COriginalSystemNameU3Ek__BackingField_5;
	// System.String Amazon.RegionEndpoint::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_6;
};

// Amazon.Runtime.Internal.Util.RequestMetrics
struct RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0  : public RuntimeObject
{
	// System.Object Amazon.Runtime.Internal.Util.RequestMetrics::metricsLock
	RuntimeObject* ___metricsLock_0;
	// System.Diagnostics.Stopwatch Amazon.Runtime.Internal.Util.RequestMetrics::stopWatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___stopWatch_1;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,Amazon.Runtime.Internal.Util.Timing> Amazon.Runtime.Internal.Util.RequestMetrics::inFlightTimings
	Dictionary_2_t7CCB1499C1EA9F0F64AEE02C50CA92FA5A373297* ___inFlightTimings_2;
	// System.Collections.Generic.List`1<Amazon.Runtime.Internal.Util.MetricError> Amazon.Runtime.Internal.Util.RequestMetrics::errors
	List_1_t03616FD22E5C15FE5C17BB12C0539BF694587FD3* ___errors_3;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<System.Object>> Amazon.Runtime.Internal.Util.RequestMetrics::<Properties>k__BackingField
	Dictionary_2_t5B9E0E286EC298C9E8AE8469E4E87343A2AD2C4A* ___U3CPropertiesU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<Amazon.Runtime.IMetricsTiming>> Amazon.Runtime.Internal.Util.RequestMetrics::<Timings>k__BackingField
	Dictionary_2_tEE1955C2F363A8974309F7AA1B3F41C8CC360FDE* ___U3CTimingsU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Int64> Amazon.Runtime.Internal.Util.RequestMetrics::<Counters>k__BackingField
	Dictionary_2_t4958449F5D5820516203D35F6D499192859B168B* ___U3CCountersU3Ek__BackingField_6;
	// System.Boolean Amazon.Runtime.Internal.Util.RequestMetrics::<IsEnabled>k__BackingField
	bool ___U3CIsEnabledU3Ek__BackingField_7;
};

// Amazon.Runtime.Internal.Settings.SettingsCollection
struct SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Amazon.Runtime.Internal.Settings.SettingsCollection::_values
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____values_0;
	// System.Boolean Amazon.Runtime.Internal.Settings.SettingsCollection::<InitializedEmpty>k__BackingField
	bool ___U3CInitializedEmptyU3Ek__BackingField_1;
};

// Amazon.Runtime.Internal.Settings.SettingsWatcher
struct SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504  : public RuntimeObject
{
	// System.Boolean Amazon.Runtime.Internal.Settings.SettingsWatcher::<Enable>k__BackingField
	bool ___U3CEnableU3Ek__BackingField_0;
};

// Amazon.RuntimeDependencies.SigV4aCrtSignerContext
struct SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1  : public RuntimeObject
{
	// System.Boolean Amazon.RuntimeDependencies.SigV4aCrtSignerContext::<SignPayload>k__BackingField
	bool ___U3CSignPayloadU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// Amazon.Runtime.Internal.Settings.UserCrypto
struct UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440  : public RuntimeObject
{
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

// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c
struct U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854  : public RuntimeObject
{
};

// Amazon.Util.CryptoUtilFactory/CryptoUtil
struct CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222  : public RuntimeObject
{
};

// Amazon.RegionEndpoint/Endpoint
struct Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3  : public RuntimeObject
{
	// System.String Amazon.RegionEndpoint/Endpoint::<Hostname>k__BackingField
	String_t* ___U3CHostnameU3Ek__BackingField_0;
	// System.String Amazon.RegionEndpoint/Endpoint::<DnsSuffix>k__BackingField
	String_t* ___U3CDnsSuffixU3Ek__BackingField_1;
	// System.String Amazon.RegionEndpoint/Endpoint::<AuthRegion>k__BackingField
	String_t* ___U3CAuthRegionU3Ek__BackingField_2;
	// System.String Amazon.RegionEndpoint/Endpoint::<SignatureVersionOverride>k__BackingField
	String_t* ___U3CSignatureVersionOverrideU3Ek__BackingField_3;
	// System.Boolean Amazon.RegionEndpoint/Endpoint::<Deprecated>k__BackingField
	bool ___U3CDeprecatedU3Ek__BackingField_4;
};

// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings
struct ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7  : public RuntimeObject
{
	// System.String Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::_uniqueKey
	String_t* ____uniqueKey_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::_values
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____values_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>
struct Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_result_38;
};

// Amazon.Runtime.Internal.Auth.AWS4Signer
struct AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1  : public AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898
{
	// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer::<SignPayload>k__BackingField
	bool ___U3CSignPayloadU3Ek__BackingField_4;
};

// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper
struct AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844  : public AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898
{
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry
struct GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653  : public BaseRuntimeDependencyRegistry_t8A2C29A94100C14288E42341796A0F3942511B92
{
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Amazon.Runtime.Internal.Auth.NullSigner
struct NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09  : public AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// Amazon.Runtime.Internal.ParameterCollection
struct ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002  : public SortedDictionary_2_tCEABB58DDEF1F260999E350A84DB6BCB675DF2AF
{
};

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition
struct Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32  : public PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_tB44F7DE1B3303001CB577B4DCC54C3DF9EEB0A6C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_tB44F7DE1B3303001CB577B4DCC54C3DF9EEB0A6C__padding[112];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t1D00FAC0014D48230C1A2D59C22F8B5AC1FB1868 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t1D00FAC0014D48230C1A2D59C22F8B5AC1FB1868__padding[16];
	};
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Amazon.Runtime.Internal.Auth.AWSSigningResultBase
struct AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3  : public RuntimeObject
{
	// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_awsAccessKeyId
	String_t* ____awsAccessKeyId_0;
	// System.DateTime Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_originalDateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____originalDateTime_1;
	// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_signedHeaders
	String_t* ____signedHeaders_2;
	// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_scope
	String_t* ____scope_3;
};

// Amazon.Runtime.Internal.Auth.ClientProtocol
struct ClientProtocol_t0D74E985CAF9E9DA13B1D5E906B0998A306B19C4 
{
	// System.Int32 Amazon.Runtime.Internal.Auth.ClientProtocol::value__
	int32_t ___value___2;
};

// Amazon.Runtime.CompressionEncodingAlgorithm
struct CompressionEncodingAlgorithm_t47DCABEF31E4490A77CD3B37B987BC4F6B90CF1B 
{
	// System.Int32 Amazon.Runtime.CompressionEncodingAlgorithm::value__
	int32_t ___value___2;
};

// System.IO.Compression.CompressionMode
struct CompressionMode_t840C8957CF84ACFBF5C43E48AEAEB9DB5E64F3C5 
{
	// System.Int32 System.IO.Compression.CompressionMode::value__
	int32_t ___value___2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

// Amazon.Runtime.CoreChecksumAlgorithm
struct CoreChecksumAlgorithm_tBCFE2B1D496B26C62A22A0407F2DE09817CC0760 
{
	// System.Int32 Amazon.Runtime.CoreChecksumAlgorithm::value__
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

// System.IO.FileMode
struct FileMode_t111B48D5347628AEFCBF9A0EC2833827A302ECBA 
{
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;
};

// System.IO.FileShare
struct FileShare_t0A0E9739F5AB44D6B8026C9D2A2F1CEEE442733A 
{
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___2;
};

// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* ____deflateStream_5;
};

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42  : public HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800
{
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_8;
};

// System.Net.HttpStatusCode
struct HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374 
{
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;
};

// ThirdParty.Json.LitJson.JsonType
struct JsonType_tD17FE247EEDCD5055E3598BD4A333043D359B8FD 
{
	// System.Int32 ThirdParty.Json.LitJson.JsonType::value__
	int32_t ___value___2;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// Amazon.Runtime.Metric
struct Metric_t44868AD9A76CC395BDCAA36EBD0252BA904A41B7 
{
	// System.Int32 Amazon.Runtime.Metric::value__
	int32_t ___value___2;
};

// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Amazon.Runtime.SignatureVersion
struct SignatureVersion_t8A643A44ED1F472BBE21AFE4BC73F91C6AAE06B1 
{
	// System.Int32 Amazon.Runtime.SignatureVersion::value__
	int32_t ___value___2;
};

// Amazon.Runtime.SigningAlgorithm
struct SigningAlgorithm_t4BC52E0AE8BFD753D013BEFCE55EDCA83897D975 
{
	// System.Int32 Amazon.Runtime.SigningAlgorithm::value__
	int32_t ___value___2;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// Amazon.RuntimeDependencies.CreateInstanceContext/ContextType
struct ContextType_tF8A63AD790ED0E20E437AB59898B913502FD6E6B 
{
	// System.Int32 Amazon.RuntimeDependencies.CreateInstanceContext/ContextType::value__
	int32_t ___value___2;
};

// Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11
struct U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F  : public RuntimeObject
{
	// System.Int32 Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::<>2__current
	ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* ___U3CU3E2__current_1;
	// Amazon.Runtime.Internal.Settings.SettingsCollection Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::<>4__this
	SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::<>7__wrap1
	Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B ___U3CU3E7__wrap1_3;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags
struct CryptProtectFlags_t00FEEE2BBFC663AAB0C48FA8C45920AB61BABA9E 
{
	// System.Int32 Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags::value__
	int32_t ___value___2;
};

// Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectPromptFlags
struct CryptProtectPromptFlags_tC255977DCA414CEC1B7B251387E87ECD75BB5E0E 
{
	// System.Int32 Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectPromptFlags::value__
	int32_t ___value___2;
};

// Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB
struct DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 
{
	// System.Int32 Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB::cbData
	int32_t ___cbData_0;
	// System.IntPtr Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB::pbData
	intptr_t ___pbData_1;
};

// Interop/Sys/FileStatusFlags
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	// System.Int32 Interop/Sys/FileStatusFlags::value__
	int32_t ___value___2;
};

// Amazon.Runtime.Internal.Auth.AWS4SigningResult
struct AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6  : public AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3
{
	// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4SigningResult::_signingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____signingKey_4;
	// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4SigningResult::_signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____signature_5;
};

// Amazon.Runtime.Internal.Auth.AWS4aSigningResult
struct AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA  : public AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3
{
	// System.String Amazon.Runtime.Internal.Auth.AWS4aSigningResult::_signature
	String_t* ____signature_4;
};

// Amazon.Runtime.AmazonClientException
struct AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4  : public Exception_t
{
};

// Amazon.RuntimeDependencies.CreateInstanceContext
struct CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F  : public RuntimeObject
{
	// Amazon.RuntimeDependencies.CreateInstanceContext/ContextType Amazon.RuntimeDependencies.CreateInstanceContext::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// Amazon.RuntimeDependencies.SecurityTokenServiceClientContext Amazon.RuntimeDependencies.CreateInstanceContext::<SecurityTokenServiceClientContextData>k__BackingField
	SecurityTokenServiceClientContext_t125EE0E01A059A7348EC4E8BBD2D8A3AD13983F9* ___U3CSecurityTokenServiceClientContextDataU3Ek__BackingField_1;
	// Amazon.RuntimeDependencies.SigV4aCrtSignerContext Amazon.RuntimeDependencies.CreateInstanceContext::<SigV4aCrtSignerContextData>k__BackingField
	SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1* ___U3CSigV4aCrtSignerContextDataU3Ek__BackingField_2;
	// Amazon.RuntimeDependencies.CheckSumProviderContext Amazon.RuntimeDependencies.CreateInstanceContext::<CheckSumProviderContextData>k__BackingField
	CheckSumProviderContext_t2F25726138365A120A5EEDFAD5882C47D3D4D09F* ___U3CCheckSumProviderContextDataU3Ek__BackingField_3;
	// Amazon.RuntimeDependencies.SSOClientContext Amazon.RuntimeDependencies.CreateInstanceContext::<SSOClientContextData>k__BackingField
	SSOClientContext_t8E1A5FCAFFA114E8F2F23B6CBD285C304052577B* ___U3CSSOClientContextDataU3Ek__BackingField_4;
	// Amazon.RuntimeDependencies.SSOOIDCClientContext Amazon.RuntimeDependencies.CreateInstanceContext::<SSOOIDCClientContextData>k__BackingField
	SSOOIDCClientContext_tB2249791F291AE57335A4CFE284D8EE4F5737A86* ___U3CSSOOIDCClientContextDataU3Ek__BackingField_5;
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

// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8* ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CRequestMessageU3Ek__BackingField_6;
};

// ThirdParty.Json.LitJson.JsonData
struct JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<ThirdParty.Json.LitJson.JsonData> ThirdParty.Json.LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean ThirdParty.Json.LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double ThirdParty.Json.LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.UInt64 ThirdParty.Json.LitJson.JsonData::inst_number
	uint64_t ___inst_number_3;
	// System.Collections.Generic.IDictionary`2<System.String,ThirdParty.Json.LitJson.JsonData> ThirdParty.Json.LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_4;
	// System.String ThirdParty.Json.LitJson.JsonData::inst_string
	String_t* ___inst_string_5;
	// System.String ThirdParty.Json.LitJson.JsonData::json
	String_t* ___json_6;
	// ThirdParty.Json.LitJson.JsonType ThirdParty.Json.LitJson.JsonData::type
	int32_t ___type_7;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,ThirdParty.Json.LitJson.JsonData>> ThirdParty.Json.LitJson.JsonData::object_list
	RuntimeObject* ___object_list_8;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

// Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
struct CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334 
{
	// System.Int32 Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT::cbSize
	int32_t ___cbSize_0;
	// Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectPromptFlags Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT::dwPromptFlags
	int32_t ___dwPromptFlags_1;
	// System.IntPtr Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT::hwndApp
	intptr_t ___hwndApp_2;
	// System.String Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT::szPrompt
	String_t* ___szPrompt_3;
};
// Native definition for P/Invoke marshalling of Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
struct CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke
{
	int32_t ___cbSize_0;
	int32_t ___dwPromptFlags_1;
	intptr_t ___hwndApp_2;
	Il2CppChar* ___szPrompt_3;
};
// Native definition for COM marshalling of Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
struct CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_com
{
	int32_t ___cbSize_0;
	int32_t ___dwPromptFlags_1;
	intptr_t ___hwndApp_2;
	Il2CppChar* ___szPrompt_3;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// Amazon.Runtime.AWSCommonRuntimeException
struct AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B  : public AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Amazon.RuntimeDependencies.MissingRuntimeDependencyException
struct MissingRuntimeDependencyException_t3539CD8818800CFDA3DA250922BC5390EC631463  : public AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4
{
	// System.String Amazon.RuntimeDependencies.MissingRuntimeDependencyException::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_18;
	// System.String Amazon.RuntimeDependencies.MissingRuntimeDependencyException::<ClassName>k__BackingField
	String_t* ___U3CClassNameU3Ek__BackingField_19;
	// System.String Amazon.RuntimeDependencies.MissingRuntimeDependencyException::<RegisterMethod>k__BackingField
	String_t* ___U3CRegisterMethodU3Ek__BackingField_20;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>

// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.HashSet`1<System.String>

// System.Collections.Generic.HashSet`1<System.String>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5EAEA638D87F23FF9A3441A43F297B2CB1FA54C5_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::356799970C4EB6868DD58B0BC235E79AF800B71A2DA92B1018D1C2BF86AAD560
	__StaticArrayInitTypeSizeU3D16_t1D00FAC0014D48230C1A2D59C22F8B5AC1FB1868 ___356799970C4EB6868DD58B0BC235E79AF800B71A2DA92B1018D1C2BF86AAD560_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_tB44F7DE1B3303001CB577B4DCC54C3DF9EEB0A6C ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_1;
};

// <PrivateImplementationDetails>

// Amazon.Runtime.Internal.Auth.AbstractAWSSigner

// Amazon.Runtime.Internal.Auth.AbstractAWSSigner

// Amazon.RuntimeDependencies.BaseRuntimeDependencyRegistry

// Amazon.RuntimeDependencies.BaseRuntimeDependencyRegistry

// Amazon.Runtime.Internal.Compression.CompressionFactory

// Amazon.Runtime.Internal.Compression.CompressionFactory

// Amazon.Util.CryptoUtilFactory
struct CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_StaticFields
{
	// Amazon.Util.CryptoUtilFactory/CryptoUtil Amazon.Util.CryptoUtilFactory::util
	CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222* ___util_0;
};

// Amazon.Util.CryptoUtilFactory

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn
struct Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_StaticFields
{
	// System.String[] Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::SupportedSchemas
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___SupportedSchemas_0;
};

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn

// Amazon.Runtime.Internal.Compression.GZipCompression

// Amazon.Runtime.Internal.Compression.GZipCompression

// Amazon.Internal.GetEndpointForServiceOptions

// Amazon.Internal.GetEndpointForServiceOptions

// System.Net.Http.HttpContent

// System.Net.Http.HttpContent

// System.Net.Http.HttpMessageInvoker

// System.Net.Http.HttpMessageInvoker

// Amazon.Runtime.Internal.Transform.HttpResponseMessageBody

// Amazon.Runtime.Internal.Transform.HttpResponseMessageBody

// Amazon.Runtime.ImmutableCredentials

// Amazon.Runtime.ImmutableCredentials

// Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager

// Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager

// Amazon.Util.Internal.JsonSerializerContext
struct JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451_StaticFields
{
	// Amazon.Util.Internal.JsonSerializerContext Amazon.Util.Internal.JsonSerializerContext::<Default>k__BackingField
	JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451* ___U3CDefaultU3Ek__BackingField_1;
};

// Amazon.Util.Internal.JsonSerializerContext

// ThirdParty.Json.LitJson.JsonWriter
struct JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9_StaticFields
{
	// System.Globalization.NumberFormatInfo ThirdParty.Json.LitJson.JsonWriter::number_format
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___number_format_0;
};

// ThirdParty.Json.LitJson.JsonWriter

// Amazon.Runtime.Internal.Util.Logger
struct Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Type,Amazon.Runtime.Internal.Util.Logger> Amazon.Runtime.Internal.Util.Logger::cachedLoggers
	RuntimeObject* ___cachedLoggers_0;
	// Amazon.Runtime.Internal.Util.Logger Amazon.Runtime.Internal.Util.Logger::emptyLogger
	Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* ___emptyLogger_2;
};

// Amazon.Runtime.Internal.Util.Logger

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape

// Amazon.Runtime.Internal.Settings.PersistenceManager
struct PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Amazon.Runtime.Internal.Settings.PersistenceManager::ENCRYPTEDKEYS
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___ENCRYPTEDKEYS_0;
	// Amazon.Runtime.Internal.Util.Logger Amazon.Runtime.Internal.Settings.PersistenceManager::_logger
	Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* ____logger_1;
	// System.String Amazon.Runtime.Internal.Settings.PersistenceManager::SettingsStoreFolder
	String_t* ___SettingsStoreFolder_3;
	// Amazon.Runtime.Internal.Settings.IPersistenceManager Amazon.Runtime.Internal.Settings.PersistenceManager::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_4;
};

// Amazon.Runtime.Internal.Settings.PersistenceManager

// Amazon.Runtime.Endpoints.PropertyBag

// Amazon.Runtime.Endpoints.PropertyBag

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_StaticFields
{
	// System.Int64 System.Threading.ReaderWriterLockSlim::s_nextLockID
	int64_t ___s_nextLockID_13;
};

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_ThreadStaticFields
{
	// System.Threading.ReaderWriterCount System.Threading.ReaderWriterLockSlim::t_rwc
	ReaderWriterCount_tD7361BF31DEB70DC7319519D215F400357543333* ___t_rwc_15;
};

// Amazon.RegionEndpoint
struct RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint> Amazon.RegionEndpoint::_hashBySystemName
	Dictionary_2_t45C8B0CC8C8BD1C10D23FBBB56BDF6DF0FE27376* ____hashBySystemName_0;
	// System.Threading.ReaderWriterLockSlim Amazon.RegionEndpoint::_regionEndpointOverrideLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ____regionEndpointOverrideLock_1;
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint> Amazon.RegionEndpoint::_hashRegionEndpointOverride
	Dictionary_2_t45C8B0CC8C8BD1C10D23FBBB56BDF6DF0FE27376* ____hashRegionEndpointOverride_2;
	// Amazon.Internal.IRegionEndpointProvider Amazon.RegionEndpoint::_regionEndpointProvider
	RuntimeObject* ____regionEndpointProvider_3;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast1Regional
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USEast1Regional_7;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::AFSouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___AFSouth1_8;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APEast1_9;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APNortheast1_10;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APNortheast2_11;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast3
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APNortheast3_12;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSouth1_13;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSouth2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSouth2_14;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast1_15;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast2_16;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast3
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast3_17;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast4
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast4_18;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CACentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___CACentral1_19;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CAWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___CAWest1_20;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUCentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUCentral1_21;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUCentral2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUCentral2_22;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUNorth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUNorth1_23;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUSouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUSouth1_24;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUSouth2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUSouth2_25;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUWest1_26;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUWest2_27;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest3
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUWest3_28;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::ILCentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___ILCentral1_29;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::MECentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___MECentral1_30;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::MESouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___MESouth1_31;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::SAEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___SAEast1_32;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USEast1_33;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USEast2_34;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USWest1_35;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USWest2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USWest2_36;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CNNorth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___CNNorth1_37;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CNNorthWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___CNNorthWest1_38;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USGovCloudEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USGovCloudEast1_39;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USGovCloudWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USGovCloudWest1_40;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USIsoEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USIsoEast1_41;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USIsoWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USIsoWest1_42;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USIsobEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USIsobEast1_43;
};

// Amazon.RegionEndpoint

// Amazon.Runtime.Internal.Util.RequestMetrics

// Amazon.Runtime.Internal.Util.RequestMetrics

// Amazon.Runtime.Internal.Settings.SettingsCollection

// Amazon.Runtime.Internal.Settings.SettingsCollection

// Amazon.Runtime.Internal.Settings.SettingsWatcher

// Amazon.Runtime.Internal.Settings.SettingsWatcher

// Amazon.RuntimeDependencies.SigV4aCrtSignerContext

// Amazon.RuntimeDependencies.SigV4aCrtSignerContext

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.StringComparer

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// Amazon.Runtime.Internal.Settings.UserCrypto
struct UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_StaticFields
{
	// System.Nullable`1<System.Boolean> Amazon.Runtime.Internal.Settings.UserCrypto::_isUserCryptAvailable
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____isUserCryptAvailable_0;
};

// Amazon.Runtime.Internal.Settings.UserCrypto

// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c
struct U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields
{
	// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9
	U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9__33_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__33_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean> Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9__60_0
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___U3CU3E9__60_0_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9__64_0
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___U3CU3E9__64_0_3;
};

// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c

// Amazon.Util.CryptoUtilFactory/CryptoUtil

// Amazon.Util.CryptoUtilFactory/CryptoUtil
struct CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222_ThreadStaticFields
{
	// System.Security.Cryptography.HashAlgorithm Amazon.Util.CryptoUtilFactory/CryptoUtil::_hashAlgorithm
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ____hashAlgorithm_0;
};

// Amazon.RegionEndpoint/Endpoint

// Amazon.RegionEndpoint/Endpoint

// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings

// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA522288A50DBBA4F2B2C1B7903E790568AC5E651* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.IO.Stream>

// Amazon.Runtime.Internal.Auth.AWS4Signer
struct AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields
{
	// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::TerminatorBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TerminatorBytes_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Amazon.Runtime.Internal.Auth.AWS4Signer::_headersToIgnoreWhenSigning
	RuntimeObject* ____headersToIgnoreWhenSigning_3;
};

// Amazon.Runtime.Internal.Auth.AWS4Signer

// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper
struct AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields
{
	// Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::_awsSigV4AProvider
	RuntimeObject* ____awsSigV4AProvider_2;
	// System.Object Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::_lock
	RuntimeObject* ____lock_3;
};

// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper

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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry
struct GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_StaticFields
{
	// Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry::_instance
	GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653* ____instance_3;
};

// Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry

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

// Amazon.Runtime.Internal.Auth.NullSigner

// Amazon.Runtime.Internal.Auth.NullSigner

// Amazon.Runtime.Internal.ParameterCollection

// Amazon.Runtime.Internal.ParameterCollection

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition
struct Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields
{
	// System.Threading.ReaderWriterLockSlim Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::_locker
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ____locker_1;
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape> Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::_partitionsByRegionName
	Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* ____partitionsByRegionName_2;
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape> Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::_partitionsByRegex
	Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* ____partitionsByRegex_3;
	// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::_defaultPartition
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* ____defaultPartition_4;
};

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.IO.TextWriter

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// Amazon.Runtime.Internal.Auth.AWSSigningResultBase

// Amazon.Runtime.Internal.Auth.AWSSigningResultBase

// Amazon.Runtime.Internal.Auth.ClientProtocol

// Amazon.Runtime.Internal.Auth.ClientProtocol

// Amazon.Runtime.CompressionEncodingAlgorithm

// Amazon.Runtime.CompressionEncodingAlgorithm

// System.IO.Compression.CompressionMode

// System.IO.Compression.CompressionMode

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// Amazon.Runtime.CoreChecksumAlgorithm

// Amazon.Runtime.CoreChecksumAlgorithm

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileAccess

// System.IO.FileAccess

// System.IO.FileMode

// System.IO.FileMode

// System.IO.FileShare

// System.IO.FileShare

// System.IO.Compression.GZipStream

// System.IO.Compression.GZipStream

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_StaticFields
{
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___TimeoutDefault_2;
};

// System.Net.Http.HttpClient

// System.IO.MemoryStream

// System.IO.MemoryStream

// Amazon.Runtime.Metric

// Amazon.Runtime.Metric

// System.OrdinalCaseSensitiveComparer

// System.OrdinalCaseSensitiveComparer

// System.OrdinalIgnoreCaseComparer

// System.OrdinalIgnoreCaseComparer

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Amazon.Runtime.SignatureVersion

// Amazon.Runtime.SignatureVersion

// Amazon.Runtime.SigningAlgorithm

// Amazon.Runtime.SigningAlgorithm

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamReader

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// System.IO.StreamWriter

// Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11

// Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11

// Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags

// Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags

// Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectPromptFlags

// Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectPromptFlags

// Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB

// Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB

// Amazon.Runtime.Internal.Auth.AWS4SigningResult

// Amazon.Runtime.Internal.Auth.AWS4SigningResult

// Amazon.Runtime.Internal.Auth.AWS4aSigningResult

// Amazon.Runtime.Internal.Auth.AWS4aSigningResult

// Amazon.Runtime.AmazonClientException

// Amazon.Runtime.AmazonClientException

// Amazon.RuntimeDependencies.CreateInstanceContext

// Amazon.RuntimeDependencies.CreateInstanceContext

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// System.IO.FileStream

// System.Net.Http.HttpResponseMessage

// System.Net.Http.HttpResponseMessage

// ThirdParty.Json.LitJson.JsonData

// ThirdParty.Json.LitJson.JsonData

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.Uri

// Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT

// Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>

// System.Func`2<System.String,System.String>

// System.Func`2<System.String,System.String>

// Amazon.Runtime.AWSCommonRuntimeException

// Amazon.Runtime.AWSCommonRuntimeException

// System.ArgumentException

// System.ArgumentException

// Amazon.RuntimeDependencies.MissingRuntimeDependencyException

// Amazon.RuntimeDependencies.MissingRuntimeDependencyException

// System.NotSupportedException

// System.NotSupportedException

// System.UnauthorizedAccessException

// System.UnauthorizedAccessException

// System.ArgumentNullException

// System.ArgumentNullException

// System.ObjectDisposedException

// System.ObjectDisposedException

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke(const CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334& unmarshaled, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_back(const CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke& marshaled, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334& unmarshaled);
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_cleanup(CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke& marshaled);

// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T Amazon.Util.Internal.JsonSerializerHelper::Deserialize<System.Object>(System.String,Amazon.Util.Internal.JsonSerializerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerHelper_Deserialize_TisRuntimeObject_mD9A5E7A23FCAECA0E9CED53FDC62E197F65E5E4F_gshared (String_t* ___0_json, JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451* ___1_typeInfo, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_mDC23F0CB0A5EC478C97C22F1FD23809F1FF19F1F_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m95A8A4774C308571D7F63FEFC3313E6ACE9C8049_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_keySelector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m1FA7B8F7C5DA4606E8EAAD9092053B40011385FE_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_mAE72A2CFC4B2E9B084A29EB709742CDCDB01FFE9_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mBB573574300333BD47817899B4148E16A322891F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared (RuntimeObject* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_mB4374397C5D0A36112594A8DE09568697F7A84A5_gshared (RuntimeObject* ___0_source, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___1_keySelector, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* Enumerable_ToList_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3BA59800A952CF71A84F1FB9561C897AE9CD052B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m15BC821D90EEF37AE31290902208CC60804BC19E_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.IO.Stream> System.Net.Http.HttpContent::ReadAsStreamAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t06484715029D51A4420723456D165BAC63798F8D* HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10 (HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.IO.Stream>::get_Result()
inline Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* Task_1_get_Result_m2BB68DED361146A30A1DA4405D2D072EB7F2E780 (Task_1_t06484715029D51A4420723456D165BAC63798F8D* __this, const RuntimeMethod* method)
{
	return ((  Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* (*) (Task_1_t06484715029D51A4420723456D165BAC63798F8D*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpResponseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_Dispose_m798D011491D02E4CDB279C50D7D5E3CDF0533AEC (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpMessageInvoker::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpMessageInvoker_Dispose_m77B4582C70919C6B31CC3805EDE7A9866574BC41 (HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB6C1079BB59A4F556ED18B3F6C61CD2689DBDD72 (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>::get_Item(TKey)
inline SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* Dictionary_2_get_Item_mB410DF53792B87B5EF853A2EF1051EC770B933D5 (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* (*) (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsCollection__ctor_mD054E08835FEA85D52E02792E8177C9E20A6A077 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mA1C1C9955BF4E1347741C70C2425AD455116C148 (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* __this, String_t* ___0_key, SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7*, String_t*, SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsCollection>::.ctor()
inline void Dictionary_2__ctor_m5CF696430D0AB0098F473DEE0C9B43C335FED36D (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// Amazon.Runtime.Internal.Util.Logger Amazon.Runtime.Internal.Util.Logger::GetLogger(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* Logger_GetLogger_m6AD010A1FE2A58CF45C3F0795573E15B6491B1B6 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A (String_t* ___0_variable, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager__ctor_mB5AFFFD1F8F43A31075D9FB91D373BB7E1B91998 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::set_Instance(Amazon.Runtime.Internal.Settings.IPersistenceManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistenceManager_set_Instance_m8C99F7B4EA7C6D5B4EC86B2975F1CBBA28ED6E8C_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Amazon.Runtime.Internal.Util.Logger::Error(System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Error_m5CDC5C4D98EB99B1B9D07FD1BBCB46A6B3B2577B (Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* __this, Exception_t* ___0_exception, String_t* ___1_messageFormat, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryPersistenceManager__ctor_m313D702D66CEC5C1322B911CC8021DB3AF42FEB2 (InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908* __this, const RuntimeMethod* method) ;
// Amazon.Runtime.Internal.Settings.SettingsCollection Amazon.Runtime.Internal.Settings.PersistenceManager::loadSettingsType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* PersistenceManager_loadSettingsType_m8CA913C91A802D9CB760DD59120AB572AA79B68D (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::saveSettingsType(System.String,Amazon.Runtime.Internal.Settings.SettingsCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_saveSettingsType_mB286D8C36C289598CC3E413B8811E318DABB7608 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* ___1_settings, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24 (Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697* __this, String_t* ___0_key, SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697*, String_t*, SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsWatcher::set_Enable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SettingsWatcher_set_Enable_m4CC90CC7516D15F5E1F2A2F778337052F556AAA8_inline (SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::disableWatcher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_disableWatcher_mD8C9A559B8EC556C28717DC8AD6F2A8D5A4C3FC3 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::enableWatcher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_enableWatcher_m99ACF8FE74E09F4C01F8AB71FC1F9869384AC589 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Settings.PersistenceManager::getFileFromType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistenceManager_getFileFromType_m211D6DE143F864EBB6AF60E2BEED6C4B075FE7C6 (String_t* ___0_type, const RuntimeMethod* method) ;
// System.Int32 Amazon.Runtime.Internal.Settings.SettingsCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsCollection_get_Count_m3F549C27F1ACDEF5D9279A88760B1D2CD9A17FBC (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, int32_t ___3_share, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::Persist(System.IO.StreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsCollection_Persist_mA648EFEF2CF8699AD444FBD5906514E2247EF989 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___0_writer, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// Amazon.Util.Internal.JsonSerializerContext Amazon.Util.Internal.JsonSerializerContext::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451* JsonSerializerContext_get_Default_m43FA999E8EAE464CB518ECC4214934AAD35E6E66_inline (const RuntimeMethod* method) ;
// T Amazon.Util.Internal.JsonSerializerHelper::Deserialize<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>>(System.String,Amazon.Util.Internal.JsonSerializerContext)
inline Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* JsonSerializerHelper_Deserialize_TisDictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_m0CE19CB2ADAA270ED98B5A6FE7A39302327DD284 (String_t* ___0_json, JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451* ___1_typeInfo, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* (*) (String_t*, JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451*, const RuntimeMethod*))JsonSerializerHelper_Deserialize_TisRuntimeObject_mD9A5E7A23FCAECA0E9CED53FDC62E197F65E5E4F_gshared)(___0_json, ___1_typeInfo, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::DecryptAnyEncryptedValues(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_DecryptAnyEncryptedValues_m9B911ADF6D5B90B7EF4E6E5AD7358BC7396ED613 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ___0_settings, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsCollection__ctor_mC8E966DEE4F8DC7AD343BBD8B26480A51BF82E95 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ___0_values, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::GetEnumerator()
inline Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718 Dictionary_2_GetEnumerator_mAD6B412B39BBBB1E51EA303D4D292D43E9E42742 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718 (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Dispose()
inline void Enumerator_Dispose_m5CA09CEAD355871AE5A53C0D0B091F81B8318D11 (Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Current()
inline KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078 Enumerator_get_Current_m9EA030DBF626CC7EBCCBB80612ED02B7E4C67370_inline (Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078 (*) (Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m20E2936558C3148CCA5B7133CAF427BF064E6A78_inline (KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Value()
inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* KeyValuePair_2_get_Value_mD20FA646854CDF3EA44AF202C0E9634CEC7DB668_inline (KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* (*) (KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Amazon.Runtime.Internal.Settings.PersistenceManager::IsEncrypted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PersistenceManager_IsEncrypted_mA3A06A343C97CA06AB7B0B3E14AF09FB2185EC25 (String_t* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.String Amazon.Runtime.Internal.Settings.UserCrypto::Decrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserCrypto_Decrypt_m9C88CCE708837E24B18CEAC6A27C158520695307 (String_t* ___0_encrypted, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
inline bool Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m77705BF94807E0D60DA750FE55C25B6D81DC3B5F (Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Settings.PersistenceManager::GetSettingsStoreFolder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PersistenceManager_GetSettingsStoreFolder_m147E796018CE56B550FBAD4CC08BFA9BF3277B4B_inline (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Settings.SettingsWatcher>::.ctor()
inline void Dictionary_2__ctor_mD8862FC09A09F0A1BA5AC3795A6B6F7C36945464 (Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::set_InitializedEmpty(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SettingsCollection_set_InitializedEmpty_m436F1F8B3A05E9CC815651B3DD42143305E8F3D6_inline (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Count()
inline int32_t Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void ThirdParty.Json.LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m232DA900A751ED8B0732097C31D78FABFD03EB69 (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* __this, const RuntimeMethod* method) ;
// System.Void ThirdParty.Json.LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_PrettyPrint_mA7EC56112C7DF3118EA75A3FC9EA7BAD77DA7DDD_inline (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ThirdParty.Json.LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_mC47B4A1605A1C079339922D7F29ADBA66B35401B (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Keys()
inline KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::GetEnumerator()
inline Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58 (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B (*) (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Dispose()
inline void Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Current()
inline String_t* Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_inline (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings Amazon.Runtime.Internal.Settings.SettingsCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* SettingsCollection_get_Item_m04C68FF7CF6717C84563DA3EABE95C79D4FA9D52 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void ThirdParty.Json.LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_mEC7AEE15BCF42386CED538B1435AC84EDA94232F (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* __this, String_t* ___0_property_name, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::WriteToJson(ThirdParty.Json.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSettings_WriteToJson_m0A82A3AED509D90106027CE5EB06C28CE9F12948 (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* ___0_writer, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void ThirdParty.Json.LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_mE81984C6014225DACC80DE04FA0E534D1DFFC4EC (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings> Amazon.Runtime.Internal.Settings.SettingsCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsCollection_GetEnumerator_mFEAE4DBCCDC74276264B899C068EA78B6E0E0086 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__11__ctor_m90D29E8EBA9987ACD3295BFBB981598D1D96DCF0 (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___0_key, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings Amazon.Runtime.Internal.Settings.SettingsCollection::NewObjectSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* SettingsCollection_NewObjectSettings_mBBA3BC96A3D7A74B3F04CF41E4B55B4A96245346 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, String_t* ___0_uniqueKey, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSettings__ctor_m767C6193B934BD8CBEAE2F6900EB1D57B640CF1B (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, String_t* ___0_uniqueKey, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_values, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m868E0026AB736F38ABB29BC0FE9F3623A816FD43 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___0_key, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::get_Count()
inline int32_t KeyCollection_get_Count_mB566DE0820BEE8FD6ADD3E72A67DA4BBCFB4B533 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::CopyTo(TKey[],System.Int32)
inline void KeyCollection_CopyTo_mBD574373AE2938E023C99276336940AE6D07BE43 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t, const RuntimeMethod*))KeyCollection_CopyTo_mDC23F0CB0A5EC478C97C22F1FD23809F1FF19F1F_gshared)(__this, ___0_array, ___1_index, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String Amazon.Runtime.Internal.Settings.UserCrypto::Encrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserCrypto_Encrypt_m5E35CF81DA34E31BDFC6091EFADDEF298A58A5A3 (String_t* ___0_unencrypted, const RuntimeMethod* method) ;
// System.Void ThirdParty.Json.LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m478B207C9723F9FDF77A86ADF12BEEBA28930687 (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__11_U3CU3Em__Finally1_m42B9BE45BA2B43168C0D163D148259C26DFF82AF (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__11_System_IDisposable_Dispose_m6B5C194750ACE9D947F89ED30E4C921E2A46AECC (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB Amazon.Runtime.Internal.Settings.UserCrypto::ConvertData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 UserCrypto_ConvertData_m9C6587DE6B1241EF5F08699E6BFB826A8D76221E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
// System.Boolean Amazon.Runtime.Internal.Settings.UserCrypto::CryptUnprotectData(Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.String,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.IntPtr,Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT&,Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserCrypto_CryptUnprotectData_mA4973EBB11B72B6A2D01FB043B5386D6C6380D0B (DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___0_pDataIn, String_t* ___1_szDataDescr, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___2_pOptionalEntropy, intptr_t ___3_pvReserved, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334* ___4_pPromptStruct, int32_t ___5_dwFlags, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___6_pDataOut, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.AmazonClientException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmazonClientException__ctor_mD79D13D6A21E949F64AF9554717EE6D525492D32 (AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0 (const RuntimeMethod* method) ;
// System.Boolean Amazon.Runtime.Internal.Settings.UserCrypto::CryptProtectData(Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.String,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.IntPtr,Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT&,Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserCrypto_CryptProtectData_m6F4837EBE1FA67E8B5ACEB3E6D3D269488072E01 (DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___0_pDataIn, String_t* ___1_szDataDescr, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___2_pOptionalEntropy, intptr_t ___3_pvReserved, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334* ___4_pPromptStruct, int32_t ___5_dwFlags, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___6_pDataOut, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m33C16D8DB747139A4F5012633E0ABFF1D8E69BBB (uint8_t ___0_value, int32_t ___1_toBase, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1 (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___0_value, method);
}
// System.Void Amazon.Runtime.Internal.Util.Logger::InfoFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_InfoFormat_m198671267F90E718C1ACF99404FCB535330B52AC (Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* __this, String_t* ___0_messageFormat, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::GetPartitionByRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* Partition_GetPartitionByRegion_m2162A14A672672CEFB0306908F2299B4BDF5EE6A (String_t* ___0_region, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Object Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::GetAttr(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Fn_GetAttr_m07FEC12C0AEE89B7B3E9ACC98D3DC941E77E01C7 (RuntimeObject* ___0_value, String_t* ___1_path, const RuntimeMethod* method) ;
// ThirdParty.Json.LitJson.JsonData ThirdParty.Json.LitJson.JsonMapper::ToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* JsonMapper_ToObject_m84F532A10D900F85F28983FE4AF9E431DD954064 (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::InterpolateJson(ThirdParty.Json.LitJson.JsonData,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fn_InterpolateJson_m76EB582309236E27A60A0E33F4E2C25CBF7F7807 (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* ___0_json, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_refs, const RuntimeMethod* method) ;
// System.String ThirdParty.Json.LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m66E05C07501C5FC18130B7A0E84CB413FE45103F (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* __this, const RuntimeMethod* method) ;
// System.Boolean ThirdParty.Json.LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_mDB8DD649F7E0338E497E88AF2BA83F6EF2431FAE (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::Interpolate(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fn_Interpolate_m0111267FF7F38F812C2836DDA4E63AF9F8F40292 (String_t* ___0_template, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_refs, const RuntimeMethod* method) ;
// System.Boolean ThirdParty.Json.LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_m1AAD495C5DB1E3D71F49AC96F722EA25B2E1903E (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.String> ThirdParty.Json.LitJson.JsonData::get_PropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_get_PropertyNames_m8C3B13508EC0DA38D3CCE952F430808181EC2045 (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* __this, const RuntimeMethod* method) ;
// ThirdParty.Json.LitJson.JsonData ThirdParty.Json.LitJson.JsonData::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* JsonData_get_Item_m7B7DAC4F94209B59F3D06A66D43E8B1C23EC82E9 (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* __this, String_t* ___0_prop_name, const RuntimeMethod* method) ;
// System.Boolean ThirdParty.Json.LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_mC14E41FDAACBEDC1EAE5C87E04B75F287822F4C6 (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Endpoints.PropertyBag::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA (PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19* __this, String_t* ___0_propertyName, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition__ctor_m623BF5F481C053513FAB6F8B21CF4192D64085EF (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_name_mC4CFB4B716B9EC762C7918AD125076D89C10BDC3_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_name_m9895D923F8DCEFFD6ED0534EB9BE9DBD7D329E0B (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_dnsSuffix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dnsSuffix_mF02D5463D26245F5B47F1BE22686384F747037FA_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_dnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_dnsSuffix_mBA667EE564F8CA1D66D32AE89EFB7DE3802288CF (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_dualStackDnsSuffix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dualStackDnsSuffix_mC058856B21FB662857B7D809DA58AF21672FE4CF_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_dualStackDnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_dualStackDnsSuffix_mCEDC38E8556BE427BEA494B147AD3EB9F8396CD0 (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_supportsFIPS()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsFIPS_mCD7909A9D1856996122DAD9439E615141D211DF2_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_supportsFIPS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_supportsFIPS_m776832EA979745087E96D07CA0374C816DD0B993 (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_supportsDualStack()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsDualStack_mF31AE3BA3A11E9BE7BB75C21A81D929F3BFA2DD1_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_supportsDualStack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_supportsDualStack_mF7377DEC17AF59DDAA1E3B9D3C85528D306B9F0B (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_EnterReadLock_m010CB4F0FC253BB5EC9BE8D54EBB5C4FDA778C39 (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitReadLock_m49891BB1D1FA606B9EBD354D575D7F1ECBD53E87 (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m7214792241966DB46DBE70D29F0E0A10607985CF (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* __this, String_t* ___0_key, PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE*, String_t*, PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::FromPartitionData(Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* Partition_FromPartitionData_mE6343E64BE60DAA7898CD5F3412504CFE0FBDAB4 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* ___0_data, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::get_Keys()
inline KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413* Dictionary_2_get_Keys_mCD17F024660A8F6817894B4F912756C35BA77590 (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413* (*) (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::GetEnumerator()
inline Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9 KeyCollection_GetEnumerator_mFB3570FF8177199C646FC0DDFB24E41670D2EDAD (KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9 (*) (KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::Dispose()
inline void Enumerator_Dispose_m914DBB022746497AB3D84A348F0E740DF5894D5B (Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::get_Current()
inline String_t* Enumerator_get_Current_m02767CEE01FB031C474BB851787FF3FFCA3CEA57_inline (Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA (String_t* ___0_input, String_t* ___1_pattern, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::get_Item(TKey)
inline PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* Dictionary_2_get_Item_m0EF75522C77E671C9BE6034EA94D70AB4706DB39 (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* (*) (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::MoveNext()
inline bool Enumerator_MoveNext_m0EF02344BB69E1DD4C7F0332AC77BADA3D49BB28 (Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim__ctor_m617A86382C7F076BC04E68726F50961C799688E8 (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::.ctor()
inline void Dictionary_2__ctor_m15739907ABA4CE4042AD8BBB9E0F4B2A855FC336 (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_dnsSuffix(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_dualStackDnsSuffix(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_supportsFIPS(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_supportsDualStack(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_implicitGlobalRegion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9 (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* __this, String_t* ___0_key, PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE*, String_t*, PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Amazon.Runtime.Endpoints.PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag__ctor_mA73C1F9100FD91E9EF3A37609166CFE2516C518F (PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Compression.GZipCompression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipCompression__ctor_m83FF2D2567553F18BDEF89E9AE7E83867BF2F6B3 (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.ImmutableCredentials::get_AccessKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.ImmutableCredentials::get_SecretKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, bool ___0_signPayload, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry Amazon.RuntimeDependencies.GlobalRuntimeDependencyRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653* GlobalRuntimeDependencyRegistry_get_Instance_m6F48E028BAB6E8F1051306BAEC19B0D5CA2E0B55_inline (const RuntimeMethod* method) ;
// System.Void Amazon.RuntimeDependencies.SigV4aCrtSignerContext::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SigV4aCrtSignerContext__ctor_m294D2744C8C03745174A65FC1488D9275C072D47 (SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1* __this, bool ___0_signPayload, const RuntimeMethod* method) ;
// System.Void Amazon.RuntimeDependencies.CreateInstanceContext::.ctor(Amazon.RuntimeDependencies.SigV4aCrtSignerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateInstanceContext__ctor_m48F6E7D4AE9E3CF6965B02E1CDC34B961AB1F03D (CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F* __this, SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1* ___0_context, const RuntimeMethod* method) ;
// System.Type Amazon.Runtime.Internal.ServiceClientHelpers::LoadTypeFromAssembly(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ServiceClientHelpers_LoadTypeFromAssembly_m0C3AE18BC412EB813054D137F4809C528AD8E071 (String_t* ___0_assemblyName, String_t* ___1_className, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_types, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_parameters, const RuntimeMethod* method) ;
// System.Boolean Amazon.Util.Internal.InternalSDKUtils::IsRunningNativeAot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalSDKUtils_IsRunningNativeAot_m0D8FA02D9D441D52C7004555366EFFD1F4D57080 (const RuntimeMethod* method) ;
// System.Void Amazon.RuntimeDependencies.MissingRuntimeDependencyException::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingRuntimeDependencyException__ctor_m69DE1F63B4D331F1BBBFD92425796B83DAD13619 (MissingRuntimeDependencyException_t3539CD8818800CFDA3DA250922BC5390EC631463* __this, String_t* ___0_packageName, String_t* ___1_className, String_t* ___2_registerMethod, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.AWSCommonRuntimeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWSCommonRuntimeException__ctor_mCB730190C0F07458FB8CD4F6DDA91DF4CBB0F6C8 (AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_AccessKeyId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Scope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_SignedHeaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__ctor_m91187CA260E8C13176F4CCC5260464DB04B61475 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_signPayload, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::set_SignPayload(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_value, const RuntimeMethod* method) ;
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::SignRequest(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_SignRequest_m99323436D7081D4DE35196DEEC413D7EEEFBB9ED (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::ValidateRequest(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC (RuntimeObject* ___0_request, const RuntimeMethod* method) ;
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mE3737714CE93A28E74866026CCC40924371A6279 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineService(Amazon.Runtime.IClientConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineService_m6126B49E5B1045D2D39A916BDB72A37148C082AF (RuntimeObject* ___0_clientConfig, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineSigningRegion(Amazon.Runtime.IClientConfig,System.String,Amazon.RegionEndpoint,Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineSigningRegion_m3D28209191EF6F4BC13908EAB71437327E802B17 (RuntimeObject* ___0_clientConfig, String_t* ___1_serviceName, RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___2_alternateEndpoint, RuntimeObject* ___3_request, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetXAmzTrailerHeader(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetXAmzTrailerHeader_mE382DAF83B9480C9D246CEE1D981E31933766077 (RuntimeObject* ___0_headers, RuntimeObject* ___1_trailingHeaders, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Amazon.Runtime.Internal.Auth.AWS4Signer::GetParametersToCanonicalize(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* AWS4Signer_GetParametersToCanonicalize_m7DC2E3B03D9EEAE862055419329B0E1400D21C30 (RuntimeObject* ___0_request, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_m549B1209FBD3ED80F76482F6182235EA0EE41049 (RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer::get_SignPayload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetRequestBodyHash(Amazon.Runtime.Internal.IRequest,System.Boolean,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetRequestBodyHash_mE429DAF7177761149D08472AA8F86E7A60B10594 (RuntimeObject* ___0_request, bool ___1_signPayload, String_t* ___2_chunkedBodyHash, int32_t ___3_signatureLength, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer::SortAndPruneHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AWS4Signer_SortAndPruneHeaders_m56DE03A6A2F1B020B539DB8EBEBA0A3A60CE1DFC (RuntimeObject* ___0_requestHeaders, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequest(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequest_mABDD64D192C79A6C24D4FF53A7D115FD5CE28D7F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Util.RequestMetrics::AddProperty(Amazon.Runtime.Metric,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestMetrics_AddProperty_mEEDDB74F30D1F338104E75C17D7DF4FEF0E07BDC (RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* __this, int32_t ___0_metric, RuntimeObject* ___1_property, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaderNames(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) ;
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeSignature(System.String,System.String,System.String,System.DateTime,System.String,System.String,System.String,Amazon.Runtime.Internal.Util.RequestMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_ComputeSignature_m4DFBA05F1998120E914CD91D1BC68CF5574DA5C4 (String_t* ___0_awsAccessKey, String_t* ___1_awsSecretAccessKey, String_t* ___2_region, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_signedAt, String_t* ___4_service, String_t* ___5_signedHeaders, String_t* ___6_canonicalRequest, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___7_metrics, const RuntimeMethod* method) ;
// System.DateTime Amazon.Runtime.CorrectClockSkew::GetCorrectedUtcNowForEndpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D CorrectClockSkew_GetCorrectedUtcNowForEndpoint_mCE500BBE523341E24C6EB90B3B71FF9335A2D7A3 (String_t* ___0_endpoint, const RuntimeMethod* method) ;
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mB1983466AD9ED91C4CA510AEA2E942C67F3CE437 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___2_requestDateTime, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::CleanHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_CleanHeaders_mDE078CF20C077F281B1A9879869429E8C3DA7E1E (RuntimeObject* ___0_headers, const RuntimeMethod* method) ;
// System.String System.Uri::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::get_IsDefaultPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B (RuntimeObject* ___0_source, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m95A8A4774C308571D7F63FEFC3313E6ACE9C8049_gshared)(___0_source, ___1_keySelector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::FormatDateTime(System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dt, String_t* ___1_formatString, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_mB586790357AA02ACA787D309B13EE501CEA4729F (String_t* ___0_data, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, bool ___1_lowercase, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComposeSigningKey(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComposeSigningKey_m46B94B52A6776A72226897D088AD32BCCA155945 (String_t* ___0_awsSecretAccessKey, String_t* ___1_region, String_t* ___2_date, String_t* ___3_service, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m24E0CFA1D3BC40CEBD6D8439375AE68C01FB26A1 (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, String_t* ___2_data, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4SigningResult::.ctor(System.String,System.DateTime,System.String,System.String,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4SigningResult__ctor_m51505F2656D83286A4936721C8403EF97531792F (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_signingKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_signature, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_data, const RuntimeMethod* method) ;
// System.Int64 System.Int64::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_mAE2EACBD4520D1EEE5AA32B228D5DA2ED83DDDA5 (String_t* ___0_s, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Int64 Amazon.Runtime.Internal.Util.TrailingHeadersWrapperStream::CalculateLength(System.Collections.Generic.IDictionary`2<System.String,System.String>,Amazon.Runtime.CoreChecksumAlgorithm,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TrailingHeadersWrapperStream_CalculateLength_mB864D571B02159CA842BD3CE8DE650BFB2A1C99E (RuntimeObject* ___0_trailingHeaders, int32_t ___1_checksumAlgorithm, int64_t ___2_baseStreamLength, const RuntimeMethod* method) ;
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD (int64_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetContentEncodingHeader(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97 (RuntimeObject* ___0_request, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetPayloadSignatureHeader(Amazon.Runtime.Internal.IRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86 (RuntimeObject* ___0_request, String_t* ___1_payloadHash, const RuntimeMethod* method) ;
// System.Int64 Amazon.Runtime.Internal.Util.ChunkedUploadWrapperStream::ComputeChunkedContentLength(System.Int64,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.String>,Amazon.Runtime.CoreChecksumAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ChunkedUploadWrapperStream_ComputeChunkedContentLength_m818809A1BAF9AF4814B79C9C930B729D99BA481D (int64_t ___0_originalLength, int32_t ___1_signatureLength, RuntimeObject* ___2_trailingHeaders, int32_t ___3_trailingChecksum, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Util.AWSSDKUtils::GetRequestPayloadBytes(Amazon.Runtime.Internal.IRequest,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWSSDKUtils_GetRequestPayloadBytes_m10D9DF6659E80792EC88A7DFA2ACD604DA2D0DFC (RuntimeObject* ___0_request, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___1_usesQueryString, const RuntimeMethod* method) ;
// Amazon.Util.ICryptoUtil Amazon.Util.CryptoUtilFactory::get_CryptoInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::SignBlob(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_SignBlob_m244BAA116D10B8F56DA06A1075AFDCA04CFDD2BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_m3A156055C5E75B2D6D4EC32AD7CA16D1BE05645C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// Amazon.Internal.GetEndpointForServiceOptions Amazon.Internal.GetEndpointForServiceOptionsExtensions::ToGetEndpointForServiceOptions(Amazon.Runtime.IClientConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* GetEndpointForServiceOptionsExtensions_ToGetEndpointForServiceOptions_m2283A9443F0FB4E9BEAB69C5C81DAE5BFD058EF8 (RuntimeObject* ___0_config, const RuntimeMethod* method) ;
// Amazon.RegionEndpoint/Endpoint Amazon.RegionEndpoint::GetEndpointForService(System.String,Amazon.Internal.GetEndpointForServiceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* RegionEndpoint_GetEndpointForService_mCA203A539CCB68EF369DB4E42B9680ADF3281F99 (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* __this, String_t* ___0_serviceName, GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* ___1_options, const RuntimeMethod* method) ;
// System.String Amazon.RegionEndpoint/Endpoint::get_AuthRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline (Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* __this, const RuntimeMethod* method) ;
// System.String Amazon.RegionEndpoint::get_SystemName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::DetermineRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_DetermineRegion_mB3987BEAEC9FD28AAB6786872EE317F7E6BE3467 (String_t* ___0_url, const RuntimeMethod* method) ;
// Amazon.RegionEndpoint Amazon.RegionEndpoint::GetRegionEndpointOverride(Amazon.RegionEndpoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* RegionEndpoint_GetRegionEndpointOverride_m35E252B7A7D8AB2E50BFDFBEB9FAC5BF606B173B (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___0_regionEndpoint, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::DetermineService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_DetermineService_m064D59D89DBF00D45262B3A5C7B78B546FB78C8A (String_t* ___0_url, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequestHelper(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequestHelper_m46C16171BDE9A434F3F5F67077E5DFEACB5963C0 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::CanonicalizeResourcePathV2(System.Uri,System.String,System.Boolean,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_CanonicalizeResourcePathV2_mDF32096996524E978839632DEE04084FB6DD58DB (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, bool ___2_encode, RuntimeObject* ___3_pathResources, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaders_m31F726AD26640DCF29279AF4FF32EA9DB6FC97F8 (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
inline void SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169 (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*, RuntimeObject*, const RuntimeMethod*))SortedDictionary_2__ctor_m1FA7B8F7C5DA4606E8EAAD9092053B40011385FE_gshared)(__this, ___0_comparer, method);
}
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33 (RuntimeObject* ___0_source, String_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0 (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*, String_t*, String_t*, const RuntimeMethod*))SortedDictionary_2_Add_mAE72A2CFC4B2E9B084A29EB709742CDCDB01FFE9_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mBB573574300333BD47817899B4148E16A322891F_gshared)(___0_source, method);
}
// System.String Amazon.Util.AWSSDKUtils::CompressSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_CompressSpaces_m719A9C6A270511B137EC159FC5CE6EE7E3B2F9BE (String_t* ___0_data, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor()
inline void List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052 (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*, const RuntimeMethod*))List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.String>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, String_t*, String_t*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Add(T)
inline void List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_inline (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A, const RuntimeMethod*))List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Amazon.Runtime.Internal.ParameterCollection::GetSortedParametersList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* ParameterCollection_GetSortedParametersList_mEFE9FDF1F0E7D9119663D84EC862AA3A7376C741 (ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2 (RuntimeObject* ___0_source, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared)(___0_source, ___1_predicate, method);
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_mCEE411D6BE73995FDA08C9015DC18FF67F155FF5 (RuntimeObject* ___0_parameters, bool ___1_uriEncodeParameters, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30 (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Collections.Generic.IComparer`1<TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225 (RuntimeObject* ___0_source, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___1_keySelector, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, RuntimeObject*, const RuntimeMethod*))Enumerable_OrderBy_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_mB4374397C5D0A36112594A8DE09568697F7A84A5_gshared)(___0_source, ___1_keySelector, ___2_comparer, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3BA59800A952CF71A84F1FB9561C897AE9CD052B_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator()
inline Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 (*) (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*, const RuntimeMethod*))List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Dispose()
inline void Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86 (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9*, const RuntimeMethod*))Enumerator_Dispose_m15BC821D90EEF37AE31290902208CC60804BC19E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_inline (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9*, const RuntimeMethod*))Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline)(__this, method);
}
// System.String Amazon.Util.AWSSDKUtils::UrlEncode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F (String_t* ___0_data, bool ___1_path, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::MoveNext()
inline bool Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650 (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9*, const RuntimeMethod*))Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
inline void HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared)(__this, ___0_comparer, method);
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6F99B09FD58B97C1D0A2594F3BA51EB2C8244E3 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWSSigningResultBase::.ctor(System.String,System.DateTime,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWSSigningResultBase__ctor_mC6D5214AEA8373E5D67A3C51004B3F7BC800FF28 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Crypt32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CryptProtectData(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, Il2CppChar*, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, intptr_t, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke*, int32_t, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Crypt32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CryptUnprotectData(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, Il2CppChar*, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, intptr_t, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke*, int32_t, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::.ctor(System.Net.Http.HttpResponseMessage,System.Net.Http.HttpClient,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessageBody__ctor_mDFAC6F74C24646EC72FE93FC187C41CBAF78D15B (HttpResponseMessageBody_t318C1D51557B79F15DD0C3DE448BBDE6C6C62858* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___0_response, HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___1_httpClient, bool ___2_disposeClient, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_0 = ___1_httpClient;
		__this->____httpClient_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____httpClient_0), (void*)L_0);
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_1 = ___0_response;
		__this->____response_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____response_1), (void*)L_1);
		bool L_2 = ___2_disposeClient;
		__this->____disposeClient_2 = L_2;
		return;
	}
}
// System.IO.Stream Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::OpenResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* HttpResponseMessageBody_OpenResponse_mC19551BE960C320E58EECCDDF0F435D3FF0CAF43 (HttpResponseMessageBody_t318C1D51557B79F15DD0C3DE448BBDE6C6C62858* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m2BB68DED361146A30A1DA4405D2D072EB7F2E780_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral872277871DD2258AEC0B300118083D54A1DD3B26)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpResponseMessageBody_OpenResponse_mC19551BE960C320E58EECCDDF0F435D3FF0CAF43_RuntimeMethod_var)));
	}

IL_0013:
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_2 = __this->____response_1;
		NullCheck(L_2);
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_3;
		L_3 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_2, NULL);
		NullCheck(L_3);
		Task_1_t06484715029D51A4420723456D165BAC63798F8D* L_4;
		L_4 = HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10(L_3, NULL);
		NullCheck(L_4);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5;
		L_5 = Task_1_get_Result_m2BB68DED361146A30A1DA4405D2D072EB7F2E780(L_4, Task_1_get_Result_m2BB68DED361146A30A1DA4405D2D072EB7F2E780_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::OpenResponseAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t06484715029D51A4420723456D165BAC63798F8D* HttpResponseMessageBody_OpenResponseAsync_m906360FC408ADF653392C319E78830144C38D641 (HttpResponseMessageBody_t318C1D51557B79F15DD0C3DE448BBDE6C6C62858* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral872277871DD2258AEC0B300118083D54A1DD3B26)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpResponseMessageBody_OpenResponseAsync_m906360FC408ADF653392C319E78830144C38D641_RuntimeMethod_var)));
	}

IL_0013:
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_2 = __this->____response_1;
		NullCheck(L_2);
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_3;
		L_3 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_2, NULL);
		NullCheck(L_3);
		Task_1_t06484715029D51A4420723456D165BAC63798F8D* L_4;
		L_4 = HttpContent_ReadAsStreamAsync_m7C4323126B463483F4B8E702CD61F8661B89CD10(L_3, NULL);
		return L_4;
	}
}
// System.Void Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessageBody_Dispose_m6927240557FD5037AA9CDE0B3F1D11726D38E9BF (HttpResponseMessageBody_t318C1D51557B79F15DD0C3DE448BBDE6C6C62858* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Transform.HttpResponseMessageBody::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessageBody_Dispose_m7A55B221A7B6BB749A7D67F6E1D709680FD247E7 (HttpResponseMessageBody_t318C1D51557B79F15DD0C3DE448BBDE6C6C62858* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_3;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_2 = __this->____response_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_3 = __this->____response_1;
		NullCheck(L_3);
		HttpResponseMessage_Dispose_m798D011491D02E4CDB279C50D7D5E3CDF0533AEC(L_3, NULL);
	}

IL_001f:
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_4 = __this->____httpClient_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		bool L_5 = __this->____disposeClient_2;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_6 = __this->____httpClient_0;
		NullCheck(L_6);
		HttpMessageInvoker_Dispose_m77B4582C70919C6B31CC3805EDE7A9866574BC41(L_6, NULL);
	}

IL_003a:
	{
		__this->____disposed_3 = (bool)1;
	}

IL_0041:
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
// Amazon.Runtime.Internal.Settings.SettingsCollection Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager::GetSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* InMemoryPersistenceManager_GetSettings_m57AD7B550568EBB8B2E0F4ABFCAA6C1769F4BC6A (InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908* __this, String_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB6C1079BB59A4F556ED18B3F6C61CD2689DBDD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB410DF53792B87B5EF853A2EF1051EC770B933D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* L_0 = __this->____settingsDictionary_0;
		String_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB6C1079BB59A4F556ED18B3F6C61CD2689DBDD72(L_0, L_1, Dictionary_2_ContainsKey_mB6C1079BB59A4F556ED18B3F6C61CD2689DBDD72_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* L_3 = __this->____settingsDictionary_0;
		String_t* L_4 = ___0_type;
		NullCheck(L_3);
		SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_5;
		L_5 = Dictionary_2_get_Item_mB410DF53792B87B5EF853A2EF1051EC770B933D5(L_3, L_4, Dictionary_2_get_Item_mB410DF53792B87B5EF853A2EF1051EC770B933D5_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_6 = (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383*)il2cpp_codegen_object_new(SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SettingsCollection__ctor_mD054E08835FEA85D52E02792E8177C9E20A6A077(L_6, NULL);
		return L_6;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager::SaveSettings(System.String,Amazon.Runtime.Internal.Settings.SettingsCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryPersistenceManager_SaveSettings_m69A29212A2DC50ADB7F94A432EBCB44521358CE9 (InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908* __this, String_t* ___0_type, SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* ___1_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA1C1C9955BF4E1347741C70C2425AD455116C148_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* L_0 = __this->____settingsDictionary_0;
		String_t* L_1 = ___0_type;
		SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_2 = ___1_settings;
		NullCheck(L_0);
		Dictionary_2_set_Item_mA1C1C9955BF4E1347741C70C2425AD455116C148(L_0, L_1, L_2, Dictionary_2_set_Item_mA1C1C9955BF4E1347741C70C2425AD455116C148_RuntimeMethod_var);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.InMemoryPersistenceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryPersistenceManager__ctor_m313D702D66CEC5C1322B911CC8021DB3AF42FEB2 (InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5CF696430D0AB0098F473DEE0C9B43C335FED36D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7* L_0 = (Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7*)il2cpp_codegen_object_new(Dictionary_2_tAD73798DCED8E966E99E3DD49A951BABD3A95CA7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5CF696430D0AB0098F473DEE0C9B43C335FED36D(L_0, Dictionary_2__ctor_m5CF696430D0AB0098F473DEE0C9B43C335FED36D_RuntimeMethod_var);
		__this->____settingsDictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____settingsDictionary_0), (void*)L_0);
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
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager__cctor_mE4DB8B9476FE6E09A4DE57A38E0ACA9C01FE18A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01BE3C5F636D161D8450BADAB6A452F16E161F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FB59AF1F9DAA66BC5EFE4235C1A32F69F233920);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1898CAA0C86529CFB80F9AD61A032DCC69BD00A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ECD5EA852C261C23068F3A7FE6685FE38D6C8FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral239B19BA5A73C9BD3A9D95A6DC527B1784E50B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39F619F3B54DD262837C9C51C320CB1F0C6AB315);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43FFC218A27250CEFDC3421637EEF026530E2D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56CC909BD4F7C7EB4E874D789709CCE1412CFD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E8F32CC0FB432888F81177732BA223324177B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA769B85F1DF8458956B70AB90ADB9455282079FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E5CFA2A4FC39146B1CEFE8F221DEC5510B1467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C7C696403AFAC9172E6DDB083EB2742017DBC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73A7BD9028ABC2837D38C483732640BA01BA85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D537A4FD29DDFA75B9EAD4265818E0B711F259);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF88E385C32CF5028732AAB152A7CBFD1A6659685);
		s_Il2CppMethodInitialized = true;
	}
	UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = L_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_1, _stringLiteral0FB59AF1F9DAA66BC5EFE4235C1A32F69F233920, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = L_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_3, _stringLiteral56CC909BD4F7C7EB4E874D789709CCE1412CFD4F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = L_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_5, _stringLiteralE73A7BD9028ABC2837D38C483732640BA01BA85F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_7, _stringLiteralC5C7C696403AFAC9172E6DDB083EB2742017DBC4, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_9, _stringLiteralA769B85F1DF8458956B70AB90ADB9455282079FE, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_11, _stringLiteralB6E5CFA2A4FC39146B1CEFE8F221DEC5510B1467, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_13 = L_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_13, _stringLiteralF88E385C32CF5028732AAB152A7CBFD1A6659685, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_15, _stringLiteral239B19BA5A73C9BD3A9D95A6DC527B1784E50B28, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_17, _stringLiteral01BE3C5F636D161D8450BADAB6A452F16E161F4F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_19 = L_17;
		NullCheck(L_19);
		bool L_20;
		L_20 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_19, _stringLiteral1898CAA0C86529CFB80F9AD61A032DCC69BD00A0, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_21 = L_19;
		NullCheck(L_21);
		bool L_22;
		L_22 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_21, _stringLiteralF7D537A4FD29DDFA75B9EAD4265818E0B711F259, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_23 = L_21;
		NullCheck(L_23);
		bool L_24;
		L_24 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_23, _stringLiteral39F619F3B54DD262837C9C51C320CB1F0C6AB315, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___ENCRYPTEDKEYS_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___ENCRYPTEDKEYS_0), (void*)L_23);
		((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3), (void*)(String_t*)NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B_il2cpp_TypeInfo_var);
		Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* L_27;
		L_27 = Logger_GetLogger_m6AD010A1FE2A58CF45C3F0795573E15B6491B1B6(L_26, NULL);
		((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->____logger_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->____logger_1), (void*)L_27);
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_28;
			L_28 = Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A(_stringLiteral1ECD5EA852C261C23068F3A7FE6685FE38D6C8FB, NULL);
			((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3), (void*)L_28);
			String_t* L_29 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3;
			bool L_30;
			L_30 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_29, NULL);
			if (!L_30)
			{
				goto IL_00de_1;
			}
		}
		{
			String_t* L_31;
			L_31 = Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A(_stringLiteral65E8F32CC0FB432888F81177732BA223324177B0, NULL);
			((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3 = L_31;
			Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3), (void*)L_31);
		}

IL_00de_1:
		{
			String_t* L_32 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_33;
			L_33 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_32, _stringLiteral43FFC218A27250CEFDC3421637EEF026530E2D39, NULL);
			((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3), (void*)L_33);
			String_t* L_34 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3;
			bool L_35;
			L_35 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_34, NULL);
			if (L_35)
			{
				goto IL_0109_1;
			}
		}
		{
			String_t* L_36 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_37;
			L_37 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_36, NULL);
		}

IL_0109_1:
		{
			PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* L_38 = (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4*)il2cpp_codegen_object_new(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
			NullCheck(L_38);
			PersistenceManager__ctor_mB5AFFFD1F8F43A31075D9FB91D373BB7E1B91998(L_38, NULL);
			PersistenceManager_set_Instance_m8C99F7B4EA7C6D5B4EC86B2975F1CBBA28ED6E8C_inline(L_38, NULL);
			goto IL_0137;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0115;
		}
		throw e;
	}

CATCH_0115:
	{// begin catch(System.UnauthorizedAccessException)
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_39 = ((UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)IL2CPP_GET_ACTIVE_EXCEPTION(UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*));;
		V_0 = L_39;
		Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* L_40 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))))->____logger_1;
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_41 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42;
		L_42 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
		NullCheck(L_40);
		Logger_Error_m5CDC5C4D98EB99B1B9D07FD1BBCB46A6B3B2577B(L_40, L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1BFFCD3F33BA58D6C579BCC048DC6E9F5FFB80)), L_42, NULL);
		InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908* L_43 = (InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InMemoryPersistenceManager_t943DDB42DDC33CB2A25964BCD68F31257B1C1908_il2cpp_TypeInfo_var)));
		NullCheck(L_43);
		InMemoryPersistenceManager__ctor_m313D702D66CEC5C1322B911CC8021DB3AF42FEB2(L_43, NULL);
		PersistenceManager_set_Instance_m8C99F7B4EA7C6D5B4EC86B2975F1CBBA28ED6E8C_inline(L_43, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0137;
	}// end catch (depth: 1)

IL_0137:
	{
		return;
	}
}
// Amazon.Runtime.Internal.Settings.IPersistenceManager Amazon.Runtime.Internal.Settings.PersistenceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PersistenceManager_get_Instance_mB7D9759A92B499506293739FCBAAEE1D5DD54242 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::set_Instance(Amazon.Runtime.Internal.Settings.IPersistenceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_set_Instance_m8C99F7B4EA7C6D5B4EC86B2975F1CBBA28ED6E8C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Amazon.Runtime.Internal.Settings.SettingsCollection Amazon.Runtime.Internal.Settings.PersistenceManager::GetSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* PersistenceManager_GetSettings_mEB8CA23285FAA9A066594C10946B6A431D0C7C42 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_type;
		SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_1;
		L_1 = PersistenceManager_loadSettingsType_m8CA913C91A802D9CB760DD59120AB572AA79B68D(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::SaveSettings(System.String,Amazon.Runtime.Internal.Settings.SettingsCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_SaveSettings_mFA8F96C6AE0F715880D44797CB5B4563D30EE54B (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* ___1_settings, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_type;
		SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_1 = ___1_settings;
		PersistenceManager_saveSettingsType_mB286D8C36C289598CC3E413B8811E318DABB7608(__this, L_0, L_1, NULL);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Settings.PersistenceManager::GetSettingsStoreFolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistenceManager_GetSettingsStoreFolder_m147E796018CE56B550FBAD4CC08BFA9BF3277B4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::enableWatcher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_enableWatcher_m99ACF8FE74E09F4C01F8AB71FC1F9869384AC589 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* V_0 = NULL;
	{
		V_0 = (SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504*)NULL;
		Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697* L_0 = __this->____watchers_2;
		String_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* L_3 = V_0;
		NullCheck(L_3);
		SettingsWatcher_set_Enable_m4CC90CC7516D15F5E1F2A2F778337052F556AAA8_inline(L_3, (bool)1, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::disableWatcher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_disableWatcher_mD8C9A559B8EC556C28717DC8AD6F2A8D5A4C3FC3 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* V_0 = NULL;
	{
		V_0 = (SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504*)NULL;
		Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697* L_0 = __this->____watchers_2;
		String_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m2CCA5583B536F862AFBE9CFC134DA766BC0BFB24_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* L_3 = V_0;
		NullCheck(L_3);
		SettingsWatcher_set_Enable_m4CC90CC7516D15F5E1F2A2F778337052F556AAA8_inline(L_3, (bool)0, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Settings.PersistenceManager::IsEncrypted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PersistenceManager_IsEncrypted_mA3A06A343C97CA06AB7B0B3E14AF09FB2185EC25 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___ENCRYPTEDKEYS_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_1, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::saveSettingsType(System.String,Amazon.Runtime.Internal.Settings.SettingsCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_saveSettingsType_mB286D8C36C289598CC3E413B8811E318DABB7608 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* ___1_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_type;
		PersistenceManager_disableWatcher_mD8C9A559B8EC556C28717DC8AD6F2A8D5A4C3FC3(__this, L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				String_t* L_1 = ___0_type;
				PersistenceManager_enableWatcher_m99ACF8FE74E09F4C01F8AB71FC1F9869384AC589(__this, L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				String_t* L_2 = ___0_type;
				il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
				String_t* L_3;
				L_3 = PersistenceManager_getFileFromType_m211D6DE143F864EBB6AF60E2BEED6C4B075FE7C6(L_2, NULL);
				V_0 = L_3;
				SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_4 = ___1_settings;
				if (!L_4)
				{
					goto IL_0019_1;
				}
			}
			{
				SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_5 = ___1_settings;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = SettingsCollection_get_Count_m3F549C27F1ACDEF5D9279A88760B1D2CD9A17FBC(L_5, NULL);
				if (L_6)
				{
					goto IL_0029_1;
				}
			}

IL_0019_1:
			{
				String_t* L_7 = V_0;
				bool L_8;
				L_8 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_7, NULL);
				if (!L_8)
				{
					goto IL_0027_1;
				}
			}
			{
				String_t* L_9 = V_0;
				File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_9, NULL);
			}

IL_0027_1:
			{
				goto IL_007b;
			}

IL_0029_1:
			{
				V_1 = 0;
			}

IL_002b_1:
			{
			}
			try
			{// begin try (depth: 2)
				{
					String_t* L_10 = V_0;
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
					NullCheck(L_11);
					FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_11, L_10, 2, 2, 0, NULL);
					V_2 = L_11;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0050_2:
						{// begin finally (depth: 3)
							{
								FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_2;
								if (!L_12)
								{
									goto IL_0059_2;
								}
							}
							{
								FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_13 = V_2;
								NullCheck(L_13);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
							}

IL_0059_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_14 = V_2;
							StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_15 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
							NullCheck(L_15);
							StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_15, L_14, NULL);
							V_3 = L_15;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_0046_3:
								{// begin finally (depth: 4)
									{
										StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_16 = V_3;
										if (!L_16)
										{
											goto IL_004f_3;
										}
									}
									{
										StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_17 = V_3;
										NullCheck(L_17);
										InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
									}

IL_004f_3:
									{
										return;
									}
								}// end finally (depth: 4)
							});
							try
							{// begin try (depth: 4)
								SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_18 = ___1_settings;
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_19 = V_3;
								NullCheck(L_18);
								SettingsCollection_Persist_mA648EFEF2CF8699AD444FBD5906514E2247EF989(L_18, L_19, NULL);
								goto IL_007b;
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_005a_1;
				}
				throw e;
			}

CATCH_005a_1:
			{// begin catch(System.Exception)
				{
					Exception_t* L_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					int32_t L_21 = V_1;
					if ((((int32_t)L_21) >= ((int32_t)5)))
					{
						goto IL_006f_1;
					}
				}
				{
					Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(((int32_t)1000), NULL);
					int32_t L_22 = V_1;
					V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
					goto IL_0071_1;
				}

IL_006f_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}

IL_0071_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_002b_1;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		return;
	}
}
// Amazon.Runtime.Internal.Settings.SettingsCollection Amazon.Runtime.Internal.Settings.PersistenceManager::loadSettingsType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* PersistenceManager_loadSettingsType_m8CA913C91A802D9CB760DD59120AB572AA79B68D (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, String_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerHelper_Deserialize_TisDictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_m0CE19CB2ADAA270ED98B5A6FE7A39302327DD284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* V_3 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_4 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_5 = NULL;
	SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = PersistenceManager_getFileFromType_m211D6DE143F864EBB6AF60E2BEED6C4B075FE7C6(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_4 = (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383*)il2cpp_codegen_object_new(SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SettingsCollection__ctor_mD054E08835FEA85D52E02792E8177C9E20A6A077(L_4, NULL);
		return L_4;
	}

IL_0015:
	{
		V_1 = 0;
	}

IL_0017:
	{
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_5 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6;
			L_6 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_5, NULL);
			V_4 = L_6;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0041_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_4;
						if (!L_7)
						{
							goto IL_004c_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_4;
						NullCheck(L_8);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
					}

IL_004c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_4;
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_10 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
					NullCheck(L_10);
					StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_10, L_9, NULL);
					V_5 = L_10;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0033_2:
						{// begin finally (depth: 3)
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_11 = V_5;
								if (!L_11)
								{
									goto IL_003e_2;
								}
							}
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_12 = V_5;
								NullCheck(L_12);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
							}

IL_003e_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_13 = V_5;
						NullCheck(L_13);
						String_t* L_14;
						L_14 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadToEnd() */, L_13);
						V_2 = L_14;
						goto IL_003f_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_003f_2:
				{
					goto IL_004d_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_004d_1:
		{
			String_t* L_15 = V_2;
			bool L_16;
			L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
			if (L_16)
			{
				goto IL_006c_1;
			}
		}
		{
			String_t* L_17 = V_2;
			JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451* L_18;
			L_18 = JsonSerializerContext_get_Default_m43FA999E8EAE464CB518ECC4214934AAD35E6E66_inline(NULL);
			Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_19;
			L_19 = JsonSerializerHelper_Deserialize_TisDictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_m0CE19CB2ADAA270ED98B5A6FE7A39302327DD284(L_17, L_18, JsonSerializerHelper_Deserialize_TisDictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_m0CE19CB2ADAA270ED98B5A6FE7A39302327DD284_RuntimeMethod_var);
			V_3 = L_19;
			Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_20 = V_3;
			if (L_20)
			{
				goto IL_0072_1;
			}
		}
		{
			Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_21 = (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*)il2cpp_codegen_object_new(Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
			NullCheck(L_21);
			Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4(L_21, Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
			V_3 = L_21;
			goto IL_0072_1;
		}

IL_006c_1:
		{
			Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_22 = (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*)il2cpp_codegen_object_new(Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
			NullCheck(L_22);
			Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4(L_22, Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
			V_3 = L_22;
		}

IL_0072_1:
		{
			Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_23 = V_3;
			il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
			PersistenceManager_DecryptAnyEncryptedValues_m9B911ADF6D5B90B7EF4E6E5AD7358BC7396ED613(L_23, NULL);
			Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_24 = V_3;
			SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_25 = (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383*)il2cpp_codegen_object_new(SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383_il2cpp_TypeInfo_var);
			NullCheck(L_25);
			SettingsCollection__ctor_mC8E966DEE4F8DC7AD343BBD8B26480A51BF82E95(L_25, L_24, NULL);
			V_6 = L_25;
			goto IL_00a5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0082;
		}
		throw e;
	}

CATCH_0082:
	{// begin catch(System.Object)
		{
			RuntimeObject* L_26 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			int32_t L_27 = V_1;
			if ((((int32_t)L_27) >= ((int32_t)5)))
			{
				goto IL_0097;
			}
		}
		{
			Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(((int32_t)1000), NULL);
			int32_t L_28 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
			goto IL_00a0;
		}

IL_0097:
		{
			SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_29 = (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383_il2cpp_TypeInfo_var)));
			NullCheck(L_29);
			SettingsCollection__ctor_mD054E08835FEA85D52E02792E8177C9E20A6A077(L_29, NULL);
			V_6 = L_29;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00a5;
		}

IL_00a0:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0017;
		}
	}// end catch (depth: 1)

IL_00a5:
	{
		SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_30 = V_6;
		return L_30;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::DecryptAnyEncryptedValues(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager_DecryptAnyEncryptedValues_m9B911ADF6D5B90B7EF4E6E5AD7358BC7396ED613 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAD6B412B39BBBB1E51EA303D4D292D43E9E42742_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5CA09CEAD355871AE5A53C0D0B091F81B8318D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m77705BF94807E0D60DA750FE55C25B6D81DC3B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9EA030DBF626CC7EBCCBB80612ED02B7E4C67370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m20E2936558C3148CCA5B7133CAF427BF064E6A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD20FA646854CDF3EA44AF202C0E9634CEC7DB668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_3 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = ___0_settings;
		NullCheck(L_0);
		Enumerator_t6A5F447C587C008586F26AB0ABD4139ED4D40718 L_1;
		L_1 = Dictionary_2_GetEnumerator_mAD6B412B39BBBB1E51EA303D4D292D43E9E42742(L_0, Dictionary_2_GetEnumerator_mAD6B412B39BBBB1E51EA303D4D292D43E9E42742_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cf:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5CA09CEAD355871AE5A53C0D0B091F81B8318D11((&V_0), Enumerator_Dispose_m5CA09CEAD355871AE5A53C0D0B091F81B8318D11_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c1_1;
			}

IL_000c_1:
			{
				KeyValuePair_2_t7AA62F445E01E14DCE4D983FB79AEAC4B30F3078 L_2;
				L_2 = Enumerator_get_Current_m9EA030DBF626CC7EBCCBB80612ED02B7E4C67370_inline((&V_0), Enumerator_get_Current_m9EA030DBF626CC7EBCCBB80612ED02B7E4C67370_RuntimeMethod_var);
				V_1 = L_2;
				String_t* L_3;
				L_3 = KeyValuePair_2_get_Key_m20E2936558C3148CCA5B7133CAF427BF064E6A78_inline((&V_1), KeyValuePair_2_get_Key_m20E2936558C3148CCA5B7133CAF427BF064E6A78_RuntimeMethod_var);
				V_2 = L_3;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
				L_4 = KeyValuePair_2_get_Value_mD20FA646854CDF3EA44AF202C0E9634CEC7DB668_inline((&V_1), KeyValuePair_2_get_Value_mD20FA646854CDF3EA44AF202C0E9634CEC7DB668_RuntimeMethod_var);
				V_3 = L_4;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_3;
				NullCheck(L_5);
				KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_6;
				L_6 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_5, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_7, L_6, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
				NullCheck(L_7);
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_8;
				L_8 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_7, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
				V_4 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b3_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_4), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00a8_2;
					}

IL_0038_2:
					{
						String_t* L_9;
						L_9 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_4), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
						V_5 = L_9;
						String_t* L_10 = V_5;
						il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
						bool L_11;
						L_11 = PersistenceManager_IsEncrypted_mA3A06A343C97CA06AB7B0B3E14AF09FB2185EC25(L_10, NULL);
						if (L_11)
						{
							goto IL_0052_2;
						}
					}
					{
						String_t* L_12 = V_2;
						il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
						bool L_13;
						L_13 = PersistenceManager_IsEncrypted_mA3A06A343C97CA06AB7B0B3E14AF09FB2185EC25(L_12, NULL);
						if (!L_13)
						{
							goto IL_00a8_2;
						}
					}

IL_0052_2:
					{
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_3;
						String_t* L_15 = V_5;
						NullCheck(L_14);
						String_t* L_16;
						L_16 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_14, L_15, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
						V_6 = L_16;
						String_t* L_17 = V_6;
						if (!L_17)
						{
							goto IL_00a8_2;
						}
					}
					try
					{// begin try (depth: 3)
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = V_3;
						String_t* L_19 = V_5;
						String_t* L_20 = V_6;
						String_t* L_21;
						L_21 = UserCrypto_Decrypt_m9C88CCE708837E24B18CEAC6A27C158520695307(L_20, NULL);
						NullCheck(L_18);
						Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_18, L_19, L_21, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
						goto IL_00a8_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_0071_2;
						}
						throw e;
					}

CATCH_0071_2:
					{// begin catch(System.Exception)
						Exception_t* L_22 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
						V_7 = L_22;
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_23 = V_3;
						String_t* L_24 = V_5;
						NullCheck(L_23);
						bool L_25;
						L_25 = Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC(L_23, L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var)));
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_0_0_0_var))) };
						il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
						Type_t* L_27;
						L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
						il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B_il2cpp_TypeInfo_var)));
						Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* L_28;
						L_28 = Logger_GetLogger_m6AD010A1FE2A58CF45C3F0795573E15B6491B1B6(L_27, NULL);
						Exception_t* L_29 = V_7;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
						String_t* L_32 = V_2;
						NullCheck(L_31);
						ArrayElementTypeCheck (L_31, L_32);
						(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
						String_t* L_34 = V_5;
						NullCheck(L_33);
						ArrayElementTypeCheck (L_33, L_34);
						(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
						NullCheck(L_28);
						Logger_Error_m5CDC5C4D98EB99B1B9D07FD1BBCB46A6B3B2577B(L_28, L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77F6327F61144826F33253823794A85F6A94A4C9)), L_33, NULL);
						IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
						goto IL_00a8_2;
					}// end catch (depth: 3)

IL_00a8_2:
					{
						bool L_35;
						L_35 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_4), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
						if (L_35)
						{
							goto IL_0038_2;
						}
					}
					{
						goto IL_00c1_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00c1_1:
			{
				bool L_36;
				L_36 = Enumerator_MoveNext_m77705BF94807E0D60DA750FE55C25B6D81DC3B5F((&V_0), Enumerator_MoveNext_m77705BF94807E0D60DA750FE55C25B6D81DC3B5F_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_000c_1;
				}
			}
			{
				goto IL_00dd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		return;
	}
}
// System.String Amazon.Runtime.Internal.Settings.PersistenceManager::getFileFromType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistenceManager_getFileFromType_m211D6DE143F864EBB6AF60E2BEED6C4B075FE7C6 (String_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0367AC6EDAD831BFC1DFD4227FE612583486E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = PersistenceManager_GetSettingsStoreFolder_m147E796018CE56B550FBAD4CC08BFA9BF3277B4B_inline(NULL);
		String_t* L_2 = ___0_type;
		String_t* L_3;
		L_3 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteralFD0367AC6EDAD831BFC1DFD4227FE612583486E8, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.PersistenceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceManager__ctor_mB5AFFFD1F8F43A31075D9FB91D373BB7E1B91998 (PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD8862FC09A09F0A1BA5AC3795A6B6F7C36945464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697* L_0 = (Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697*)il2cpp_codegen_object_new(Dictionary_2_tB721F6B0F91DEBB8E9716FABDBC8B79DFFAC2697_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD8862FC09A09F0A1BA5AC3795A6B6F7C36945464(L_0, Dictionary_2__ctor_mD8862FC09A09F0A1BA5AC3795A6B6F7C36945464_RuntimeMethod_var);
		__this->____watchers_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____watchers_2), (void*)L_0);
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
// System.Void Amazon.Runtime.Internal.Settings.SettingsWatcher::set_Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsWatcher_set_Enable_m4CC90CC7516D15F5E1F2A2F778337052F556AAA8 (SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CEnableU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsWatcher::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsWatcher_Dispose_m0674D2F45F823E212DF3C66BB7AF01160E9182D7 (SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Amazon.Runtime.Internal.Settings.SettingsWatcher::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsWatcher::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsWatcher_Dispose_m07FB688234A3F3865563054914F4C4C7B66AA44B (SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_disposing;
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
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsCollection__ctor_mD054E08835FEA85D52E02792E8177C9E20A6A077 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*)il2cpp_codegen_object_new(Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4(L_0, Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		__this->____values_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_0), (void*)L_0);
		SettingsCollection_set_InitializedEmpty_m436F1F8B3A05E9CC815651B3DD42143305E8F3D6_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsCollection__ctor_mC8E966DEE4F8DC7AD343BBD8B26480A51BF82E95 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ___0_values, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = ___0_values;
		__this->____values_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_0), (void*)L_0);
		SettingsCollection_set_InitializedEmpty_m436F1F8B3A05E9CC815651B3DD42143305E8F3D6_inline(__this, (bool)0, NULL);
		return;
	}
}
// System.Int32 Amazon.Runtime.Internal.Settings.SettingsCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsCollection_get_Count_m3F549C27F1ACDEF5D9279A88760B1D2CD9A17FBC (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = __this->____values_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534(L_0, Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::set_InitializedEmpty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsCollection_set_InitializedEmpty_m436F1F8B3A05E9CC815651B3DD42143305E8F3D6 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CInitializedEmptyU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection::Persist(System.IO.StreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsCollection_Persist_mA648EFEF2CF8699AD444FBD5906514E2247EF989 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___0_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_0 = (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9*)il2cpp_codegen_object_new(JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonWriter__ctor_m232DA900A751ED8B0732097C31D78FABFD03EB69(L_0, NULL);
		V_0 = L_0;
		JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_1 = V_0;
		NullCheck(L_1);
		JsonWriter_set_PrettyPrint_mA7EC56112C7DF3118EA75A3FC9EA7BAD77DA7DDD_inline(L_1, (bool)1, NULL);
		JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_2 = V_0;
		NullCheck(L_2);
		JsonWriter_WriteObjectStart_mC47B4A1605A1C079339922D7F29ADBA66B35401B(L_2, NULL);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_3 = __this->____values_0;
		NullCheck(L_3);
		KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_4;
		L_4 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_3, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B L_5;
		L_5 = KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58(L_4, KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C((&V_2), Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0026_1:
			{
				String_t* L_6;
				L_6 = Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_inline((&V_2), Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var);
				V_3 = L_6;
				String_t* L_7 = V_3;
				ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_8;
				L_8 = SettingsCollection_get_Item_m04C68FF7CF6717C84563DA3EABE95C79D4FA9D52(__this, L_7, NULL);
				JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_9 = V_0;
				String_t* L_10 = V_3;
				NullCheck(L_9);
				JsonWriter_WritePropertyName_mEC7AEE15BCF42386CED538B1435AC84EDA94232F(L_9, L_10, NULL);
				JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_11 = V_0;
				NullCheck(L_8);
				ObjectSettings_WriteToJson_m0A82A3AED509D90106027CE5EB06C28CE9F12948(L_8, L_11, NULL);
			}

IL_0042_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F((&V_2), Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_13 = V_0;
		NullCheck(L_13);
		JsonWriter_WriteObjectEnd_mE81984C6014225DACC80DE04FA0E534D1DFFC4EC(L_13, NULL);
		JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_1 = L_15;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_16 = ___0_writer;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, L_17);
		return;
	}
}
// System.Collections.IEnumerator Amazon.Runtime.Internal.Settings.SettingsCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsCollection_System_Collections_IEnumerable_GetEnumerator_mD5A2DDFB25C21A9471817FC8EAC134A9548AC90A (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = SettingsCollection_GetEnumerator_mFEAE4DBCCDC74276264B899C068EA78B6E0E0086(__this, NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings> Amazon.Runtime.Internal.Settings.SettingsCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SettingsCollection_GetEnumerator_mFEAE4DBCCDC74276264B899C068EA78B6E0E0086 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* L_0 = (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__11__ctor_m90D29E8EBA9987ACD3295BFBB981598D1D96DCF0(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings Amazon.Runtime.Internal.Settings.SettingsCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* SettingsCollection_get_Item_m04C68FF7CF6717C84563DA3EABE95C79D4FA9D52 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = __this->____values_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___0_key;
		ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_4;
		L_4 = SettingsCollection_NewObjectSettings_mBBA3BC96A3D7A74B3F04CF41E4B55B4A96245346(__this, L_3, NULL);
		return L_4;
	}

IL_0018:
	{
		String_t* L_5 = ___0_key;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_7 = (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7*)il2cpp_codegen_object_new(ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ObjectSettings__ctor_m767C6193B934BD8CBEAE2F6900EB1D57B640CF1B(L_7, L_5, L_6, NULL);
		return L_7;
	}
}
// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings Amazon.Runtime.Internal.Settings.SettingsCollection::NewObjectSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* SettingsCollection_NewObjectSettings_mBBA3BC96A3D7A74B3F04CF41E4B55B4A96245346 (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, String_t* ___0_uniqueKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m868E0026AB736F38ABB29BC0FE9F3623A816FD43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___0_uniqueKey;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = V_0;
		ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_3 = (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7*)il2cpp_codegen_object_new(ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ObjectSettings__ctor_m767C6193B934BD8CBEAE2F6900EB1D57B640CF1B(L_3, L_1, L_2, NULL);
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_4 = __this->____values_0;
		String_t* L_5 = ___0_uniqueKey;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		NullCheck(L_4);
		Dictionary_2_set_Item_m868E0026AB736F38ABB29BC0FE9F3623A816FD43(L_4, L_5, L_6, Dictionary_2_set_Item_m868E0026AB736F38ABB29BC0FE9F3623A816FD43_RuntimeMethod_var);
		return L_3;
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
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSettings__ctor_m767C6193B934BD8CBEAE2F6900EB1D57B640CF1B (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, String_t* ___0_uniqueKey, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_values, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_uniqueKey;
		__this->____uniqueKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uniqueKey_0), (void*)L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___1_values;
		__this->____values_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_1), (void*)L_1);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::get_UniqueKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectSettings_get_UniqueKey_m420FAB06C5BA1FFF465FDB7F0438354CEDFBB3CA (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____uniqueKey_0;
		return L_0;
	}
}
// System.String Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectSettings_get_Item_m021D51F68DB73AFF89C95F0D4856335BA4E0BA37 (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____values_1;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSettings_set_Item_mF5D96231A79361315B7548440199066E01C714A8 (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____values_1;
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSettings_Remove_m0DF9B8771D14403B6CCD2032A2FE75FA2C33C76B (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____values_1;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC(L_0, L_1, Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectSettings_get_Keys_m3BFE4E5FFDCE594A511A7A86E69858C272891D2B (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_CopyTo_mBD574373AE2938E023C99276336940AE6D07BE43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_mB566DE0820BEE8FD6ADD3E72A67DA4BBCFB4B533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____values_1;
		NullCheck(L_0);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_1;
		L_1 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_0, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KeyCollection_get_Count_mB566DE0820BEE8FD6ADD3E72A67DA4BBCFB4B533(L_1, KeyCollection_get_Count_mB566DE0820BEE8FD6ADD3E72A67DA4BBCFB4B533_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = __this->____values_1;
		NullCheck(L_4);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_5;
		L_5 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_4, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_5);
		KeyCollection_CopyTo_mBD574373AE2938E023C99276336940AE6D07BE43(L_5, L_6, 0, KeyCollection_CopyTo_mBD574373AE2938E023C99276336940AE6D07BE43_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		return (RuntimeObject*)L_7;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings::WriteToJson(ThirdParty.Json.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSettings_WriteToJson_m0A82A3AED509D90106027CE5EB06C28CE9F12948 (ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* __this, JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* ___0_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_0 = ___0_writer;
		NullCheck(L_0);
		JsonWriter_WriteObjectStart_mC47B4A1605A1C079339922D7F29ADBA66B35401B(L_0, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = __this->____values_1;
		NullCheck(L_1);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_2;
		L_2 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_1, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_0), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_0014_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_3;
				L_3 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_0), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_3;
				String_t* L_4;
				L_4 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				V_2 = L_4;
				String_t* L_5 = V_2;
				if (!L_5)
				{
					goto IL_005d_1;
				}
			}
			{
				JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_6 = ___0_writer;
				String_t* L_7;
				L_7 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_6);
				JsonWriter_WritePropertyName_mEC7AEE15BCF42386CED538B1435AC84EDA94232F(L_6, L_7, NULL);
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = PersistenceManager_IsEncrypted_mA3A06A343C97CA06AB7B0B3E14AF09FB2185EC25(L_8, NULL);
				if (L_9)
				{
					goto IL_004f_1;
				}
			}
			{
				String_t* L_10 = __this->____uniqueKey_0;
				il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = PersistenceManager_IsEncrypted_mA3A06A343C97CA06AB7B0B3E14AF09FB2185EC25(L_10, NULL);
				if (!L_11)
				{
					goto IL_0056_1;
				}
			}

IL_004f_1:
			{
				String_t* L_12 = V_2;
				String_t* L_13;
				L_13 = UserCrypto_Encrypt_m5E35CF81DA34E31BDFC6091EFADDEF298A58A5A3(L_12, NULL);
				V_2 = L_13;
			}

IL_0056_1:
			{
				JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_14 = ___0_writer;
				String_t* L_15 = V_2;
				NullCheck(L_14);
				JsonWriter_Write_m478B207C9723F9FDF77A86ADF12BEEBA28930687(L_14, L_15, NULL);
			}

IL_005d_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_0), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0076;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* L_17 = ___0_writer;
		NullCheck(L_17);
		JsonWriter_WriteObjectEnd_mE81984C6014225DACC80DE04FA0E534D1DFFC4EC(L_17, NULL);
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
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__11__ctor_m90D29E8EBA9987ACD3295BFBB981598D1D96DCF0 (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__11_System_IDisposable_Dispose_m6B5C194750ACE9D947F89ED30E4C921E2A46AECC (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetEnumeratorU3Ed__11_U3CU3Em__Finally1_m42B9BE45BA2B43168C0D163D148259C26DFF82AF(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__11_MoveNext_mDEFA9B81A7A203E05AD15FE3F3FE9A516954B625 (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* V_2 = NULL;
	String_t* V_3 = NULL;
	ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* V_4 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0096:
			{// begin fault (depth: 1)
				U3CGetEnumeratorU3Ed__11_System_IDisposable_Dispose_m6B5C194750ACE9D947F89ED30E4C921E2A46AECC(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_006b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_009d;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_5 = L_4->____values_0;
				NullCheck(L_5);
				KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_6;
				L_6 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_5, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
				NullCheck(L_6);
				Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B L_7;
				L_7 = KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58(L_6, KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_3 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_3))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_3))->____currentKey_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0073_1;
			}

IL_0043_1:
			{
				Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* L_8 = (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*)(&__this->___U3CU3E7__wrap1_3);
				String_t* L_9;
				L_9 = Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_inline(L_8, Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var);
				V_3 = L_9;
				SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* L_10 = V_2;
				String_t* L_11 = V_3;
				NullCheck(L_10);
				ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_12;
				L_12 = SettingsCollection_get_Item_m04C68FF7CF6717C84563DA3EABE95C79D4FA9D52(L_10, L_11, NULL);
				V_4 = L_12;
				ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_13 = V_4;
				__this->___U3CU3E2__current_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_009d;
			}

IL_006b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0073_1:
			{
				Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* L_14 = (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*)(&__this->___U3CU3E7__wrap1_3);
				bool L_15;
				L_15 = Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F(L_14, Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0043_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__11_U3CU3Em__Finally1_m42B9BE45BA2B43168C0D163D148259C26DFF82AF(__this, NULL);
				Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* L_16 = (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*)(&__this->___U3CU3E7__wrap1_3);
				il2cpp_codegen_initobj(L_16, sizeof(Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B));
				V_0 = (bool)0;
				goto IL_009d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__11_U3CU3Em__Finally1_m42B9BE45BA2B43168C0D163D148259C26DFF82AF (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* L_0 = (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*)(&__this->___U3CU3E7__wrap1_3);
		Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C(L_0, Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var);
		return;
	}
}
// Amazon.Runtime.Internal.Settings.SettingsCollection/ObjectSettings Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::System.Collections.Generic.IEnumerator<Amazon.Runtime.Internal.Settings.SettingsCollection.ObjectSettings>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* U3CGetEnumeratorU3Ed__11_System_Collections_Generic_IEnumeratorU3CAmazon_Runtime_Internal_Settings_SettingsCollection_ObjectSettingsU3E_get_Current_m9EAEDC4313429729BCF9A6ADBED2C8A92713A2E1 (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) 
{
	{
		ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__11_System_Collections_IEnumerator_Reset_m055EACDBCB487F6051E3C3E5EA6DCA92690AF747 (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__11_System_Collections_IEnumerator_Reset_m055EACDBCB487F6051E3C3E5EA6DCA92690AF747_RuntimeMethod_var)));
	}
}
// System.Object Amazon.Runtime.Internal.Settings.SettingsCollection/<GetEnumerator>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__11_System_Collections_IEnumerator_get_Current_mA92F2706B8C710A9B9D059A3EAAC0C445BA70223 (U3CGetEnumeratorU3Ed__11_t9BEA4F87C3409C6331A7EE3F2D8AB3193B3B107F* __this, const RuntimeMethod* method) 
{
	{
		ObjectSettings_t1B826B1DDC920724098D41216B351E6FBE96A9B7* L_0 = __this->___U3CU3E2__current_1;
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
// System.String Amazon.Runtime.Internal.Settings.UserCrypto::Decrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserCrypto_Decrypt_m9C88CCE708837E24B18CEAC6A27C158520695307 (String_t* ___0_encrypted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BD5BCC58F7BACDE8F53CD96E4B485F98C5317A9);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	int32_t V_1 = 0;
	DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		V_5 = 0;
		goto IL_002b;
	}

IL_000b:
	{
		String_t* L_1 = ___0_encrypted;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_1, L_2, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_4;
		L_4 = Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9(L_3, ((int32_t)16), NULL);
		V_6 = L_4;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_5 = V_0;
		uint8_t L_6 = V_6;
		NullCheck(L_5);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_5, L_6, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_7 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_7, 2));
	}

IL_002b:
	{
		int32_t L_8 = V_5;
		String_t* L_9 = ___0_encrypted;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000b;
		}
	}
	{
		V_1 = 1;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_13;
		L_13 = UserCrypto_ConvertData_m9C6587DE6B1241EF5F08699E6BFB826A8D76221E(L_12, NULL);
		V_2 = L_13;
		il2cpp_codegen_initobj((&V_3), sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47));
		il2cpp_codegen_initobj((&V_4), sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c2:
			{// begin finally (depth: 1)
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_14 = V_2;
					intptr_t L_15 = L_14.___pbData_1;
					intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_17;
					L_17 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_15, L_16, NULL);
					if (!L_17)
					{
						goto IL_00df;
					}
				}
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_18 = V_2;
					intptr_t L_19 = L_18.___pbData_1;
					il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
					Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_19, NULL);
				}

IL_00df:
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_20 = V_3;
					intptr_t L_21 = L_20.___pbData_1;
					intptr_t L_22 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_23;
					L_23 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_21, L_22, NULL);
					if (!L_23)
					{
						goto IL_00fc;
					}
				}
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_24 = V_3;
					intptr_t L_25 = L_24.___pbData_1;
					il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
					Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_25, NULL);
				}

IL_00fc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_initobj((&V_7), sizeof(CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334));
				intptr_t L_26 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				int32_t L_27 = V_1;
				bool L_28;
				L_28 = UserCrypto_CryptUnprotectData_mA4973EBB11B72B6A2D01FB043B5386D6C6380D0B((&V_2), _stringLiteral3BD5BCC58F7BACDE8F53CD96E4B485F98C5317A9, (&V_4), L_26, (&V_7), L_27, (&V_3), NULL);
				if (L_28)
				{
					goto IL_0093_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
				int32_t L_29;
				L_29 = Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379(NULL);
				V_9 = L_29;
				String_t* L_30;
				L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_9), NULL);
				String_t* L_31;
				L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC36F9CDDF13DDB28684738079C2A3061043C55AD)), L_30, NULL);
				AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4* L_32 = (AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4_il2cpp_TypeInfo_var)));
				NullCheck(L_32);
				AmazonClientException__ctor_mD79D13D6A21E949F64AF9554717EE6D525492D32(L_32, L_31, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserCrypto_Decrypt_m9C88CCE708837E24B18CEAC6A27C158520695307_RuntimeMethod_var)));
			}

IL_0093_1:
			{
				DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_33 = V_3;
				int32_t L_34 = L_33.___cbData_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_34);
				V_8 = L_35;
				DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_36 = V_3;
				intptr_t L_37 = L_36.___pbData_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_8;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_8;
				NullCheck(L_39);
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_37, L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_40;
				L_40 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_8;
				NullCheck(L_40);
				String_t* L_42;
				L_42 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_40, L_41);
				V_10 = L_42;
				goto IL_00fd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fd:
	{
		String_t* L_43 = V_10;
		return L_43;
	}
}
// System.String Amazon.Runtime.Internal.Settings.UserCrypto::Encrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserCrypto_Encrypt_m5E35CF81DA34E31BDFC6091EFADDEF298A58A5A3 (String_t* ___0_unencrypted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BD5BCC58F7BACDE8F53CD96E4B485F98C5317A9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	StringBuilder_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	{
		V_0 = 1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		String_t* L_1 = ___0_unencrypted;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_3;
		L_3 = UserCrypto_ConvertData_m9C6587DE6B1241EF5F08699E6BFB826A8D76221E(L_2, NULL);
		V_1 = L_3;
		il2cpp_codegen_initobj((&V_2), sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47));
		il2cpp_codegen_initobj((&V_3), sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d9:
			{// begin finally (depth: 1)
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_4 = V_1;
					intptr_t L_5 = L_4.___pbData_1;
					intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_7;
					L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
					if (!L_7)
					{
						goto IL_00f6;
					}
				}
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_8 = V_1;
					intptr_t L_9 = L_8.___pbData_1;
					il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
					Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_9, NULL);
				}

IL_00f6:
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_10 = V_2;
					intptr_t L_11 = L_10.___pbData_1;
					intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_13;
					L_13 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_11, L_12, NULL);
					if (!L_13)
					{
						goto IL_0113;
					}
				}
				{
					DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_14 = V_2;
					intptr_t L_15 = L_14.___pbData_1;
					il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
					Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_15, NULL);
				}

IL_0113:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_initobj((&V_4), sizeof(CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334));
				intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				int32_t L_17 = V_0;
				bool L_18;
				L_18 = UserCrypto_CryptProtectData_m6F4837EBE1FA67E8B5ACEB3E6D3D269488072E01((&V_1), _stringLiteral3BD5BCC58F7BACDE8F53CD96E4B485F98C5317A9, (&V_3), L_16, (&V_4), L_17, (&V_2), NULL);
				if (L_18)
				{
					goto IL_0063_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var)));
				int32_t L_19;
				L_19 = Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379(NULL);
				V_7 = L_19;
				String_t* L_20;
				L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
				String_t* L_21;
				L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC36F9CDDF13DDB28684738079C2A3061043C55AD)), L_20, NULL);
				AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4* L_22 = (AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4_il2cpp_TypeInfo_var)));
				NullCheck(L_22);
				AmazonClientException__ctor_mD79D13D6A21E949F64AF9554717EE6D525492D32(L_22, L_21, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserCrypto_Encrypt_m5E35CF81DA34E31BDFC6091EFADDEF298A58A5A3_RuntimeMethod_var)));
			}

IL_0063_1:
			{
				DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_23 = V_2;
				int32_t L_24 = L_23.___cbData_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_24);
				V_5 = L_25;
				DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_26 = V_2;
				intptr_t L_27 = L_26.___pbData_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_5;
				NullCheck(L_29);
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_27, L_28, 0, ((int32_t)(((RuntimeArray*)L_29)->max_length)), NULL);
				StringBuilder_t* L_30 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_30, NULL);
				V_6 = L_30;
				V_8 = 0;
				goto IL_00ba_1;
			}

IL_008e_1:
			{
				StringBuilder_t* L_31 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_5;
				int32_t L_33 = V_8;
				NullCheck(L_32);
				int32_t L_34 = L_33;
				uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				String_t* L_36;
				L_36 = Convert_ToString_m33C16D8DB747139A4F5012633E0ABFF1D8E69BBB(L_35, ((int32_t)16), NULL);
				NullCheck(L_36);
				String_t* L_37;
				L_37 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_36, 2, ((int32_t)48), NULL);
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_38;
				L_38 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				NullCheck(L_37);
				String_t* L_39;
				L_39 = String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1(L_37, L_38, NULL);
				NullCheck(L_31);
				StringBuilder_t* L_40;
				L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, L_39, NULL);
				int32_t L_41 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
			}

IL_00ba_1:
			{
				int32_t L_42 = V_8;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_5;
				NullCheck(L_43);
				if ((((int32_t)L_42) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), 1)))))
				{
					goto IL_008e_1;
				}
			}
			{
				StringBuilder_t* L_44 = V_6;
				NullCheck(L_44);
				String_t* L_45;
				L_45 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_46;
				L_46 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				NullCheck(L_45);
				String_t* L_47;
				L_47 = String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1(L_45, L_46, NULL);
				V_9 = L_47;
				goto IL_0114;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0114:
	{
		String_t* L_48 = V_9;
		return L_48;
	}
}
// Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB Amazon.Runtime.Internal.Settings.UserCrypto::ConvertData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 UserCrypto_ConvertData_m9C6587DE6B1241EF5F08699E6BFB826A8D76221E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		(&V_0)->___pbData_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		NullCheck(L_2);
		(&V_0)->___cbData_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_data;
		DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_4 = V_0;
		intptr_t L_5 = L_4.___pbData_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_data;
		NullCheck(L_6);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_3, 0, L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47 L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Amazon.Runtime.Internal.Settings.UserCrypto::CryptProtectData(Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.String,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.IntPtr,Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT&,Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserCrypto_CryptProtectData_m6F4837EBE1FA67E8B5ACEB3E6D3D269488072E01 (DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___0_pDataIn, String_t* ___1_szDataDescr, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___2_pOptionalEntropy, intptr_t ___3_pvReserved, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334* ___4_pPromptStruct, int32_t ___5_dwFlags, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___6_pDataOut, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, Il2CppChar*, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, intptr_t, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke*, int32_t, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Crypt32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*) + sizeof(Il2CppChar*) + sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*) + sizeof(intptr_t) + sizeof(CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Crypt32.dll"), "CryptProtectData", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_szDataDescr' to native representation
	Il2CppChar* ____1_szDataDescr_marshaled = NULL;
	if (___1_szDataDescr != NULL)
	{
		____1_szDataDescr_marshaled = &___1_szDataDescr->____firstChar_5;
	}

	// Marshaling of parameter '___4_pPromptStruct' to native representation
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke* ____4_pPromptStruct_marshaled = NULL;
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke ____4_pPromptStruct_marshaled_dereferenced = {};
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke(*___4_pPromptStruct, ____4_pPromptStruct_marshaled_dereferenced);
	____4_pPromptStruct_marshaled = &____4_pPromptStruct_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Crypt32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CryptProtectData)(___0_pDataIn, ____1_szDataDescr_marshaled, ___2_pOptionalEntropy, ___3_pvReserved, ____4_pPromptStruct_marshaled, ___5_dwFlags, ___6_pDataOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_pDataIn, ____1_szDataDescr_marshaled, ___2_pOptionalEntropy, ___3_pvReserved, ____4_pPromptStruct_marshaled, ___5_dwFlags, ___6_pDataOut);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___4_pPromptStruct' back from native representation
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334 _____4_pPromptStruct_marshaled_unmarshaled_dereferenced;
	memset((&_____4_pPromptStruct_marshaled_unmarshaled_dereferenced), 0, sizeof(_____4_pPromptStruct_marshaled_unmarshaled_dereferenced));
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_back(*____4_pPromptStruct_marshaled, _____4_pPromptStruct_marshaled_unmarshaled_dereferenced);
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_cleanup(*____4_pPromptStruct_marshaled);
	*___4_pPromptStruct = _____4_pPromptStruct_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___4_pPromptStruct)->___szPrompt_3), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Amazon.Runtime.Internal.Settings.UserCrypto::CryptUnprotectData(Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.String,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&,System.IntPtr,Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT&,Amazon.Runtime.Internal.Settings.UserCrypto/CryptProtectFlags,Amazon.Runtime.Internal.Settings.UserCrypto/DATA_BLOB&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserCrypto_CryptUnprotectData_mA4973EBB11B72B6A2D01FB043B5386D6C6380D0B (DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___0_pDataIn, String_t* ___1_szDataDescr, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___2_pOptionalEntropy, intptr_t ___3_pvReserved, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334* ___4_pPromptStruct, int32_t ___5_dwFlags, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47* ___6_pDataOut, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, Il2CppChar*, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*, intptr_t, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke*, int32_t, DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Crypt32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*) + sizeof(Il2CppChar*) + sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*) + sizeof(intptr_t) + sizeof(CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(DATA_BLOB_t22F207B6DF193A4CAA29DD1AE746869A01045B47*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Crypt32.dll"), "CryptUnprotectData", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_szDataDescr' to native representation
	Il2CppChar* ____1_szDataDescr_marshaled = NULL;
	if (___1_szDataDescr != NULL)
	{
		____1_szDataDescr_marshaled = &___1_szDataDescr->____firstChar_5;
	}

	// Marshaling of parameter '___4_pPromptStruct' to native representation
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke* ____4_pPromptStruct_marshaled = NULL;
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke ____4_pPromptStruct_marshaled_dereferenced = {};
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke(*___4_pPromptStruct, ____4_pPromptStruct_marshaled_dereferenced);
	____4_pPromptStruct_marshaled = &____4_pPromptStruct_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Crypt32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CryptUnprotectData)(___0_pDataIn, ____1_szDataDescr_marshaled, ___2_pOptionalEntropy, ___3_pvReserved, ____4_pPromptStruct_marshaled, ___5_dwFlags, ___6_pDataOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_pDataIn, ____1_szDataDescr_marshaled, ___2_pOptionalEntropy, ___3_pvReserved, ____4_pPromptStruct_marshaled, ___5_dwFlags, ___6_pDataOut);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___4_pPromptStruct' back from native representation
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334 _____4_pPromptStruct_marshaled_unmarshaled_dereferenced;
	memset((&_____4_pPromptStruct_marshaled_unmarshaled_dereferenced), 0, sizeof(_____4_pPromptStruct_marshaled_unmarshaled_dereferenced));
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_back(*____4_pPromptStruct_marshaled, _____4_pPromptStruct_marshaled_unmarshaled_dereferenced);
	CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_cleanup(*____4_pPromptStruct_marshaled);
	*___4_pPromptStruct = _____4_pPromptStruct_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___4_pPromptStruct)->___szPrompt_3), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Amazon.Runtime.Internal.Settings.UserCrypto::get_IsUserCryptAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserCrypto_get_IsUserCryptAvailable_m6927C26EDA9508384987BC83671B3DA57A9691F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&((UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_StaticFields*)il2cpp_codegen_static_fields_for(UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_il2cpp_TypeInfo_var))->____isUserCryptAvailable_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	try
	{// begin try (depth: 1)
		String_t* L_1;
		L_1 = UserCrypto_Encrypt_m5E35CF81DA34E31BDFC6091EFADDEF298A58A5A3(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_2), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		((UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_StaticFields*)il2cpp_codegen_static_fields_for(UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_il2cpp_TypeInfo_var))->____isUserCryptAvailable_0 = L_2;
		goto IL_005a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Exception)
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B_il2cpp_TypeInfo_var)));
		Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* L_6;
		L_6 = Logger_GetLogger_m6AD010A1FE2A58CF45C3F0795573E15B6491B1B6(L_5, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		Exception_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		NullCheck(L_6);
		Logger_InfoFormat_m198671267F90E718C1ACF99404FCB535330B52AC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB055F3E99E7D476AA3A4DAF612A255EB4E5C45ED)), L_8, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_11), (bool)0, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var)));
		((UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_il2cpp_TypeInfo_var))))->____isUserCryptAvailable_0 = L_11;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_005a;
	}// end catch (depth: 1)

IL_005a:
	{
		bool L_12;
		L_12 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&((UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_StaticFields*)il2cpp_codegen_static_fields_for(UserCrypto_tAC0534D610CEA30E48FFFF92B807AE239BF82440_il2cpp_TypeInfo_var))->____isUserCryptAvailable_0), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		return L_12;
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
// Conversion methods for marshalling of: Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke(const CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334& unmarshaled, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke& marshaled)
{
	marshaled.___cbSize_0 = unmarshaled.___cbSize_0;
	marshaled.___dwPromptFlags_1 = unmarshaled.___dwPromptFlags_1;
	marshaled.___hwndApp_2 = unmarshaled.___hwndApp_2;
	marshaled.___szPrompt_3 = il2cpp_codegen_marshal_wstring(unmarshaled.___szPrompt_3);
}
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_back(const CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke& marshaled, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334& unmarshaled)
{
	int32_t unmarshaledcbSize_temp_0 = 0;
	unmarshaledcbSize_temp_0 = marshaled.___cbSize_0;
	unmarshaled.___cbSize_0 = unmarshaledcbSize_temp_0;
	int32_t unmarshaleddwPromptFlags_temp_1 = 0;
	unmarshaleddwPromptFlags_temp_1 = marshaled.___dwPromptFlags_1;
	unmarshaled.___dwPromptFlags_1 = unmarshaleddwPromptFlags_temp_1;
	intptr_t unmarshaledhwndApp_temp_2;
	memset((&unmarshaledhwndApp_temp_2), 0, sizeof(unmarshaledhwndApp_temp_2));
	unmarshaledhwndApp_temp_2 = marshaled.___hwndApp_2;
	unmarshaled.___hwndApp_2 = unmarshaledhwndApp_temp_2;
	unmarshaled.___szPrompt_3 = il2cpp_codegen_marshal_wstring_result(marshaled.___szPrompt_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___szPrompt_3), (void*)il2cpp_codegen_marshal_wstring_result(marshaled.___szPrompt_3));
}
// Conversion method for clean up from marshalling of: Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_pinvoke_cleanup(CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___szPrompt_3);
	marshaled.___szPrompt_3 = NULL;
}
// Conversion methods for marshalling of: Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_com(const CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334& unmarshaled, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_com& marshaled)
{
	marshaled.___cbSize_0 = unmarshaled.___cbSize_0;
	marshaled.___dwPromptFlags_1 = unmarshaled.___dwPromptFlags_1;
	marshaled.___hwndApp_2 = unmarshaled.___hwndApp_2;
	marshaled.___szPrompt_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___szPrompt_3);
}
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_com_back(const CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_com& marshaled, CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334& unmarshaled)
{
	int32_t unmarshaledcbSize_temp_0 = 0;
	unmarshaledcbSize_temp_0 = marshaled.___cbSize_0;
	unmarshaled.___cbSize_0 = unmarshaledcbSize_temp_0;
	int32_t unmarshaleddwPromptFlags_temp_1 = 0;
	unmarshaleddwPromptFlags_temp_1 = marshaled.___dwPromptFlags_1;
	unmarshaled.___dwPromptFlags_1 = unmarshaleddwPromptFlags_temp_1;
	intptr_t unmarshaledhwndApp_temp_2;
	memset((&unmarshaledhwndApp_temp_2), 0, sizeof(unmarshaledhwndApp_temp_2));
	unmarshaledhwndApp_temp_2 = marshaled.___hwndApp_2;
	unmarshaled.___hwndApp_2 = unmarshaledhwndApp_temp_2;
	unmarshaled.___szPrompt_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___szPrompt_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___szPrompt_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___szPrompt_3));
}
// Conversion method for clean up from marshalling of: Amazon.Runtime.Internal.Settings.UserCrypto/CRYPTPROTECT_PROMPTSTRUCT
IL2CPP_EXTERN_C void CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshal_com_cleanup(CRYPTPROTECT_PROMPTSTRUCT_tF3E9AB6C24DD0D6F87FC64AF24FB2E841BAB6334_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___szPrompt_3);
	marshaled.___szPrompt_3 = NULL;
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
// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::IsSet(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fn_IsSet_m8D4C95F3D1A4E202CD10926211C90D54FAB99EFF (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Object Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::GetAttr(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Fn_GetAttr_m07FEC12C0AEE89B7B3E9ACC98D3DC941E77E01C7 (RuntimeObject* ___0_value, String_t* ___1_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	{
		String_t* L_0 = ___1_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fn_GetAttr_m07FEC12C0AEE89B7B3E9ACC98D3DC941E77E01C7_RuntimeMethod_var)));
	}

IL_0013:
	{
		String_t* L_3 = ___1_path;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_5, NULL);
		V_0 = L_6;
		RuntimeObject* L_7 = ___0_value;
		V_1 = L_7;
		V_2 = 0;
		goto IL_00e9;
	}

IL_002e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		int32_t L_12 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), 1))))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_14, ((int32_t)91), NULL);
		V_4 = L_15;
		String_t* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_19, 0, L_20, NULL);
		V_6 = L_21;
		String_t* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = V_4;
		NullCheck(L_22);
		String_t* L_26;
		L_26 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_24, L_25)), 1)), NULL);
		int32_t L_27;
		L_27 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_26, NULL);
		V_7 = L_27;
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_29 = V_1;
		String_t* L_30 = V_6;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_29, IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* System.Object Amazon.Runtime.Endpoints.IPropertyBag::get_Item(System.String) */, IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_29, IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var)), L_30);
		V_1 = L_31;
	}

IL_008c:
	{
		RuntimeObject* L_32 = V_1;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_32, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)))
		{
			goto IL_009f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4763B865A78E65F5D0D5CC6272B2EA709418F3CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fn_GetAttr_m07FEC12C0AEE89B7B3E9ACC98D3DC941E77E01C7_RuntimeMethod_var)));
	}

IL_009f:
	{
		RuntimeObject* L_34 = V_1;
		V_8 = ((RuntimeObject*)Castclass((RuntimeObject*)L_34, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		int32_t L_35 = V_7;
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_36 = V_7;
		RuntimeObject* L_37 = V_8;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_37);
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_38, 1)))))
		{
			goto IL_00bb;
		}
	}

IL_00b9:
	{
		return NULL;
	}

IL_00bb:
	{
		RuntimeObject* L_39 = V_8;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_39, L_40);
		return L_41;
	}

IL_00c5:
	{
		RuntimeObject* L_42 = V_1;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_42, IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var)))
		{
			goto IL_00d8;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_43 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_43);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50D9D63ABA4F5B0F4E4A6E78C28FFF44E1C93879)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fn_GetAttr_m07FEC12C0AEE89B7B3E9ACC98D3DC941E77E01C7_RuntimeMethod_var)));
	}

IL_00d8:
	{
		RuntimeObject* L_44 = V_1;
		String_t* L_45 = V_3;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_44, IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* System.Object Amazon.Runtime.Endpoints.IPropertyBag::get_Item(System.String) */, IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_44, IPropertyBag_t3350D88D6F7E670BAA2CE50A4B5E6B2F993E6CA7_il2cpp_TypeInfo_var)), L_45);
		V_1 = L_46;
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00e9:
	{
		int32_t L_48 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = V_0;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		return L_50;
	}
}
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::Partition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* Fn_Partition_m08254D5DDF389310AA968403ED6D60194DBC52F9 (String_t* ___0_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_region;
		il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_1;
		L_1 = Partition_GetPartitionByRegion_m2162A14A672672CEFB0306908F2299B4BDF5EE6A(L_0, NULL);
		return L_1;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::Interpolate(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fn_Interpolate_m0111267FF7F38F812C2836DDA4E63AF9F8F40292 (String_t* ___0_template, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_refs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	StringBuilder_t* V_4 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t G_B4_0 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0132;
	}

IL_000d:
	{
		String_t* L_1 = ___0_template;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_2 = L_3;
		int32_t L_4 = V_1;
		String_t* L_5 = ___0_template;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, 1)))))
		{
			goto IL_0023;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002c;
	}

IL_0023:
	{
		String_t* L_7 = ___0_template;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		G_B4_0 = ((int32_t)(L_9));
	}

IL_002c:
	{
		V_3 = G_B4_0;
		Il2CppChar L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0049;
		}
	}
	{
		Il2CppChar L_11 = V_3;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0049;
		}
	}
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)123), NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		goto IL_012e;
	}

IL_0049:
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0065;
		}
	}
	{
		Il2CppChar L_16 = V_3;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0065;
		}
	}
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)125), NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		goto IL_012e;
	}

IL_0065:
	{
		Il2CppChar L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0116;
		}
	}
	{
		StringBuilder_t* L_21 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_21, NULL);
		V_4 = L_21;
		goto IL_0089;
	}

IL_0076:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		StringBuilder_t* L_23 = V_4;
		String_t* L_24 = ___0_template;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_25, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, L_26, NULL);
	}

IL_0089:
	{
		int32_t L_28 = V_1;
		String_t* L_29 = ___0_template;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		if ((((int32_t)L_28) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_31 = ___0_template;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		Il2CppChar L_33;
		L_33 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0076;
		}
	}

IL_00a1:
	{
		int32_t L_34 = V_1;
		String_t* L_35 = ___0_template;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_36, 1))))))
		{
			goto IL_00b7;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFEF40E2F9F0EA0B2DA43E4EE34B50EDC91FE806B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fn_Interpolate_m0111267FF7F38F812C2836DDA4E63AF9F8F40292_RuntimeMethod_var)));
	}

IL_00b7:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		StringBuilder_t* L_39 = V_4;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)35));
		NullCheck(L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43;
		L_43 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_40, L_42, NULL);
		V_5 = L_43;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = V_5;
		NullCheck(L_44);
		int32_t L_45 = 0;
		String_t* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_6 = L_46;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_5;
		NullCheck(L_47);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t* L_48 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_49 = ___1_refs;
		String_t* L_50 = V_6;
		NullCheck(L_49);
		RuntimeObject* L_51;
		L_51 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_49, L_50, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_5;
		NullCheck(L_52);
		int32_t L_53 = 1;
		String_t* L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		il2cpp_codegen_runtime_class_init_inline(Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
		RuntimeObject* L_55;
		L_55 = Fn_GetAttr_m07FEC12C0AEE89B7B3E9ACC98D3DC941E77E01C7(L_51, L_54, NULL);
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
		NullCheck(L_48);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_48, L_56, NULL);
		goto IL_012e;
	}

IL_0100:
	{
		StringBuilder_t* L_58 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_59 = ___1_refs;
		String_t* L_60 = V_6;
		NullCheck(L_59);
		RuntimeObject* L_61;
		L_61 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_59, L_60, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_61);
		NullCheck(L_58);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, L_62, NULL);
		goto IL_012e;
	}

IL_0116:
	{
		Il2CppChar L_64 = V_2;
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0126;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_65 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0668BAF572FBDE1C15B91C21DF3940B3E09D4AE9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fn_Interpolate_m0111267FF7F38F812C2836DDA4E63AF9F8F40292_RuntimeMethod_var)));
	}

IL_0126:
	{
		StringBuilder_t* L_66 = V_0;
		Il2CppChar L_67 = V_2;
		NullCheck(L_66);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_66, L_67, NULL);
	}

IL_012e:
	{
		int32_t L_69 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0132:
	{
		int32_t L_70 = V_1;
		String_t* L_71 = ___0_template;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_71, NULL);
		if ((((int32_t)L_70) < ((int32_t)L_72)))
		{
			goto IL_000d;
		}
	}
	{
		StringBuilder_t* L_73 = V_0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_73);
		return L_74;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::InterpolateJson(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fn_InterpolateJson_m973799ADD4BC916591E1F7692D807175155E9B23 (String_t* ___0_json, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_refs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tC2C7096CC820784832B8D7FBBD479F23443152A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_json;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_tC2C7096CC820784832B8D7FBBD479F23443152A7_il2cpp_TypeInfo_var);
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_1;
		L_1 = JsonMapper_ToObject_m84F532A10D900F85F28983FE4AF9E431DD954064(L_0, NULL);
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_2 = L_1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ___1_refs;
		il2cpp_codegen_runtime_class_init_inline(Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
		Fn_InterpolateJson_m76EB582309236E27A60A0E33F4E2C25CBF7F7807(L_2, L_3, NULL);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = JsonData_ToJson_m66E05C07501C5FC18130B7A0E84CB413FE45103F(L_2, NULL);
		return L_4;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::InterpolateJson(ThirdParty.Json.LitJson.JsonData,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fn_InterpolateJson_m76EB582309236E27A60A0E33F4E2C25CBF7F7807 (JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* ___0_json, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_refs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t84520C50F8398E529BCCABC46209839897BD8109_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_0 = ___0_json;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonData_get_IsString_mDB8DD649F7E0338E497E88AF2BA83F6EF2431FAE(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_2 = ___0_json;
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_3 = L_2;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(15 /* System.String ThirdParty.Json.LitJson.IJsonWrapper::GetString() */, IJsonWrapper_t84520C50F8398E529BCCABC46209839897BD8109_il2cpp_TypeInfo_var, L_3);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___1_refs;
		il2cpp_codegen_runtime_class_init_inline(Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Fn_Interpolate_m0111267FF7F38F812C2836DDA4E63AF9F8F40292(L_4, L_5, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(23 /* System.Void ThirdParty.Json.LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t84520C50F8398E529BCCABC46209839897BD8109_il2cpp_TypeInfo_var, L_3, L_6);
	}

IL_001a:
	{
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_7 = ___0_json;
		NullCheck(L_7);
		bool L_8;
		L_8 = JsonData_get_IsObject_m1AAD495C5DB1E3D71F49AC96F722EA25B2E1903E(L_7, NULL);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_9 = ___0_json;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = JsonData_get_PropertyNames_m8C3B13508EC0DA38D3CCE952F430808181EC2045(L_9, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_10);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_0;
					if (!L_12)
					{
						goto IL_0057;
					}
				}
				{
					RuntimeObject* L_13 = V_0;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_0057:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_0030_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_14);
				V_1 = L_15;
				JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_16 = ___0_json;
				String_t* L_17 = V_1;
				NullCheck(L_16);
				JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_18;
				L_18 = JsonData_get_Item_m7B7DAC4F94209B59F3D06A66D43E8B1C23EC82E9(L_16, L_17, NULL);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = ___1_refs;
				il2cpp_codegen_runtime_class_init_inline(Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
				Fn_InterpolateJson_m76EB582309236E27A60A0E33F4E2C25CBF7F7807(L_18, L_19, NULL);
			}

IL_0044_1:
			{
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_22 = ___0_json;
		NullCheck(L_22);
		bool L_23;
		L_23 = JsonData_get_IsArray_mC14E41FDAACBEDC1EAE5C87E04B75F287822F4C6(L_22, NULL);
		if (!L_23)
		{
			goto IL_0095;
		}
	}
	{
		JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B* L_24 = ___0_json;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_24);
		V_2 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0084:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_26 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_26, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_27 = V_3;
					if (!L_27)
					{
						goto IL_0094;
					}
				}
				{
					RuntimeObject* L_28 = V_3;
					NullCheck(L_28);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_28);
				}

IL_0094:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0069_1:
			{
				RuntimeObject* L_29 = V_2;
				NullCheck(L_29);
				RuntimeObject* L_30;
				L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = ___1_refs;
				il2cpp_codegen_runtime_class_init_inline(Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
				Fn_InterpolateJson_m76EB582309236E27A60A0E33F4E2C25CBF7F7807(((JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B*)CastclassClass((RuntimeObject*)L_30, JsonData_t1A2C296C1BA3CC0A1765658E1155EE66B071E39B_il2cpp_TypeInfo_var)), L_31, NULL);
			}

IL_007a_1:
			{
				RuntimeObject* L_32 = V_2;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0069_1;
				}
			}
			{
				goto IL_0095;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Fn::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fn__cctor_m238F7516D593B0E4EFD0A124B76EE8BCA8DAF5BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		((Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_StaticFields*)il2cpp_codegen_static_fields_for(Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var))->___SupportedSchemas_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_StaticFields*)il2cpp_codegen_static_fields_for(Fn_tB85BCF3F0A008A9042649309D5B8A6902879455F_il2cpp_TypeInfo_var))->___SupportedSchemas_0), (void*)L_3);
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
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_name_m9895D923F8DCEFFD6ED0534EB9BE9DBD7D329E0B (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_0, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_dnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_dnsSuffix_mBA667EE564F8CA1D66D32AE89EFB7DE3802288CF (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FF7FD5A14D3588C0E5C1B1C65A0D5A3DBCD51CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteral8FF7FD5A14D3588C0E5C1B1C65A0D5A3DBCD51CE, L_0, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_dualStackDnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_dualStackDnsSuffix_mCEDC38E8556BE427BEA494B147AD3EB9F8396CD0 (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60B407F8DA438A1C3115D511132BC209615C1A3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteral60B407F8DA438A1C3115D511132BC209615C1A3A, L_0, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_supportsFIPS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_supportsFIPS_m776832EA979745087E96D07CA0374C816DD0B993 (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED391E80759A7124962CF84BA1A28BE268AB7A48);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteralED391E80759A7124962CF84BA1A28BE268AB7A48, L_2, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::set_supportsDualStack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition_set_supportsDualStack_mF7377DEC17AF59DDAA1E3B9D3C85528D306B9F0B (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9F5E5F570C2151A8396D37556239477353700D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteral9E9F5E5F570C2151A8396D37556239477353700D, L_2, NULL);
		return;
	}
}
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::FromPartitionData(Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* Partition_FromPartitionData_mE6343E64BE60DAA7898CD5F3412504CFE0FBDAB4 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_0 = (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32*)il2cpp_codegen_object_new(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Partition__ctor_m623BF5F481C053513FAB6F8B21CF4192D64085EF(L_0, NULL);
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_1 = L_0;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_2 = ___0_data;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = PartitionAttributesShape_get_name_mC4CFB4B716B9EC762C7918AD125076D89C10BDC3_inline(L_2, NULL);
		NullCheck(L_1);
		Partition_set_name_m9895D923F8DCEFFD6ED0534EB9BE9DBD7D329E0B(L_1, L_3, NULL);
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_4 = L_1;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_5 = ___0_data;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = PartitionAttributesShape_get_dnsSuffix_mF02D5463D26245F5B47F1BE22686384F747037FA_inline(L_5, NULL);
		NullCheck(L_4);
		Partition_set_dnsSuffix_mBA667EE564F8CA1D66D32AE89EFB7DE3802288CF(L_4, L_6, NULL);
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_7 = L_4;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_8 = ___0_data;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = PartitionAttributesShape_get_dualStackDnsSuffix_mC058856B21FB662857B7D809DA58AF21672FE4CF_inline(L_8, NULL);
		NullCheck(L_7);
		Partition_set_dualStackDnsSuffix_mCEDC38E8556BE427BEA494B147AD3EB9F8396CD0(L_7, L_9, NULL);
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_10 = L_7;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_11 = ___0_data;
		NullCheck(L_11);
		bool L_12;
		L_12 = PartitionAttributesShape_get_supportsFIPS_mCD7909A9D1856996122DAD9439E615141D211DF2_inline(L_11, NULL);
		NullCheck(L_10);
		Partition_set_supportsFIPS_m776832EA979745087E96D07CA0374C816DD0B993(L_10, L_12, NULL);
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_13 = L_10;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_14 = ___0_data;
		NullCheck(L_14);
		bool L_15;
		L_15 = PartitionAttributesShape_get_supportsDualStack_mF31AE3BA3A11E9BE7BB75C21A81D929F3BFA2DD1_inline(L_14, NULL);
		NullCheck(L_13);
		Partition_set_supportsDualStack_mF7377DEC17AF59DDAA1E3B9D3C85528D306B9F0B(L_13, L_15, NULL);
		return L_13;
	}
}
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::GetPartitionByRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* Partition_GetPartitionByRegion_m2162A14A672672CEFB0306908F2299B4BDF5EE6A (String_t* ___0_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7214792241966DB46DBE70D29F0E0A10607985CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0EF75522C77E671C9BE6034EA94D70AB4706DB39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mCD17F024660A8F6817894B4F912756C35BA77590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m914DBB022746497AB3D84A348F0E740DF5894D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0EF02344BB69E1DD4C7F0332AC77BADA3D49BB28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m02767CEE01FB031C474BB851787FF3FFCA3CEA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mFB3570FF8177199C646FC0DDFB24E41670D2EDAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_0 = NULL;
	Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* V_1 = NULL;
	Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
		ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_0 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____locker_1;
		NullCheck(L_0);
		ReaderWriterLockSlim_EnterReadLock_m010CB4F0FC253BB5EC9BE8D54EBB5C4FDA778C39(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
				ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_1 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____locker_1;
				NullCheck(L_1);
				ReaderWriterLockSlim_ExitReadLock_m49891BB1D1FA606B9EBD354D575D7F1ECBD53E87(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
				Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_2 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
				String_t* L_3 = ___0_region;
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_TryGetValue_m7214792241966DB46DBE70D29F0E0A10607985CF(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m7214792241966DB46DBE70D29F0E0A10607985CF_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_5 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
				Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_6;
				L_6 = Partition_FromPartitionData_mE6343E64BE60DAA7898CD5F3412504CFE0FBDAB4(L_5, NULL);
				V_1 = L_6;
				goto IL_0089;
			}

IL_0022_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
				Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_7 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
				NullCheck(L_7);
				KeyCollection_tDFA6477B199B58604370A660B1D7D61EB2DA8413* L_8;
				L_8 = Dictionary_2_get_Keys_mCD17F024660A8F6817894B4F912756C35BA77590(L_7, Dictionary_2_get_Keys_mCD17F024660A8F6817894B4F912756C35BA77590_RuntimeMethod_var);
				NullCheck(L_8);
				Enumerator_t452E3C605F98E2375411FDC3FDCD1CB71EE65DE9 L_9;
				L_9 = KeyCollection_GetEnumerator_mFB3570FF8177199C646FC0DDFB24E41670D2EDAD(L_8, KeyCollection_GetEnumerator_mFB3570FF8177199C646FC0DDFB24E41670D2EDAD_RuntimeMethod_var);
				V_2 = L_9;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0063_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m914DBB022746497AB3D84A348F0E740DF5894D5B((&V_2), Enumerator_Dispose_m914DBB022746497AB3D84A348F0E740DF5894D5B_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0058_2;
					}

IL_0034_2:
					{
						String_t* L_10;
						L_10 = Enumerator_get_Current_m02767CEE01FB031C474BB851787FF3FFCA3CEA57_inline((&V_2), Enumerator_get_Current_m02767CEE01FB031C474BB851787FF3FFCA3CEA57_RuntimeMethod_var);
						V_3 = L_10;
						String_t* L_11 = ___0_region;
						String_t* L_12 = V_3;
						il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
						bool L_13;
						L_13 = Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA(L_11, L_12, NULL);
						if (!L_13)
						{
							goto IL_0058_2;
						}
					}
					{
						il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
						Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_14 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
						String_t* L_15 = V_3;
						NullCheck(L_14);
						PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_16;
						L_16 = Dictionary_2_get_Item_m0EF75522C77E671C9BE6034EA94D70AB4706DB39(L_14, L_15, Dictionary_2_get_Item_m0EF75522C77E671C9BE6034EA94D70AB4706DB39_RuntimeMethod_var);
						Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_17;
						L_17 = Partition_FromPartitionData_mE6343E64BE60DAA7898CD5F3412504CFE0FBDAB4(L_16, NULL);
						V_1 = L_17;
						goto IL_0089;
					}

IL_0058_2:
					{
						bool L_18;
						L_18 = Enumerator_MoveNext_m0EF02344BB69E1DD4C7F0332AC77BADA3D49BB28((&V_2), Enumerator_MoveNext_m0EF02344BB69E1DD4C7F0332AC77BADA3D49BB28_RuntimeMethod_var);
						if (L_18)
						{
							goto IL_0034_2;
						}
					}
					{
						goto IL_0071_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0071_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
				PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_19 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____defaultPartition_4;
				Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_20;
				L_20 = Partition_FromPartitionData_mE6343E64BE60DAA7898CD5F3412504CFE0FBDAB4(L_19, NULL);
				V_1 = L_20;
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* L_21 = V_1;
		return L_21;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition__cctor_m04E4A27D1621E612BCDA57733045C1F9C07BED5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m15739907ABA4CE4042AD8BBB9E0F4B2A855FC336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09061AAF6F08B76E77FC5020FD9C87C2933B7D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09C4175DC4068FC0E4DA285C5C20E84195829AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F779762A3542E63C184E2576918C37D0124DD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral105786E0421D893D45321939CC4646611EA7471D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1377760A805A701D14524A755E063BA46DE79007);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14FAA7416684A4D55883815F5734E2EBD1ECC422);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral150614C398CB0B6729E02B8958AAAECF74557375);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral238F7412758781006ABE344D6EE66213428E4A8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3187738C01ADBF0EA34B9FA78C0E57BB5C5574A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335867AEB3830A0F794093F4182DA96C3E34F754);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34662E2B8C0F6171C3FB0E387D95A6BF1C51DF6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D454DEFF8F002C734F315888F0BF5B65C79804B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EA394190F5A302A19EBCEF5387362C01BFFADA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EAC0E0D2AFEB00A8829BC2ACD911A36B1CB63CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F956CFB2FBE9ECDD1C36CC8A144D0C3DFB5E53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4596D967BF83C23BBAA84EB41BC0EB8DD254F26C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479A1DD38F61C9B62C0855D17C13BF659287C0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4957859D6BB01C0300EED32F705F5641C8AB2406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B672BCE6C57CE353143EA7F2219D42AE4FB5504);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D1972D2E468EFAE967E9E13EA3B44BF8C6AD72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570607594C53495236BE155BD9A3BA6AEC6E77BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E7B25A1CBB02F5095343D84649FA3958229A92F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D67A7C0F90BA7F8251F9231A0B7B628013F628);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A6194253C51A33DAD6CD96631E03B1CBD5C334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D777DF2FC62168442A2177DD188FF908422D68A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2143C873D70B6500C8AB8583DFB83B5AC59FD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72127D71612084513C374CD310A7756829D8646A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7231763F8D403D284DCC9C946364CF5C3B5489E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7317DA622F13931211632F58498B0C9C3A1144DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76D8DC99317457E9712CF785632ECA992A204AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793B527FB51C74988996B0FA68E85BEA3F59EEF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA10D17C0971E1982CE3EAD37AAB7FE0AD70CE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8466AD39F3C02094F3DBA482C6C19704D2BCED93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89FC1CC3BE1F5704CEB65B133FA7835F808E4F74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DADFA34E77C97782064E6AD99BF9D625A95AD4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9335DCC2B6E3FC885FA4B3C4C8E765AE66A61C55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9844E838E5A48884CD95F2B3234665DE378AFDD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99A30C5B37BA8C885BC1AB4821AD5D21A1BD7B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D68B0B1AE86BCEFD810599A77E2B6E22084EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2802C98EA78FAB815D12E486143D1B37DA6421E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2D5214C73E59AD7D2768D3B1ECD4B4CAEBBAEFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA85134E500DAC77E33AC85D5BC8B3A018D007B21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3FC35D59D4F82C749EEAE0473946D741BE163FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB693EEC953CF674AB028CD873016998772D35BB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB825D3172945E8191FD84884D888955CED402C44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF16EEDE2669E9B7011FD77AF5DE5E850687C54D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4FD635D5D74D20D4BC26FA3FC2719C9E911CDB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC79DDFD4CFEBEEB514CB1DD51AF82AAEC45D7C19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCADAB1058F9E2B6319DB4170558B1BD03A84845F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBF65ABFBE811FC9014FCF8E87E83AF758DFE992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCBD049AB01A453E2AA323B566466E7EFD5E5D83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD181AF2E5811D814F82F53A69B252E82F41D56D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B6B327094498CA07F1AD00518D11DC7B4011F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD450882D2FD0C357A1421C9DAB7D1477475BC718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD536A1CDB30A364EB3C5FBAA4D37F4EA09BD0E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD689561CF37BA29AEB8668EBE94095E3F960EF9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C203D57A30CB5FC078C57629BF7B4562276B5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC9CE0E43D34F6D8F3ADAB3EDC9EEA9D1B4E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE58C2B7ADB9CAC27846220F4D9EEB0239F91E100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAEEF6D3F23974B5E3BD5E818811345B8441BC26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB7CA0531882B1DDB9C72F1A028D3EF51F90A429);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC969F3224F7F185E2D1AFCE455F9040CA18CADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF038D85198D2F234D0F3A85A6896B043F1946E52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6AE5EC7C6AB1BF2649960B2C55FD0675412A705);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDF887978D4ED6170BCF4E697D131821E8B6F1FD);
		s_Il2CppMethodInitialized = true;
	}
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_0 = NULL;
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_1 = NULL;
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_2 = NULL;
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_3 = NULL;
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_4 = NULL;
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_5 = NULL;
	PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* V_6 = NULL;
	{
		ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_0 = (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906*)il2cpp_codegen_object_new(ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReaderWriterLockSlim__ctor_m617A86382C7F076BC04E68726F50961C799688E8(L_0, NULL);
		((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____locker_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____locker_1), (void*)L_0);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_1 = (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE*)il2cpp_codegen_object_new(Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m15739907ABA4CE4042AD8BBB9E0F4B2A855FC336(L_1, Dictionary_2__ctor_m15739907ABA4CE4042AD8BBB9E0F4B2A855FC336_RuntimeMethod_var);
		((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2), (void*)L_1);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_2 = (Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE*)il2cpp_codegen_object_new(Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m15739907ABA4CE4042AD8BBB9E0F4B2A855FC336(L_2, Dictionary_2__ctor_m15739907ABA4CE4042AD8BBB9E0F4B2A855FC336_RuntimeMethod_var);
		((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3), (void*)L_2);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_3 = (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*)il2cpp_codegen_object_new(PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734(L_3, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_4 = L_3;
		NullCheck(L_4);
		PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline(L_4, _stringLiteral7231763F8D403D284DCC9C946364CF5C3B5489E7, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_5 = L_4;
		NullCheck(L_5);
		PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline(L_5, _stringLiteral3187738C01ADBF0EA34B9FA78C0E57BB5C5574A6, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_6 = L_5;
		NullCheck(L_6);
		PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline(L_6, _stringLiteralEC969F3224F7F185E2D1AFCE455F9040CA18CADC, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_7 = L_6;
		NullCheck(L_7);
		PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline(L_7, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_8 = L_7;
		NullCheck(L_8);
		PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline(L_8, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_9 = L_8;
		NullCheck(L_9);
		PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline(L_9, _stringLiteral0F779762A3542E63C184E2576918C37D0124DD4F, NULL);
		V_0 = L_9;
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_10 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_11 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_10, _stringLiteral793B527FB51C74988996B0FA68E85BEA3F59EEF6, L_11, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_12 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_13 = V_0;
		NullCheck(L_12);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_12, _stringLiteral60D67A7C0F90BA7F8251F9231A0B7B628013F628, L_13, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_14 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_15 = V_0;
		NullCheck(L_14);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_14, _stringLiteralCCBD049AB01A453E2AA323B566466E7EFD5E5D83, L_15, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_16 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_17 = V_0;
		NullCheck(L_16);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_16, _stringLiteralA85134E500DAC77E33AC85D5BC8B3A018D007B21, L_17, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_18 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_19 = V_0;
		NullCheck(L_18);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_18, _stringLiteral9844E838E5A48884CD95F2B3234665DE378AFDD9, L_19, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_20 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_21 = V_0;
		NullCheck(L_20);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_20, _stringLiteralB825D3172945E8191FD84884D888955CED402C44, L_21, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_22 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_23 = V_0;
		NullCheck(L_22);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_22, _stringLiteral72127D71612084513C374CD310A7756829D8646A, L_23, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_24 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_25 = V_0;
		NullCheck(L_24);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_24, _stringLiteral3D454DEFF8F002C734F315888F0BF5B65C79804B, L_25, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_26 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_27 = V_0;
		NullCheck(L_26);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_26, _stringLiteral105786E0421D893D45321939CC4646611EA7471D, L_27, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_28 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_29 = V_0;
		NullCheck(L_28);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_28, _stringLiteral76D8DC99317457E9712CF785632ECA992A204AD0, L_29, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_30 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_31 = V_0;
		NullCheck(L_30);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_30, _stringLiteral9335DCC2B6E3FC885FA4B3C4C8E765AE66A61C55, L_31, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_32 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_33 = V_0;
		NullCheck(L_32);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_32, _stringLiteralB693EEC953CF674AB028CD873016998772D35BB9, L_33, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_34 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_35 = V_0;
		NullCheck(L_34);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_34, _stringLiteral3EAC0E0D2AFEB00A8829BC2ACD911A36B1CB63CC, L_35, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_36 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_37 = V_0;
		NullCheck(L_36);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_36, _stringLiteral5E7B25A1CBB02F5095343D84649FA3958229A92F, L_37, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_38 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_39 = V_0;
		NullCheck(L_38);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_38, _stringLiteralA2802C98EA78FAB815D12E486143D1B37DA6421E, L_39, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_40 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_41 = V_0;
		NullCheck(L_40);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_40, _stringLiteral6E2143C873D70B6500C8AB8583DFB83B5AC59FD8, L_41, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_42 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_43 = V_0;
		NullCheck(L_42);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_42, _stringLiteral34662E2B8C0F6171C3FB0E387D95A6BF1C51DF6C, L_43, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_44 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_45 = V_0;
		NullCheck(L_44);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_44, _stringLiteralD536A1CDB30A364EB3C5FBAA4D37F4EA09BD0E86, L_45, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_46 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_47 = V_0;
		NullCheck(L_46);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_46, _stringLiteralE58C2B7ADB9CAC27846220F4D9EEB0239F91E100, L_47, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_48 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_49 = V_0;
		NullCheck(L_48);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_48, _stringLiteralD689561CF37BA29AEB8668EBE94095E3F960EF9A, L_49, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_50 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_51 = V_0;
		NullCheck(L_50);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_50, _stringLiteral7317DA622F13931211632F58498B0C9C3A1144DF, L_51, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_52 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_53 = V_0;
		NullCheck(L_52);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_52, _stringLiteral238F7412758781006ABE344D6EE66213428E4A8E, L_53, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_54 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_55 = V_0;
		NullCheck(L_54);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_54, _stringLiteralC79DDFD4CFEBEEB514CB1DD51AF82AAEC45D7C19, L_55, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_56 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_57 = V_0;
		NullCheck(L_56);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_56, _stringLiteral570607594C53495236BE155BD9A3BA6AEC6E77BC, L_57, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_58 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_59 = V_0;
		NullCheck(L_58);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_58, _stringLiteralB3FC35D59D4F82C749EEAE0473946D741BE163FB, L_59, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_60 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_61 = V_0;
		NullCheck(L_60);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_60, _stringLiteralBF16EEDE2669E9B7011FD77AF5DE5E850687C54D, L_61, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_62 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_63 = V_0;
		NullCheck(L_62);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_62, _stringLiteral40F956CFB2FBE9ECDD1C36CC8A144D0C3DFB5E53, L_63, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_64 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_65 = V_0;
		NullCheck(L_64);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_64, _stringLiteral0F779762A3542E63C184E2576918C37D0124DD4F, L_65, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_66 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_67 = V_0;
		NullCheck(L_66);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_66, _stringLiteralEAEEF6D3F23974B5E3BD5E818811345B8441BC26, L_67, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_68 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_69 = V_0;
		NullCheck(L_68);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_68, _stringLiteral6D777DF2FC62168442A2177DD188FF908422D68A, L_69, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_70 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_71 = V_0;
		NullCheck(L_70);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_70, _stringLiteral52D1972D2E468EFAE967E9E13EA3B44BF8C6AD72, L_71, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_72 = (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*)il2cpp_codegen_object_new(PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734(L_72, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_73 = L_72;
		NullCheck(L_73);
		PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline(L_73, _stringLiteral4957859D6BB01C0300EED32F705F5641C8AB2406, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_74 = L_73;
		NullCheck(L_74);
		PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline(L_74, _stringLiteralF6AE5EC7C6AB1BF2649960B2C55FD0675412A705, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_75 = L_74;
		NullCheck(L_75);
		PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline(L_75, _stringLiteral99A30C5B37BA8C885BC1AB4821AD5D21A1BD7B05, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_76 = L_75;
		NullCheck(L_76);
		PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline(L_76, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_77 = L_76;
		NullCheck(L_77);
		PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline(L_77, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_78 = L_77;
		NullCheck(L_78);
		PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline(L_78, _stringLiteral479A1DD38F61C9B62C0855D17C13BF659287C0C9, NULL);
		V_1 = L_78;
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_79 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_80 = V_1;
		NullCheck(L_79);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_79, _stringLiteralD2B6B327094498CA07F1AD00518D11DC7B4011F9, L_80, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_81 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_82 = V_1;
		NullCheck(L_81);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_81, _stringLiteral9D68B0B1AE86BCEFD810599A77E2B6E22084EEF8, L_82, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_83 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_84 = V_1;
		NullCheck(L_83);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_83, _stringLiteral64A6194253C51A33DAD6CD96631E03B1CBD5C334, L_84, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_85 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_86 = V_1;
		NullCheck(L_85);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_85, _stringLiteral479A1DD38F61C9B62C0855D17C13BF659287C0C9, L_86, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_87 = (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*)il2cpp_codegen_object_new(PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734(L_87, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_88 = L_87;
		NullCheck(L_88);
		PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline(L_88, _stringLiteralCADAB1058F9E2B6319DB4170558B1BD03A84845F, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_89 = L_88;
		NullCheck(L_89);
		PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline(L_89, _stringLiteral3187738C01ADBF0EA34B9FA78C0E57BB5C5574A6, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_90 = L_89;
		NullCheck(L_90);
		PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline(L_90, _stringLiteralEC969F3224F7F185E2D1AFCE455F9040CA18CADC, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_91 = L_90;
		NullCheck(L_91);
		PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline(L_91, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_92 = L_91;
		NullCheck(L_92);
		PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline(L_92, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_93 = L_92;
		NullCheck(L_93);
		PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline(L_93, _stringLiteral09C4175DC4068FC0E4DA285C5C20E84195829AC3, NULL);
		V_2 = L_93;
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_94 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_95 = V_2;
		NullCheck(L_94);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_94, _stringLiteral7FA10D17C0971E1982CE3EAD37AAB7FE0AD70CE0, L_95, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_96 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_97 = V_2;
		NullCheck(L_96);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_96, _stringLiteralEB7CA0531882B1DDB9C72F1A028D3EF51F90A429, L_97, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_98 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_99 = V_2;
		NullCheck(L_98);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_98, _stringLiteral4B672BCE6C57CE353143EA7F2219D42AE4FB5504, L_99, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_100 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_101 = V_2;
		NullCheck(L_100);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_100, _stringLiteral09C4175DC4068FC0E4DA285C5C20E84195829AC3, L_101, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_102 = (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*)il2cpp_codegen_object_new(PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		NullCheck(L_102);
		PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734(L_102, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_103 = L_102;
		NullCheck(L_103);
		PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline(L_103, _stringLiteral1377760A805A701D14524A755E063BA46DE79007, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_104 = L_103;
		NullCheck(L_104);
		PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline(L_104, _stringLiteral8DADFA34E77C97782064E6AD99BF9D625A95AD4D, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_105 = L_104;
		NullCheck(L_105);
		PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline(L_105, _stringLiteral8DADFA34E77C97782064E6AD99BF9D625A95AD4D, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_106 = L_105;
		NullCheck(L_106);
		PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline(L_106, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_107 = L_106;
		NullCheck(L_107);
		PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline(L_107, (bool)0, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_108 = L_107;
		NullCheck(L_108);
		PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline(L_108, _stringLiteral4596D967BF83C23BBAA84EB41BC0EB8DD254F26C, NULL);
		V_3 = L_108;
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_109 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_110 = V_3;
		NullCheck(L_109);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_109, _stringLiteralD6C203D57A30CB5FC078C57629BF7B4562276B5C, L_110, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_111 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_112 = V_3;
		NullCheck(L_111);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_111, _stringLiteral150614C398CB0B6729E02B8958AAAECF74557375, L_112, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_113 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_114 = V_3;
		NullCheck(L_113);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_113, _stringLiteral4596D967BF83C23BBAA84EB41BC0EB8DD254F26C, L_114, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_115 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_116 = V_3;
		NullCheck(L_115);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_115, _stringLiteralD181AF2E5811D814F82F53A69B252E82F41D56D0, L_116, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_117 = (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*)il2cpp_codegen_object_new(PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734(L_117, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_118 = L_117;
		NullCheck(L_118);
		PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline(L_118, _stringLiteralFDF887978D4ED6170BCF4E697D131821E8B6F1FD, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_119 = L_118;
		NullCheck(L_119);
		PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline(L_119, _stringLiteral8466AD39F3C02094F3DBA482C6C19704D2BCED93, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_120 = L_119;
		NullCheck(L_120);
		PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline(L_120, _stringLiteral8466AD39F3C02094F3DBA482C6C19704D2BCED93, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_121 = L_120;
		NullCheck(L_121);
		PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline(L_121, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_122 = L_121;
		NullCheck(L_122);
		PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline(L_122, (bool)0, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_123 = L_122;
		NullCheck(L_123);
		PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline(L_123, _stringLiteralCBF65ABFBE811FC9014FCF8E87E83AF758DFE992, NULL);
		V_4 = L_123;
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_124 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_125 = V_4;
		NullCheck(L_124);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_124, _stringLiteralA2D5214C73E59AD7D2768D3B1ECD4B4CAEBBAEFC, L_125, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_126 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_127 = V_4;
		NullCheck(L_126);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_126, _stringLiteral3EA394190F5A302A19EBCEF5387362C01BFFADA5, L_127, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_128 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegionName_2;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_129 = V_4;
		NullCheck(L_128);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_128, _stringLiteralCBF65ABFBE811FC9014FCF8E87E83AF758DFE992, L_129, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_130 = (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*)il2cpp_codegen_object_new(PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		NullCheck(L_130);
		PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734(L_130, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_131 = L_130;
		NullCheck(L_131);
		PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline(L_131, _stringLiteralD450882D2FD0C357A1421C9DAB7D1477475BC718, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_132 = L_131;
		NullCheck(L_132);
		PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline(L_132, _stringLiteralE3DFC9CE0E43D34F6D8F3ADAB3EDC9EEA9D1B4E4, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_133 = L_132;
		NullCheck(L_133);
		PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline(L_133, _stringLiteralE3DFC9CE0E43D34F6D8F3ADAB3EDC9EEA9D1B4E4, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_134 = L_133;
		NullCheck(L_134);
		PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline(L_134, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_135 = L_134;
		NullCheck(L_135);
		PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline(L_135, (bool)0, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_136 = L_135;
		NullCheck(L_136);
		PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline(L_136, _stringLiteral335867AEB3830A0F794093F4182DA96C3E34F754, NULL);
		V_5 = L_136;
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_137 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_138 = V_5;
		NullCheck(L_137);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_137, _stringLiteral14FAA7416684A4D55883815F5734E2EBD1ECC422, L_138, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_139 = (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906*)il2cpp_codegen_object_new(PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906_il2cpp_TypeInfo_var);
		NullCheck(L_139);
		PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734(L_139, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_140 = L_139;
		NullCheck(L_140);
		PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline(L_140, _stringLiteralC4FD635D5D74D20D4BC26FA3FC2719C9E911CDB5, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_141 = L_140;
		NullCheck(L_141);
		PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline(L_141, _stringLiteral89FC1CC3BE1F5704CEB65B133FA7835F808E4F74, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_142 = L_141;
		NullCheck(L_142);
		PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline(L_142, _stringLiteral89FC1CC3BE1F5704CEB65B133FA7835F808E4F74, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_143 = L_142;
		NullCheck(L_143);
		PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline(L_143, (bool)1, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_144 = L_143;
		NullCheck(L_144);
		PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline(L_144, (bool)0, NULL);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_145 = L_144;
		NullCheck(L_145);
		PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline(L_145, _stringLiteralF038D85198D2F234D0F3A85A6896B043F1946E52, NULL);
		V_6 = L_145;
		Dictionary_2_tA21310E586FA1B5A57DFFB3C2DB646C7907EDEBE* L_146 = ((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____partitionsByRegex_3;
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_147 = V_6;
		NullCheck(L_146);
		Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9(L_146, _stringLiteral09061AAF6F08B76E77FC5020FD9C87C2933B7D32, L_147, Dictionary_2_Add_mB08F324588486C6CBE65BE52450BD6BC899C36D9_RuntimeMethod_var);
		PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* L_148 = V_0;
		((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____defaultPartition_4 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&((Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_StaticFields*)il2cpp_codegen_static_fields_for(Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32_il2cpp_TypeInfo_var))->____defaultPartition_4), (void*)L_148);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.Partition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Partition__ctor_m623BF5F481C053513FAB6F8B21CF4192D64085EF (Partition_tFA824E04922E7D29895AD6621EC86ACBC2B3AD32* __this, const RuntimeMethod* method) 
{
	{
		PropertyBag__ctor_mA73C1F9100FD91E9EF3A37609166CFE2516C518F(__this, NULL);
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
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_name_mC4CFB4B716B9EC762C7918AD125076D89C10BDC3 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_dnsSuffix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dnsSuffix_mF02D5463D26245F5B47F1BE22686384F747037FA (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdnsSuffixU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_dnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdnsSuffixU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdnsSuffixU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_dualStackDnsSuffix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dualStackDnsSuffix_mC058856B21FB662857B7D809DA58AF21672FE4CF (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdualStackDnsSuffixU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_dualStackDnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdualStackDnsSuffixU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdualStackDnsSuffixU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_supportsFIPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsFIPS_mCD7909A9D1856996122DAD9439E615141D211DF2 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CsupportsFIPSU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_supportsFIPS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CsupportsFIPSU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_supportsDualStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsDualStack_mF31AE3BA3A11E9BE7BB75C21A81D929F3BFA2DD1 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CsupportsDualStackU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_supportsDualStack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CsupportsDualStackU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_implicitGlobalRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CimplicitGlobalRegionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplicitGlobalRegionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
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
// Amazon.Runtime.Internal.Compression.ICompressionAlgorithm Amazon.Runtime.Internal.Compression.CompressionFactory::GetCompressionAlgorithm(Amazon.Runtime.CompressionEncodingAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompressionFactory_GetCompressionAlgorithm_mA35202D3A7849629DC99ACE9B37069A9072F3D76 (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* L_1 = (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3*)il2cpp_codegen_object_new(GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GZipCompression__ctor_m83FF2D2567553F18BDEF89E9AE7E83867BF2F6B3(L_1, NULL);
		return L_1;
	}

IL_000a:
	{
		int32_t L_2 = ___0_type;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionEncodingAlgorithm_t47DCABEF31E4490A77CD3B37B987BC4F6B90CF1B_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE07E7303A625433AD6B384AD1F50C49B14516AE1)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionFactory_GetCompressionAlgorithm_mA35202D3A7849629DC99ACE9B37069A9072F3D76_RuntimeMethod_var)));
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
// Amazon.Runtime.CompressionEncodingAlgorithm Amazon.Runtime.Internal.Compression.GZipCompression::get_AlgorithmId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipCompression_get_AlgorithmId_m0F29EA7FC5AC31F37D8417D473B9E2F80579A32A (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// System.Byte[] Amazon.Runtime.Internal.Compression.GZipCompression::Compress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GZipCompression_Compress_mAA2B3C6C8E6F2A4D289F6E9BC5B121ED9E8E5E6A (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
				GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_4 = (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0*)il2cpp_codegen_object_new(GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05(L_4, L_3, 1, NULL);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{// begin finally (depth: 2)
						{
							GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_5 = V_1;
							if (!L_5)
							{
								goto IL_002a_1;
							}
						}
						{
							GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_002a_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_7 = V_1;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_content;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_content;
					NullCheck(L_9);
					NullCheck(L_7);
					VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
					GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_10 = V_1;
					NullCheck(L_10);
					VirtualActionInvoker0::Invoke(19 /* System.Void System.IO.Stream::Close() */, L_10);
					goto IL_002b_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_002b_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				NullCheck(L_11);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_11);
				V_2 = L_12;
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		return L_13;
	}
}
// System.IO.Stream Amazon.Runtime.Internal.Compression.GZipCompression::GetCompressionStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GZipCompression_GetCompressionStream_mAAAD680F7B1C17A27518EE961E780CAC386291ED (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inputStream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_inputStream;
		GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_1 = (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0*)il2cpp_codegen_object_new(GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF(L_1, L_0, 1, (bool)1, NULL);
		return L_1;
	}
}
// System.Void Amazon.Runtime.Internal.Compression.GZipCompression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipCompression__ctor_m83FF2D2567553F18BDEF89E9AE7E83867BF2F6B3 (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, const RuntimeMethod* method) 
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
// System.Boolean Amazon.Runtime.Internal.Auth.AbstractAWSSigner::get_RequiresCredentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbstractAWSSigner_get_RequiresCredentials_mF7ACEB81E1218117E9E8DA4670E06591D2CF7F06 (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CRequiresCredentialsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAWSSigner_Sign_m9AAC2804DCF1061876BD0CABF9F757EEEE3871CD (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, const RuntimeMethod* method) 
{
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B2_3 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	RuntimeObject* G_B3_3 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B3_4 = NULL;
	String_t* G_B5_0 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	RuntimeObject* G_B5_3 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B5_4 = NULL;
	String_t* G_B4_0 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	RuntimeObject* G_B4_3 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B6_2 = NULL;
	RuntimeObject* G_B6_3 = NULL;
	RuntimeObject* G_B6_4 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B6_5 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_3 = ___3_credentials;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0012;
	}

IL_000b:
	{
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_4 = ___3_credentials;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline(L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0012:
	{
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_6 = ___3_credentials;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			G_B5_3 = G_B3_3;
			G_B5_4 = G_B3_4;
			goto IL_0019;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0020;
	}

IL_0019:
	{
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_7 = ___3_credentials;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline(L_7, NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0020:
	{
		NullCheck(G_B6_5);
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, String_t*, String_t* >::Invoke(5 /* System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String) */, G_B6_5, G_B6_4, G_B6_3, G_B6_2, G_B6_1, G_B6_0);
		return;
	}
}
// System.Threading.Tasks.Task Amazon.Runtime.Internal.Auth.AbstractAWSSigner::SignAsync(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AbstractAWSSigner_SignAsync_m74750EB9CCED33EF37FE38810F3C3682A64B4305 (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_3 = ___3_credentials;
		VirtualActionInvoker4< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* >::Invoke(6 /* System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials) */, __this, L_0, L_1, L_2, L_3);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_4;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lock_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lock_0), (void*)L_0);
		__this->___U3CRequiresCredentialsU3Ek__BackingField_1 = (bool)1;
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__ctor_m9642B14D9F5E67CEFB88130D1AFB642132DF3DCB (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, const RuntimeMethod* method) 
{
	{
		AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, bool ___0_signPayload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRuntimeDependencyRegistry_GetInstance_TisIAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_m93C686A8F83D2840DE830F7299B925C97F2686CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2;
		if (L_0)
		{
			goto IL_00d5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____lock_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_00d4;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_00d4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_il2cpp_TypeInfo_var);
				GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653* L_5;
				L_5 = GlobalRuntimeDependencyRegistry_get_Instance_m6F48E028BAB6E8F1051306BAEC19B0D5CA2E0B55_inline(NULL);
				bool L_6 = ___0_signPayload;
				SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1* L_7 = (SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1*)il2cpp_codegen_object_new(SigV4aCrtSignerContext_t9B46CFABFBC1DA901ED247CC2DCD7AA48BA3E2A1_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				SigV4aCrtSignerContext__ctor_m294D2744C8C03745174A65FC1488D9275C072D47(L_7, L_6, NULL);
				CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F* L_8 = (CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F*)il2cpp_codegen_object_new(CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				CreateInstanceContext__ctor_m48F6E7D4AE9E3CF6965B02E1CDC34B961AB1F03D(L_8, L_7, NULL);
				NullCheck(L_5);
				RuntimeObject* L_9;
				L_9 = GenericVirtualFuncInvoker3< RuntimeObject*, String_t*, String_t*, CreateInstanceContext_tD905255A747FAF8AA22FDE80BAD2EBD0246E205F* >::Invoke(BaseRuntimeDependencyRegistry_GetInstance_TisIAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_m93C686A8F83D2840DE830F7299B925C97F2686CD_RuntimeMethod_var, L_5, _stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5, _stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51, L_8);
				il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
				((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2), (void*)L_9);
				RuntimeObject* L_10 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2;
				if (L_10)
				{
					goto IL_00c9_1;
				}
			}
			try
			{// begin try (depth: 2)
				Type_t* L_11;
				L_11 = ServiceClientHelpers_LoadTypeFromAssembly_m0C3AE18BC412EB813054D137F4809C528AD8E071(_stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5, _stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51, NULL);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_12;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_15);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_15);
				NullCheck(L_11);
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_16;
				L_16 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_11, L_13, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
				bool L_19 = ___0_signPayload;
				bool L_20 = L_19;
				RuntimeObject* L_21 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_20);
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_21);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
				NullCheck(L_16);
				RuntimeObject* L_22;
				L_22 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_16, L_18, NULL);
				il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
				((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_22, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var)));
				goto IL_00d5;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0092_1;
				}
				throw e;
			}

CATCH_0092_1:
			{// begin catch(System.Exception)
				{
					Exception_t* L_23 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalSDKUtils_t98D07FF982E1947106119E126A225757C8621FAF_il2cpp_TypeInfo_var)));
					bool L_24;
					L_24 = InternalSDKUtils_IsRunningNativeAot_m0D8FA02D9D441D52C7004555366EFFD1F4D57080(NULL);
					if (!L_24)
					{
						goto IL_00af_1;
					}
				}
				{
					MissingRuntimeDependencyException_t3539CD8818800CFDA3DA250922BC5390EC631463* L_25 = (MissingRuntimeDependencyException_t3539CD8818800CFDA3DA250922BC5390EC631463*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingRuntimeDependencyException_t3539CD8818800CFDA3DA250922BC5390EC631463_il2cpp_TypeInfo_var)));
					NullCheck(L_25);
					MissingRuntimeDependencyException__ctor_m69DE1F63B4D331F1BBBFD92425796B83DAD13619(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0FB5171A0CFB7CEC4D3EE2F5114D541152ED56D)), NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E_RuntimeMethod_var)));
				}

IL_00af_1:
				{
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
					CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_26;
					L_26 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27;
					L_27 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
					String_t* L_28;
					L_28 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5F99667CFC6FB677E60C0535D5264678FD51040)), L_27, NULL);
					AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B* L_29 = (AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B_il2cpp_TypeInfo_var)));
					NullCheck(L_29);
					AWSCommonRuntimeException__ctor_mCB730190C0F07458FB8CD4F6DDA91DF4CBB0F6C8(L_29, L_28, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E_RuntimeMethod_var)));
				}
			}// end catch (depth: 2)

IL_00c9_1:
			{
				goto IL_00d5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		return;
	}
}
// Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AWS4aSignerCRTWrapper_get_Protocol_mF45D8B3153CC3288C6776BAD905750A6BB161688 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::get_Protocol() */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper_Sign_m83E011E451FC62C903758754F945662C045EF2E7 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2;
		RuntimeObject* L_1 = ___0_request;
		RuntimeObject* L_2 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_3 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_4 = ___3_credentials;
		NullCheck(L_0);
		InterfaceActionInvoker4< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* >::Invoke(1 /* System.Void Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials) */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper_Sign_mA9E2B8061AD6CF139B8F479686A8641DD08185DF (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	{
		AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B* L_0 = (AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		AWSCommonRuntimeException__ctor_mCB730190C0F07458FB8CD4F6DDA91DF4CBB0F6C8(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF277F055431226806CAEBFFF8FD03D0158B95071)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWS4aSignerCRTWrapper_Sign_mA9E2B8061AD6CF139B8F479686A8641DD08185DF_RuntimeMethod_var)));
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::SignChunk(System.IO.Stream,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSignerCRTWrapper_SignChunk_m53B9AEE6BA13AD272CEBFF50F02A23BAACB48830 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_chunkBody, String_t* ___1_previousSignature, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* ___2_headerSigningResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_chunkBody;
		String_t* L_2 = ___1_previousSignature;
		AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* L_3 = ___2_headerSigningResult;
		NullCheck(L_0);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker3< String_t*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t*, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* >::Invoke(2 /* System.String Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::SignChunk(System.IO.Stream,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult) */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::SignTrailingHeaderChunk(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSignerCRTWrapper_SignTrailingHeaderChunk_m0664FA819DC7B2B7C57BDB8B868E473FA63F7DB3 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, RuntimeObject* ___0_trailingHeaders, String_t* ___1_previousSignature, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* ___2_headerSigningResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_2;
		RuntimeObject* L_1 = ___0_trailingHeaders;
		String_t* L_2 = ___1_previousSignature;
		AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* L_3 = ___2_headerSigningResult;
		NullCheck(L_0);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker3< String_t*, RuntimeObject*, String_t*, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* >::Invoke(3 /* System.String Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::SignTrailingHeaderChunk(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult) */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__cctor_mFA0501F147D071B7874792A3C4605153D191DB28 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____lock_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____lock_3), (void*)L_0);
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
// System.String Amazon.Runtime.Internal.Auth.AWS4aSigningResult::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSigningResult_get_Signature_mB2DA119F13CA7C9DDAB61C1AEB2848BB6BF821A0 (AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____signature_4;
		return L_0;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4aSigningResult::get_ForAuthorizationHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSigningResult_get_ForAuthorizationHeader_m0488979CDF92B66580191C3CCC5D6C86004EA2B4 (AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01EF5807833DD0FAAF85EE2CED5F1AA1DDB08692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54410F787AFA08038634B055933A63784C4AD055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral01EF5807833DD0FAAF85EE2CED5F1AA1DDB08692, NULL);
		String_t* L_2;
		L_2 = AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline(__this, NULL);
		String_t* L_3;
		L_3 = AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_1, _stringLiteral54410F787AFA08038634B055933A63784C4AD055, _stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821, L_2, L_3, NULL);
		String_t* L_5;
		L_5 = AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_4, _stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D, _stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F, L_5, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Signature() */, __this);
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_6, _stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219, _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66, L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__ctor_m2A75152CBA5B61526C86720CFFEEDA8BECE16A36 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		AWS4Signer__ctor_m91187CA260E8C13176F4CCC5260464DB04B61475(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__ctor_m91187CA260E8C13176F4CCC5260464DB04B61475 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_signPayload, const RuntimeMethod* method) 
{
	{
		AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE(__this, NULL);
		bool L_0 = ___0_signPayload;
		AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D_inline(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer::get_SignPayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSignPayloadU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::set_SignPayload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CSignPayloadU3Ek__BackingField_4 = L_0;
		return;
	}
}
// Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.Internal.Auth.AWS4Signer::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AWS4Signer_get_Protocol_mBD58EC0753A5CAC2F0B2573C1290B450C9B81440 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_Sign_m0FB5BD8B9F81600B0C7162102BC2F3379513B35B (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		s_Il2CppMethodInitialized = true;
	}
	AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		String_t* L_3 = ___3_awsAccessKeyId;
		String_t* L_4 = ___4_awsSecretAccessKey;
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_5;
		L_5 = AWS4Signer_SignRequest_m99323436D7081D4DE35196DEEC413D7EEEFBB9ED(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6 = ___0_request;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_ForAuthorizationHeader() */, L_8);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_7, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_9);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_Sign_m17A1971DC80AC4117AC7499D572821C4217DB7D7 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_3 = ___3_credentials;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline(L_3, NULL);
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_5 = ___3_credentials;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline(L_5, NULL);
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, String_t*, String_t* >::Invoke(5 /* System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String) */, __this, L_0, L_1, L_2, L_4, L_6);
		return;
	}
}
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::SignRequest(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_SignRequest_m99323436D7081D4DE35196DEEC413D7EEEFBB9ED (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292024B472EA7FC15E4F169AE8C4C7A6DEE900C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55F42690C3007F40BA0CED691725B5C6586ED068);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6087570F9096503FEB39C184D67AB275B22C941C);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	String_t* G_B11_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC(L_0, NULL);
		RuntimeObject* L_1 = ___0_request;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___0_request;
		NullCheck(L_3);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4;
		L_4 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(8 /* System.Uri Amazon.Runtime.Internal.IRequest::get_Endpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = AWS4Signer_InitializeHeaders_mE3737714CE93A28E74866026CCC40924371A6279(L_2, L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6 = ___0_request;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(23 /* System.String Amazon.Runtime.Internal.IRequest::get_OverrideSigningServiceName() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_9 = ___1_clientConfig;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = AWS4Signer_DetermineService_m6126B49E5B1045D2D39A916BDB72A37148C082AF(L_9, NULL);
		G_B3_0 = L_10;
		goto IL_0033;
	}

IL_002d:
	{
		RuntimeObject* L_11 = ___0_request;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(23 /* System.String Amazon.Runtime.Internal.IRequest::get_OverrideSigningServiceName() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_11);
		G_B3_0 = L_12;
	}

IL_0033:
	{
		V_1 = G_B3_0;
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral6087570F9096503FEB39C184D67AB275B22C941C, NULL);
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_15 = ___0_request;
		NullCheck(L_15);
		InterfaceActionInvoker1< bool >::Invoke(47 /* System.Void Amazon.Runtime.Internal.IRequest::set_UseDoubleEncoding(System.Boolean) */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_15, (bool)0);
	}

IL_0048:
	{
		RuntimeObject* L_16 = ___0_request;
		RuntimeObject* L_17 = ___1_clientConfig;
		RuntimeObject* L_18 = ___1_clientConfig;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Amazon.Runtime.IClientConfig::get_RegionEndpointServiceName() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = ___0_request;
		NullCheck(L_20);
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_21;
		L_21 = InterfaceFuncInvoker0< RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* >::Invoke(27 /* Amazon.RegionEndpoint Amazon.Runtime.Internal.IRequest::get_AlternateEndpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_20);
		RuntimeObject* L_22 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = AWS4Signer_DetermineSigningRegion_m3D28209191EF6F4BC13908EAB71437327E802B17(L_17, L_19, L_21, L_22, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< String_t* >::Invoke(39 /* System.Void Amazon.Runtime.Internal.IRequest::set_DeterminedSigningRegion(System.String) */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_16, L_23);
		RuntimeObject* L_24 = ___0_request;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_24);
		RuntimeObject* L_26 = ___0_request;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_26);
		AWS4Signer_SetXAmzTrailerHeader_mE382DAF83B9480C9D246CEE1D981E31933766077(L_25, L_27, NULL);
		RuntimeObject* L_28 = ___0_request;
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_29;
		L_29 = AWS4Signer_GetParametersToCanonicalize_m7DC2E3B03D9EEAE862055419329B0E1400D21C30(L_28, NULL);
		String_t* L_30;
		L_30 = AWS4Signer_CanonicalizeQueryParameters_m549B1209FBD3ED80F76482F6182235EA0EE41049(L_29, NULL);
		V_2 = L_30;
		RuntimeObject* L_31 = ___0_request;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_31);
		RuntimeObject* L_33 = L_32;
		G_B6_0 = L_33;
		if (L_33)
		{
			G_B7_0 = L_33;
			goto IL_008b;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0093;
	}

IL_008b:
	{
		NullCheck(G_B7_0);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, G_B7_0);
		G_B8_0 = ((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
	}

IL_0093:
	{
		if (G_B8_0)
		{
			goto IL_009c;
		}
	}
	{
		G_B11_0 = _stringLiteral292024B472EA7FC15E4F169AE8C4C7A6DEE900C7;
		goto IL_00a1;
	}

IL_009c:
	{
		G_B11_0 = _stringLiteral55F42690C3007F40BA0CED691725B5C6586ED068;
	}

IL_00a1:
	{
		V_3 = G_B11_0;
		RuntimeObject* L_35 = ___0_request;
		bool L_36;
		L_36 = AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5_inline(__this, NULL);
		String_t* L_37 = V_3;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = AWS4Signer_SetRequestBodyHash_mE429DAF7177761149D08472AA8F86E7A60B10594(L_35, L_36, L_37, ((int32_t)64), NULL);
		V_4 = L_38;
		RuntimeObject* L_39 = ___0_request;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_39);
		RuntimeObject* L_41;
		L_41 = AWS4Signer_SortAndPruneHeaders_m56DE03A6A2F1B020B539DB8EBEBA0A3A60CE1DFC(L_40, NULL);
		V_5 = L_41;
		RuntimeObject* L_42 = ___0_request;
		NullCheck(L_42);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_43;
		L_43 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(8 /* System.Uri Amazon.Runtime.Internal.IRequest::get_Endpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_42);
		RuntimeObject* L_44 = ___0_request;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Amazon.Runtime.Internal.IRequest::get_ResourcePath() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_44);
		RuntimeObject* L_46 = ___0_request;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Amazon.Runtime.Internal.IRequest::get_HttpMethod() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_46);
		RuntimeObject* L_48 = V_5;
		String_t* L_49 = V_2;
		String_t* L_50 = V_4;
		RuntimeObject* L_51 = ___0_request;
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_PathResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_51);
		RuntimeObject* L_53 = ___0_request;
		NullCheck(L_53);
		bool L_54;
		L_54 = InterfaceFuncInvoker0< bool >::Invoke(46 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseDoubleEncoding() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_53);
		String_t* L_55;
		L_55 = AWS4Signer_CanonicalizeRequest_mABDD64D192C79A6C24D4FF53A7D115FD5CE28D7F(L_43, L_45, L_47, L_48, L_49, L_50, L_52, L_54, NULL);
		V_6 = L_55;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_56 = ___2_metrics;
		if (!L_56)
		{
			goto IL_00f7;
		}
	}
	{
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_57 = ___2_metrics;
		String_t* L_58 = V_6;
		NullCheck(L_57);
		RequestMetrics_AddProperty_mEEDDB74F30D1F338104E75C17D7DF4FEF0E07BDC(L_57, ((int32_t)18), L_58, NULL);
	}

IL_00f7:
	{
		RuntimeObject* L_59 = ___0_request;
		NullCheck(L_59);
		InterfaceActionInvoker1< int32_t >::Invoke(35 /* System.Void Amazon.Runtime.Internal.IRequest::set_SignatureVersion(Amazon.Runtime.SignatureVersion) */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_59, 1);
		String_t* L_60 = ___3_awsAccessKeyId;
		String_t* L_61 = ___4_awsSecretAccessKey;
		RuntimeObject* L_62 = ___0_request;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = InterfaceFuncInvoker0< String_t* >::Invoke(38 /* System.String Amazon.Runtime.Internal.IRequest::get_DeterminedSigningRegion() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_62);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_64 = V_0;
		String_t* L_65 = V_1;
		RuntimeObject* L_66 = V_5;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_67;
		L_67 = AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF(L_66, NULL);
		String_t* L_68 = V_6;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_69 = ___2_metrics;
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_70;
		L_70 = AWS4Signer_ComputeSignature_m4DFBA05F1998120E914CD91D1BC68CF5574DA5C4(L_60, L_61, L_63, L_64, L_65, L_67, L_68, L_69, NULL);
		return L_70;
	}
}
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mE3737714CE93A28E74866026CCC40924371A6279 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectClockSkew_t417A5F0CF8A11F92FD302BA5F80F17ACE7BE3C5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_headers;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___1_requestEndpoint;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = ___1_requestEndpoint;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(CorrectClockSkew_t417A5F0CF8A11F92FD302BA5F80F17ACE7BE3C5A_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = CorrectClockSkew_GetCorrectedUtcNowForEndpoint_mCE500BBE523341E24C6EB90B3B71FF9335A2D7A3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = AWS4Signer_InitializeHeaders_mB1983466AD9ED91C4CA510AEA2E942C67F3CE437(L_0, L_1, L_4, NULL);
		return L_5;
	}
}
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mB1983466AD9ED91C4CA510AEA2E942C67F3CE437 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___2_requestDateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral712D2A1550F63E88E95C516CDB6DFA50E1DD6C49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		RuntimeObject* L_0 = ___0_headers;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_CleanHeaders_mDE078CF20C077F281B1A9879869429E8C3DA7E1E(L_0, NULL);
		RuntimeObject* L_1 = ___0_headers;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_1, _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F);
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___1_requestEndpoint;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C(L_3, NULL);
		V_1 = L_4;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = ___1_requestEndpoint;
		NullCheck(L_5);
		bool L_6;
		L_6 = Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06(L_5, NULL);
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_7 = V_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = ___1_requestEndpoint;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02(L_8, NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_10, NULL);
		V_1 = L_11;
	}

IL_003c:
	{
		RuntimeObject* L_12 = ___0_headers;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::Add(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_12, _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F, L_13);
	}

IL_0048:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___2_requestDateTime;
		V_0 = L_14;
		RuntimeObject* L_15 = ___0_headers;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_0), NULL);
		V_3 = L_16;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_17;
		L_17 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_18;
		L_18 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&V_3), _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11, L_17, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_15, _stringLiteral712D2A1550F63E88E95C516CDB6DFA50E1DD6C49, L_18);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19 = V_0;
		return L_19;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetXAmzTrailerHeader(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetXAmzTrailerHeader_mE382DAF83B9480C9D246CEE1D981E31933766077 (RuntimeObject* ___0_headers, RuntimeObject* ___1_trailingHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37982402124BB488E04D03607DB86C153FF935B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	RuntimeObject* G_B5_4 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	{
		RuntimeObject* L_0 = ___1_trailingHeaders;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___1_trailingHeaders;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		return;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___0_headers;
		RuntimeObject* L_4 = ___1_trailingHeaders;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_4);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_6 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		G_B4_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B4_3 = _stringLiteral37982402124BB488E04D03607DB86C153FF935B7;
		G_B4_4 = L_3;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			G_B5_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B5_3 = _stringLiteral37982402124BB488E04D03607DB86C153FF935B7;
			G_B5_4 = L_3;
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_8 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_9 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_10 = L_9;
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1), (void*)L_10);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
		G_B5_4 = G_B4_4;
	}

IL_003c:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B(G_B5_1, G_B5_0, Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_11, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_13;
		L_13 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B5_2, L_12, NULL);
		NullCheck(G_B5_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, G_B5_4, G_B5_3, L_13);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::CleanHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_CleanHeaders_mDE078CF20C077F281B1A9879869429E8C3DA7E1E (RuntimeObject* ___0_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_headers;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_0, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		RuntimeObject* L_2 = ___0_headers;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_2, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		RuntimeObject* L_4 = ___0_headers;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_4, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_6 = ___0_headers;
		RuntimeObject* L_7 = ___0_headers;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_7, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_6, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2, L_8);
		RuntimeObject* L_9 = ___0_headers;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_9, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::ValidateRequest(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC (RuntimeObject* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_request;
		NullCheck(L_0);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(8 /* System.Uri Amazon.Runtime.Internal.IRequest::get_Endpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_request;
		NullCheck(L_2);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3;
		L_3 = InterfaceFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(31 /* System.Nullable`1<System.Boolean> Amazon.Runtime.Internal.IRequest::get_DisablePayloadSigning() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		bool L_4;
		L_4 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_1), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4* L_8 = (AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		AmazonClientException__ctor_mD79D13D6A21E949F64AF9554717EE6D525492D32(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD69F9EC21087D22656DA059773494239B182B120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC_RuntimeMethod_var)));
	}

IL_0034:
	{
		return;
	}
}
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeSignature(System.String,System.String,System.String,System.DateTime,System.String,System.String,System.String,Amazon.Runtime.Internal.Util.RequestMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_ComputeSignature_m4DFBA05F1998120E914CD91D1BC68CF5574DA5C4 (String_t* ___0_awsAccessKey, String_t* ___1_awsSecretAccessKey, String_t* ___2_region, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_signedAt, String_t* ___4_service, String_t* ___5_signedHeaders, String_t* ___6_canonicalRequest, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___7_metrics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD63AE8496DF16CA83A2973ACB14210B26FB7E1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	String_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___3_signedAt;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083(L_0, _stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_region;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___4_service;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		String_t* L_11;
		L_11 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_2, _stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA, L_10, NULL);
		V_1 = L_11;
		StringBuilder_t* L_12 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_12, NULL);
		V_2 = L_12;
		StringBuilder_t* L_13 = V_2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19 = ___3_signedAt;
		String_t* L_20;
		L_20 = AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083(L_19, _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_18;
		String_t* L_22 = V_1;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_22);
		NullCheck(L_13);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_13, L_14, _stringLiteralCCD63AE8496DF16CA83A2973ACB14210B26FB7E1, L_21, NULL);
		String_t* L_24 = ___6_canonicalRequest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = AWS4Signer_ComputeHash_mB586790357AA02ACA787D309B13EE501CEA4729F(L_24, NULL);
		V_3 = L_25;
		StringBuilder_t* L_26 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0(L_27, (bool)1, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_28, NULL);
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_30 = ___7_metrics;
		if (!L_30)
		{
			goto IL_009a;
		}
	}
	{
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_31 = ___7_metrics;
		StringBuilder_t* L_32 = V_2;
		NullCheck(L_31);
		RequestMetrics_AddProperty_mEEDDB74F30D1F338104E75C17D7DF4FEF0E07BDC(L_31, ((int32_t)17), L_32, NULL);
	}

IL_009a:
	{
		String_t* L_33 = ___1_awsSecretAccessKey;
		String_t* L_34 = ___2_region;
		String_t* L_35 = V_0;
		String_t* L_36 = ___4_service;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = AWS4Signer_ComposeSigningKey_m46B94B52A6776A72226897D088AD32BCCA155945(L_33, L_34, L_35, L_36, NULL);
		V_4 = L_37;
		StringBuilder_t* L_38 = V_2;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		V_5 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_4;
		String_t* L_41 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = AWS4Signer_ComputeKeyedHash_m24E0CFA1D3BC40CEBD6D8439375AE68C01FB26A1(1, L_40, L_41, NULL);
		V_6 = L_42;
		String_t* L_43 = ___0_awsAccessKey;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44 = ___3_signedAt;
		String_t* L_45 = ___5_signedHeaders;
		String_t* L_46 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_6;
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_49 = (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6*)il2cpp_codegen_object_new(AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		AWS4SigningResult__ctor_m51505F2656D83286A4936721C8403EF97531792F(L_49, L_43, L_44, L_45, L_46, L_47, L_48, NULL);
		return L_49;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::FormatDateTime(System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dt, String_t* ___1_formatString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___0_dt), NULL);
		V_0 = L_0;
		String_t* L_1 = ___1_formatString;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_3;
		L_3 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&V_0), L_1, L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComposeSigningKey(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComposeSigningKey_m46B94B52A6776A72226897D088AD32BCCA155945 (String_t* ___0_awsSecretAccessKey, String_t* ___1_region, String_t* ___2_date, String_t* ___3_service, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = V_0;
					if (!L_0)
					{
						goto IL_0073;
					}
				}
				{
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
					NullCheck(L_2);
					Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_3 = ___0_awsSecretAccessKey;
			String_t* L_4;
			L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC, L_3, NULL);
			NullCheck(L_4);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5;
			L_5 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_4, NULL);
			V_0 = L_5;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
			L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
			NullCheck(L_6);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_6, L_7);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
			L_9 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_10 = ___2_date;
			NullCheck(L_9);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, L_10);
			il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_8, L_11, NULL);
			V_1 = L_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
			L_14 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_15 = ___1_region;
			NullCheck(L_14);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
			L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, L_15);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
			L_17 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_13, L_16, NULL);
			V_2 = L_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_19;
			L_19 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_20 = ___3_service;
			NullCheck(L_19);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
			L_21 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_19, L_20);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
			L_22 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_18, L_21, NULL);
			V_3 = L_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->___TerminatorBytes_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
			L_25 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_23, L_24, NULL);
			V_4 = L_25;
			goto IL_0074;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_4;
		return L_26;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetRequestBodyHash(Amazon.Runtime.Internal.IRequest,System.Boolean,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetRequestBodyHash_mE429DAF7177761149D08472AA8F86E7A60B10594 (RuntimeObject* ___0_request, bool ___1_signPayload, String_t* ___2_chunkedBodyHash, int32_t ___3_signatureLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChunkedUploadWrapperStream_tBBA0F8ABE5C48A8B46C8F259EC7A8E9A04B6BA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08BFAB0C7A3D047B53E710D86A09A4946049B3FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral630B0975C44597114E7F50A533BD3331291FD31E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B22_0 = NULL;
	RuntimeObject* G_B22_1 = NULL;
	String_t* G_B21_0 = NULL;
	RuntimeObject* G_B21_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		NullCheck(L_0);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		L_1 = InterfaceFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(31 /* System.Nullable`1<System.Boolean> Amazon.Runtime.Internal.IRequest::get_DisablePayloadSigning() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		bool L_3 = ___1_signPayload;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0016:
	{
		RuntimeObject* L_4 = ___0_request;
		NullCheck(L_4);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5;
		L_5 = InterfaceFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(31 /* System.Nullable`1<System.Boolean> Amazon.Runtime.Internal.IRequest::get_DisablePayloadSigning() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_1), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_6));
	}

IL_0024:
	{
		if (!G_B3_0)
		{
			goto IL_00c8;
		}
	}
	{
		RuntimeObject* L_7 = ___0_request;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0036;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_003e;
	}

IL_0036:
	{
		NullCheck(G_B6_0);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = ((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
	}

IL_003e:
	{
		if (!G_B7_0)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_11 = ___0_request;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_11);
		RuntimeObject* L_13 = ___0_request;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_14, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_12, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA, L_15);
		RuntimeObject* L_16 = ___0_request;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_17, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_19;
		L_19 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int64_t L_20;
		L_20 = Int64_Parse_mAE2EACBD4520D1EEE5AA32B228D5DA2ED83DDDA5(L_18, L_19, NULL);
		V_2 = L_20;
		RuntimeObject* L_21 = ___0_request;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_21);
		RuntimeObject* L_23 = ___0_request;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_23);
		RuntimeObject* L_25 = ___0_request;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(43 /* Amazon.Runtime.CoreChecksumAlgorithm Amazon.Runtime.Internal.IRequest::get_SelectedChecksum() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_25);
		int64_t L_27 = V_2;
		int64_t L_28;
		L_28 = TrailingHeadersWrapperStream_CalculateLength_mB864D571B02159CA842BD3CE8DE650BFB2A1C99E(L_24, L_26, L_27, NULL);
		V_3 = L_28;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_29;
		L_29 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_30;
		L_30 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&V_3), L_29, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_22, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2, L_30);
		RuntimeObject* L_31 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97(L_31, NULL);
		RuntimeObject* L_32 = ___0_request;
		String_t* L_33;
		L_33 = AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86(L_32, _stringLiteral08BFAB0C7A3D047B53E710D86A09A4946049B3FA, NULL);
		return L_33;
	}

IL_00bc:
	{
		RuntimeObject* L_34 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86(L_34, _stringLiteral630B0975C44597114E7F50A533BD3331291FD31E, NULL);
		return L_35;
	}

IL_00c8:
	{
		RuntimeObject* L_36 = ___0_request;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_37, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, (&V_0));
		if (!L_38)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_39 = ___0_request;
		NullCheck(L_39);
		bool L_40;
		L_40 = InterfaceFuncInvoker0< bool >::Invoke(33 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseChunkEncoding() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_39);
		if (L_40)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_41 = V_0;
		return L_41;
	}

IL_00e6:
	{
		RuntimeObject* L_42 = ___0_request;
		NullCheck(L_42);
		bool L_43;
		L_43 = InterfaceFuncInvoker0< bool >::Invoke(33 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseChunkEncoding() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_42);
		if (!L_43)
		{
			goto IL_017a;
		}
	}
	{
		String_t* L_44 = ___2_chunkedBodyHash;
		V_0 = L_44;
		RuntimeObject* L_45 = ___0_request;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_45);
		NullCheck(L_46);
		bool L_47;
		L_47 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_46, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		if (!L_47)
		{
			goto IL_0172;
		}
	}
	{
		RuntimeObject* L_48 = ___0_request;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_48);
		RuntimeObject* L_50 = ___0_request;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		String_t* L_52;
		L_52 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_51, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		NullCheck(L_49);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_49, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA, L_52);
		RuntimeObject* L_53 = ___0_request;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_54, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_56;
		L_56 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int64_t L_57;
		L_57 = Int64_Parse_mAE2EACBD4520D1EEE5AA32B228D5DA2ED83DDDA5(L_55, L_56, NULL);
		V_4 = L_57;
		RuntimeObject* L_58 = ___0_request;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_58);
		int64_t L_60 = V_4;
		int32_t L_61 = ___3_signatureLength;
		RuntimeObject* L_62 = ___0_request;
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_62);
		RuntimeObject* L_64 = ___0_request;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = InterfaceFuncInvoker0< int32_t >::Invoke(43 /* Amazon.Runtime.CoreChecksumAlgorithm Amazon.Runtime.Internal.IRequest::get_SelectedChecksum() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_64);
		il2cpp_codegen_runtime_class_init_inline(ChunkedUploadWrapperStream_tBBA0F8ABE5C48A8B46C8F259EC7A8E9A04B6BA7E_il2cpp_TypeInfo_var);
		int64_t L_66;
		L_66 = ChunkedUploadWrapperStream_ComputeChunkedContentLength_m818809A1BAF9AF4814B79C9C930B729D99BA481D(L_60, L_61, L_63, L_65, NULL);
		V_3 = L_66;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_67;
		L_67 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_68;
		L_68 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&V_3), L_67, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_59, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2, L_68);
	}

IL_0172:
	{
		RuntimeObject* L_69 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97(L_69, NULL);
		goto IL_01b1;
	}

IL_017a:
	{
		RuntimeObject* L_70 = ___0_request;
		NullCheck(L_70);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_71;
		L_71 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(19 /* System.IO.Stream Amazon.Runtime.Internal.IRequest::get_ContentStream() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_70);
		if (!L_71)
		{
			goto IL_018b;
		}
	}
	{
		RuntimeObject* L_72 = ___0_request;
		NullCheck(L_72);
		String_t* L_73;
		L_73 = InterfaceFuncInvoker0< String_t* >::Invoke(22 /* System.String Amazon.Runtime.Internal.IRequest::ComputeContentStreamHash() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_72);
		V_0 = L_73;
		goto IL_01b1;
	}

IL_018b:
	{
		RuntimeObject* L_74 = ___0_request;
		RuntimeObject* L_75 = ___0_request;
		NullCheck(L_75);
		bool L_76;
		L_76 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseQueryString() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_75);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_77), L_76, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78;
		L_78 = AWSSDKUtils_GetRequestPayloadBytes_m10D9DF6659E80792EC88A7DFA2ACD604DA2D0DFC(L_74, L_77, NULL);
		V_5 = L_78;
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_79;
		L_79 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_5;
		NullCheck(L_79);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81;
		L_81 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Amazon.Util.ICryptoUtil::ComputeSHA256Hash(System.Byte[]) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_79, L_80);
		String_t* L_82;
		L_82 = AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0(L_81, (bool)1, NULL);
		V_0 = L_82;
	}

IL_01b1:
	{
		RuntimeObject* L_83 = ___0_request;
		String_t* L_84 = V_0;
		String_t* L_85 = L_84;
		G_B21_0 = L_85;
		G_B21_1 = L_83;
		if (L_85)
		{
			G_B22_0 = L_85;
			G_B22_1 = L_83;
			goto IL_01bc;
		}
	}
	{
		G_B22_0 = _stringLiteral630B0975C44597114E7F50A533BD3331291FD31E;
		G_B22_1 = G_B21_1;
	}

IL_01bc:
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_86;
		L_86 = AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86(G_B22_1, G_B22_0, NULL);
		return L_86;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetContentEncodingHeader(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97 (RuntimeObject* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44621EB2592613282FDA2B9A8D681C8792AF62F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE0B6856D8C417B721AA78EBAB7DEC28DAE5C81);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_1, _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144, (&V_0));
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_3, _stringLiteral5EE0B6856D8C417B721AA78EBAB7DEC28DAE5C81, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_5 = ___0_request;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral44621EB2592613282FDA2B9A8D681C8792AF62F0, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_6, _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144, L_8);
	}

IL_003c:
	{
		return;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::SignBlob(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_SignBlob_m14AB2E6346C49F4DDD54C852F502F47475992F2D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, String_t* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_key;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___1_data;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AWS4Signer_SignBlob_m244BAA116D10B8F56DA06A1075AFDCA04CFDD2BB(L_0, L_3, NULL);
		return L_4;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::SignBlob(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_SignBlob_m244BAA116D10B8F56DA06A1075AFDCA04CFDD2BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_key;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] Amazon.Util.ICryptoUtil::HMACSignBinary(System.Byte[],System.Byte[],Amazon.Runtime.SigningAlgorithm) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_0, L_1, L_2, 1);
		return L_3;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m24E0CFA1D3BC40CEBD6D8439375AE68C01FB26A1 (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, String_t* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_algorithm;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_key;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___2_data;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(L_0, L_1, L_4, NULL);
		return L_5;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___2_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_key;
		int32_t L_3 = ___0_algorithm;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] Amazon.Util.ICryptoUtil::HMACSignBinary(System.Byte[],System.Byte[],Amazon.Runtime.SigningAlgorithm) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_mB586790357AA02ACA787D309B13EE501CEA4729F (String_t* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_data;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = AWS4Signer_ComputeHash_m3A156055C5E75B2D6D4EC32AD7CA16D1BE05645C(L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_m3A156055C5E75B2D6D4EC32AD7CA16D1BE05645C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Amazon.Util.ICryptoUtil::ComputeSHA256Hash(System.Byte[]) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetPayloadSignatureHeader(Amazon.Runtime.Internal.IRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86 (RuntimeObject* ___0_request, String_t* ___1_payloadHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_request;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_1, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = ___0_request;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_3);
		String_t* L_5 = ___1_payloadHash;
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_4, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, L_5);
		goto IL_0036;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___0_request;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		String_t* L_8 = ___1_payloadHash;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::Add(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_7, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, L_8);
	}

IL_0036:
	{
		String_t* L_9 = ___1_payloadHash;
		return L_9;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineSigningRegion(Amazon.Runtime.IClientConfig,System.String,Amazon.RegionEndpoint,Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineSigningRegion_m3D28209191EF6F4BC13908EAB71437327E802B17 (RuntimeObject* ___0_clientConfig, String_t* ___1_serviceName, RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___2_alternateEndpoint, RuntimeObject* ___3_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* V_1 = NULL;
	Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* V_2 = NULL;
	String_t* V_3 = NULL;
	Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* V_4 = NULL;
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* V_5 = NULL;
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_0 = ___2_alternateEndpoint;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_1 = ___2_alternateEndpoint;
		String_t* L_2 = ___1_serviceName;
		RuntimeObject* L_3 = ___0_clientConfig;
		GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* L_4;
		L_4 = GetEndpointForServiceOptionsExtensions_ToGetEndpointForServiceOptions_m2283A9443F0FB4E9BEAB69C5C81DAE5BFD058EF8(L_3, NULL);
		NullCheck(L_1);
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_5;
		L_5 = RegionEndpoint_GetEndpointForService_mCA203A539CCB68EF369DB4E42B9680ADF3281F99(L_1, L_2, L_4, NULL);
		V_2 = L_5;
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0020;
		}
	}
	{
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_8, NULL);
		return L_9;
	}

IL_0020:
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_10 = ___2_alternateEndpoint;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline(L_10, NULL);
		return L_11;
	}

IL_0027:
	{
		RuntimeObject* L_12 = ___0_clientConfig;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Amazon.Runtime.IClientConfig::get_AuthenticationRegion() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_12);
		V_0 = L_13;
		RuntimeObject* L_14 = ___3_request;
		if (!L_14)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_15 = ___3_request;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(36 /* System.String Amazon.Runtime.Internal.IRequest::get_AuthenticationRegion() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_15);
		if (!L_16)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_17 = ___3_request;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker0< String_t* >::Invoke(36 /* System.String Amazon.Runtime.Internal.IRequest::get_AuthenticationRegion() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_17);
		V_0 = L_18;
	}

IL_0040:
	{
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_21, NULL);
		return L_22;
	}

IL_004f:
	{
		RuntimeObject* L_23 = ___0_clientConfig;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Amazon.Runtime.IClientConfig::get_ServiceURL() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_23);
		bool L_25;
		L_25 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_24, NULL);
		if (L_25)
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject* L_26 = ___0_clientConfig;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Amazon.Runtime.IClientConfig::get_ServiceURL() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_26);
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = AWSSDKUtils_DetermineRegion_mB3987BEAEC9FD28AAB6786872EE317F7E6BE3467(L_27, NULL);
		V_3 = L_28;
		String_t* L_29 = V_3;
		bool L_30;
		L_30 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_29, NULL);
		if (L_30)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_31 = V_3;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_31, NULL);
		return L_32;
	}

IL_0077:
	{
		RuntimeObject* L_33 = ___0_clientConfig;
		NullCheck(L_33);
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_34;
		L_34 = InterfaceFuncInvoker0< RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* >::Invoke(0 /* Amazon.RegionEndpoint Amazon.Runtime.IClientConfig::get_RegionEndpoint() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_33);
		V_1 = L_34;
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_35 = V_1;
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_36 = V_1;
		String_t* L_37 = ___1_serviceName;
		RuntimeObject* L_38 = ___0_clientConfig;
		GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* L_39;
		L_39 = GetEndpointForServiceOptionsExtensions_ToGetEndpointForServiceOptions_m2283A9443F0FB4E9BEAB69C5C81DAE5BFD058EF8(L_38, NULL);
		NullCheck(L_36);
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_40;
		L_40 = RegionEndpoint_GetEndpointForService_mCA203A539CCB68EF369DB4E42B9680ADF3281F99(L_36, L_37, L_39, NULL);
		V_4 = L_40;
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_41 = V_4;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_41, NULL);
		bool L_43;
		L_43 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_42, NULL);
		if (L_43)
		{
			goto IL_00a6;
		}
	}
	{
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_44 = V_4;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_44, NULL);
		return L_45;
	}

IL_00a6:
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_46 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_il2cpp_TypeInfo_var);
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_47;
		L_47 = RegionEndpoint_GetRegionEndpointOverride_m35E252B7A7D8AB2E50BFDFBEB9FAC5BF606B173B(L_46, NULL);
		V_5 = L_47;
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_48 = V_5;
		if (!L_48)
		{
			goto IL_00ba;
		}
	}
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_49 = V_5;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline(L_49, NULL);
		return L_50;
	}

IL_00ba:
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_51 = V_1;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline(L_51, NULL);
		return L_52;
	}

IL_00c1:
	{
		String_t* L_53 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_53;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineService(Amazon.Runtime.IClientConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineService_m6126B49E5B1045D2D39A916BDB72A37148C082AF (RuntimeObject* ___0_clientConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_clientConfig;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Amazon.Runtime.IClientConfig::get_AuthenticationServiceName() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_3 = ___0_clientConfig;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(24 /* System.String Amazon.Runtime.IClientConfig::DetermineServiceURL() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_3);
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = AWSSDKUtils_DetermineService_m064D59D89DBF00D45262B3A5C7B78B546FB78C8A(L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		RuntimeObject* L_6 = ___0_clientConfig;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Amazon.Runtime.IClientConfig::get_AuthenticationServiceName() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequest(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequest_mABDD64D192C79A6C24D4FF53A7D115FD5CE28D7F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_endpoint;
		String_t* L_1 = ___1_resourcePath;
		String_t* L_2 = ___2_httpMethod;
		RuntimeObject* L_3 = ___3_sortedHeaders;
		String_t* L_4 = ___4_canonicalQueryString;
		String_t* L_5 = ___5_precomputedBodyHash;
		RuntimeObject* L_6 = ___6_pathResources;
		bool L_7 = ___7_doubleEncode;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = AWS4Signer_CanonicalizeRequestHelper_m46C16171BDE9A434F3F5F67077E5DFEACB5963C0(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequestHelper(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequestHelper_m46C16171BDE9A434F3F5F67077E5DFEACB5963C0 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___2_httpMethod;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_2, NULL);
		StringBuilder_t* L_4 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = ___0_endpoint;
		String_t* L_6 = ___1_resourcePath;
		bool L_7 = ___7_doubleEncode;
		RuntimeObject* L_8 = ___6_pathResources;
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = AWSSDKUtils_CanonicalizeResourcePathV2_mDF32096996524E978839632DEE04084FB6DD58DB(L_5, L_6, L_7, L_8, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_9, NULL);
		StringBuilder_t* L_11 = V_0;
		String_t* L_12 = ___4_canonicalQueryString;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_11, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = ___3_sortedHeaders;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = AWS4Signer_CanonicalizeHeaders_m31F726AD26640DCF29279AF4FF32EA9DB6FC97F8(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_14, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		RuntimeObject* L_19 = ___3_sortedHeaders;
		String_t* L_20;
		L_20 = AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF(L_19, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_18, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_20, NULL);
		String_t* L_22 = ___5_precomputedBodyHash;
		if (!L_22)
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		String_t* L_24 = ___5_precomputedBodyHash;
		NullCheck(L_23);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_24, NULL);
		goto IL_0082;
	}

IL_006b:
	{
		RuntimeObject* L_26 = ___3_sortedHeaders;
		NullCheck(L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_26, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, (&V_1));
		if (!L_27)
		{
			goto IL_0082;
		}
	}
	{
		StringBuilder_t* L_28 = V_0;
		String_t* L_29 = V_1;
		NullCheck(L_28);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, L_29, NULL);
	}

IL_0082:
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		return L_32;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer::SortAndPruneHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AWS4Signer_SortAndPruneHeaders_m56DE03A6A2F1B020B539DB8EBEBA0A3A60CE1DFC (RuntimeObject* ___0_requestHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_1 = (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*)il2cpp_codegen_object_new(SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169(L_1, L_0, SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_requestHeaders;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_005a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0014_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
				RuntimeObject* L_8 = ((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->____headersToIgnoreWhenSigning_3;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				bool L_10;
				L_10 = Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33(L_8, L_9, Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0047_1;
				}
			}
			{
				SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_11 = V_0;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_11);
				SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0(L_11, L_13, L_14, SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
			}

IL_0047_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_17 = V_0;
		return L_17;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaders_m31F726AD26640DCF29279AF4FF32EA9DB6FC97F8 (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	StringBuilder_t* G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	StringBuilder_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_sortedHeaders;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_sortedHeaders;
		int32_t L_2;
		L_2 = Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB(L_1, Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}

IL_000b:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0011:
	{
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = ___0_sortedHeaders;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0084;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0084:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0071_1;
			}

IL_0020_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				StringBuilder_t* L_11 = V_0;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
				NullCheck(L_11);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
				StringBuilder_t* L_15 = V_0;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
				StringBuilder_t* L_17 = V_0;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
				String_t* L_19;
				L_19 = AWSSDKUtils_CompressSpaces_m719A9C6A270511B137EC159FC5CE6EE7E3B2F9BE(L_18, NULL);
				String_t* L_20 = L_19;
				G_B6_0 = L_20;
				G_B6_1 = L_17;
				if (L_20)
				{
					G_B7_0 = L_20;
					G_B7_1 = L_17;
					goto IL_005a_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				G_B8_1 = G_B6_1;
				goto IL_005f_1;
			}

IL_005a_1:
			{
				NullCheck(G_B7_0);
				String_t* L_21;
				L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(G_B7_0, NULL);
				G_B8_0 = L_21;
				G_B8_1 = G_B7_1;
			}

IL_005f_1:
			{
				NullCheck(G_B8_1);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
				StringBuilder_t* L_23 = V_0;
				NullCheck(L_23);
				StringBuilder_t* L_24;
				L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			}

IL_0071_1:
			{
				RuntimeObject* L_25 = V_1;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		return L_28;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaderNames(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_sortedHeaders;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0051;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				StringBuilder_t* L_7 = V_0;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
				if ((((int32_t)L_8) <= ((int32_t)0)))
				{
					goto IL_002b_1;
				}
			}
			{
				StringBuilder_t* L_9 = V_0;
				NullCheck(L_9);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			}

IL_002b_1:
			{
				StringBuilder_t* L_11 = V_0;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
				NullCheck(L_11);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
			}

IL_003e_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Amazon.Runtime.Internal.Auth.AWS4Signer::GetParametersToCanonicalize(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* AWS4Signer_GetParametersToCanonicalize_m7DC2E3B03D9EEAE862055419329B0E1400D21C30 (RuntimeObject* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* G_B15_0 = NULL;
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* G_B15_1 = NULL;
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* G_B14_0 = NULL;
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* G_B14_1 = NULL;
	{
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_0 = (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*)il2cpp_codegen_object_new(List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052(L_0, List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_request;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_SubResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_request;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_SubResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_6 = ___0_request;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_SubResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_1;
					if (!L_9)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_002a_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_12;
				L_12 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_11);
				V_2 = L_12;
				List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_13 = V_0;
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_16;
				memset((&L_16), 0, sizeof(L_16));
				KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B((&L_16), L_14, L_15, /*hidden argument*/KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
				NullCheck(L_13);
				List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_inline(L_13, L_16, List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var);
			}

IL_004a_1:
			{
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		RuntimeObject* L_19 = ___0_request;
		NullCheck(L_19);
		bool L_20;
		L_20 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseQueryString() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_19);
		if (!L_20)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_21 = ___0_request;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Parameters() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_21);
		if (!L_22)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_23 = ___0_request;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Parameters() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_26 = ___0_request;
		NullCheck(L_26);
		ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002* L_27;
		L_27 = InterfaceFuncInvoker0< ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002* >::Invoke(4 /* Amazon.Runtime.Internal.ParameterCollection Amazon.Runtime.Internal.IRequest::get_ParameterCollection() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_28;
		L_28 = ParameterCollection_GetSortedParametersList_mEFE9FDF1F0E7D9119663D84EC862AA3A7376C741(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_29 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_2;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_30 = L_29;
		G_B14_0 = L_30;
		G_B14_1 = L_28;
		if (L_30)
		{
			G_B15_0 = L_30;
			G_B15_1 = L_28;
			goto IL_00a9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_31 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_32 = (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*)il2cpp_codegen_object_new(Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A(L_32, L_31, (intptr_t)((void*)U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A_RuntimeMethod_var), NULL);
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_33 = L_32;
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_2 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_2), (void*)L_33);
		G_B15_0 = L_33;
		G_B15_1 = G_B14_1;
	}

IL_00a9:
	{
		RuntimeObject* L_34;
		L_34 = Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2(G_B15_1, G_B15_0, Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_34);
		V_1 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_36 = V_1;
					if (!L_36)
					{
						goto IL_00e9;
					}
				}
				{
					RuntimeObject* L_37 = V_1;
					NullCheck(L_37);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
				}

IL_00e9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d6_1;
			}

IL_00b6_1:
			{
				RuntimeObject* L_38 = V_1;
				NullCheck(L_38);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_39;
				L_39 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_38);
				V_3 = L_39;
				List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_40 = V_0;
				String_t* L_41;
				L_41 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_42;
				L_42 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_43;
				memset((&L_43), 0, sizeof(L_43));
				KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B((&L_43), L_41, L_42, /*hidden argument*/KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
				NullCheck(L_40);
				List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_inline(L_40, L_43, List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var);
			}

IL_00d6_1:
			{
				RuntimeObject* L_44 = V_1;
				NullCheck(L_44);
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
				if (L_45)
				{
					goto IL_00b6_1;
				}
			}
			{
				goto IL_00ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ea:
	{
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_46 = V_0;
		return L_46;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_m549B1209FBD3ED80F76482F6182235EA0EE41049 (RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_parameters;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWS4Signer_CanonicalizeQueryParameters_mCEE411D6BE73995FDA08C9015DC18FF67F155FF5(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_mCEE411D6BE73995FDA08C9015DC18FF67F155FF5 (RuntimeObject* ___0_parameters, bool ___1_uriEncodeParameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___0_parameters;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_3 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_3;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_2;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_5 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_6 = (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*)il2cpp_codegen_object_new(Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5_RuntimeMethod_var), NULL);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_7 = L_6;
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_3), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_8;
		L_8 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		RuntimeObject* L_9;
		L_9 = Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225(G_B4_1, G_B4_0, L_8, Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225_RuntimeMethod_var);
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_10;
		L_10 = Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0(L_9, Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0_RuntimeMethod_var);
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_0 = L_11;
		NullCheck(L_10);
		Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 L_12;
		L_12 = List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D(L_10, List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D_RuntimeMethod_var);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86((&V_1), Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00dc_1;
			}

IL_0049_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_13;
				L_13 = Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_inline((&V_1), Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_RuntimeMethod_var);
				V_2 = L_13;
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				V_3 = L_14;
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				V_4 = L_15;
				StringBuilder_t* L_16 = V_0;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_16, NULL);
				if ((((int32_t)L_17) <= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}
			{
				StringBuilder_t* L_18 = V_0;
				NullCheck(L_18);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
			}

IL_0077_1:
			{
				bool L_20 = ___1_uriEncodeParameters;
				if (!L_20)
				{
					goto IL_00b5_1;
				}
			}
			{
				String_t* L_21 = V_4;
				bool L_22;
				L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
				if (!L_22)
				{
					goto IL_0098_1;
				}
			}
			{
				StringBuilder_t* L_23 = V_0;
				String_t* L_24 = V_3;
				il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
				String_t* L_25;
				L_25 = AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F(L_24, (bool)0, NULL);
				NullCheck(L_23);
				StringBuilder_t* L_26;
				L_26 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_23, _stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C, L_25, NULL);
				goto IL_00dc_1;
			}

IL_0098_1:
			{
				StringBuilder_t* L_27 = V_0;
				String_t* L_28 = V_3;
				il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
				String_t* L_29;
				L_29 = AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F(L_28, (bool)0, NULL);
				String_t* L_30 = V_4;
				String_t* L_31;
				L_31 = AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F(L_30, (bool)0, NULL);
				NullCheck(L_27);
				StringBuilder_t* L_32;
				L_32 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_27, _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_29, L_31, NULL);
				goto IL_00dc_1;
			}

IL_00b5_1:
			{
				String_t* L_33 = V_4;
				bool L_34;
				L_34 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_33, NULL);
				if (!L_34)
				{
					goto IL_00cd_1;
				}
			}
			{
				StringBuilder_t* L_35 = V_0;
				String_t* L_36 = V_3;
				NullCheck(L_35);
				StringBuilder_t* L_37;
				L_37 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_35, _stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C, L_36, NULL);
				goto IL_00dc_1;
			}

IL_00cd_1:
			{
				StringBuilder_t* L_38 = V_0;
				String_t* L_39 = V_3;
				String_t* L_40 = V_4;
				NullCheck(L_38);
				StringBuilder_t* L_41;
				L_41 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_38, _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_39, L_40, NULL);
			}

IL_00dc_1:
			{
				bool L_42;
				L_42 = Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650((&V_1), Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_00f8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f8:
	{
		StringBuilder_t* L_43 = V_0;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		return L_44;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__cctor_mCD3188812F0115243904EF57DD194F1B5A6764D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9C7EC66796179F504EE3E8DA0FCDDE429FCBEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3353E5A96E2E650A69A4720B16999C6F26194384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral534F0070064CF7E71A3C1755BC6024BF5DD8E5BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3994FC70D3F6DF4468C430CAF31A859A1E63619);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->___TerminatorBytes_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->___TerminatorBytes_2), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F(L_3, L_2, HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = L_3;
		NullCheck(L_4);
		bool L_5;
		L_5 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, _stringLiteral3353E5A96E2E650A69A4720B16999C6F26194384, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_6 = L_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_6, _stringLiteral0E9C7EC66796179F504EE3E8DA0FCDDE429FCBEA, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = L_6;
		NullCheck(L_8);
		bool L_9;
		L_9 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_8, _stringLiteral534F0070064CF7E71A3C1755BC6024BF5DD8E5BD, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = L_8;
		NullCheck(L_10);
		bool L_11;
		L_11 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_10, _stringLiteralA3994FC70D3F6DF4468C430CAF31A859A1E63619, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->____headersToIgnoreWhenSigning_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->____headersToIgnoreWhenSigning_3), (void*)L_10);
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m80BC8D2D1F958144E8E8BD8DF899C2DD2A6422DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_0 = (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854*)il2cpp_codegen_object_new(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB6F99B09FD58B97C1D0A2594F3BA51EB2C8244E3(L_0, NULL);
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6F99B09FD58B97C1D0A2594F3BA51EB2C8244E3 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<SetXAmzTrailerHeader>b__33_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_key;
		return L_0;
	}
}
// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<GetParametersToCanonicalize>b__60_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_queryParameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___0_queryParameter), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<CanonicalizeQueryParameters>b__64_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_kvp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___0_kvp), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4SigningResult::.ctor(System.String,System.DateTime,System.String,System.String,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4SigningResult__ctor_m51505F2656D83286A4936721C8403EF97531792F (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_signingKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_signature, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_awsAccessKeyId;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___1_signedAt;
		String_t* L_2 = ___2_signedHeaders;
		String_t* L_3 = ___3_scope;
		AWSSigningResultBase__ctor_mC6D5214AEA8373E5D67A3C51004B3F7BC800FF28(__this, L_0, L_1, L_2, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_signingKey;
		__this->____signingKey_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signingKey_4), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___5_signature;
		__this->____signature_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signature_5), (void*)L_5);
		return;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4SigningResult::GetSigningKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4SigningResult_GetSigningKey_m504B4F5F9D0EEEB0FE2EC6ECE62EABC98FA3749C (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____signingKey_4;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____signingKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck((RuntimeArray*)L_2);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_2, (RuntimeArray*)L_3, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4SigningResult::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4SigningResult_get_Signature_mD6A9FEB602F7A05C22AB432F22094073F1295D2A (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____signature_5;
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4SigningResult::get_ForAuthorizationHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4SigningResult_get_ForAuthorizationHeader_mBFA882919446478ADAB263A30C4F62B5824FA4D0 (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BDC2A3BF3E3C505BA95E684745BFD1081984CEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54410F787AFA08038634B055933A63784C4AD055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral3BDC2A3BF3E3C505BA95E684745BFD1081984CEE, NULL);
		String_t* L_2;
		L_2 = AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline(__this, NULL);
		String_t* L_3;
		L_3 = AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_1, _stringLiteral54410F787AFA08038634B055933A63784C4AD055, _stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821, L_2, L_3, NULL);
		String_t* L_5;
		L_5 = AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_4, _stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D, _stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F, L_5, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Signature() */, __this);
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_6, _stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219, _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66, L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
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
// System.Void Amazon.Runtime.Internal.Auth.AWSSigningResultBase::.ctor(System.String,System.DateTime,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWSSigningResultBase__ctor_mC6D5214AEA8373E5D67A3C51004B3F7BC800FF28 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_awsAccessKeyId;
		__this->____awsAccessKeyId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____awsAccessKeyId_0), (void*)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___1_signedAt;
		__this->____originalDateTime_1 = L_1;
		String_t* L_2 = ___2_signedHeaders;
		__this->____signedHeaders_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signedHeaders_2), (void*)L_2);
		String_t* L_3 = ___3_scope;
		__this->____scope_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scope_3), (void*)L_3);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_AccessKeyId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____awsAccessKeyId_0;
		return L_0;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_ISO8601DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_ISO8601DateTime_m9BC3F8A2DA8604E7F826D73781C8E145D3014DFD (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->____originalDateTime_1;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083(L_0, _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11, NULL);
		return L_1;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_SignedHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____signedHeaders_2;
		return L_0;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Scope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____scope_3;
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
// System.Void Amazon.Runtime.Internal.Auth.NullSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSigner_Sign_m30258E0EC75C982C730BDE2113B7AA54BF82BF58 (NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.Internal.Auth.NullSigner::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullSigner_get_Protocol_mDB4F4C063DB942B5AB81AA59CD9F8E32D3D7264D (NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = __this->___U3CContentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistenceManager_set_Instance_m8C99F7B4EA7C6D5B4EC86B2975F1CBBA28ED6E8C_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SettingsWatcher_set_Enable_m4CC90CC7516D15F5E1F2A2F778337052F556AAA8_inline (SettingsWatcher_tE2BDF81F593E4F0C29954EC3D905C53719200504* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CEnableU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451* JsonSerializerContext_get_Default_m43FA999E8EAE464CB518ECC4214934AAD35E6E66_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451* L_0 = ((JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451_StaticFields*)il2cpp_codegen_static_fields_for(JsonSerializerContext_tD6324D94634B8464471ADADAF710A43D25785451_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PersistenceManager_GetSettingsStoreFolder_m147E796018CE56B550FBAD4CC08BFA9BF3277B4B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_StaticFields*)il2cpp_codegen_static_fields_for(PersistenceManager_t0B9E954E22159535542FF78768FB3F80A1C053B4_il2cpp_TypeInfo_var))->___SettingsStoreFolder_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SettingsCollection_set_InitializedEmpty_m436F1F8B3A05E9CC815651B3DD42143305E8F3D6_inline (SettingsCollection_t86085ED69858E817BA14B7ABAEB930363F483383* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CInitializedEmptyU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_PrettyPrint_mA7EC56112C7DF3118EA75A3FC9EA7BAD77DA7DDD_inline (JsonWriter_t0C2EC21CF2A3358416F1FDC132619F41260ABCE9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___pretty_print_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_name_mC4CFB4B716B9EC762C7918AD125076D89C10BDC3_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dnsSuffix_mF02D5463D26245F5B47F1BE22686384F747037FA_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdnsSuffixU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dualStackDnsSuffix_mC058856B21FB662857B7D809DA58AF21672FE4CF_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdualStackDnsSuffixU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsFIPS_mCD7909A9D1856996122DAD9439E615141D211DF2_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CsupportsFIPSU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsDualStack_mF31AE3BA3A11E9BE7BB75C21A81D929F3BFA2DD1_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CsupportsDualStackU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdnsSuffixU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdnsSuffixU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdualStackDnsSuffixU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdualStackDnsSuffixU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CsupportsFIPSU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CsupportsDualStackU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB_inline (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CimplicitGlobalRegionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplicitGlobalRegionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAccessKeyU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSecretKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653* GlobalRuntimeDependencyRegistry_get_Instance_m6F48E028BAB6E8F1051306BAEC19B0D5CA2E0B55_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_il2cpp_TypeInfo_var);
		GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653* L_0 = ((GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_StaticFields*)il2cpp_codegen_static_fields_for(GlobalRuntimeDependencyRegistry_t2DBCCA5B608CF3F89885F33263B2C6B9BFBA1653_il2cpp_TypeInfo_var))->____instance_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____awsAccessKeyId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____scope_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____signedHeaders_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CSignPayloadU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSignPayloadU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222* L_0 = ((CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_StaticFields*)il2cpp_codegen_static_fields_for(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var))->___util_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline (Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthRegionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSystemNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___0_item;
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = ___0_item;
		((  void (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->____current_3;
		return L_0;
	}
}

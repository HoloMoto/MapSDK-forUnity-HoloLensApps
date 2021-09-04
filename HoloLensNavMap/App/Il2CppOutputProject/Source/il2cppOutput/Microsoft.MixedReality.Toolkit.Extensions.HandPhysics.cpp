﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody[]
struct JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t3927E6A10BB4238C35225B4D3196D8DA50F2CE07;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tD549E6AD9FA9F1348EBC41610823323ED8A4E5B1;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t4E1BC5235F852304B8BC4DFBE9CDC749B3F20812_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t8A262D666130009C1CBAF62C7F75BA2B3EC43E6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJoint_t663D6CC73E08A415B9AA7CF14212AC8E2BED0BDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1AB3E1CC3338832A9DF2A9FA959C09508DC043AF____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604;
IL2CPP_EXTERN_C String_t* _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2CA525E745821399EEF6F1D2733A285A82160939;
IL2CPP_EXTERN_C String_t* _stringLiteralC1738C3F31C42EB3867F885AD91436A640396392;
IL2CPP_EXTERN_C String_t* _stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m46B2F8ECA72D587801FF18D2E580F47845A3D943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_m6B58184E11B1B48472560BAA66BD8F6BE3705327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7AA9AEE0D2A55C3C7B094150DDC6CEC225C412D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_mA6AAC8BA93F7C2D5C03108C6B3B4BCFC06C7505E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6AC2E568AB91E34F1655855CB38573E9FBD2797C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1F2B8BDAA98A52C6088D79724344753872574F89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B9080371943882A72CDB58AB547244689E64190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mACEFD07C5A0FE9C85BC165DF1E4A825675719EAC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D;
struct TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5F83759361765D9E8B073999C68DA8B9D57C4602 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03, ____items_1)); }
	inline JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0* get__items_1() const { return ____items_1; }
	inline JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03_StaticFields, ____emptyArray_5)); }
	inline JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointKinematicBodyU5BU5D_t23A3A79C210D3AC72BBDB953BF81D465D44078E0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51, ___list_0)); }
	inline List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * get_list_0() const { return ___list_0; }
	inline List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51, ___current_3)); }
	inline JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * get_current_3() const { return ___current_3; }
	inline JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t22619D0176D916EC9B0F8C079C372F1C885F91D5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t22619D0176D916EC9B0F8C079C372F1C885F91D5__padding[20];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1AB3E1CC3338832A9DF2A9FA959C09508DC043AF  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1AB3E1CC3338832A9DF2A9FA959C09508DC043AF_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B
	__StaticArrayInitTypeSizeU3D20_t22619D0176D916EC9B0F8C079C372F1C885F91D5  ___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0;

public:
	inline static int32_t get_offset_of_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1AB3E1CC3338832A9DF2A9FA959C09508DC043AF_StaticFields, ___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0)); }
	inline __StaticArrayInitTypeSizeU3D20_t22619D0176D916EC9B0F8C079C372F1C885F91D5  get_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0() const { return ___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0; }
	inline __StaticArrayInitTypeSizeU3D20_t22619D0176D916EC9B0F8C079C372F1C885F91D5 * get_address_of_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0() { return &___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0; }
	inline void set_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0(__StaticArrayInitTypeSizeU3D20_t22619D0176D916EC9B0F8C079C372F1C885F91D5  value)
	{
		___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t8A262D666130009C1CBAF62C7F75BA2B3EC43E6A 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t8A262D666130009C1CBAF62C7F75BA2B3EC43E6A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_t663D6CC73E08A415B9AA7CF14212AC8E2BED0BDE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t663D6CC73E08A415B9AA7CF14212AC8E2BED0BDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t3927E6A10BB4238C35225B4D3196D8DA50F2CE07  : public BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseExtensionService_t3927E6A10BB4238C35225B4D3196D8DA50F2CE07, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F  : public BaseExtensionService_t3927E6A10BB4238C35225B4D3196D8DA50F2CE07
{
public:
	// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handPhysicsServiceProfile
	HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * ___handPhysicsServiceProfile_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsServiceRoot>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CHandPhysicsServiceRootU3Ek__BackingField_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsLayer>k__BackingField
	int32_t ___U3CHandPhysicsLayerU3Ek__BackingField_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<UsePalmKinematicBody>k__BackingField
	bool ___U3CUsePalmKinematicBodyU3Ek__BackingField_12;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingerTipKinematicBodyPrefab_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::palmKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmKinematicBodyPrefab_14;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handJointService
	RuntimeObject* ___handJointService_15;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::jointKinematicBodies
	List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * ___jointKinematicBodies_18;

public:
	inline static int32_t get_offset_of_handPhysicsServiceProfile_9() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___handPhysicsServiceProfile_9)); }
	inline HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * get_handPhysicsServiceProfile_9() const { return ___handPhysicsServiceProfile_9; }
	inline HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 ** get_address_of_handPhysicsServiceProfile_9() { return &___handPhysicsServiceProfile_9; }
	inline void set_handPhysicsServiceProfile_9(HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * value)
	{
		___handPhysicsServiceProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPhysicsServiceProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsServiceRootU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___U3CHandPhysicsServiceRootU3Ek__BackingField_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CHandPhysicsServiceRootU3Ek__BackingField_10() const { return ___U3CHandPhysicsServiceRootU3Ek__BackingField_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CHandPhysicsServiceRootU3Ek__BackingField_10() { return &___U3CHandPhysicsServiceRootU3Ek__BackingField_10; }
	inline void set_U3CHandPhysicsServiceRootU3Ek__BackingField_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CHandPhysicsServiceRootU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandPhysicsServiceRootU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsLayerU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___U3CHandPhysicsLayerU3Ek__BackingField_11)); }
	inline int32_t get_U3CHandPhysicsLayerU3Ek__BackingField_11() const { return ___U3CHandPhysicsLayerU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CHandPhysicsLayerU3Ek__BackingField_11() { return &___U3CHandPhysicsLayerU3Ek__BackingField_11; }
	inline void set_U3CHandPhysicsLayerU3Ek__BackingField_11(int32_t value)
	{
		___U3CHandPhysicsLayerU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CUsePalmKinematicBodyU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___U3CUsePalmKinematicBodyU3Ek__BackingField_12)); }
	inline bool get_U3CUsePalmKinematicBodyU3Ek__BackingField_12() const { return ___U3CUsePalmKinematicBodyU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUsePalmKinematicBodyU3Ek__BackingField_12() { return &___U3CUsePalmKinematicBodyU3Ek__BackingField_12; }
	inline void set_U3CUsePalmKinematicBodyU3Ek__BackingField_12(bool value)
	{
		___U3CUsePalmKinematicBodyU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_13() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___fingerTipKinematicBodyPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingerTipKinematicBodyPrefab_13() const { return ___fingerTipKinematicBodyPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingerTipKinematicBodyPrefab_13() { return &___fingerTipKinematicBodyPrefab_13; }
	inline void set_fingerTipKinematicBodyPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingerTipKinematicBodyPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_14() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___palmKinematicBodyPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmKinematicBodyPrefab_14() const { return ___palmKinematicBodyPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmKinematicBodyPrefab_14() { return &___palmKinematicBodyPrefab_14; }
	inline void set_palmKinematicBodyPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmKinematicBodyPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_handJointService_15() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___handJointService_15)); }
	inline RuntimeObject* get_handJointService_15() const { return ___handJointService_15; }
	inline RuntimeObject** get_address_of_handJointService_15() { return &___handJointService_15; }
	inline void set_handJointService_15(RuntimeObject* value)
	{
		___handJointService_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_15), (void*)value);
	}

	inline static int32_t get_offset_of_jointKinematicBodies_18() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F, ___jointKinematicBodies_18)); }
	inline List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * get_jointKinematicBodies_18() const { return ___jointKinematicBodies_18; }
	inline List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 ** get_address_of_jointKinematicBodies_18() { return &___jointKinematicBodies_18; }
	inline void set_jointKinematicBodies_18(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * value)
	{
		___jointKinematicBodies_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointKinematicBodies_18), (void*)value);
	}
};

struct HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handednessTypes
	HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* ___handednessTypes_16;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipTypes
	TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2* ___fingerTipTypes_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_19;

public:
	inline static int32_t get_offset_of_handednessTypes_16() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields, ___handednessTypes_16)); }
	inline HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* get_handednessTypes_16() const { return ___handednessTypes_16; }
	inline HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D** get_address_of_handednessTypes_16() { return &___handednessTypes_16; }
	inline void set_handednessTypes_16(HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* value)
	{
		___handednessTypes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handednessTypes_16), (void*)value);
	}

	inline static int32_t get_offset_of_fingerTipTypes_17() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields, ___fingerTipTypes_17)); }
	inline TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2* get_fingerTipTypes_17() const { return ___fingerTipTypes_17; }
	inline TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2** get_address_of_fingerTipTypes_17() { return &___fingerTipTypes_17; }
	inline void set_fingerTipTypes_17(TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2* value)
	{
		___fingerTipTypes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipTypes_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields, ___UpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_19() const { return ___UpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_19() { return &___UpdatePerfMarker_19; }
	inline void set_UpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_19 = value;
	}
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318  : public BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::handPhysicsLayer
	int32_t ___handPhysicsLayer_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::fingerTipKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingerTipKinematicBodyPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::usePalmKinematicBody
	bool ___usePalmKinematicBody_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::palmKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmKinematicBodyPrefab_8;

public:
	inline static int32_t get_offset_of_handPhysicsLayer_5() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318, ___handPhysicsLayer_5)); }
	inline int32_t get_handPhysicsLayer_5() const { return ___handPhysicsLayer_5; }
	inline int32_t* get_address_of_handPhysicsLayer_5() { return &___handPhysicsLayer_5; }
	inline void set_handPhysicsLayer_5(int32_t value)
	{
		___handPhysicsLayer_5 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_6() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318, ___fingerTipKinematicBodyPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingerTipKinematicBodyPrefab_6() const { return ___fingerTipKinematicBodyPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingerTipKinematicBodyPrefab_6() { return &___fingerTipKinematicBodyPrefab_6; }
	inline void set_fingerTipKinematicBodyPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingerTipKinematicBodyPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePalmKinematicBody_7() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318, ___usePalmKinematicBody_7)); }
	inline bool get_usePalmKinematicBody_7() const { return ___usePalmKinematicBody_7; }
	inline bool* get_address_of_usePalmKinematicBody_7() { return &___usePalmKinematicBody_7; }
	inline void set_usePalmKinematicBody_7(bool value)
	{
		___usePalmKinematicBody_7 = value;
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_8() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318, ___palmKinematicBodyPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmKinematicBodyPrefab_8() const { return ___palmKinematicBodyPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmKinematicBodyPrefab_8() { return &___palmKinematicBodyPrefab_8; }
	inline void set_palmKinematicBodyPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmKinematicBodyPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_8), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<Joint>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CJointU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<HandednessType>k__BackingField
	uint8_t ___U3CHandednessTypeU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<JointType>k__BackingField
	int32_t ___U3CJointTypeU3Ek__BackingField_6;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnEnableAction>k__BackingField
	Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * ___U3COnEnableActionU3Ek__BackingField_7;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnDisableAction>k__BackingField
	Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * ___U3COnDisableActionU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CJointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA, ___U3CJointU3Ek__BackingField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CJointU3Ek__BackingField_4() const { return ___U3CJointU3Ek__BackingField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CJointU3Ek__BackingField_4() { return &___U3CJointU3Ek__BackingField_4; }
	inline void set_U3CJointU3Ek__BackingField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CJointU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJointU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandednessTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA, ___U3CHandednessTypeU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessTypeU3Ek__BackingField_5() const { return ___U3CHandednessTypeU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessTypeU3Ek__BackingField_5() { return &___U3CHandednessTypeU3Ek__BackingField_5; }
	inline void set_U3CHandednessTypeU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessTypeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CJointTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA, ___U3CJointTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CJointTypeU3Ek__BackingField_6() const { return ___U3CJointTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CJointTypeU3Ek__BackingField_6() { return &___U3CJointTypeU3Ek__BackingField_6; }
	inline void set_U3CJointTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CJointTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnEnableActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA, ___U3COnEnableActionU3Ek__BackingField_7)); }
	inline Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * get_U3COnEnableActionU3Ek__BackingField_7() const { return ___U3COnEnableActionU3Ek__BackingField_7; }
	inline Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A ** get_address_of_U3COnEnableActionU3Ek__BackingField_7() { return &___U3COnEnableActionU3Ek__BackingField_7; }
	inline void set_U3COnEnableActionU3Ek__BackingField_7(Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * value)
	{
		___U3COnEnableActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnEnableActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDisableActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA, ___U3COnDisableActionU3Ek__BackingField_8)); }
	inline Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * get_U3COnDisableActionU3Ek__BackingField_8() const { return ___U3COnDisableActionU3Ek__BackingField_8; }
	inline Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A ** get_address_of_U3COnDisableActionU3Ek__BackingField_8() { return &___U3COnDisableActionU3Ek__BackingField_8; }
	inline void set_U3COnDisableActionU3Ek__BackingField_8(Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * value)
	{
		___U3COnDisableActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDisableActionU3Ek__BackingField_8), (void*)value);
	}
};

struct JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateStatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateStatePerfMarker_9;

public:
	inline static int32_t get_offset_of_UpdateStatePerfMarker_9() { return static_cast<int32_t>(offsetof(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_StaticFields, ___UpdateStatePerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateStatePerfMarker_9() const { return ___UpdateStatePerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateStatePerfMarker_9() { return &___UpdateStatePerfMarker_9; }
	inline void set_UpdateStatePerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateStatePerfMarker_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetInputSystemDataProvider_TisRuntimeObject_m7911B39AE9337008DC96C7DFDD751FA974AEF10F_gshared (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m78E51E899A91F621B74B2CF3D5081EF822049DA3_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::.ctor()
inline void List_1__ctor_m1F2B8BDAA98A52C6088D79724344753872574F89 (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m9DC7480A4D463EA55777AF4E05D7D525A194F688 (BaseExtensionService_t3927E6A10BB4238C35225B4D3196D8DA50F2CE07 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * ___profile2, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_m6B58184E11B1B48472560BAA66BD8F6BE3705327 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_m7911B39AE9337008DC96C7DFDD751FA974AEF10F_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_m0592083C3590325D3A8FF2019A1E118B407DE753 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m4971F9A387B08688DBB56017B90F6EB0261940EF (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m83A80A76B65CB0AD3DDC2B27E1CA947CAF30E2F1 (BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m0BB81E6A25B02A74E0B259610801181FD4DEB3AA_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_mA84582C779E0FEEC89D01D17B7D06137AC958E9F_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m4A1271D9F6F70DAE2A13CCA508BBAD091E027A58_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m6F11AA53EECA4D854CE67961098B45507055070E_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m7F7B5E5B2B2F9C266018A22C9AA6BB107C9B7840_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0BBFC6D47B24E4CC703C7FBD767124196D5BB192 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m2DF61C0B019D705C63E3E662DB0AE858938A8A56_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m4B0255C2B72D2E5999EA85B76FB12CBBCEB6C86E (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m66EBCB5BC8131FDF221309EF70031872E96307AE (BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m444E1E3AF08FC30216CF4E2515C6F2582DC6BCCD_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m38006CDF6572BFDDC9488E3B8B124446128DEE7C (BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m754429576DE5562CBA8A49168B95FCE136BCD6E8 (BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::GetEnumerator()
inline Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51  List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67 (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51  (*) (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Current()
inline JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_inline (Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * (*) (Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_m2AB35A6AC1D1F8394BE163A12657C6304A76133D (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m0D4E5EC00454EF78ED7F950EF9C1809C98144FCA_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_mFD20163B9655BDE8910BF436EA51389E13772683_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mFFD8E8F6FAAAD64C25ED17CD1ED77A02BAD928AB_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m8EE09DF308C7CB7A6E632380E40D6D8A1E68871C (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, bool ___active0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::MoveNext()
inline bool Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B (Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Dispose()
inline void Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7 (Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m47CABAA68E6E504EBB7D04FD95EB3D3676A58BB1_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_mDFE6AC585F800138BA7CE315EE57BBF26EE85F00_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m2328F93F3AF6A109205924EEB24C3A7FE592E8CE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent4, JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA ** ___jointKinematicBody5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Add(!0)
inline void List_1_Add_m6AC2E568AB91E34F1655855CB38573E9FBD2797C (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * __this, JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 *, JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m250ADB469C7DB437C22DFC693B68A6CF99FB6C29_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_mF9EE0ED21B2447ABA22E86FF6184605DBED1EBF7_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Count()
inline int32_t List_1_get_Count_m1B9080371943882A72CDB58AB547244689E64190_inline (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mACEFD07C5A0FE9C85BC165DF1E4A825675719EAC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m78E51E899A91F621B74B2CF3D5081EF822049DA3_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>()
inline JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * GameObject_GetComponent_TisJointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_mA6AAC8BA93F7C2D5C03108C6B3B4BCFC06C7505E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m3DB6FA0F6E63838FB4F906747A1EE24A9345B4D0_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_mFC8EA02F147622784438D4E2E8C456EACD363302_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7AA9AEE0D2A55C3C7B094150DDC6CEC225C412D7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_m711C0939E6E60E18ED95508B675591D029F808ED (BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * JointKinematicBody_get_OnEnableAction_m0F5C80DE8A9E9A3AC711AC917AB19088446B00FC_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Invoke(!0)
inline void Action_1_Invoke_m46B2F8ECA72D587801FF18D2E580F47845A3D943 (Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * __this, JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A *, JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA *, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * JointKinematicBody_get_OnDisableAction_m438256BE57169CD39EF0EB9D04F728F307D142E1_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__ctor_m3BF58B8733FB658AE13F229A4200A3129F4A351B (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1F2B8BDAA98A52C6088D79724344753872574F89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointKinematicBody> jointKinematicBodies = new List<JointKinematicBody>();
		List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * L_0 = (List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 *)il2cpp_codegen_object_new(List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03_il2cpp_TypeInfo_var);
		List_1__ctor_m1F2B8BDAA98A52C6088D79724344753872574F89(L_0, /*hidden argument*/List_1__ctor_m1F2B8BDAA98A52C6088D79724344753872574F89_RuntimeMethod_var);
		__this->set_jointKinematicBodies_18(L_0);
		// public HandPhysicsService(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_1 = ___name0;
		uint32_t L_2 = ___priority1;
		BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * L_3 = ___profile2;
		BaseExtensionService__ctor_m9DC7480A4D463EA55777AF4E05D7D525A194F688(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// handPhysicsServiceProfile = (HandPhysicsServiceProfile)profile;
		BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * L_4 = ___profile2;
		__this->set_handPhysicsServiceProfile_9(((HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 *)CastclassClass((RuntimeObject*)L_4, HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_m2AB35A6AC1D1F8394BE163A12657C6304A76133D (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_m6B58184E11B1B48472560BAA66BD8F6BE3705327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t4E1BC5235F852304B8BC4DFBE9CDC749B3F20812_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => handJointService ?? CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>();
		RuntimeObject* L_0 = __this->get_handJointService_15();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t4E1BC5235F852304B8BC4DFBE9CDC749B3F20812_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_m6B58184E11B1B48472560BAA66BD8F6BE3705327(/*hidden argument*/CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_m6B58184E11B1B48472560BAA66BD8F6BE3705327_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m444E1E3AF08FC30216CF4E2515C6F2582DC6BCCD (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_mDFE6AC585F800138BA7CE315EE57BBF26EE85F00 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_mA84582C779E0FEEC89D01D17B7D06137AC958E9F (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m250ADB469C7DB437C22DFC693B68A6CF99FB6C29 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m6F11AA53EECA4D854CE67961098B45507055070E (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_12(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m47CABAA68E6E504EBB7D04FD95EB3D3676A58BB1 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0BBFC6D47B24E4CC703C7FBD767124196D5BB192 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fingerTipKinematicBodyPrefab = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_fingerTipKinematicBodyPrefab_13(L_0);
		// if (fingerTipKinematicBodyPrefab != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_fingerTipKinematicBodyPrefab_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m0592083C3590325D3A8FF2019A1E118B407DE753(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m4971F9A387B08688DBB56017B90F6EB0261940EF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_mF9EE0ED21B2447ABA22E86FF6184605DBED1EBF7 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m4B0255C2B72D2E5999EA85B76FB12CBBCEB6C86E (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// palmKinematicBodyPrefab = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_palmKinematicBodyPrefab_14(L_0);
		// if (palmKinematicBodyPrefab != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_palmKinematicBodyPrefab_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m0592083C3590325D3A8FF2019A1E118B407DE753(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m4971F9A387B08688DBB56017B90F6EB0261940EF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Initialize_m45E9A99B4E5FECFCFC80E49BF0751A5FBC123172 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_m83A80A76B65CB0AD3DDC2B27E1CA947CAF30E2F1(__this, /*hidden argument*/NULL);
		// HandPhysicsLayer = handPhysicsServiceProfile.HandPhysicsLayer;
		HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * L_0 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HandPhysicsServiceProfile_get_HandPhysicsLayer_m0BB81E6A25B02A74E0B259610801181FD4DEB3AA_inline(L_0, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsLayer_mA84582C779E0FEEC89D01D17B7D06137AC958E9F_inline(__this, L_1, /*hidden argument*/NULL);
		// UsePalmKinematicBody = handPhysicsServiceProfile.UsePalmKinematicBody;
		HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * L_2 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_2);
		bool L_3;
		L_3 = HandPhysicsServiceProfile_get_UsePalmKinematicBody_m4A1271D9F6F70DAE2A13CCA508BBAD091E027A58_inline(L_2, /*hidden argument*/NULL);
		HandPhysicsService_set_UsePalmKinematicBody_m6F11AA53EECA4D854CE67961098B45507055070E_inline(__this, L_3, /*hidden argument*/NULL);
		// FingerTipKinematicBodyPrefab = handPhysicsServiceProfile.FingerTipKinematicBodyPrefab;
		HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * L_4 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m7F7B5E5B2B2F9C266018A22C9AA6BB107C9B7840_inline(L_4, /*hidden argument*/NULL);
		HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0BBFC6D47B24E4CC703C7FBD767124196D5BB192(__this, L_5, /*hidden argument*/NULL);
		// PalmKinematicBodyPrefab = handPhysicsServiceProfile.PalmKinematicBodyPrefab;
		HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * L_6 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m2DF61C0B019D705C63E3E662DB0AE858938A8A56_inline(L_6, /*hidden argument*/NULL);
		HandPhysicsService_set_PalmKinematicBodyPrefab_m4B0255C2B72D2E5999EA85B76FB12CBBCEB6C86E(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Enable_mAD7DE4AFD1AC27DBFB927F27E3DB744271B3EA43 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_m66EBCB5BC8131FDF221309EF70031872E96307AE(__this, /*hidden argument*/NULL);
		// HandPhysicsServiceRoot = new GameObject("Hand Physics Service");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsServiceRoot_m444E1E3AF08FC30216CF4E2515C6F2582DC6BCCD_inline(__this, L_0, /*hidden argument*/NULL);
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m0592083C3590325D3A8FF2019A1E118B407DE753(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Disable_m5FC29648720918DF9986FE35764D9A601D893A93 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HandPhysicsServiceRoot != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Object.Destroy(HandPhysicsServiceRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// HandPhysicsServiceRoot = null;
		HandPhysicsService_set_HandPhysicsServiceRoot_m444E1E3AF08FC30216CF4E2515C6F2582DC6BCCD_inline(__this, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// base.Disable();
		BaseService_Disable_m38006CDF6572BFDDC9488E3B8B124446128DEE7C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Update_mFF6EE29E6585F72C4AFD18CD19CDAA38ECE85EBA (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51  V_2;
	memset((&V_2), 0, sizeof(V_2));
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * G_B6_0 = NULL;
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * G_B5_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B7_0 = NULL;
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * G_B7_1 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_19();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			// base.Update();
			BaseService_Update_m754429576DE5562CBA8A49168B95FCE136BCD6E8(__this, /*hidden argument*/NULL);
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * L_2 = __this->get_jointKinematicBodies_18();
			NullCheck(L_2);
			Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51  L_3;
			L_3 = List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67(L_2, /*hidden argument*/List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67_RuntimeMethod_var);
			V_2 = L_3;
		}

IL_0020:
		try
		{// begin try (depth: 2)
			{
				goto IL_008b;
			}

IL_0022:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_4;
				L_4 = Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_inline((Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_RuntimeMethod_var);
				V_3 = L_4;
				// if (HandJointService.IsHandTracked(jointKinematicBody.HandednessType))
				RuntimeObject* L_5;
				L_5 = HandPhysicsService_get_HandJointService_m2AB35A6AC1D1F8394BE163A12657C6304A76133D(__this, /*hidden argument*/NULL);
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_6 = V_3;
				NullCheck(L_6);
				uint8_t L_7;
				L_7 = JointKinematicBody_get_HandednessType_m0D4E5EC00454EF78ED7F950EF9C1809C98144FCA_inline(L_6, /*hidden argument*/NULL);
				NullCheck(L_5);
				bool L_8;
				L_8 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_il2cpp_TypeInfo_var, L_5, L_7);
				if (!L_8)
				{
					goto IL_0084;
				}
			}

IL_003d:
			{
				// jointKinematicBody.Joint = jointKinematicBody.Joint != null ? jointKinematicBody.Joint : HandJointService.RequestJointTransform(jointKinematicBody.JointType, jointKinematicBody.HandednessType);
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_9 = V_3;
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_10 = V_3;
				NullCheck(L_10);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
				L_11 = JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F_inline(L_10, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				G_B5_0 = L_9;
				if (L_12)
				{
					G_B6_0 = L_9;
					goto IL_0065;
				}
			}

IL_004c:
			{
				RuntimeObject* L_13;
				L_13 = HandPhysicsService_get_HandJointService_m2AB35A6AC1D1F8394BE163A12657C6304A76133D(__this, /*hidden argument*/NULL);
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_14 = V_3;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = JointKinematicBody_get_JointType_mFD20163B9655BDE8910BF436EA51389E13772683_inline(L_14, /*hidden argument*/NULL);
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_16 = V_3;
				NullCheck(L_16);
				uint8_t L_17;
				L_17 = JointKinematicBody_get_HandednessType_m0D4E5EC00454EF78ED7F950EF9C1809C98144FCA_inline(L_16, /*hidden argument*/NULL);
				NullCheck(L_13);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
				L_18 = InterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t1E72B443F7DCC302B0697A2C190FF4796606D644_il2cpp_TypeInfo_var, L_13, L_15, L_17);
				G_B7_0 = L_18;
				G_B7_1 = G_B5_0;
				goto IL_006b;
			}

IL_0065:
			{
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_19 = V_3;
				NullCheck(L_19);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
				L_20 = JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F_inline(L_19, /*hidden argument*/NULL);
				G_B7_0 = L_20;
				G_B7_1 = G_B6_0;
			}

IL_006b:
			{
				NullCheck(G_B7_1);
				JointKinematicBody_set_Joint_mFFD8E8F6FAAAD64C25ED17CD1ED77A02BAD928AB_inline(G_B7_1, G_B7_0, /*hidden argument*/NULL);
				// jointKinematicBody.UpdateState(jointKinematicBody.Joint != null);
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_21 = V_3;
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_22 = V_3;
				NullCheck(L_22);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
				L_23 = JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F_inline(L_22, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_24;
				L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				NullCheck(L_21);
				JointKinematicBody_UpdateState_m8EE09DF308C7CB7A6E632380E40D6D8A1E68871C(L_21, L_24, /*hidden argument*/NULL);
				// }
				goto IL_008b;
			}

IL_0084:
			{
				// jointKinematicBody.UpdateState(false);
				JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_25 = V_3;
				NullCheck(L_25);
				JointKinematicBody_UpdateState_m8EE09DF308C7CB7A6E632380E40D6D8A1E68871C(L_25, (bool)0, /*hidden argument*/NULL);
			}

IL_008b:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				bool L_26;
				L_26 = Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B((Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0022;
				}
			}

IL_0094:
			{
				IL2CPP_LEAVE(0xB2, FINALLY_0096);
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0096;
		}

FINALLY_0096:
		{// begin finally (depth: 2)
			Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7((Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7_RuntimeMethod_var);
			IL2CPP_END_FINALLY(150)
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(150)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xB2, FINALLY_00a4);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{// begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_m0592083C3590325D3A8FF2019A1E118B407DE753 (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6AC2E568AB91E34F1655855CB38573E9FBD2797C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * V_2 = NULL;
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * V_3 = NULL;
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m4971F9A387B08688DBB56017B90F6EB0261940EF(__this, /*hidden argument*/NULL);
		// if (HandPhysicsServiceRoot == null) { return; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (HandPhysicsServiceRoot == null) { return; }
		return;
	}

IL_0015:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		V_0 = 0;
		goto IL_00c4;
	}

IL_001c:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		V_1 = 0;
		goto IL_006c;
	}

IL_0020:
	{
		// if (FingerTipKinematicBodyPrefab == null) { continue; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m47CABAA68E6E504EBB7D04FD95EB3D3676A58BB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0068;
		}
	}
	{
		// if (TryCreateJointKinematicBody(FingerTipKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], fingerTipTypes[j], HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m47CABAA68E6E504EBB7D04FD95EB3D3676A58BB1_inline(__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HandPhysicsService_get_HandPhysicsLayer_mDFE6AC585F800138BA7CE315EE57BBF26EE85F00_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* L_6 = ((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->get_handednessTypes_16();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2* L_10 = ((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->get_fingerTipTypes_17();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = HandPhysicsService_TryCreateJointKinematicBody_m2328F93F3AF6A109205924EEB24C3A7FE592E8CE(L_4, L_5, L_9, L_13, L_15, (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA **)(&V_2), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * L_17 = __this->get_jointKinematicBodies_18();
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_18 = V_2;
		NullCheck(L_17);
		List_1_Add_m6AC2E568AB91E34F1655855CB38573E9FBD2797C(L_17, L_18, /*hidden argument*/List_1_Add_m6AC2E568AB91E34F1655855CB38573E9FBD2797C_RuntimeMethod_var);
	}

IL_0068:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006c:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2* L_21 = ((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->get_fingerTipTypes_17();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// if (UsePalmKinematicBody)
		bool L_22;
		L_22 = HandPhysicsService_get_UsePalmKinematicBody_m250ADB469C7DB437C22DFC693B68A6CF99FB6C29_inline(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		// if (PalmKinematicBodyPrefab == null) { continue; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = HandPhysicsService_get_PalmKinematicBodyPrefab_mF9EE0ED21B2447ABA22E86FF6184605DBED1EBF7_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00c0;
		}
	}
	{
		// if (TryCreateJointKinematicBody(PalmKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], TrackedHandJoint.Palm, HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = HandPhysicsService_get_PalmKinematicBodyPrefab_mF9EE0ED21B2447ABA22E86FF6184605DBED1EBF7_inline(__this, /*hidden argument*/NULL);
		int32_t L_26;
		L_26 = HandPhysicsService_get_HandPhysicsLayer_mDFE6AC585F800138BA7CE315EE57BBF26EE85F00_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* L_27 = ((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->get_handednessTypes_16();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (uint8_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = HandPhysicsService_TryCreateJointKinematicBody_m2328F93F3AF6A109205924EEB24C3A7FE592E8CE(L_25, L_26, L_30, 2, L_32, (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA **)(&V_3), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00c0;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * L_34 = __this->get_jointKinematicBodies_18();
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_35 = V_3;
		NullCheck(L_34);
		List_1_Add_m6AC2E568AB91E34F1655855CB38573E9FBD2797C(L_34, L_35, /*hidden argument*/List_1_Add_m6AC2E568AB91E34F1655855CB38573E9FBD2797C_RuntimeMethod_var);
	}

IL_00c0:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00c4:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* L_38 = ((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->get_handednessTypes_16();
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m4971F9A387B08688DBB56017B90F6EB0261940EF (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B9080371943882A72CDB58AB547244689E64190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (jointKinematicBodies.Count > 0)
		List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * L_0 = __this->get_jointKinematicBodies_18();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1B9080371943882A72CDB58AB547244689E64190_inline(L_0, /*hidden argument*/List_1_get_Count_m1B9080371943882A72CDB58AB547244689E64190_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
		List_1_t0D7B0102B77D0C7937FFF32AE2704DE169303E03 * L_2 = __this->get_jointKinematicBodies_18();
		NullCheck(L_2);
		Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51  L_3;
		L_3 = List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67(L_2, /*hidden argument*/List_1_GetEnumerator_m223EED76264BDC5255FD74F4D1A2C58D3F86DB67_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001a:
	try
	{// begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_001c:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_4;
			L_4 = Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_inline((Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD606A26655A2FACC295274165533246CF03195F9_RuntimeMethod_var);
			// UnityEngine.Object.Destroy(jointKinematicBody.gameObject);
			NullCheck(L_4);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			bool L_6;
			L_6 = Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B((Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mEA44C4E43B0B4D932487CF61D6B7E44FC4BE112B_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_001c;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7((Enumerator_t4489DEF59918270FFE8BEC3D0E1B8EEDF0B29B51 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA6C024A0A7B42675E59484890C63F0FBA32FBEB7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m2328F93F3AF6A109205924EEB24C3A7FE592E8CE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent4, JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA ** ___jointKinematicBody5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7AA9AEE0D2A55C3C7B094150DDC6CEC225C412D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_mA6AAC8BA93F7C2D5C03108C6B3B4BCFC06C7505E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t8A262D666130009C1CBAF62C7F75BA2B3EC43E6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mACEFD07C5A0FE9C85BC165DF1E4A825675719EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_t663D6CC73E08A415B9AA7CF14212AC8E2BED0BDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CA525E745821399EEF6F1D2733A285A82160939);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * V_1 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_2 = NULL;
	{
		// jointKinematicBody = null;
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA ** L_0 = ___jointKinematicBody5;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// GameObject currentGameObject = GameObject.Instantiate(rigidBodyPrefab, parent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___rigidBodyPrefab0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___parent4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mACEFD07C5A0FE9C85BC165DF1E4A825675719EAC(L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mACEFD07C5A0FE9C85BC165DF1E4A825675719EAC_RuntimeMethod_var);
		V_0 = L_3;
		// currentGameObject.layer = layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		int32_t L_5 = ___layer1;
		NullCheck(L_4);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_4, L_5, /*hidden argument*/NULL);
		// JointKinematicBody currentJoint = currentGameObject.GetComponent<JointKinematicBody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_7;
		L_7 = GameObject_GetComponent_TisJointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_mA6AAC8BA93F7C2D5C03108C6B3B4BCFC06C7505E(L_6, /*hidden argument*/GameObject_GetComponent_TisJointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_mA6AAC8BA93F7C2D5C03108C6B3B4BCFC06C7505E_RuntimeMethod_var);
		V_1 = L_7;
		// if (currentJoint == null)
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_8 = V_1;
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a JointKinematicBody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// currentJoint.JointType = jointType;
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_11 = V_1;
		int32_t L_12 = ___jointType3;
		NullCheck(L_11);
		JointKinematicBody_set_JointType_m3DB6FA0F6E63838FB4F906747A1EE24A9345B4D0_inline(L_11, L_12, /*hidden argument*/NULL);
		// currentJoint.HandednessType = handednessType;
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_13 = V_1;
		uint8_t L_14 = ___handednessType2;
		NullCheck(L_13);
		JointKinematicBody_set_HandednessType_mFC8EA02F147622784438D4E2E8C456EACD363302_inline(L_13, L_14, /*hidden argument*/NULL);
		// currentGameObject.name = handednessType + " " + jointType;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		RuntimeObject * L_16 = Box(Handedness_t8A262D666130009C1CBAF62C7F75BA2B3EC43E6A_il2cpp_TypeInfo_var, (&___handednessType2));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		___handednessType2 = *(uint8_t*)UnBox(L_16);
		RuntimeObject * L_18 = Box(TrackedHandJoint_t663D6CC73E08A415B9AA7CF14212AC8E2BED0BDE_il2cpp_TypeInfo_var, (&___jointType3));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		___jointType3 = *(int32_t*)UnBox(L_18);
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_17, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_15, L_20, /*hidden argument*/NULL);
		// if (currentGameObject.GetComponent<Collider>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_0;
		NullCheck(L_21);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_22;
		L_22 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7AA9AEE0D2A55C3C7B094150DDC6CEC225C412D7(L_21, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7AA9AEE0D2A55C3C7B094150DDC6CEC225C412D7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_008e;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Collider component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_24, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_008e:
	{
		// Rigidbody rigidbody = currentGameObject.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_0;
		NullCheck(L_25);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_26;
		L_26 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656(L_25, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656_RuntimeMethod_var);
		V_2 = L_26;
		// if (rigidbody == null)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00b0;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Rigidbody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_29, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_00b0:
	{
		// if (!rigidbody.isKinematic)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_30 = V_2;
		NullCheck(L_30);
		bool L_31;
		L_31 = Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		// Debug.LogWarning("The HandPhysicsService FingerTipKinematicBodyPrefab rigidbody should be marked as kinematic, making kinematic.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2CA525E745821399EEF6F1D2733A285A82160939, /*hidden argument*/NULL);
		// rigidbody.isKinematic = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_32 = V_2;
		NullCheck(L_32);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_32, (bool)1, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		// jointKinematicBody = currentJoint;
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA ** L_33 = ___jointKinematicBody5;
		JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * L_34 = V_1;
		*((RuntimeObject **)L_33) = (RuntimeObject *)L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_33, (void*)(RuntimeObject *)L_34);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__cctor_m44D366DA5CEFB0BB80C108F7795880E9E747E3F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1AB3E1CC3338832A9DF2A9FA959C09508DC043AF____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Handedness[] handednessTypes = new Handedness[]
		// {
		//     Handedness.Left,
		//     Handedness.Right
		// };
		HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* L_0 = (HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D*)(HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D*)SZArrayNew(HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D_il2cpp_TypeInfo_var, (uint32_t)2);
		HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		HandednessU5BU5D_tEB820122EF0D51B9B4B9EA50FA101AE5928D391D* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->set_handednessTypes_16(L_2);
		// private static readonly TrackedHandJoint[] fingerTipTypes = new TrackedHandJoint[]
		// {
		//     TrackedHandJoint.ThumbTip,
		//     TrackedHandJoint.IndexTip,
		//     TrackedHandJoint.MiddleTip,
		//     TrackedHandJoint.RingTip,
		//     TrackedHandJoint.PinkyTip
		// };
		TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2* L_3 = (TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2*)(TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2*)SZArrayNew(TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2_il2cpp_TypeInfo_var, (uint32_t)5);
		TrackedHandJointU5BU5D_t1FF83A08A5C6469A4F645626A369C5A812B54BB2* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1AB3E1CC3338832A9DF2A9FA959C09508DC043AF____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->set_fingerTipTypes_17(L_4);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] HandPhysicsService.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604, /*hidden argument*/NULL);
		((HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_19(L_6);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m4A1271D9F6F70DAE2A13CCA508BBAD091E027A58 (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m7F7B5E5B2B2F9C266018A22C9AA6BB107C9B7840 (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m2DF61C0B019D705C63E3E662DB0AE858938A8A56 (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m0BB81E6A25B02A74E0B259610801181FD4DEB3AA (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsServiceProfile__ctor_m48A64C66A8ABEBDF6BAB9CCD8ABD90192C51CADE (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		BaseMixedRealityProfile__ctor_m711C0939E6E60E18ED95508B675591D029F808ED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mFFD8E8F6FAAAD64C25ED17CD1ED77A02BAD928AB (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m0D4E5EC00454EF78ED7F950EF9C1809C98144FCA (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_mFC8EA02F147622784438D4E2E8C456EACD363302 (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_mFD20163B9655BDE8910BF436EA51389E13772683 (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m3DB6FA0F6E63838FB4F906747A1EE24A9345B4D0 (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * JointKinematicBody_get_OnEnableAction_m0F5C80DE8A9E9A3AC711AC917AB19088446B00FC (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnEnableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnEnableAction_m5335607466C2D7A0B64C98EF9F6147F24A91F598 (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_0 = ___value0;
		__this->set_U3COnEnableActionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * JointKinematicBody_get_OnDisableAction_m438256BE57169CD39EF0EB9D04F728F307D142E1 (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnDisableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnDisableAction_m40A5E11C2B63341D2C9B26F45E9B4F4DEAC316C3 (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_0 = ___value0;
		__this->set_U3COnDisableActionU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m8EE09DF308C7CB7A6E632380E40D6D8A1E68871C (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m46B2F8ECA72D587801FF18D2E580F47845A3D943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * G_B7_0 = NULL;
	Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * G_B6_0 = NULL;
	Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * G_B10_0 = NULL;
	Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * G_B9_0 = NULL;
	{
		// using (UpdateStatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_il2cpp_TypeInfo_var))->get_UpdateStatePerfMarker_9();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			// bool previousActiveState = gameObject.activeSelf;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_3;
			L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
			// gameObject.SetActive(active);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			bool L_5 = ___active0;
			NullCheck(L_4);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
			// if (active)
			bool L_6 = ___active0;
			G_B2_0 = L_3;
			if (!L_6)
			{
				G_B3_0 = L_3;
				goto IL_0054;
			}
		}

IL_0028:
		{
			// transform.position = Joint.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
			L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
			L_8 = JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_9, /*hidden argument*/NULL);
			// transform.rotation = Joint.rotation;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
			L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
			L_11 = JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
			L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_10, L_12, /*hidden argument*/NULL);
			G_B3_0 = G_B2_0;
		}

IL_0054:
		{
			// if (previousActiveState != active)
			bool L_13 = ___active0;
			if ((((int32_t)G_B3_0) == ((int32_t)L_13)))
			{
				goto IL_0080;
			}
		}

IL_0057:
		{
			// if (active)
			bool L_14 = ___active0;
			if (!L_14)
			{
				goto IL_006e;
			}
		}

IL_005a:
		{
			// OnEnableAction?.Invoke(this);
			Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_15;
			L_15 = JointKinematicBody_get_OnEnableAction_m0F5C80DE8A9E9A3AC711AC917AB19088446B00FC_inline(__this, /*hidden argument*/NULL);
			Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_16 = L_15;
			G_B6_0 = L_16;
			if (L_16)
			{
				G_B7_0 = L_16;
				goto IL_0066;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}

IL_0066:
		{
			NullCheck(G_B7_0);
			Action_1_Invoke_m46B2F8ECA72D587801FF18D2E580F47845A3D943(G_B7_0, __this, /*hidden argument*/Action_1_Invoke_m46B2F8ECA72D587801FF18D2E580F47845A3D943_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}

IL_006e:
		{
			// OnDisableAction?.Invoke(this);
			Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_17;
			L_17 = JointKinematicBody_get_OnDisableAction_m438256BE57169CD39EF0EB9D04F728F307D142E1_inline(__this, /*hidden argument*/NULL);
			Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_18 = L_17;
			G_B9_0 = L_18;
			if (L_18)
			{
				G_B10_0 = L_18;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}

IL_007a:
		{
			NullCheck(G_B10_0);
			Action_1_Invoke_m46B2F8ECA72D587801FF18D2E580F47845A3D943(G_B10_0, __this, /*hidden argument*/Action_1_Invoke_m46B2F8ECA72D587801FF18D2E580F47845A3D943_RuntimeMethod_var);
		}

IL_0080:
		{
			// }
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{// begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__ctor_m8CA77F69A6C5E9E180971C6F666B946A1CFEE759 (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__cctor_m3ACB4FBD61A86A2616B0611FF9B061BDF1595FB8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1738C3F31C42EB3867F885AD91436A640396392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateStatePerfMarker = new ProfilerMarker("[MRTK] JointKinematicBody.UpdateState");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralC1738C3F31C42EB3867F885AD91436A640396392, /*hidden argument*/NULL);
		((JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA_il2cpp_TypeInfo_var))->set_UpdateStatePerfMarker_9(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m0BB81E6A25B02A74E0B259610801181FD4DEB3AA_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_mA84582C779E0FEEC89D01D17B7D06137AC958E9F_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m4A1271D9F6F70DAE2A13CCA508BBAD091E027A58_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m6F11AA53EECA4D854CE67961098B45507055070E_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m7F7B5E5B2B2F9C266018A22C9AA6BB107C9B7840_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m2DF61C0B019D705C63E3E662DB0AE858938A8A56_inline (HandPhysicsServiceProfile_t8D3272281EFD9743187DA73EA57BAEC09DE8E318 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m444E1E3AF08FC30216CF4E2515C6F2582DC6BCCD_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m0E866E2A94614055ECB01A02A9F876875DD4B0C3_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m0D4E5EC00454EF78ED7F950EF9C1809C98144FCA_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m461C9499AE6944817BBD86A40841AD06C87ACA7F_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_mFD20163B9655BDE8910BF436EA51389E13772683_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mFFD8E8F6FAAAD64C25ED17CD1ED77A02BAD928AB_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m47CABAA68E6E504EBB7D04FD95EB3D3676A58BB1_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_mDFE6AC585F800138BA7CE315EE57BBF26EE85F00_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m250ADB469C7DB437C22DFC693B68A6CF99FB6C29_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_mF9EE0ED21B2447ABA22E86FF6184605DBED1EBF7_inline (HandPhysicsService_t0178F2ED3674108C0BE6509ECCD396ABC492D61F * __this, const RuntimeMethod* method)
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m3DB6FA0F6E63838FB4F906747A1EE24A9345B4D0_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_mFC8EA02F147622784438D4E2E8C456EACD363302_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * JointKinematicBody_get_OnEnableAction_m0F5C80DE8A9E9A3AC711AC917AB19088446B00FC_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * JointKinematicBody_get_OnDisableAction_m438256BE57169CD39EF0EB9D04F728F307D142E1_inline (JointKinematicBody_t1ACC218399478F0AA204BB75507C444AB25A82AA * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t6420D433F50B7DAA5F083A72D4607215BCCB257A * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}

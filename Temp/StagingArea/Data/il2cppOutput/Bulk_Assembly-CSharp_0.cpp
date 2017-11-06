#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// CubeController
struct CubeController_t2508308164;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t804459525;
// UnityEngine.GameObject
struct GameObject_t3387423500;
// System.String
struct String_t;
// script
struct script_t2958454083;
// UnityEngine.Component
struct Component_t636115617;
// UnityEngine.Renderer
struct Renderer_t2277124632;
// UnityEngine.Material
struct Material_t651802994;
// System.Char[]
struct CharU5BU5D_t859666127;
// System.Void
struct Void_t2748124849;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t613190;

extern const RuntimeMethod* GameObject_GetComponent_Tisscript_t2958454083_m2954231399_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral2067505333;
extern const uint32_t CubeController_Start_m1128259830_MetadataUsageId;
extern RuntimeClass* script_t2958454083_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObjectU5B0___U2C0___U5D_t613190_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t1477451337_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t1205122963_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t3387423500_m2160540470_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCubeController_t2508308164_m3711111282_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2277124632_m2350803706_RuntimeMethod_var;
extern const uint32_t script_Start_m3891991721_MetadataUsageId;
extern const uint32_t script_ProcessClick_m726291553_MetadataUsageId;

struct GameObjectU5B0___U2C0___U5D_t613190;


#ifndef U3CMODULEU3E_T3760978709_H
#define U3CMODULEU3E_T3760978709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3760978709 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3760978709_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T2965028042_H
#define VALUETYPE_T2965028042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2965028042  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2965028042_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2965028042_marshaled_com
{
};
#endif // VALUETYPE_T2965028042_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t859666127* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t859666127* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t859666127** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t859666127* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef BOOLEAN_T505642551_H
#define BOOLEAN_T505642551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t505642551 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t505642551, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t505642551_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t505642551_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t505642551_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T505642551_H
#ifndef SINGLE_T702404766_H
#define SINGLE_T702404766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t702404766 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t702404766, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T702404766_H
#ifndef COLOR_T498277320_H
#define COLOR_T498277320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t498277320 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t498277320, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t498277320, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t498277320, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t498277320, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T498277320_H
#ifndef QUATERNION_T1477451337_H
#define QUATERNION_T1477451337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1477451337 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1477451337, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1477451337, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1477451337, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1477451337, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1477451337_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1477451337  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1477451337_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1477451337  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1477451337 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1477451337  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1477451337_H
#ifndef VECTOR3_T4096276711_H
#define VECTOR3_T4096276711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t4096276711 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t4096276711, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t4096276711, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t4096276711, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t4096276711_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t4096276711  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t4096276711  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t4096276711  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t4096276711  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t4096276711  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t4096276711  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t4096276711  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t4096276711  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t4096276711  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t4096276711  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___zeroVector_4)); }
	inline Vector3_t4096276711  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t4096276711 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t4096276711  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___oneVector_5)); }
	inline Vector3_t4096276711  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t4096276711 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t4096276711  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___upVector_6)); }
	inline Vector3_t4096276711  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t4096276711 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t4096276711  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___downVector_7)); }
	inline Vector3_t4096276711  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t4096276711 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t4096276711  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___leftVector_8)); }
	inline Vector3_t4096276711  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t4096276711 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t4096276711  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___rightVector_9)); }
	inline Vector3_t4096276711  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t4096276711 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t4096276711  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___forwardVector_10)); }
	inline Vector3_t4096276711  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t4096276711 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t4096276711  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___backVector_11)); }
	inline Vector3_t4096276711  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t4096276711 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t4096276711  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t4096276711  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t4096276711 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t4096276711  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t4096276711_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t4096276711  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t4096276711 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t4096276711  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T4096276711_H
#ifndef VOID_T2748124849_H
#define VOID_T2748124849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2748124849 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2748124849_H
#ifndef INT32_T3378530936_H
#define INT32_T3378530936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3378530936 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3378530936, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3378530936_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T1205122963_H
#define OBJECT_T1205122963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1205122963  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1205122963, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1205122963_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1205122963_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1205122963_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1205122963_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1205122963_H
#ifndef COMPONENT_T636115617_H
#define COMPONENT_T636115617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t636115617  : public Object_t1205122963
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T636115617_H
#ifndef GAMEOBJECT_T3387423500_H
#define GAMEOBJECT_T3387423500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3387423500  : public Object_t1205122963
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3387423500_H
#ifndef MATERIAL_T651802994_H
#define MATERIAL_T651802994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t651802994  : public Object_t1205122963
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T651802994_H
#ifndef RENDERER_T2277124632_H
#define RENDERER_T2277124632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2277124632  : public Component_t636115617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2277124632_H
#ifndef BEHAVIOUR_T1709368114_H
#define BEHAVIOUR_T1709368114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1709368114  : public Component_t636115617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1709368114_H
#ifndef MONOBEHAVIOUR_T804459525_H
#define MONOBEHAVIOUR_T804459525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t804459525  : public Behaviour_t1709368114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T804459525_H
#ifndef SCRIPT_T2958454083_H
#define SCRIPT_T2958454083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// script
struct  script_t2958454083  : public MonoBehaviour_t804459525
{
public:
	// UnityEngine.GameObject script::cubePre
	GameObject_t3387423500 * ___cubePre_2;
	// UnityEngine.Vector3 script::cubeposition
	Vector3_t4096276711  ___cubeposition_3;
	// UnityEngine.GameObject script::cubeSelected
	GameObject_t3387423500 * ___cubeSelected_4;
	// UnityEngine.GameObject script::airplane
	GameObject_t3387423500 * ___airplane_5;
	// UnityEngine.GameObject script::myCube
	GameObject_t3387423500 * ___myCube_6;
	// UnityEngine.GameObject[0...,0...] script::CubeArray
	GameObjectU5B0___U2C0___U5D_t613190* ___CubeArray_9;
	// System.Boolean script::Activeplane
	bool ___Activeplane_10;

public:
	inline static int32_t get_offset_of_cubePre_2() { return static_cast<int32_t>(offsetof(script_t2958454083, ___cubePre_2)); }
	inline GameObject_t3387423500 * get_cubePre_2() const { return ___cubePre_2; }
	inline GameObject_t3387423500 ** get_address_of_cubePre_2() { return &___cubePre_2; }
	inline void set_cubePre_2(GameObject_t3387423500 * value)
	{
		___cubePre_2 = value;
		Il2CppCodeGenWriteBarrier((&___cubePre_2), value);
	}

	inline static int32_t get_offset_of_cubeposition_3() { return static_cast<int32_t>(offsetof(script_t2958454083, ___cubeposition_3)); }
	inline Vector3_t4096276711  get_cubeposition_3() const { return ___cubeposition_3; }
	inline Vector3_t4096276711 * get_address_of_cubeposition_3() { return &___cubeposition_3; }
	inline void set_cubeposition_3(Vector3_t4096276711  value)
	{
		___cubeposition_3 = value;
	}

	inline static int32_t get_offset_of_cubeSelected_4() { return static_cast<int32_t>(offsetof(script_t2958454083, ___cubeSelected_4)); }
	inline GameObject_t3387423500 * get_cubeSelected_4() const { return ___cubeSelected_4; }
	inline GameObject_t3387423500 ** get_address_of_cubeSelected_4() { return &___cubeSelected_4; }
	inline void set_cubeSelected_4(GameObject_t3387423500 * value)
	{
		___cubeSelected_4 = value;
		Il2CppCodeGenWriteBarrier((&___cubeSelected_4), value);
	}

	inline static int32_t get_offset_of_airplane_5() { return static_cast<int32_t>(offsetof(script_t2958454083, ___airplane_5)); }
	inline GameObject_t3387423500 * get_airplane_5() const { return ___airplane_5; }
	inline GameObject_t3387423500 ** get_address_of_airplane_5() { return &___airplane_5; }
	inline void set_airplane_5(GameObject_t3387423500 * value)
	{
		___airplane_5 = value;
		Il2CppCodeGenWriteBarrier((&___airplane_5), value);
	}

	inline static int32_t get_offset_of_myCube_6() { return static_cast<int32_t>(offsetof(script_t2958454083, ___myCube_6)); }
	inline GameObject_t3387423500 * get_myCube_6() const { return ___myCube_6; }
	inline GameObject_t3387423500 ** get_address_of_myCube_6() { return &___myCube_6; }
	inline void set_myCube_6(GameObject_t3387423500 * value)
	{
		___myCube_6 = value;
		Il2CppCodeGenWriteBarrier((&___myCube_6), value);
	}

	inline static int32_t get_offset_of_CubeArray_9() { return static_cast<int32_t>(offsetof(script_t2958454083, ___CubeArray_9)); }
	inline GameObjectU5B0___U2C0___U5D_t613190* get_CubeArray_9() const { return ___CubeArray_9; }
	inline GameObjectU5B0___U2C0___U5D_t613190** get_address_of_CubeArray_9() { return &___CubeArray_9; }
	inline void set_CubeArray_9(GameObjectU5B0___U2C0___U5D_t613190* value)
	{
		___CubeArray_9 = value;
		Il2CppCodeGenWriteBarrier((&___CubeArray_9), value);
	}

	inline static int32_t get_offset_of_Activeplane_10() { return static_cast<int32_t>(offsetof(script_t2958454083, ___Activeplane_10)); }
	inline bool get_Activeplane_10() const { return ___Activeplane_10; }
	inline bool* get_address_of_Activeplane_10() { return &___Activeplane_10; }
	inline void set_Activeplane_10(bool value)
	{
		___Activeplane_10 = value;
	}
};

struct script_t2958454083_StaticFields
{
public:
	// System.Int32 script::planex
	int32_t ___planex_7;
	// System.Int32 script::planey
	int32_t ___planey_8;

public:
	inline static int32_t get_offset_of_planex_7() { return static_cast<int32_t>(offsetof(script_t2958454083_StaticFields, ___planex_7)); }
	inline int32_t get_planex_7() const { return ___planex_7; }
	inline int32_t* get_address_of_planex_7() { return &___planex_7; }
	inline void set_planex_7(int32_t value)
	{
		___planex_7 = value;
	}

	inline static int32_t get_offset_of_planey_8() { return static_cast<int32_t>(offsetof(script_t2958454083_StaticFields, ___planey_8)); }
	inline int32_t get_planey_8() const { return ___planey_8; }
	inline int32_t* get_address_of_planey_8() { return &___planey_8; }
	inline void set_planey_8(int32_t value)
	{
		___planey_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPT_T2958454083_H
#ifndef CUBECONTROLLER_T2508308164_H
#define CUBECONTROLLER_T2508308164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeController
struct  CubeController_t2508308164  : public MonoBehaviour_t804459525
{
public:
	// script CubeController::scriptReference
	script_t2958454083 * ___scriptReference_2;
	// System.Int32 CubeController::IndividualX
	int32_t ___IndividualX_3;
	// System.Int32 CubeController::IndividualY
	int32_t ___IndividualY_4;

public:
	inline static int32_t get_offset_of_scriptReference_2() { return static_cast<int32_t>(offsetof(CubeController_t2508308164, ___scriptReference_2)); }
	inline script_t2958454083 * get_scriptReference_2() const { return ___scriptReference_2; }
	inline script_t2958454083 ** get_address_of_scriptReference_2() { return &___scriptReference_2; }
	inline void set_scriptReference_2(script_t2958454083 * value)
	{
		___scriptReference_2 = value;
		Il2CppCodeGenWriteBarrier((&___scriptReference_2), value);
	}

	inline static int32_t get_offset_of_IndividualX_3() { return static_cast<int32_t>(offsetof(CubeController_t2508308164, ___IndividualX_3)); }
	inline int32_t get_IndividualX_3() const { return ___IndividualX_3; }
	inline int32_t* get_address_of_IndividualX_3() { return &___IndividualX_3; }
	inline void set_IndividualX_3(int32_t value)
	{
		___IndividualX_3 = value;
	}

	inline static int32_t get_offset_of_IndividualY_4() { return static_cast<int32_t>(offsetof(CubeController_t2508308164, ___IndividualY_4)); }
	inline int32_t get_IndividualY_4() const { return ___IndividualY_4; }
	inline int32_t* get_address_of_IndividualY_4() { return &___IndividualY_4; }
	inline void set_IndividualY_4(int32_t value)
	{
		___IndividualY_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBECONTROLLER_T2508308164_H
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t613190  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t3387423500 * m_Items[1];

public:
	inline GameObject_t3387423500 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t3387423500 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t3387423500 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t3387423500 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t3387423500 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t3387423500 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t3387423500 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t3387423500 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t3387423500 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t3387423500 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t3387423500 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t3387423500 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3303067408_gshared (GameObject_t3387423500 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1687967220_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t4096276711  p1, Quaternion_t1477451337  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2814269709 (MonoBehaviour_t804459525 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t3387423500 * GameObject_Find_m2290616166 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<script>()
#define GameObject_GetComponent_Tisscript_t2958454083_m2954231399(__this, method) ((  script_t2958454083 * (*) (GameObject_t3387423500 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3303067408_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t3387423500 * Component_get_gameObject_m2282037927 (Component_t636115617 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void script::ProcessClick(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void script_ProcessClick_m726291553 (script_t2958454083 * __this, GameObject_t3387423500 * ___clickedCube0, int32_t ___IndividualX1, int32_t ___IndividualY2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1523989353 (Vector3_t4096276711 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t1477451337  Quaternion_get_identity_m2506787535 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t3387423500_m2160540470(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t3387423500 * (*) (RuntimeObject * /* static, unused */, GameObject_t3387423500 *, Vector3_t4096276711 , Quaternion_t1477451337 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1687967220_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<CubeController>()
#define GameObject_GetComponent_TisCubeController_t2508308164_m3711111282(__this, method) ((  CubeController_t2508308164 * (*) (GameObject_t3387423500 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3303067408_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t2277124632_m2350803706(__this, method) ((  Renderer_t2277124632 * (*) (GameObject_t3387423500 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3303067408_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t651802994 * Renderer_get_material_m2700315540 (Renderer_t2277124632 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t498277320  Color_get_red_m654421499 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m1271947672 (Material_t651802994 * __this, Color_t498277320  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t498277320  Color_get_green_m1783605019 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t498277320  Color_get_white_m1899028940 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CubeController::.ctor()
extern "C"  void CubeController__ctor_m785254902 (CubeController_t2508308164 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2814269709(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CubeController::Start()
extern "C"  void CubeController_Start_m1128259830 (CubeController_t2508308164 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubeController_Start_m1128259830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t3387423500 * L_0 = GameObject_Find_m2290616166(NULL /*static, unused*/, _stringLiteral2067505333, /*hidden argument*/NULL);
		script_t2958454083 * L_1 = GameObject_GetComponent_Tisscript_t2958454083_m2954231399(L_0, /*hidden argument*/GameObject_GetComponent_Tisscript_t2958454083_m2954231399_RuntimeMethod_var);
		__this->set_scriptReference_2(L_1);
		return;
	}
}
// System.Void CubeController::Update()
extern "C"  void CubeController_Update_m2332838993 (CubeController_t2508308164 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CubeController::OnMouseDown()
extern "C"  void CubeController_OnMouseDown_m858467060 (CubeController_t2508308164 * __this, const RuntimeMethod* method)
{
	{
		script_t2958454083 * L_0 = __this->get_scriptReference_2();
		GameObject_t3387423500 * L_1 = Component_get_gameObject_m2282037927(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_IndividualX_3();
		int32_t L_3 = __this->get_IndividualY_4();
		script_ProcessClick_m726291553(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void script::.ctor()
extern "C"  void script__ctor_m2080864021 (script_t2958454083 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m2814269709(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void script::Start()
extern "C"  void script_Start_m3891991721 (script_t2958454083 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (script_Start_m3891991721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->set_planex_7(((int32_t)15));
		((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->set_planey_8(0);
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)16), (il2cpp_array_size_t)((int32_t)9) };
		GameObjectU5B0___U2C0___U5D_t613190* L_0 = (GameObjectU5B0___U2C0___U5D_t613190*)GenArrayNew(GameObjectU5B0___U2C0___U5D_t613190_il2cpp_TypeInfo_var, L_1);
		__this->set_CubeArray_9((GameObjectU5B0___U2C0___U5D_t613190*)L_0);
		V_0 = 0;
		goto IL_00ac;
	}

IL_0023:
	{
		V_1 = 0;
		goto IL_00a0;
	}

IL_002a:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		Vector3_t4096276711  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m1523989353((&L_4), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_2*(int32_t)((int32_t)-3)))+(int32_t)6))))), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)-2)))+(int32_t)((int32_t)10)))))), (0.0f), /*hidden argument*/NULL);
		__this->set_cubeposition_3(L_4);
		GameObjectU5B0___U2C0___U5D_t613190* L_5 = __this->get_CubeArray_9();
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		GameObject_t3387423500 * L_8 = __this->get_cubePre_2();
		Vector3_t4096276711  L_9 = __this->get_cubeposition_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t1477451337_il2cpp_TypeInfo_var);
		Quaternion_t1477451337  L_10 = Quaternion_get_identity_m2506787535(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1205122963_il2cpp_TypeInfo_var);
		GameObject_t3387423500 * L_11 = Object_Instantiate_TisGameObject_t3387423500_m2160540470(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t3387423500_m2160540470_RuntimeMethod_var);
		((GameObjectU5B0___U2C0___U5D_t613190*)(GameObjectU5B0___U2C0___U5D_t613190*)L_5)->SetAtUnchecked(L_6, L_7, L_11);
		GameObjectU5B0___U2C0___U5D_t613190* L_12 = __this->get_CubeArray_9();
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		GameObject_t3387423500 * L_15 = ((GameObjectU5B0___U2C0___U5D_t613190*)(GameObjectU5B0___U2C0___U5D_t613190*)L_12)->GetAtUnchecked(L_13, L_14);
		CubeController_t2508308164 * L_16 = GameObject_GetComponent_TisCubeController_t2508308164_m3711111282(L_15, /*hidden argument*/GameObject_GetComponent_TisCubeController_t2508308164_m3711111282_RuntimeMethod_var);
		int32_t L_17 = V_1;
		L_16->set_IndividualX_3(L_17);
		GameObjectU5B0___U2C0___U5D_t613190* L_18 = __this->get_CubeArray_9();
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		GameObject_t3387423500 * L_21 = ((GameObjectU5B0___U2C0___U5D_t613190*)(GameObjectU5B0___U2C0___U5D_t613190*)L_18)->GetAtUnchecked(L_19, L_20);
		CubeController_t2508308164 * L_22 = GameObject_GetComponent_TisCubeController_t2508308164_m3711111282(L_21, /*hidden argument*/GameObject_GetComponent_TisCubeController_t2508308164_m3711111282_RuntimeMethod_var);
		int32_t L_23 = V_0;
		L_22->set_IndividualY_4(L_23);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00a0:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)16))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)9))))
		{
			goto IL_0023;
		}
	}
	{
		GameObjectU5B0___U2C0___U5D_t613190* L_28 = __this->get_CubeArray_9();
		GameObject_t3387423500 * L_29 = ((GameObjectU5B0___U2C0___U5D_t613190*)(GameObjectU5B0___U2C0___U5D_t613190*)L_28)->GetAtUnchecked(((int32_t)15), 0);
		Renderer_t2277124632 * L_30 = GameObject_GetComponent_TisRenderer_t2277124632_m2350803706(L_29, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2277124632_m2350803706_RuntimeMethod_var);
		Material_t651802994 * L_31 = Renderer_get_material_m2700315540(L_30, /*hidden argument*/NULL);
		Color_t498277320  L_32 = Color_get_red_m654421499(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_set_color_m1271947672(L_31, L_32, /*hidden argument*/NULL);
		__this->set_Activeplane_10((bool)0);
		return;
	}
}
// System.Void script::ProcessClick(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void script_ProcessClick_m726291553 (script_t2958454083 * __this, GameObject_t3387423500 * ___clickedCube0, int32_t ___IndividualX1, int32_t ___IndividualY2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (script_ProcessClick_m726291553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___IndividualX1;
		int32_t L_1 = ((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->get_planex_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_2 = ___IndividualY2;
		int32_t L_3 = ((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->get_planey_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_006e;
		}
	}
	{
		bool L_4 = __this->get_Activeplane_10();
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__this->set_Activeplane_10((bool)1);
		GameObject_t3387423500 * L_5 = ___clickedCube0;
		Renderer_t2277124632 * L_6 = GameObject_GetComponent_TisRenderer_t2277124632_m2350803706(L_5, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2277124632_m2350803706_RuntimeMethod_var);
		Material_t651802994 * L_7 = Renderer_get_material_m2700315540(L_6, /*hidden argument*/NULL);
		Color_t498277320  L_8 = Color_get_green_m1783605019(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_set_color_m1271947672(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0042:
	{
		bool L_9 = __this->get_Activeplane_10();
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		GameObject_t3387423500 * L_10 = ___clickedCube0;
		Renderer_t2277124632 * L_11 = GameObject_GetComponent_TisRenderer_t2277124632_m2350803706(L_10, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2277124632_m2350803706_RuntimeMethod_var);
		Material_t651802994 * L_12 = Renderer_get_material_m2700315540(L_11, /*hidden argument*/NULL);
		Color_t498277320  L_13 = Color_get_red_m654421499(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_set_color_m1271947672(L_12, L_13, /*hidden argument*/NULL);
		__this->set_Activeplane_10((bool)0);
	}

IL_0069:
	{
		goto IL_00d7;
	}

IL_006e:
	{
		bool L_14 = __this->get_Activeplane_10();
		if (!L_14)
		{
			goto IL_00d7;
		}
	}
	{
		GameObjectU5B0___U2C0___U5D_t613190* L_15 = __this->get_CubeArray_9();
		int32_t L_16 = ((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->get_planex_7();
		int32_t L_17 = ((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->get_planey_8();
		GameObject_t3387423500 * L_18 = ((GameObjectU5B0___U2C0___U5D_t613190*)(GameObjectU5B0___U2C0___U5D_t613190*)L_15)->GetAtUnchecked(L_16, L_17);
		Renderer_t2277124632 * L_19 = GameObject_GetComponent_TisRenderer_t2277124632_m2350803706(L_18, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2277124632_m2350803706_RuntimeMethod_var);
		Material_t651802994 * L_20 = Renderer_get_material_m2700315540(L_19, /*hidden argument*/NULL);
		Color_t498277320  L_21 = Color_get_white_m1899028940(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_set_color_m1271947672(L_20, L_21, /*hidden argument*/NULL);
		int32_t L_22 = ___IndividualX1;
		((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->set_planex_7(L_22);
		int32_t L_23 = ___IndividualY2;
		((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->set_planey_8(L_23);
		GameObjectU5B0___U2C0___U5D_t613190* L_24 = __this->get_CubeArray_9();
		int32_t L_25 = ((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->get_planex_7();
		int32_t L_26 = ((script_t2958454083_StaticFields*)il2cpp_codegen_static_fields_for(script_t2958454083_il2cpp_TypeInfo_var))->get_planey_8();
		GameObject_t3387423500 * L_27 = ((GameObjectU5B0___U2C0___U5D_t613190*)(GameObjectU5B0___U2C0___U5D_t613190*)L_24)->GetAtUnchecked(L_25, L_26);
		Renderer_t2277124632 * L_28 = GameObject_GetComponent_TisRenderer_t2277124632_m2350803706(L_27, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2277124632_m2350803706_RuntimeMethod_var);
		Material_t651802994 * L_29 = Renderer_get_material_m2700315540(L_28, /*hidden argument*/NULL);
		Color_t498277320  L_30 = Color_get_green_m1783605019(NULL /*static, unused*/, /*hidden argument*/NULL);
		Material_set_color_m1271947672(L_29, L_30, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		return;
	}
}
// System.Void script::Update()
extern "C"  void script_Update_m3153808771 (script_t2958454083 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

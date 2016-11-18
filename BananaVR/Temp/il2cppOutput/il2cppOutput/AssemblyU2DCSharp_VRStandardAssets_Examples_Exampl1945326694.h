#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Examples.ExampleTouchpad
struct  ExampleTouchpad_t1945326694  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Examples.ExampleTouchpad::m_Torque
	float ___m_Torque_2;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Examples.ExampleTouchpad::m_VRInput
	VRInput_t3508365320 * ___m_VRInput_3;
	// UnityEngine.Rigidbody VRStandardAssets.Examples.ExampleTouchpad::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_4;

public:
	inline static int32_t get_offset_of_m_Torque_2() { return static_cast<int32_t>(offsetof(ExampleTouchpad_t1945326694, ___m_Torque_2)); }
	inline float get_m_Torque_2() const { return ___m_Torque_2; }
	inline float* get_address_of_m_Torque_2() { return &___m_Torque_2; }
	inline void set_m_Torque_2(float value)
	{
		___m_Torque_2 = value;
	}

	inline static int32_t get_offset_of_m_VRInput_3() { return static_cast<int32_t>(offsetof(ExampleTouchpad_t1945326694, ___m_VRInput_3)); }
	inline VRInput_t3508365320 * get_m_VRInput_3() const { return ___m_VRInput_3; }
	inline VRInput_t3508365320 ** get_address_of_m_VRInput_3() { return &___m_VRInput_3; }
	inline void set_m_VRInput_3(VRInput_t3508365320 * value)
	{
		___m_VRInput_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInput_3, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_4() { return static_cast<int32_t>(offsetof(ExampleTouchpad_t1945326694, ___m_Rigidbody_4)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_4() const { return ___m_Rigidbody_4; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_4() { return &___m_Rigidbody_4; }
	inline void set_m_Rigidbody_4(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

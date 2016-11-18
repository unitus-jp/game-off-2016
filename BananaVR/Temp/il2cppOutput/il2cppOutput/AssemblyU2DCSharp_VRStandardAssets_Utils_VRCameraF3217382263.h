#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.VRCameraFade
struct VRCameraFade_t3046390775;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4
struct  U3CBeginFadeU3Ec__Iterator4_t3217382263  : public Il2CppObject
{
public:
	// System.Single VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::<timer>__0
	float ___U3CtimerU3E__0_0;
	// System.Single VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::duration
	float ___duration_1;
	// UnityEngine.Color VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::startCol
	Color_t2020392075  ___startCol_2;
	// UnityEngine.Color VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::endCol
	Color_t2020392075  ___endCol_3;
	// VRStandardAssets.Utils.VRCameraFade VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::$this
	VRCameraFade_t3046390775 * ___U24this_4;
	// System.Object VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::$disposing
	bool ___U24disposing_6;
	// System.Int32 VRStandardAssets.Utils.VRCameraFade/<BeginFade>c__Iterator4::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___U3CtimerU3E__0_0)); }
	inline float get_U3CtimerU3E__0_0() const { return ___U3CtimerU3E__0_0; }
	inline float* get_address_of_U3CtimerU3E__0_0() { return &___U3CtimerU3E__0_0; }
	inline void set_U3CtimerU3E__0_0(float value)
	{
		___U3CtimerU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_startCol_2() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___startCol_2)); }
	inline Color_t2020392075  get_startCol_2() const { return ___startCol_2; }
	inline Color_t2020392075 * get_address_of_startCol_2() { return &___startCol_2; }
	inline void set_startCol_2(Color_t2020392075  value)
	{
		___startCol_2 = value;
	}

	inline static int32_t get_offset_of_endCol_3() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___endCol_3)); }
	inline Color_t2020392075  get_endCol_3() const { return ___endCol_3; }
	inline Color_t2020392075 * get_address_of_endCol_3() { return &___endCol_3; }
	inline void set_endCol_3(Color_t2020392075  value)
	{
		___endCol_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___U24this_4)); }
	inline VRCameraFade_t3046390775 * get_U24this_4() const { return ___U24this_4; }
	inline VRCameraFade_t3046390775 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(VRCameraFade_t3046390775 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CBeginFadeU3Ec__Iterator4_t3217382263, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

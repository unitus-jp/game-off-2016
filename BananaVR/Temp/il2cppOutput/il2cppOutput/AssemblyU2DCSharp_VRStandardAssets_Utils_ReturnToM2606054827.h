#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// VRStandardAssets.Utils.VRCameraFade
struct VRCameraFade_t3046390775;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.ReturnToMainMenu
struct  ReturnToMainMenu_t2606054827  : public MonoBehaviour_t1158329972
{
public:
	// System.String VRStandardAssets.Utils.ReturnToMainMenu::m_MenuSceneName
	String_t* ___m_MenuSceneName_2;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Utils.ReturnToMainMenu::m_VRInput
	VRInput_t3508365320 * ___m_VRInput_3;
	// VRStandardAssets.Utils.VRCameraFade VRStandardAssets.Utils.ReturnToMainMenu::m_VRCameraFade
	VRCameraFade_t3046390775 * ___m_VRCameraFade_4;

public:
	inline static int32_t get_offset_of_m_MenuSceneName_2() { return static_cast<int32_t>(offsetof(ReturnToMainMenu_t2606054827, ___m_MenuSceneName_2)); }
	inline String_t* get_m_MenuSceneName_2() const { return ___m_MenuSceneName_2; }
	inline String_t** get_address_of_m_MenuSceneName_2() { return &___m_MenuSceneName_2; }
	inline void set_m_MenuSceneName_2(String_t* value)
	{
		___m_MenuSceneName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_MenuSceneName_2, value);
	}

	inline static int32_t get_offset_of_m_VRInput_3() { return static_cast<int32_t>(offsetof(ReturnToMainMenu_t2606054827, ___m_VRInput_3)); }
	inline VRInput_t3508365320 * get_m_VRInput_3() const { return ___m_VRInput_3; }
	inline VRInput_t3508365320 ** get_address_of_m_VRInput_3() { return &___m_VRInput_3; }
	inline void set_m_VRInput_3(VRInput_t3508365320 * value)
	{
		___m_VRInput_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInput_3, value);
	}

	inline static int32_t get_offset_of_m_VRCameraFade_4() { return static_cast<int32_t>(offsetof(ReturnToMainMenu_t2606054827, ___m_VRCameraFade_4)); }
	inline VRCameraFade_t3046390775 * get_m_VRCameraFade_4() const { return ___m_VRCameraFade_4; }
	inline VRCameraFade_t3046390775 ** get_address_of_m_VRCameraFade_4() { return &___m_VRCameraFade_4; }
	inline void set_m_VRCameraFade_4(VRCameraFade_t3046390775 * value)
	{
		___m_VRCameraFade_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRCameraFade_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

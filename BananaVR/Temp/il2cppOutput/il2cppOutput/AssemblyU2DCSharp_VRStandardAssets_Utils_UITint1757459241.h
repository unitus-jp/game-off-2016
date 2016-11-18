#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.UITint
struct  UITint_t1757459241  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color VRStandardAssets.Utils.UITint::m_Tint
	Color_t2020392075  ___m_Tint_2;
	// System.Single VRStandardAssets.Utils.UITint::m_TintPercent
	float ___m_TintPercent_3;
	// UnityEngine.UI.Image[] VRStandardAssets.Utils.UITint::m_ImagesToTint
	ImageU5BU5D_t590162004* ___m_ImagesToTint_4;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Utils.UITint::m_InteractiveItem
	VRInteractiveItem_t2238922987 * ___m_InteractiveItem_5;

public:
	inline static int32_t get_offset_of_m_Tint_2() { return static_cast<int32_t>(offsetof(UITint_t1757459241, ___m_Tint_2)); }
	inline Color_t2020392075  get_m_Tint_2() const { return ___m_Tint_2; }
	inline Color_t2020392075 * get_address_of_m_Tint_2() { return &___m_Tint_2; }
	inline void set_m_Tint_2(Color_t2020392075  value)
	{
		___m_Tint_2 = value;
	}

	inline static int32_t get_offset_of_m_TintPercent_3() { return static_cast<int32_t>(offsetof(UITint_t1757459241, ___m_TintPercent_3)); }
	inline float get_m_TintPercent_3() const { return ___m_TintPercent_3; }
	inline float* get_address_of_m_TintPercent_3() { return &___m_TintPercent_3; }
	inline void set_m_TintPercent_3(float value)
	{
		___m_TintPercent_3 = value;
	}

	inline static int32_t get_offset_of_m_ImagesToTint_4() { return static_cast<int32_t>(offsetof(UITint_t1757459241, ___m_ImagesToTint_4)); }
	inline ImageU5BU5D_t590162004* get_m_ImagesToTint_4() const { return ___m_ImagesToTint_4; }
	inline ImageU5BU5D_t590162004** get_address_of_m_ImagesToTint_4() { return &___m_ImagesToTint_4; }
	inline void set_m_ImagesToTint_4(ImageU5BU5D_t590162004* value)
	{
		___m_ImagesToTint_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ImagesToTint_4, value);
	}

	inline static int32_t get_offset_of_m_InteractiveItem_5() { return static_cast<int32_t>(offsetof(UITint_t1757459241, ___m_InteractiveItem_5)); }
	inline VRInteractiveItem_t2238922987 * get_m_InteractiveItem_5() const { return ___m_InteractiveItem_5; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_InteractiveItem_5() { return &___m_InteractiveItem_5; }
	inline void set_m_InteractiveItem_5(VRInteractiveItem_t2238922987 * value)
	{
		___m_InteractiveItem_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractiveItem_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

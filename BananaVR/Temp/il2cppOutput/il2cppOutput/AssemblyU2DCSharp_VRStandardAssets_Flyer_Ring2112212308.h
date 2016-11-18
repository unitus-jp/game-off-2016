#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<VRStandardAssets.Flyer.Ring>
struct Action_1_t1914011690;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t3857795355;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.Ring
struct  Ring_t2112212308  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<VRStandardAssets.Flyer.Ring> VRStandardAssets.Flyer.Ring::OnRingRemove
	Action_1_t1914011690 * ___OnRingRemove_2;
	// System.Int32 VRStandardAssets.Flyer.Ring::m_Score
	int32_t ___m_Score_3;
	// UnityEngine.AudioSource VRStandardAssets.Flyer.Ring::m_AudioSource
	AudioSource_t1135106623 * ___m_AudioSource_4;
	// UnityEngine.Color VRStandardAssets.Flyer.Ring::m_BaseColor
	Color_t2020392075  ___m_BaseColor_5;
	// UnityEngine.Color VRStandardAssets.Flyer.Ring::m_ShipAlignedColor
	Color_t2020392075  ___m_ShipAlignedColor_6;
	// UnityEngine.Color VRStandardAssets.Flyer.Ring::m_ActivatedColor
	Color_t2020392075  ___m_ActivatedColor_7;
	// System.Boolean VRStandardAssets.Flyer.Ring::m_HasTriggered
	bool ___m_HasTriggered_8;
	// UnityEngine.Transform VRStandardAssets.Flyer.Ring::m_Cam
	Transform_t3275118058 * ___m_Cam_9;
	// UnityEngine.GameObject VRStandardAssets.Flyer.Ring::m_Flyer
	GameObject_t1756533147 * ___m_Flyer_10;
	// System.Collections.Generic.List`1<UnityEngine.Material> VRStandardAssets.Flyer.Ring::m_Materials
	List_1_t3857795355 * ___m_Materials_11;
	// System.Boolean VRStandardAssets.Flyer.Ring::m_ShipAligned
	bool ___m_ShipAligned_12;

public:
	inline static int32_t get_offset_of_OnRingRemove_2() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___OnRingRemove_2)); }
	inline Action_1_t1914011690 * get_OnRingRemove_2() const { return ___OnRingRemove_2; }
	inline Action_1_t1914011690 ** get_address_of_OnRingRemove_2() { return &___OnRingRemove_2; }
	inline void set_OnRingRemove_2(Action_1_t1914011690 * value)
	{
		___OnRingRemove_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnRingRemove_2, value);
	}

	inline static int32_t get_offset_of_m_Score_3() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_Score_3)); }
	inline int32_t get_m_Score_3() const { return ___m_Score_3; }
	inline int32_t* get_address_of_m_Score_3() { return &___m_Score_3; }
	inline void set_m_Score_3(int32_t value)
	{
		___m_Score_3 = value;
	}

	inline static int32_t get_offset_of_m_AudioSource_4() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_AudioSource_4)); }
	inline AudioSource_t1135106623 * get_m_AudioSource_4() const { return ___m_AudioSource_4; }
	inline AudioSource_t1135106623 ** get_address_of_m_AudioSource_4() { return &___m_AudioSource_4; }
	inline void set_m_AudioSource_4(AudioSource_t1135106623 * value)
	{
		___m_AudioSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_4, value);
	}

	inline static int32_t get_offset_of_m_BaseColor_5() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_BaseColor_5)); }
	inline Color_t2020392075  get_m_BaseColor_5() const { return ___m_BaseColor_5; }
	inline Color_t2020392075 * get_address_of_m_BaseColor_5() { return &___m_BaseColor_5; }
	inline void set_m_BaseColor_5(Color_t2020392075  value)
	{
		___m_BaseColor_5 = value;
	}

	inline static int32_t get_offset_of_m_ShipAlignedColor_6() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_ShipAlignedColor_6)); }
	inline Color_t2020392075  get_m_ShipAlignedColor_6() const { return ___m_ShipAlignedColor_6; }
	inline Color_t2020392075 * get_address_of_m_ShipAlignedColor_6() { return &___m_ShipAlignedColor_6; }
	inline void set_m_ShipAlignedColor_6(Color_t2020392075  value)
	{
		___m_ShipAlignedColor_6 = value;
	}

	inline static int32_t get_offset_of_m_ActivatedColor_7() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_ActivatedColor_7)); }
	inline Color_t2020392075  get_m_ActivatedColor_7() const { return ___m_ActivatedColor_7; }
	inline Color_t2020392075 * get_address_of_m_ActivatedColor_7() { return &___m_ActivatedColor_7; }
	inline void set_m_ActivatedColor_7(Color_t2020392075  value)
	{
		___m_ActivatedColor_7 = value;
	}

	inline static int32_t get_offset_of_m_HasTriggered_8() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_HasTriggered_8)); }
	inline bool get_m_HasTriggered_8() const { return ___m_HasTriggered_8; }
	inline bool* get_address_of_m_HasTriggered_8() { return &___m_HasTriggered_8; }
	inline void set_m_HasTriggered_8(bool value)
	{
		___m_HasTriggered_8 = value;
	}

	inline static int32_t get_offset_of_m_Cam_9() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_Cam_9)); }
	inline Transform_t3275118058 * get_m_Cam_9() const { return ___m_Cam_9; }
	inline Transform_t3275118058 ** get_address_of_m_Cam_9() { return &___m_Cam_9; }
	inline void set_m_Cam_9(Transform_t3275118058 * value)
	{
		___m_Cam_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_9, value);
	}

	inline static int32_t get_offset_of_m_Flyer_10() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_Flyer_10)); }
	inline GameObject_t1756533147 * get_m_Flyer_10() const { return ___m_Flyer_10; }
	inline GameObject_t1756533147 ** get_address_of_m_Flyer_10() { return &___m_Flyer_10; }
	inline void set_m_Flyer_10(GameObject_t1756533147 * value)
	{
		___m_Flyer_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Flyer_10, value);
	}

	inline static int32_t get_offset_of_m_Materials_11() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_Materials_11)); }
	inline List_1_t3857795355 * get_m_Materials_11() const { return ___m_Materials_11; }
	inline List_1_t3857795355 ** get_address_of_m_Materials_11() { return &___m_Materials_11; }
	inline void set_m_Materials_11(List_1_t3857795355 * value)
	{
		___m_Materials_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Materials_11, value);
	}

	inline static int32_t get_offset_of_m_ShipAligned_12() { return static_cast<int32_t>(offsetof(Ring_t2112212308, ___m_ShipAligned_12)); }
	inline bool get_m_ShipAligned_12() const { return ___m_ShipAligned_12; }
	inline bool* get_address_of_m_ShipAligned_12() { return &___m_ShipAligned_12; }
	inline void set_m_ShipAligned_12(bool value)
	{
		___m_ShipAligned_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

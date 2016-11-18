#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Menu.MenuItemPopout
struct  MenuItemPopout_t2885034077  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform VRStandardAssets.Menu.MenuItemPopout::m_Transform
	Transform_t3275118058 * ___m_Transform_2;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Menu.MenuItemPopout::m_Item
	VRInteractiveItem_t2238922987 * ___m_Item_3;
	// System.Single VRStandardAssets.Menu.MenuItemPopout::m_PopSpeed
	float ___m_PopSpeed_4;
	// System.Single VRStandardAssets.Menu.MenuItemPopout::m_PopDistance
	float ___m_PopDistance_5;
	// UnityEngine.Vector3 VRStandardAssets.Menu.MenuItemPopout::m_StartPosition
	Vector3_t2243707580  ___m_StartPosition_6;
	// UnityEngine.Vector3 VRStandardAssets.Menu.MenuItemPopout::m_PoppedPosition
	Vector3_t2243707580  ___m_PoppedPosition_7;
	// UnityEngine.Vector3 VRStandardAssets.Menu.MenuItemPopout::m_TargetPosition
	Vector3_t2243707580  ___m_TargetPosition_8;

public:
	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(MenuItemPopout_t2885034077, ___m_Transform_2)); }
	inline Transform_t3275118058 * get_m_Transform_2() const { return ___m_Transform_2; }
	inline Transform_t3275118058 ** get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Transform_t3275118058 * value)
	{
		___m_Transform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Transform_2, value);
	}

	inline static int32_t get_offset_of_m_Item_3() { return static_cast<int32_t>(offsetof(MenuItemPopout_t2885034077, ___m_Item_3)); }
	inline VRInteractiveItem_t2238922987 * get_m_Item_3() const { return ___m_Item_3; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_Item_3() { return &___m_Item_3; }
	inline void set_m_Item_3(VRInteractiveItem_t2238922987 * value)
	{
		___m_Item_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Item_3, value);
	}

	inline static int32_t get_offset_of_m_PopSpeed_4() { return static_cast<int32_t>(offsetof(MenuItemPopout_t2885034077, ___m_PopSpeed_4)); }
	inline float get_m_PopSpeed_4() const { return ___m_PopSpeed_4; }
	inline float* get_address_of_m_PopSpeed_4() { return &___m_PopSpeed_4; }
	inline void set_m_PopSpeed_4(float value)
	{
		___m_PopSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_PopDistance_5() { return static_cast<int32_t>(offsetof(MenuItemPopout_t2885034077, ___m_PopDistance_5)); }
	inline float get_m_PopDistance_5() const { return ___m_PopDistance_5; }
	inline float* get_address_of_m_PopDistance_5() { return &___m_PopDistance_5; }
	inline void set_m_PopDistance_5(float value)
	{
		___m_PopDistance_5 = value;
	}

	inline static int32_t get_offset_of_m_StartPosition_6() { return static_cast<int32_t>(offsetof(MenuItemPopout_t2885034077, ___m_StartPosition_6)); }
	inline Vector3_t2243707580  get_m_StartPosition_6() const { return ___m_StartPosition_6; }
	inline Vector3_t2243707580 * get_address_of_m_StartPosition_6() { return &___m_StartPosition_6; }
	inline void set_m_StartPosition_6(Vector3_t2243707580  value)
	{
		___m_StartPosition_6 = value;
	}

	inline static int32_t get_offset_of_m_PoppedPosition_7() { return static_cast<int32_t>(offsetof(MenuItemPopout_t2885034077, ___m_PoppedPosition_7)); }
	inline Vector3_t2243707580  get_m_PoppedPosition_7() const { return ___m_PoppedPosition_7; }
	inline Vector3_t2243707580 * get_address_of_m_PoppedPosition_7() { return &___m_PoppedPosition_7; }
	inline void set_m_PoppedPosition_7(Vector3_t2243707580  value)
	{
		___m_PoppedPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetPosition_8() { return static_cast<int32_t>(offsetof(MenuItemPopout_t2885034077, ___m_TargetPosition_8)); }
	inline Vector3_t2243707580  get_m_TargetPosition_8() const { return ___m_TargetPosition_8; }
	inline Vector3_t2243707580 * get_address_of_m_TargetPosition_8() { return &___m_TargetPosition_8; }
	inline void set_m_TargetPosition_8(Vector3_t2243707580  value)
	{
		___m_TargetPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

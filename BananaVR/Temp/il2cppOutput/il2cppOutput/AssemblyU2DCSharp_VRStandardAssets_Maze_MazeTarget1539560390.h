#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Transform>
struct Action_1_t3076917440;
// VRStandardAssets.Utils.Reticle
struct Reticle_t2910974846;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.MazeTargetSetting
struct  MazeTargetSetting_t1539560390  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<UnityEngine.Transform> VRStandardAssets.Maze.MazeTargetSetting::OnTargetSet
	Action_1_t3076917440 * ___OnTargetSet_2;
	// VRStandardAssets.Utils.Reticle VRStandardAssets.Maze.MazeTargetSetting::m_Reticle
	Reticle_t2910974846 * ___m_Reticle_3;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Maze.MazeTargetSetting::m_InteractiveItem
	VRInteractiveItem_t2238922987 * ___m_InteractiveItem_4;
	// System.Boolean VRStandardAssets.Maze.MazeTargetSetting::m_Active
	bool ___m_Active_5;

public:
	inline static int32_t get_offset_of_OnTargetSet_2() { return static_cast<int32_t>(offsetof(MazeTargetSetting_t1539560390, ___OnTargetSet_2)); }
	inline Action_1_t3076917440 * get_OnTargetSet_2() const { return ___OnTargetSet_2; }
	inline Action_1_t3076917440 ** get_address_of_OnTargetSet_2() { return &___OnTargetSet_2; }
	inline void set_OnTargetSet_2(Action_1_t3076917440 * value)
	{
		___OnTargetSet_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnTargetSet_2, value);
	}

	inline static int32_t get_offset_of_m_Reticle_3() { return static_cast<int32_t>(offsetof(MazeTargetSetting_t1539560390, ___m_Reticle_3)); }
	inline Reticle_t2910974846 * get_m_Reticle_3() const { return ___m_Reticle_3; }
	inline Reticle_t2910974846 ** get_address_of_m_Reticle_3() { return &___m_Reticle_3; }
	inline void set_m_Reticle_3(Reticle_t2910974846 * value)
	{
		___m_Reticle_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Reticle_3, value);
	}

	inline static int32_t get_offset_of_m_InteractiveItem_4() { return static_cast<int32_t>(offsetof(MazeTargetSetting_t1539560390, ___m_InteractiveItem_4)); }
	inline VRInteractiveItem_t2238922987 * get_m_InteractiveItem_4() const { return ___m_InteractiveItem_4; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_InteractiveItem_4() { return &___m_InteractiveItem_4; }
	inline void set_m_InteractiveItem_4(VRInteractiveItem_t2238922987 * value)
	{
		___m_InteractiveItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractiveItem_4, value);
	}

	inline static int32_t get_offset_of_m_Active_5() { return static_cast<int32_t>(offsetof(MazeTargetSetting_t1539560390, ___m_Active_5)); }
	inline bool get_m_Active_5() const { return ___m_Active_5; }
	inline bool* get_address_of_m_Active_5() { return &___m_Active_5; }
	inline void set_m_Active_5(bool value)
	{
		___m_Active_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

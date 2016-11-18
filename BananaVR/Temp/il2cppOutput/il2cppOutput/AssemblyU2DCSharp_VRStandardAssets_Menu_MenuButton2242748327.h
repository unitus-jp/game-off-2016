#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<VRStandardAssets.Menu.MenuButton>
struct Action_1_t2044547709;
// System.String
struct String_t;
// VRStandardAssets.Utils.VRCameraFade
struct VRCameraFade_t3046390775;
// VRStandardAssets.Utils.SelectionRadial
struct SelectionRadial_t541787425;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Menu.MenuButton
struct  MenuButton_t2242748327  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<VRStandardAssets.Menu.MenuButton> VRStandardAssets.Menu.MenuButton::OnButtonSelected
	Action_1_t2044547709 * ___OnButtonSelected_2;
	// System.String VRStandardAssets.Menu.MenuButton::m_SceneToLoad
	String_t* ___m_SceneToLoad_3;
	// VRStandardAssets.Utils.VRCameraFade VRStandardAssets.Menu.MenuButton::m_CameraFade
	VRCameraFade_t3046390775 * ___m_CameraFade_4;
	// VRStandardAssets.Utils.SelectionRadial VRStandardAssets.Menu.MenuButton::m_SelectionRadial
	SelectionRadial_t541787425 * ___m_SelectionRadial_5;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Menu.MenuButton::m_InteractiveItem
	VRInteractiveItem_t2238922987 * ___m_InteractiveItem_6;
	// System.Boolean VRStandardAssets.Menu.MenuButton::m_GazeOver
	bool ___m_GazeOver_7;

public:
	inline static int32_t get_offset_of_OnButtonSelected_2() { return static_cast<int32_t>(offsetof(MenuButton_t2242748327, ___OnButtonSelected_2)); }
	inline Action_1_t2044547709 * get_OnButtonSelected_2() const { return ___OnButtonSelected_2; }
	inline Action_1_t2044547709 ** get_address_of_OnButtonSelected_2() { return &___OnButtonSelected_2; }
	inline void set_OnButtonSelected_2(Action_1_t2044547709 * value)
	{
		___OnButtonSelected_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnButtonSelected_2, value);
	}

	inline static int32_t get_offset_of_m_SceneToLoad_3() { return static_cast<int32_t>(offsetof(MenuButton_t2242748327, ___m_SceneToLoad_3)); }
	inline String_t* get_m_SceneToLoad_3() const { return ___m_SceneToLoad_3; }
	inline String_t** get_address_of_m_SceneToLoad_3() { return &___m_SceneToLoad_3; }
	inline void set_m_SceneToLoad_3(String_t* value)
	{
		___m_SceneToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_SceneToLoad_3, value);
	}

	inline static int32_t get_offset_of_m_CameraFade_4() { return static_cast<int32_t>(offsetof(MenuButton_t2242748327, ___m_CameraFade_4)); }
	inline VRCameraFade_t3046390775 * get_m_CameraFade_4() const { return ___m_CameraFade_4; }
	inline VRCameraFade_t3046390775 ** get_address_of_m_CameraFade_4() { return &___m_CameraFade_4; }
	inline void set_m_CameraFade_4(VRCameraFade_t3046390775 * value)
	{
		___m_CameraFade_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraFade_4, value);
	}

	inline static int32_t get_offset_of_m_SelectionRadial_5() { return static_cast<int32_t>(offsetof(MenuButton_t2242748327, ___m_SelectionRadial_5)); }
	inline SelectionRadial_t541787425 * get_m_SelectionRadial_5() const { return ___m_SelectionRadial_5; }
	inline SelectionRadial_t541787425 ** get_address_of_m_SelectionRadial_5() { return &___m_SelectionRadial_5; }
	inline void set_m_SelectionRadial_5(SelectionRadial_t541787425 * value)
	{
		___m_SelectionRadial_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionRadial_5, value);
	}

	inline static int32_t get_offset_of_m_InteractiveItem_6() { return static_cast<int32_t>(offsetof(MenuButton_t2242748327, ___m_InteractiveItem_6)); }
	inline VRInteractiveItem_t2238922987 * get_m_InteractiveItem_6() const { return ___m_InteractiveItem_6; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_InteractiveItem_6() { return &___m_InteractiveItem_6; }
	inline void set_m_InteractiveItem_6(VRInteractiveItem_t2238922987 * value)
	{
		___m_InteractiveItem_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractiveItem_6, value);
	}

	inline static int32_t get_offset_of_m_GazeOver_7() { return static_cast<int32_t>(offsetof(MenuButton_t2242748327, ___m_GazeOver_7)); }
	inline bool get_m_GazeOver_7() const { return ___m_GazeOver_7; }
	inline bool* get_address_of_m_GazeOver_7() { return &___m_GazeOver_7; }
	inline void set_m_GazeOver_7(bool value)
	{
		___m_GazeOver_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

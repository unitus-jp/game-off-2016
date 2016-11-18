#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Menu.MenuAnimator
struct  MenuAnimator_t749354026  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 VRStandardAssets.Menu.MenuAnimator::m_FrameRate
	int32_t ___m_FrameRate_2;
	// UnityEngine.MeshRenderer VRStandardAssets.Menu.MenuAnimator::m_ScreenMesh
	MeshRenderer_t1268241104 * ___m_ScreenMesh_3;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Menu.MenuAnimator::m_VRInteractiveItem
	VRInteractiveItem_t2238922987 * ___m_VRInteractiveItem_4;
	// UnityEngine.Texture[] VRStandardAssets.Menu.MenuAnimator::m_AnimTextures
	TextureU5BU5D_t2474608790* ___m_AnimTextures_5;
	// UnityEngine.WaitForSeconds VRStandardAssets.Menu.MenuAnimator::m_FrameRateWait
	WaitForSeconds_t3839502067 * ___m_FrameRateWait_6;
	// System.Int32 VRStandardAssets.Menu.MenuAnimator::m_CurrentTextureIndex
	int32_t ___m_CurrentTextureIndex_7;
	// System.Boolean VRStandardAssets.Menu.MenuAnimator::m_Playing
	bool ___m_Playing_8;

public:
	inline static int32_t get_offset_of_m_FrameRate_2() { return static_cast<int32_t>(offsetof(MenuAnimator_t749354026, ___m_FrameRate_2)); }
	inline int32_t get_m_FrameRate_2() const { return ___m_FrameRate_2; }
	inline int32_t* get_address_of_m_FrameRate_2() { return &___m_FrameRate_2; }
	inline void set_m_FrameRate_2(int32_t value)
	{
		___m_FrameRate_2 = value;
	}

	inline static int32_t get_offset_of_m_ScreenMesh_3() { return static_cast<int32_t>(offsetof(MenuAnimator_t749354026, ___m_ScreenMesh_3)); }
	inline MeshRenderer_t1268241104 * get_m_ScreenMesh_3() const { return ___m_ScreenMesh_3; }
	inline MeshRenderer_t1268241104 ** get_address_of_m_ScreenMesh_3() { return &___m_ScreenMesh_3; }
	inline void set_m_ScreenMesh_3(MeshRenderer_t1268241104 * value)
	{
		___m_ScreenMesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScreenMesh_3, value);
	}

	inline static int32_t get_offset_of_m_VRInteractiveItem_4() { return static_cast<int32_t>(offsetof(MenuAnimator_t749354026, ___m_VRInteractiveItem_4)); }
	inline VRInteractiveItem_t2238922987 * get_m_VRInteractiveItem_4() const { return ___m_VRInteractiveItem_4; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_VRInteractiveItem_4() { return &___m_VRInteractiveItem_4; }
	inline void set_m_VRInteractiveItem_4(VRInteractiveItem_t2238922987 * value)
	{
		___m_VRInteractiveItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInteractiveItem_4, value);
	}

	inline static int32_t get_offset_of_m_AnimTextures_5() { return static_cast<int32_t>(offsetof(MenuAnimator_t749354026, ___m_AnimTextures_5)); }
	inline TextureU5BU5D_t2474608790* get_m_AnimTextures_5() const { return ___m_AnimTextures_5; }
	inline TextureU5BU5D_t2474608790** get_address_of_m_AnimTextures_5() { return &___m_AnimTextures_5; }
	inline void set_m_AnimTextures_5(TextureU5BU5D_t2474608790* value)
	{
		___m_AnimTextures_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AnimTextures_5, value);
	}

	inline static int32_t get_offset_of_m_FrameRateWait_6() { return static_cast<int32_t>(offsetof(MenuAnimator_t749354026, ___m_FrameRateWait_6)); }
	inline WaitForSeconds_t3839502067 * get_m_FrameRateWait_6() const { return ___m_FrameRateWait_6; }
	inline WaitForSeconds_t3839502067 ** get_address_of_m_FrameRateWait_6() { return &___m_FrameRateWait_6; }
	inline void set_m_FrameRateWait_6(WaitForSeconds_t3839502067 * value)
	{
		___m_FrameRateWait_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_FrameRateWait_6, value);
	}

	inline static int32_t get_offset_of_m_CurrentTextureIndex_7() { return static_cast<int32_t>(offsetof(MenuAnimator_t749354026, ___m_CurrentTextureIndex_7)); }
	inline int32_t get_m_CurrentTextureIndex_7() const { return ___m_CurrentTextureIndex_7; }
	inline int32_t* get_address_of_m_CurrentTextureIndex_7() { return &___m_CurrentTextureIndex_7; }
	inline void set_m_CurrentTextureIndex_7(int32_t value)
	{
		___m_CurrentTextureIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_Playing_8() { return static_cast<int32_t>(offsetof(MenuAnimator_t749354026, ___m_Playing_8)); }
	inline bool get_m_Playing_8() const { return ___m_Playing_8; }
	inline bool* get_address_of_m_Playing_8() { return &___m_Playing_8; }
	inline void set_m_Playing_8(bool value)
	{
		___m_Playing_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

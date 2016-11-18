#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Examples.ExampleInteractiveItem
struct  ExampleInteractiveItem_t3550651349  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material VRStandardAssets.Examples.ExampleInteractiveItem::m_NormalMaterial
	Material_t193706927 * ___m_NormalMaterial_2;
	// UnityEngine.Material VRStandardAssets.Examples.ExampleInteractiveItem::m_OverMaterial
	Material_t193706927 * ___m_OverMaterial_3;
	// UnityEngine.Material VRStandardAssets.Examples.ExampleInteractiveItem::m_ClickedMaterial
	Material_t193706927 * ___m_ClickedMaterial_4;
	// UnityEngine.Material VRStandardAssets.Examples.ExampleInteractiveItem::m_DoubleClickedMaterial
	Material_t193706927 * ___m_DoubleClickedMaterial_5;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Examples.ExampleInteractiveItem::m_InteractiveItem
	VRInteractiveItem_t2238922987 * ___m_InteractiveItem_6;
	// UnityEngine.Renderer VRStandardAssets.Examples.ExampleInteractiveItem::m_Renderer
	Renderer_t257310565 * ___m_Renderer_7;

public:
	inline static int32_t get_offset_of_m_NormalMaterial_2() { return static_cast<int32_t>(offsetof(ExampleInteractiveItem_t3550651349, ___m_NormalMaterial_2)); }
	inline Material_t193706927 * get_m_NormalMaterial_2() const { return ___m_NormalMaterial_2; }
	inline Material_t193706927 ** get_address_of_m_NormalMaterial_2() { return &___m_NormalMaterial_2; }
	inline void set_m_NormalMaterial_2(Material_t193706927 * value)
	{
		___m_NormalMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_NormalMaterial_2, value);
	}

	inline static int32_t get_offset_of_m_OverMaterial_3() { return static_cast<int32_t>(offsetof(ExampleInteractiveItem_t3550651349, ___m_OverMaterial_3)); }
	inline Material_t193706927 * get_m_OverMaterial_3() const { return ___m_OverMaterial_3; }
	inline Material_t193706927 ** get_address_of_m_OverMaterial_3() { return &___m_OverMaterial_3; }
	inline void set_m_OverMaterial_3(Material_t193706927 * value)
	{
		___m_OverMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_OverMaterial_3, value);
	}

	inline static int32_t get_offset_of_m_ClickedMaterial_4() { return static_cast<int32_t>(offsetof(ExampleInteractiveItem_t3550651349, ___m_ClickedMaterial_4)); }
	inline Material_t193706927 * get_m_ClickedMaterial_4() const { return ___m_ClickedMaterial_4; }
	inline Material_t193706927 ** get_address_of_m_ClickedMaterial_4() { return &___m_ClickedMaterial_4; }
	inline void set_m_ClickedMaterial_4(Material_t193706927 * value)
	{
		___m_ClickedMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClickedMaterial_4, value);
	}

	inline static int32_t get_offset_of_m_DoubleClickedMaterial_5() { return static_cast<int32_t>(offsetof(ExampleInteractiveItem_t3550651349, ___m_DoubleClickedMaterial_5)); }
	inline Material_t193706927 * get_m_DoubleClickedMaterial_5() const { return ___m_DoubleClickedMaterial_5; }
	inline Material_t193706927 ** get_address_of_m_DoubleClickedMaterial_5() { return &___m_DoubleClickedMaterial_5; }
	inline void set_m_DoubleClickedMaterial_5(Material_t193706927 * value)
	{
		___m_DoubleClickedMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_DoubleClickedMaterial_5, value);
	}

	inline static int32_t get_offset_of_m_InteractiveItem_6() { return static_cast<int32_t>(offsetof(ExampleInteractiveItem_t3550651349, ___m_InteractiveItem_6)); }
	inline VRInteractiveItem_t2238922987 * get_m_InteractiveItem_6() const { return ___m_InteractiveItem_6; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_InteractiveItem_6() { return &___m_InteractiveItem_6; }
	inline void set_m_InteractiveItem_6(VRInteractiveItem_t2238922987 * value)
	{
		___m_InteractiveItem_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractiveItem_6, value);
	}

	inline static int32_t get_offset_of_m_Renderer_7() { return static_cast<int32_t>(offsetof(ExampleInteractiveItem_t3550651349, ___m_Renderer_7)); }
	inline Renderer_t257310565 * get_m_Renderer_7() const { return ___m_Renderer_7; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_7() { return &___m_Renderer_7; }
	inline void set_m_Renderer_7(Renderer_t257310565 * value)
	{
		___m_Renderer_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

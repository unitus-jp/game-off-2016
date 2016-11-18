#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// VRStandardAssets.Utils.PlatformDependentText/PlatformTextPair[]
struct PlatformTextPairU5BU5D_t654398400;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.PlatformDependentText
struct  PlatformDependentText_t97413489  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text VRStandardAssets.Utils.PlatformDependentText::m_TextComponent
	Text_t356221433 * ___m_TextComponent_2;
	// VRStandardAssets.Utils.PlatformDependentText/PlatformTextPair[] VRStandardAssets.Utils.PlatformDependentText::m_PlatformTextPairs
	PlatformTextPairU5BU5D_t654398400* ___m_PlatformTextPairs_3;

public:
	inline static int32_t get_offset_of_m_TextComponent_2() { return static_cast<int32_t>(offsetof(PlatformDependentText_t97413489, ___m_TextComponent_2)); }
	inline Text_t356221433 * get_m_TextComponent_2() const { return ___m_TextComponent_2; }
	inline Text_t356221433 ** get_address_of_m_TextComponent_2() { return &___m_TextComponent_2; }
	inline void set_m_TextComponent_2(Text_t356221433 * value)
	{
		___m_TextComponent_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_2, value);
	}

	inline static int32_t get_offset_of_m_PlatformTextPairs_3() { return static_cast<int32_t>(offsetof(PlatformDependentText_t97413489, ___m_PlatformTextPairs_3)); }
	inline PlatformTextPairU5BU5D_t654398400* get_m_PlatformTextPairs_3() const { return ___m_PlatformTextPairs_3; }
	inline PlatformTextPairU5BU5D_t654398400** get_address_of_m_PlatformTextPairs_3() { return &___m_PlatformTextPairs_3; }
	inline void set_m_PlatformTextPairs_3(PlatformTextPairU5BU5D_t654398400* value)
	{
		___m_PlatformTextPairs_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlatformTextPairs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

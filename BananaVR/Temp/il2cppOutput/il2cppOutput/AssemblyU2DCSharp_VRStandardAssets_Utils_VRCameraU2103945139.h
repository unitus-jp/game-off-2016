#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t209405766;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.VRCameraUI
struct  VRCameraUI_t2103945139  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas VRStandardAssets.Utils.VRCameraUI::m_Canvas
	Canvas_t209405766 * ___m_Canvas_2;

public:
	inline static int32_t get_offset_of_m_Canvas_2() { return static_cast<int32_t>(offsetof(VRCameraUI_t2103945139, ___m_Canvas_2)); }
	inline Canvas_t209405766 * get_m_Canvas_2() const { return ___m_Canvas_2; }
	inline Canvas_t209405766 ** get_address_of_m_Canvas_2() { return &___m_Canvas_2; }
	inline void set_m_Canvas_2(Canvas_t209405766 * value)
	{
		___m_Canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

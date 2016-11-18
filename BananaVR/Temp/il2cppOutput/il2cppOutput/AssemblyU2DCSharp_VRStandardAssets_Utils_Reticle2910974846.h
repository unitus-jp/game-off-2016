#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.Reticle
struct  Reticle_t2910974846  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Utils.Reticle::m_DefaultDistance
	float ___m_DefaultDistance_2;
	// System.Boolean VRStandardAssets.Utils.Reticle::m_UseNormal
	bool ___m_UseNormal_3;
	// UnityEngine.UI.Image VRStandardAssets.Utils.Reticle::m_Image
	Image_t2042527209 * ___m_Image_4;
	// UnityEngine.Transform VRStandardAssets.Utils.Reticle::m_ReticleTransform
	Transform_t3275118058 * ___m_ReticleTransform_5;
	// UnityEngine.Transform VRStandardAssets.Utils.Reticle::m_Camera
	Transform_t3275118058 * ___m_Camera_6;
	// UnityEngine.Vector3 VRStandardAssets.Utils.Reticle::m_OriginalScale
	Vector3_t2243707580  ___m_OriginalScale_7;
	// UnityEngine.Quaternion VRStandardAssets.Utils.Reticle::m_OriginalRotation
	Quaternion_t4030073918  ___m_OriginalRotation_8;

public:
	inline static int32_t get_offset_of_m_DefaultDistance_2() { return static_cast<int32_t>(offsetof(Reticle_t2910974846, ___m_DefaultDistance_2)); }
	inline float get_m_DefaultDistance_2() const { return ___m_DefaultDistance_2; }
	inline float* get_address_of_m_DefaultDistance_2() { return &___m_DefaultDistance_2; }
	inline void set_m_DefaultDistance_2(float value)
	{
		___m_DefaultDistance_2 = value;
	}

	inline static int32_t get_offset_of_m_UseNormal_3() { return static_cast<int32_t>(offsetof(Reticle_t2910974846, ___m_UseNormal_3)); }
	inline bool get_m_UseNormal_3() const { return ___m_UseNormal_3; }
	inline bool* get_address_of_m_UseNormal_3() { return &___m_UseNormal_3; }
	inline void set_m_UseNormal_3(bool value)
	{
		___m_UseNormal_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(Reticle_t2910974846, ___m_Image_4)); }
	inline Image_t2042527209 * get_m_Image_4() const { return ___m_Image_4; }
	inline Image_t2042527209 ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Image_t2042527209 * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_4, value);
	}

	inline static int32_t get_offset_of_m_ReticleTransform_5() { return static_cast<int32_t>(offsetof(Reticle_t2910974846, ___m_ReticleTransform_5)); }
	inline Transform_t3275118058 * get_m_ReticleTransform_5() const { return ___m_ReticleTransform_5; }
	inline Transform_t3275118058 ** get_address_of_m_ReticleTransform_5() { return &___m_ReticleTransform_5; }
	inline void set_m_ReticleTransform_5(Transform_t3275118058 * value)
	{
		___m_ReticleTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReticleTransform_5, value);
	}

	inline static int32_t get_offset_of_m_Camera_6() { return static_cast<int32_t>(offsetof(Reticle_t2910974846, ___m_Camera_6)); }
	inline Transform_t3275118058 * get_m_Camera_6() const { return ___m_Camera_6; }
	inline Transform_t3275118058 ** get_address_of_m_Camera_6() { return &___m_Camera_6; }
	inline void set_m_Camera_6(Transform_t3275118058 * value)
	{
		___m_Camera_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_6, value);
	}

	inline static int32_t get_offset_of_m_OriginalScale_7() { return static_cast<int32_t>(offsetof(Reticle_t2910974846, ___m_OriginalScale_7)); }
	inline Vector3_t2243707580  get_m_OriginalScale_7() const { return ___m_OriginalScale_7; }
	inline Vector3_t2243707580 * get_address_of_m_OriginalScale_7() { return &___m_OriginalScale_7; }
	inline void set_m_OriginalScale_7(Vector3_t2243707580  value)
	{
		___m_OriginalScale_7 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_8() { return static_cast<int32_t>(offsetof(Reticle_t2910974846, ___m_OriginalRotation_8)); }
	inline Quaternion_t4030073918  get_m_OriginalRotation_8() const { return ___m_OriginalRotation_8; }
	inline Quaternion_t4030073918 * get_address_of_m_OriginalRotation_8() { return &___m_OriginalRotation_8; }
	inline void set_m_OriginalRotation_8(Quaternion_t4030073918  value)
	{
		___m_OriginalRotation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

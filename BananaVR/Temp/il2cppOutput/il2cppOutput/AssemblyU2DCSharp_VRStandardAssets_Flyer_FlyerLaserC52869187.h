#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// VRStandardAssets.Flyer.FlyerGameController
struct FlyerGameController_t3508827726;
// VRStandardAssets.Utils.ObjectPool
struct ObjectPool_t2980402603;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.FlyerLaserController
struct  FlyerLaserController_t52869187  : public MonoBehaviour_t1158329972
{
public:
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Flyer.FlyerLaserController::m_VRInput
	VRInput_t3508365320 * ___m_VRInput_2;
	// VRStandardAssets.Flyer.FlyerGameController VRStandardAssets.Flyer.FlyerLaserController::m_GameController
	FlyerGameController_t3508827726 * ___m_GameController_3;
	// VRStandardAssets.Utils.ObjectPool VRStandardAssets.Flyer.FlyerLaserController::m_LaserObjectPool
	ObjectPool_t2980402603 * ___m_LaserObjectPool_4;
	// UnityEngine.Transform VRStandardAssets.Flyer.FlyerLaserController::m_LaserSpawnPosLeft
	Transform_t3275118058 * ___m_LaserSpawnPosLeft_5;
	// UnityEngine.Transform VRStandardAssets.Flyer.FlyerLaserController::m_LaserSpawnPosRight
	Transform_t3275118058 * ___m_LaserSpawnPosRight_6;
	// UnityEngine.AudioSource VRStandardAssets.Flyer.FlyerLaserController::m_LaserAudio
	AudioSource_t1135106623 * ___m_LaserAudio_7;

public:
	inline static int32_t get_offset_of_m_VRInput_2() { return static_cast<int32_t>(offsetof(FlyerLaserController_t52869187, ___m_VRInput_2)); }
	inline VRInput_t3508365320 * get_m_VRInput_2() const { return ___m_VRInput_2; }
	inline VRInput_t3508365320 ** get_address_of_m_VRInput_2() { return &___m_VRInput_2; }
	inline void set_m_VRInput_2(VRInput_t3508365320 * value)
	{
		___m_VRInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInput_2, value);
	}

	inline static int32_t get_offset_of_m_GameController_3() { return static_cast<int32_t>(offsetof(FlyerLaserController_t52869187, ___m_GameController_3)); }
	inline FlyerGameController_t3508827726 * get_m_GameController_3() const { return ___m_GameController_3; }
	inline FlyerGameController_t3508827726 ** get_address_of_m_GameController_3() { return &___m_GameController_3; }
	inline void set_m_GameController_3(FlyerGameController_t3508827726 * value)
	{
		___m_GameController_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameController_3, value);
	}

	inline static int32_t get_offset_of_m_LaserObjectPool_4() { return static_cast<int32_t>(offsetof(FlyerLaserController_t52869187, ___m_LaserObjectPool_4)); }
	inline ObjectPool_t2980402603 * get_m_LaserObjectPool_4() const { return ___m_LaserObjectPool_4; }
	inline ObjectPool_t2980402603 ** get_address_of_m_LaserObjectPool_4() { return &___m_LaserObjectPool_4; }
	inline void set_m_LaserObjectPool_4(ObjectPool_t2980402603 * value)
	{
		___m_LaserObjectPool_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_LaserObjectPool_4, value);
	}

	inline static int32_t get_offset_of_m_LaserSpawnPosLeft_5() { return static_cast<int32_t>(offsetof(FlyerLaserController_t52869187, ___m_LaserSpawnPosLeft_5)); }
	inline Transform_t3275118058 * get_m_LaserSpawnPosLeft_5() const { return ___m_LaserSpawnPosLeft_5; }
	inline Transform_t3275118058 ** get_address_of_m_LaserSpawnPosLeft_5() { return &___m_LaserSpawnPosLeft_5; }
	inline void set_m_LaserSpawnPosLeft_5(Transform_t3275118058 * value)
	{
		___m_LaserSpawnPosLeft_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_LaserSpawnPosLeft_5, value);
	}

	inline static int32_t get_offset_of_m_LaserSpawnPosRight_6() { return static_cast<int32_t>(offsetof(FlyerLaserController_t52869187, ___m_LaserSpawnPosRight_6)); }
	inline Transform_t3275118058 * get_m_LaserSpawnPosRight_6() const { return ___m_LaserSpawnPosRight_6; }
	inline Transform_t3275118058 ** get_address_of_m_LaserSpawnPosRight_6() { return &___m_LaserSpawnPosRight_6; }
	inline void set_m_LaserSpawnPosRight_6(Transform_t3275118058 * value)
	{
		___m_LaserSpawnPosRight_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_LaserSpawnPosRight_6, value);
	}

	inline static int32_t get_offset_of_m_LaserAudio_7() { return static_cast<int32_t>(offsetof(FlyerLaserController_t52869187, ___m_LaserAudio_7)); }
	inline AudioSource_t1135106623 * get_m_LaserAudio_7() const { return ___m_LaserAudio_7; }
	inline AudioSource_t1135106623 ** get_address_of_m_LaserAudio_7() { return &___m_LaserAudio_7; }
	inline void set_m_LaserAudio_7(AudioSource_t1135106623 * value)
	{
		___m_LaserAudio_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_LaserAudio_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

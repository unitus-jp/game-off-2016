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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.FlyerMovementController
struct  FlyerMovementController_t3078234269  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Flyer.FlyerMovementController::m_DistanceFromCamera
	float ___m_DistanceFromCamera_2;
	// System.Single VRStandardAssets.Flyer.FlyerMovementController::m_Speed
	float ___m_Speed_3;
	// System.Single VRStandardAssets.Flyer.FlyerMovementController::m_Damping
	float ___m_Damping_4;
	// UnityEngine.Transform VRStandardAssets.Flyer.FlyerMovementController::m_Flyer
	Transform_t3275118058 * ___m_Flyer_5;
	// UnityEngine.Transform VRStandardAssets.Flyer.FlyerMovementController::m_TargetMarker
	Transform_t3275118058 * ___m_TargetMarker_6;
	// UnityEngine.Transform VRStandardAssets.Flyer.FlyerMovementController::m_Camera
	Transform_t3275118058 * ___m_Camera_7;
	// UnityEngine.Transform VRStandardAssets.Flyer.FlyerMovementController::m_CameraContainer
	Transform_t3275118058 * ___m_CameraContainer_8;
	// UnityEngine.UI.Text VRStandardAssets.Flyer.FlyerMovementController::m_CurrentScore
	Text_t356221433 * ___m_CurrentScore_9;
	// System.Boolean VRStandardAssets.Flyer.FlyerMovementController::m_IsGameRunning
	bool ___m_IsGameRunning_10;
	// UnityEngine.Vector3 VRStandardAssets.Flyer.FlyerMovementController::m_FlyerStartPos
	Vector3_t2243707580  ___m_FlyerStartPos_11;
	// UnityEngine.Quaternion VRStandardAssets.Flyer.FlyerMovementController::m_FlyerStartRot
	Quaternion_t4030073918  ___m_FlyerStartRot_12;
	// UnityEngine.Vector3 VRStandardAssets.Flyer.FlyerMovementController::m_TargetMarkerStartPos
	Vector3_t2243707580  ___m_TargetMarkerStartPos_13;
	// UnityEngine.Quaternion VRStandardAssets.Flyer.FlyerMovementController::m_TargetMarkerStartRot
	Quaternion_t4030073918  ___m_TargetMarkerStartRot_14;
	// UnityEngine.Vector3 VRStandardAssets.Flyer.FlyerMovementController::m_CameraContainerStartPos
	Vector3_t2243707580  ___m_CameraContainerStartPos_15;

public:
	inline static int32_t get_offset_of_m_DistanceFromCamera_2() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_DistanceFromCamera_2)); }
	inline float get_m_DistanceFromCamera_2() const { return ___m_DistanceFromCamera_2; }
	inline float* get_address_of_m_DistanceFromCamera_2() { return &___m_DistanceFromCamera_2; }
	inline void set_m_DistanceFromCamera_2(float value)
	{
		___m_DistanceFromCamera_2 = value;
	}

	inline static int32_t get_offset_of_m_Speed_3() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_Speed_3)); }
	inline float get_m_Speed_3() const { return ___m_Speed_3; }
	inline float* get_address_of_m_Speed_3() { return &___m_Speed_3; }
	inline void set_m_Speed_3(float value)
	{
		___m_Speed_3 = value;
	}

	inline static int32_t get_offset_of_m_Damping_4() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_Damping_4)); }
	inline float get_m_Damping_4() const { return ___m_Damping_4; }
	inline float* get_address_of_m_Damping_4() { return &___m_Damping_4; }
	inline void set_m_Damping_4(float value)
	{
		___m_Damping_4 = value;
	}

	inline static int32_t get_offset_of_m_Flyer_5() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_Flyer_5)); }
	inline Transform_t3275118058 * get_m_Flyer_5() const { return ___m_Flyer_5; }
	inline Transform_t3275118058 ** get_address_of_m_Flyer_5() { return &___m_Flyer_5; }
	inline void set_m_Flyer_5(Transform_t3275118058 * value)
	{
		___m_Flyer_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Flyer_5, value);
	}

	inline static int32_t get_offset_of_m_TargetMarker_6() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_TargetMarker_6)); }
	inline Transform_t3275118058 * get_m_TargetMarker_6() const { return ___m_TargetMarker_6; }
	inline Transform_t3275118058 ** get_address_of_m_TargetMarker_6() { return &___m_TargetMarker_6; }
	inline void set_m_TargetMarker_6(Transform_t3275118058 * value)
	{
		___m_TargetMarker_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetMarker_6, value);
	}

	inline static int32_t get_offset_of_m_Camera_7() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_Camera_7)); }
	inline Transform_t3275118058 * get_m_Camera_7() const { return ___m_Camera_7; }
	inline Transform_t3275118058 ** get_address_of_m_Camera_7() { return &___m_Camera_7; }
	inline void set_m_Camera_7(Transform_t3275118058 * value)
	{
		___m_Camera_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_7, value);
	}

	inline static int32_t get_offset_of_m_CameraContainer_8() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_CameraContainer_8)); }
	inline Transform_t3275118058 * get_m_CameraContainer_8() const { return ___m_CameraContainer_8; }
	inline Transform_t3275118058 ** get_address_of_m_CameraContainer_8() { return &___m_CameraContainer_8; }
	inline void set_m_CameraContainer_8(Transform_t3275118058 * value)
	{
		___m_CameraContainer_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraContainer_8, value);
	}

	inline static int32_t get_offset_of_m_CurrentScore_9() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_CurrentScore_9)); }
	inline Text_t356221433 * get_m_CurrentScore_9() const { return ___m_CurrentScore_9; }
	inline Text_t356221433 ** get_address_of_m_CurrentScore_9() { return &___m_CurrentScore_9; }
	inline void set_m_CurrentScore_9(Text_t356221433 * value)
	{
		___m_CurrentScore_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentScore_9, value);
	}

	inline static int32_t get_offset_of_m_IsGameRunning_10() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_IsGameRunning_10)); }
	inline bool get_m_IsGameRunning_10() const { return ___m_IsGameRunning_10; }
	inline bool* get_address_of_m_IsGameRunning_10() { return &___m_IsGameRunning_10; }
	inline void set_m_IsGameRunning_10(bool value)
	{
		___m_IsGameRunning_10 = value;
	}

	inline static int32_t get_offset_of_m_FlyerStartPos_11() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_FlyerStartPos_11)); }
	inline Vector3_t2243707580  get_m_FlyerStartPos_11() const { return ___m_FlyerStartPos_11; }
	inline Vector3_t2243707580 * get_address_of_m_FlyerStartPos_11() { return &___m_FlyerStartPos_11; }
	inline void set_m_FlyerStartPos_11(Vector3_t2243707580  value)
	{
		___m_FlyerStartPos_11 = value;
	}

	inline static int32_t get_offset_of_m_FlyerStartRot_12() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_FlyerStartRot_12)); }
	inline Quaternion_t4030073918  get_m_FlyerStartRot_12() const { return ___m_FlyerStartRot_12; }
	inline Quaternion_t4030073918 * get_address_of_m_FlyerStartRot_12() { return &___m_FlyerStartRot_12; }
	inline void set_m_FlyerStartRot_12(Quaternion_t4030073918  value)
	{
		___m_FlyerStartRot_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetMarkerStartPos_13() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_TargetMarkerStartPos_13)); }
	inline Vector3_t2243707580  get_m_TargetMarkerStartPos_13() const { return ___m_TargetMarkerStartPos_13; }
	inline Vector3_t2243707580 * get_address_of_m_TargetMarkerStartPos_13() { return &___m_TargetMarkerStartPos_13; }
	inline void set_m_TargetMarkerStartPos_13(Vector3_t2243707580  value)
	{
		___m_TargetMarkerStartPos_13 = value;
	}

	inline static int32_t get_offset_of_m_TargetMarkerStartRot_14() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_TargetMarkerStartRot_14)); }
	inline Quaternion_t4030073918  get_m_TargetMarkerStartRot_14() const { return ___m_TargetMarkerStartRot_14; }
	inline Quaternion_t4030073918 * get_address_of_m_TargetMarkerStartRot_14() { return &___m_TargetMarkerStartRot_14; }
	inline void set_m_TargetMarkerStartRot_14(Quaternion_t4030073918  value)
	{
		___m_TargetMarkerStartRot_14 = value;
	}

	inline static int32_t get_offset_of_m_CameraContainerStartPos_15() { return static_cast<int32_t>(offsetof(FlyerMovementController_t3078234269, ___m_CameraContainerStartPos_15)); }
	inline Vector3_t2243707580  get_m_CameraContainerStartPos_15() const { return ___m_CameraContainerStartPos_15; }
	inline Vector3_t2243707580 * get_address_of_m_CameraContainerStartPos_15() { return &___m_CameraContainerStartPos_15; }
	inline void set_m_CameraContainerStartPos_15(Vector3_t2243707580  value)
	{
		___m_CameraContainerStartPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

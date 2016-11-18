#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Utils.Reticle
struct Reticle_t2910974846;
// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Utils_VRInput_S3979894745.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.InputWarnings
struct  InputWarnings_t4225836565  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Utils.InputWarnings::m_WarningDisplayTime
	float ___m_WarningDisplayTime_2;
	// System.Boolean VRStandardAssets.Utils.InputWarnings::m_ShowDoubleTapWarnings
	bool ___m_ShowDoubleTapWarnings_3;
	// System.String VRStandardAssets.Utils.InputWarnings::m_DoubleTapWarningMessage
	String_t* ___m_DoubleTapWarningMessage_4;
	// System.Boolean VRStandardAssets.Utils.InputWarnings::m_ShowSingleTapWarnings
	bool ___m_ShowSingleTapWarnings_5;
	// System.String VRStandardAssets.Utils.InputWarnings::m_SingleTapWarningMessage
	String_t* ___m_SingleTapWarningMessage_6;
	// UnityEngine.UI.Text VRStandardAssets.Utils.InputWarnings::m_WarningText
	Text_t356221433 * ___m_WarningText_7;
	// UnityEngine.UI.Image VRStandardAssets.Utils.InputWarnings::m_BackgroundImage
	Image_t2042527209 * ___m_BackgroundImage_8;
	// UnityEngine.Transform VRStandardAssets.Utils.InputWarnings::m_TextTransform
	Transform_t3275118058 * ___m_TextTransform_9;
	// UnityEngine.Transform VRStandardAssets.Utils.InputWarnings::m_Camera
	Transform_t3275118058 * ___m_Camera_10;
	// VRStandardAssets.Utils.Reticle VRStandardAssets.Utils.InputWarnings::m_Reticle
	Reticle_t2910974846 * ___m_Reticle_11;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Utils.InputWarnings::m_VRInput
	VRInput_t3508365320 * ___m_VRInput_12;
	// UnityEngine.Coroutine VRStandardAssets.Utils.InputWarnings::m_WarningCoroutine
	Coroutine_t2299508840 * ___m_WarningCoroutine_13;
	// UnityEngine.Coroutine VRStandardAssets.Utils.InputWarnings::m_SingleClickDelayCoroutine
	Coroutine_t2299508840 * ___m_SingleClickDelayCoroutine_14;
	// System.Boolean VRStandardAssets.Utils.InputWarnings::m_DisplayingWarning
	bool ___m_DisplayingWarning_15;
	// VRStandardAssets.Utils.VRInput/SwipeDirection VRStandardAssets.Utils.InputWarnings::m_CurrentSwipe
	int32_t ___m_CurrentSwipe_16;
	// System.Single VRStandardAssets.Utils.InputWarnings::m_DownTime
	float ___m_DownTime_17;
	// UnityEngine.Vector3 VRStandardAssets.Utils.InputWarnings::m_WarningPosition
	Vector3_t2243707580  ___m_WarningPosition_18;
	// System.Single VRStandardAssets.Utils.InputWarnings::m_ScaleMultiplier
	float ___m_ScaleMultiplier_19;

public:
	inline static int32_t get_offset_of_m_WarningDisplayTime_2() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_WarningDisplayTime_2)); }
	inline float get_m_WarningDisplayTime_2() const { return ___m_WarningDisplayTime_2; }
	inline float* get_address_of_m_WarningDisplayTime_2() { return &___m_WarningDisplayTime_2; }
	inline void set_m_WarningDisplayTime_2(float value)
	{
		___m_WarningDisplayTime_2 = value;
	}

	inline static int32_t get_offset_of_m_ShowDoubleTapWarnings_3() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_ShowDoubleTapWarnings_3)); }
	inline bool get_m_ShowDoubleTapWarnings_3() const { return ___m_ShowDoubleTapWarnings_3; }
	inline bool* get_address_of_m_ShowDoubleTapWarnings_3() { return &___m_ShowDoubleTapWarnings_3; }
	inline void set_m_ShowDoubleTapWarnings_3(bool value)
	{
		___m_ShowDoubleTapWarnings_3 = value;
	}

	inline static int32_t get_offset_of_m_DoubleTapWarningMessage_4() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_DoubleTapWarningMessage_4)); }
	inline String_t* get_m_DoubleTapWarningMessage_4() const { return ___m_DoubleTapWarningMessage_4; }
	inline String_t** get_address_of_m_DoubleTapWarningMessage_4() { return &___m_DoubleTapWarningMessage_4; }
	inline void set_m_DoubleTapWarningMessage_4(String_t* value)
	{
		___m_DoubleTapWarningMessage_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_DoubleTapWarningMessage_4, value);
	}

	inline static int32_t get_offset_of_m_ShowSingleTapWarnings_5() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_ShowSingleTapWarnings_5)); }
	inline bool get_m_ShowSingleTapWarnings_5() const { return ___m_ShowSingleTapWarnings_5; }
	inline bool* get_address_of_m_ShowSingleTapWarnings_5() { return &___m_ShowSingleTapWarnings_5; }
	inline void set_m_ShowSingleTapWarnings_5(bool value)
	{
		___m_ShowSingleTapWarnings_5 = value;
	}

	inline static int32_t get_offset_of_m_SingleTapWarningMessage_6() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_SingleTapWarningMessage_6)); }
	inline String_t* get_m_SingleTapWarningMessage_6() const { return ___m_SingleTapWarningMessage_6; }
	inline String_t** get_address_of_m_SingleTapWarningMessage_6() { return &___m_SingleTapWarningMessage_6; }
	inline void set_m_SingleTapWarningMessage_6(String_t* value)
	{
		___m_SingleTapWarningMessage_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SingleTapWarningMessage_6, value);
	}

	inline static int32_t get_offset_of_m_WarningText_7() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_WarningText_7)); }
	inline Text_t356221433 * get_m_WarningText_7() const { return ___m_WarningText_7; }
	inline Text_t356221433 ** get_address_of_m_WarningText_7() { return &___m_WarningText_7; }
	inline void set_m_WarningText_7(Text_t356221433 * value)
	{
		___m_WarningText_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_WarningText_7, value);
	}

	inline static int32_t get_offset_of_m_BackgroundImage_8() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_BackgroundImage_8)); }
	inline Image_t2042527209 * get_m_BackgroundImage_8() const { return ___m_BackgroundImage_8; }
	inline Image_t2042527209 ** get_address_of_m_BackgroundImage_8() { return &___m_BackgroundImage_8; }
	inline void set_m_BackgroundImage_8(Image_t2042527209 * value)
	{
		___m_BackgroundImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_BackgroundImage_8, value);
	}

	inline static int32_t get_offset_of_m_TextTransform_9() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_TextTransform_9)); }
	inline Transform_t3275118058 * get_m_TextTransform_9() const { return ___m_TextTransform_9; }
	inline Transform_t3275118058 ** get_address_of_m_TextTransform_9() { return &___m_TextTransform_9; }
	inline void set_m_TextTransform_9(Transform_t3275118058 * value)
	{
		___m_TextTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextTransform_9, value);
	}

	inline static int32_t get_offset_of_m_Camera_10() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_Camera_10)); }
	inline Transform_t3275118058 * get_m_Camera_10() const { return ___m_Camera_10; }
	inline Transform_t3275118058 ** get_address_of_m_Camera_10() { return &___m_Camera_10; }
	inline void set_m_Camera_10(Transform_t3275118058 * value)
	{
		___m_Camera_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_10, value);
	}

	inline static int32_t get_offset_of_m_Reticle_11() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_Reticle_11)); }
	inline Reticle_t2910974846 * get_m_Reticle_11() const { return ___m_Reticle_11; }
	inline Reticle_t2910974846 ** get_address_of_m_Reticle_11() { return &___m_Reticle_11; }
	inline void set_m_Reticle_11(Reticle_t2910974846 * value)
	{
		___m_Reticle_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Reticle_11, value);
	}

	inline static int32_t get_offset_of_m_VRInput_12() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_VRInput_12)); }
	inline VRInput_t3508365320 * get_m_VRInput_12() const { return ___m_VRInput_12; }
	inline VRInput_t3508365320 ** get_address_of_m_VRInput_12() { return &___m_VRInput_12; }
	inline void set_m_VRInput_12(VRInput_t3508365320 * value)
	{
		___m_VRInput_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInput_12, value);
	}

	inline static int32_t get_offset_of_m_WarningCoroutine_13() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_WarningCoroutine_13)); }
	inline Coroutine_t2299508840 * get_m_WarningCoroutine_13() const { return ___m_WarningCoroutine_13; }
	inline Coroutine_t2299508840 ** get_address_of_m_WarningCoroutine_13() { return &___m_WarningCoroutine_13; }
	inline void set_m_WarningCoroutine_13(Coroutine_t2299508840 * value)
	{
		___m_WarningCoroutine_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_WarningCoroutine_13, value);
	}

	inline static int32_t get_offset_of_m_SingleClickDelayCoroutine_14() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_SingleClickDelayCoroutine_14)); }
	inline Coroutine_t2299508840 * get_m_SingleClickDelayCoroutine_14() const { return ___m_SingleClickDelayCoroutine_14; }
	inline Coroutine_t2299508840 ** get_address_of_m_SingleClickDelayCoroutine_14() { return &___m_SingleClickDelayCoroutine_14; }
	inline void set_m_SingleClickDelayCoroutine_14(Coroutine_t2299508840 * value)
	{
		___m_SingleClickDelayCoroutine_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_SingleClickDelayCoroutine_14, value);
	}

	inline static int32_t get_offset_of_m_DisplayingWarning_15() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_DisplayingWarning_15)); }
	inline bool get_m_DisplayingWarning_15() const { return ___m_DisplayingWarning_15; }
	inline bool* get_address_of_m_DisplayingWarning_15() { return &___m_DisplayingWarning_15; }
	inline void set_m_DisplayingWarning_15(bool value)
	{
		___m_DisplayingWarning_15 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSwipe_16() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_CurrentSwipe_16)); }
	inline int32_t get_m_CurrentSwipe_16() const { return ___m_CurrentSwipe_16; }
	inline int32_t* get_address_of_m_CurrentSwipe_16() { return &___m_CurrentSwipe_16; }
	inline void set_m_CurrentSwipe_16(int32_t value)
	{
		___m_CurrentSwipe_16 = value;
	}

	inline static int32_t get_offset_of_m_DownTime_17() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_DownTime_17)); }
	inline float get_m_DownTime_17() const { return ___m_DownTime_17; }
	inline float* get_address_of_m_DownTime_17() { return &___m_DownTime_17; }
	inline void set_m_DownTime_17(float value)
	{
		___m_DownTime_17 = value;
	}

	inline static int32_t get_offset_of_m_WarningPosition_18() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_WarningPosition_18)); }
	inline Vector3_t2243707580  get_m_WarningPosition_18() const { return ___m_WarningPosition_18; }
	inline Vector3_t2243707580 * get_address_of_m_WarningPosition_18() { return &___m_WarningPosition_18; }
	inline void set_m_WarningPosition_18(Vector3_t2243707580  value)
	{
		___m_WarningPosition_18 = value;
	}

	inline static int32_t get_offset_of_m_ScaleMultiplier_19() { return static_cast<int32_t>(offsetof(InputWarnings_t4225836565, ___m_ScaleMultiplier_19)); }
	inline float get_m_ScaleMultiplier_19() const { return ___m_ScaleMultiplier_19; }
	inline float* get_address_of_m_ScaleMultiplier_19() { return &___m_ScaleMultiplier_19; }
	inline void set_m_ScaleMultiplier_19(float value)
	{
		___m_ScaleMultiplier_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

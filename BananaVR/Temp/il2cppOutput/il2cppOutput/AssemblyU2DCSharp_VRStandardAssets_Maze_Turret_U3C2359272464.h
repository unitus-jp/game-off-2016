﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Maze.Turret
struct Turret_t182772746;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.Turret/<SpinDown>c__Iterator3
struct  U3CSpinDownU3Ec__Iterator3_t2359272464  : public Il2CppObject
{
public:
	// System.Single VRStandardAssets.Maze.Turret/<SpinDown>c__Iterator3::<timer>__0
	float ___U3CtimerU3E__0_0;
	// System.Single VRStandardAssets.Maze.Turret/<SpinDown>c__Iterator3::<normalizedTime>__1
	float ___U3CnormalizedTimeU3E__1_1;
	// VRStandardAssets.Maze.Turret VRStandardAssets.Maze.Turret/<SpinDown>c__Iterator3::$this
	Turret_t182772746 * ___U24this_2;
	// System.Object VRStandardAssets.Maze.Turret/<SpinDown>c__Iterator3::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean VRStandardAssets.Maze.Turret/<SpinDown>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 VRStandardAssets.Maze.Turret/<SpinDown>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CtimerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CSpinDownU3Ec__Iterator3_t2359272464, ___U3CtimerU3E__0_0)); }
	inline float get_U3CtimerU3E__0_0() const { return ___U3CtimerU3E__0_0; }
	inline float* get_address_of_U3CtimerU3E__0_0() { return &___U3CtimerU3E__0_0; }
	inline void set_U3CtimerU3E__0_0(float value)
	{
		___U3CtimerU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CnormalizedTimeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CSpinDownU3Ec__Iterator3_t2359272464, ___U3CnormalizedTimeU3E__1_1)); }
	inline float get_U3CnormalizedTimeU3E__1_1() const { return ___U3CnormalizedTimeU3E__1_1; }
	inline float* get_address_of_U3CnormalizedTimeU3E__1_1() { return &___U3CnormalizedTimeU3E__1_1; }
	inline void set_U3CnormalizedTimeU3E__1_1(float value)
	{
		___U3CnormalizedTimeU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CSpinDownU3Ec__Iterator3_t2359272464, ___U24this_2)); }
	inline Turret_t182772746 * get_U24this_2() const { return ___U24this_2; }
	inline Turret_t182772746 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Turret_t182772746 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CSpinDownU3Ec__Iterator3_t2359272464, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CSpinDownU3Ec__Iterator3_t2359272464, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CSpinDownU3Ec__Iterator3_t2359272464, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

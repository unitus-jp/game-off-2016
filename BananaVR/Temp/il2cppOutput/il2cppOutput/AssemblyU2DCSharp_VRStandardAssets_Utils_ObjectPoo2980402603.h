#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.ObjectPool
struct  ObjectPool_t2980402603  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] VRStandardAssets.Utils.ObjectPool::m_Prefabs
	GameObjectU5BU5D_t3057952154* ___m_Prefabs_2;
	// System.Int32 VRStandardAssets.Utils.ObjectPool::m_NumberInPool
	int32_t ___m_NumberInPool_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> VRStandardAssets.Utils.ObjectPool::m_Pool
	List_1_t1125654279 * ___m_Pool_4;

public:
	inline static int32_t get_offset_of_m_Prefabs_2() { return static_cast<int32_t>(offsetof(ObjectPool_t2980402603, ___m_Prefabs_2)); }
	inline GameObjectU5BU5D_t3057952154* get_m_Prefabs_2() const { return ___m_Prefabs_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_Prefabs_2() { return &___m_Prefabs_2; }
	inline void set_m_Prefabs_2(GameObjectU5BU5D_t3057952154* value)
	{
		___m_Prefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Prefabs_2, value);
	}

	inline static int32_t get_offset_of_m_NumberInPool_3() { return static_cast<int32_t>(offsetof(ObjectPool_t2980402603, ___m_NumberInPool_3)); }
	inline int32_t get_m_NumberInPool_3() const { return ___m_NumberInPool_3; }
	inline int32_t* get_address_of_m_NumberInPool_3() { return &___m_NumberInPool_3; }
	inline void set_m_NumberInPool_3(int32_t value)
	{
		___m_NumberInPool_3 = value;
	}

	inline static int32_t get_offset_of_m_Pool_4() { return static_cast<int32_t>(offsetof(ObjectPool_t2980402603, ___m_Pool_4)); }
	inline List_1_t1125654279 * get_m_Pool_4() const { return ___m_Pool_4; }
	inline List_1_t1125654279 ** get_address_of_m_Pool_4() { return &___m_Pool_4; }
	inline void set_m_Pool_4(List_1_t1125654279 * value)
	{
		___m_Pool_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Pool_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

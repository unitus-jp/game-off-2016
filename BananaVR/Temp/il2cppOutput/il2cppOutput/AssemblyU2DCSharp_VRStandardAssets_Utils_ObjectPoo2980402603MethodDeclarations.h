#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// VRStandardAssets.Utils.ObjectPool
struct ObjectPool_t2980402603;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void VRStandardAssets.Utils.ObjectPool::.ctor()
extern "C"  void ObjectPool__ctor_m211346017 (ObjectPool_t2980402603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.ObjectPool::Awake()
extern "C"  void ObjectPool_Awake_m1810148586 (ObjectPool_t2980402603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.ObjectPool::AddToPool()
extern "C"  void ObjectPool_AddToPool_m2826940387 (ObjectPool_t2980402603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject VRStandardAssets.Utils.ObjectPool::GetGameObjectFromPool()
extern "C"  GameObject_t1756533147 * ObjectPool_GetGameObjectFromPool_m1795619241 (ObjectPool_t2980402603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.ObjectPool::ReturnGameObjectToPool(UnityEngine.GameObject)
extern "C"  void ObjectPool_ReturnGameObjectToPool_m3407537151 (ObjectPool_t2980402603 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

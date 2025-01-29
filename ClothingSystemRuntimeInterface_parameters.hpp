#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// 0x000C (0x000C - 0x0000)
struct ClothingSimulationInteractor_EnableGravityOverride final
{
public:
	struct FVector                                InVector;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_SetAnimDriveSpringStiffness final
{
public:
	float                                         InStiffness;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_SetNumIterations final
{
public:
	int32                                         NumIterations;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_SetNumSubsteps final
{
public:
	int32                                         NumSubsteps;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
// 0x0018 (0x0018 - 0x0000)
struct ClothingSimulationInteractor_GetClothingInteractor final
{
public:
	class FString                                 ClothingAssetName;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothingInteractor*                    ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_GetNumCloths final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_GetNumDynamicParticles final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_GetNumIterations final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_GetNumKinematicParticles final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_GetNumSubsteps final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// 0x0004 (0x0004 - 0x0000)
struct ClothingSimulationInteractor_GetSimulationTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


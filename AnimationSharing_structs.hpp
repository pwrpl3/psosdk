#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationSharing

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0030 - 0x0028)
struct FTickAnimationSharingFunction final : public FTickFunction
{
public:
	uint8                                         Pad_19AC[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010 (0x0010 - 0x0000)
struct FAnimationSharingScalability final
{
public:
	struct FPerPlatformBool                       UseBlendTransitions;                               // 0x0000(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_19AD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformFloat                      BlendSignificanceValue;                            // 0x0004(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                        MaximumNumberConcurrentBlends;                     // 0x0008(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                      TickSignificanceValue;                             // 0x000C(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0018 (0x0018 - 0x0000)
struct FAnimationSetup final
{
public:
	class UAnimSequence*                          AnimSequence;                                      // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingStateInstance>  AnimBlueprint;                                     // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                        NumRandomizedInstances;                            // 0x0010(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                       Enabled;                                           // 0x0014(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_19AE[0x3];                                     // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030 (0x0030 - 0x0000)
struct FAnimationStateEntry final
{
public:
	uint8                                         State;                                             // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19AF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAnimationSetup>                AnimationSetups;                                   // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bOnDemand;                                         // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdditive;                                         // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19B0[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendTime;                                         // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReturnToPreviousState;                            // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSetNextState;                                     // 0x0021(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         NextState;                                         // 0x0022(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19B1[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformInt                        MaximumNumberOfConcurrentInstances;                // 0x0024(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         WiggleTimePercentage;                              // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRequiresCurves;                                   // 0x002C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19B2[0x3];                                     // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0038 (0x0038 - 0x0000)
struct FPerSkeletonAnimationSharingSetup final
{
public:
	class USkeleton*                              Skeleton;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingTransitionInstance> BlendAnimBlueprint;                                // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;                             // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimationSharingStateProcessor> StateProcessorClass;                               // 0x0020(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimationStateEntry>           AnimationStates;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


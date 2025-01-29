#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayCameras_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieSceneTracks_classes.hpp"


namespace SDK
{

// Class GameplayCameras.TestCameraShake
// 0x0000 (0x00B0 - 0x00B0)
class UTestCameraShake final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestCameraShake">();
	}
	static class UTestCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestCameraShake>();
	}
};

// Class GameplayCameras.SimpleCameraShakePattern
// 0x0010 (0x0038 - 0x0028)
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                         Duration;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendInTime;                                       // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendOutTime;                                      // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_198B[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleCameraShakePattern">();
	}
	static class USimpleCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleCameraShakePattern>();
	}
};

// Class GameplayCameras.ConstantCameraShakePattern
// 0x0018 (0x0050 - 0x0038)
class UConstantCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	struct FVector                                LocationOffset;                                    // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantCameraShakePattern">();
	}
	static class UConstantCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantCameraShakePattern>();
	}
};

// Class GameplayCameras.CompositeCameraShakePattern
// 0x0020 (0x0048 - 0x0028)
class UCompositeCameraShakePattern final : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>            ChildPatterns;                                     // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_198C[0x10];                                    // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositeCameraShakePattern">();
	}
	static class UCompositeCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeCameraShakePattern>();
	}
};

// Class GameplayCameras.DefaultCameraShakeBase
// 0x0000 (0x00B0 - 0x00B0)
class UDefaultCameraShakeBase final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultCameraShakeBase">();
	}
	static class UDefaultCameraShakeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultCameraShakeBase>();
	}
};

// Class GameplayCameras.MatineeCameraShake
// 0x0100 (0x01B0 - 0x00B0)
class UMatineeCameraShake final : public UCameraShakeBase
{
public:
	float                                         OscillationDuration;                               // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendInTime;                            // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendOutTime;                           // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FROscillator                           RotOscillation;                                    // 0x00B4(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVOscillator                           LocOscillation;                                    // 0x00D8(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           FOVOscillation;                                    // 0x00FC(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         AnimPlayRate;                                      // 0x0108(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimScale;                                         // 0x010C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendInTime;                                   // 0x0110(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendOutTime;                                  // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomAnimSegmentDuration;                         // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_198D[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnim*                            Anim;                                              // 0x0120(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequence*               AnimSequence;                                      // 0x0128(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRandomAnimSegment : 1;                            // 0x0130(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_198E[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OscillatorTimeRemaining;                           // 0x0134(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimInst*                        AnimInst;                                          // 0x0138(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_198F[0x40];                                    // 0x0140(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class USequenceCameraShakePattern*            SequenceShakePattern;                              // 0x0180(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1990[0x28];                                    // 0x0188(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UMatineeCameraShake* StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	static class UMatineeCameraShake* StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);

	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
	void ReceivePlayShake(float Scale);
	void ReceiveStopShake(bool bImmediately);

	bool ReceiveIsFinished() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MatineeCameraShake">();
	}
	static class UMatineeCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatineeCameraShake>();
	}
};

// Class GameplayCameras.MatineeCameraShakePattern
// 0x0000 (0x0028 - 0x0028)
class UMatineeCameraShakePattern final : public UCameraShakePattern
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MatineeCameraShakePattern">();
	}
	static class UMatineeCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatineeCameraShakePattern>();
	}
};

// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneMatineeCameraShakeEvaluator final : public UMovieSceneCameraShakeEvaluator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMatineeCameraShakeEvaluator">();
	}
	static class UMovieSceneMatineeCameraShakeEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMatineeCameraShakeEvaluator>();
	}
};

// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMatineeCameraShakeFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UMatineeCameraShake* Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MatineeCameraShakeFunctionLibrary">();
	}
	static class UMatineeCameraShakeFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatineeCameraShakeFunctionLibrary>();
	}
};

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// 0x0080 (0x00B8 - 0x0038)
class UPerlinNoiseCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     X;                                                 // 0x0040(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Y;                                                 // 0x0048(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Z;                                                 // 0x0050(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Pitch;                                             // 0x0060(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Yaw;                                               // 0x0068(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Roll;                                              // 0x0070(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     FOV;                                               // 0x0078(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1996[0x38];                                    // 0x0080(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PerlinNoiseCameraShakePattern">();
	}
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerlinNoiseCameraShakePattern>();
	}
};

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// 0x00A0 (0x00D8 - 0x0038)
class UWaveOscillatorCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        X;                                                 // 0x0040(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Y;                                                 // 0x004C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Z;                                                 // 0x0058(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Pitch;                                             // 0x006C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Yaw;                                               // 0x0078(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Roll;                                              // 0x0084(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        FOV;                                               // 0x0090(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1997[0x3C];                                    // 0x009C(0x003C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveOscillatorCameraShakePattern">();
	}
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveOscillatorCameraShakePattern>();
	}
};

}


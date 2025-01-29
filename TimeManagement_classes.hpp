#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeManagement

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0000 (0x0028 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FixedFrameRateCustomTimeStep">();
	}
	static class UFixedFrameRateCustomTimeStep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFixedFrameRateCustomTimeStep>();
	}
};

// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0030 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                          bUseForSynchronization;                            // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A76[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FrameOffset;                                       // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynchronizationSource">();
	}
	static class UTimeSynchronizationSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynchronizationSource>();
	}
};

// Class TimeManagement.GenlockedCustomTimeStep
// 0x0000 (0x0028 - 0x0028)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenlockedCustomTimeStep">();
	}
	static class UGenlockedCustomTimeStep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenlockedCustomTimeStep>();
	}
};

// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// 0x0020 (0x0048 - 0x0028)
class UGenlockedFixedRateCustomTimeStep final : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                             FrameRate;                                         // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A77[0x18];                                    // 0x0030(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenlockedFixedRateCustomTimeStep">();
	}
	static class UGenlockedFixedRateCustomTimeStep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenlockedFixedRateCustomTimeStep>();
	}
};

// Class TimeManagement.GenlockedTimecodeProvider
// 0x0028 (0x0058 - 0x0030)
class UGenlockedTimecodeProvider final : public UTimecodeProvider
{
public:
	bool                                          bUseGenlockToCount;                                // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A78[0x27];                                    // 0x0031(0x0027)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenlockedTimecodeProvider">();
	}
	static class UGenlockedTimecodeProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenlockedTimecodeProvider>();
	}
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FFrameNumber Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
	static struct FFrameNumber Add_FrameNumberInteger(const struct FFrameNumber& A, int32 B);
	static int32 Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
	static float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
	static float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	static class FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	static struct FFrameNumber Divide_FrameNumberInteger(const struct FFrameNumber& A, int32 B);
	static struct FTimecode GetTimecode();
	static struct FFrameRate GetTimecodeFrameRate();
	static bool IsValid_Framerate(const struct FFrameRate& InFrameRate);
	static bool IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
	static struct FFrameNumber Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32 B);
	static struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	static struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
	static struct FFrameNumber Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
	static struct FFrameNumber Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32 B);
	static struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeManagementBlueprintLibrary">();
	}
	static class UTimeManagementBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeManagementBlueprintLibrary>();
	}
};

}


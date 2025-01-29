#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TakeMovieScene

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "MovieSceneTracks_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class TakeMovieScene.MovieSceneTakeSection
// 0x0380 (0x0468 - 0x00E8)
class UMovieSceneTakeSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel              HoursCurve;                                        // 0x00E8(0x0090)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              MinutesCurve;                                      // 0x0178(0x0090)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              SecondsCurve;                                      // 0x0208(0x0090)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              FramesCurve;                                       // 0x0298(0x0090)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                SubFramesCurve;                                    // 0x0328(0x00A0)(NativeAccessSpecifierPublic)
	struct FMovieSceneStringChannel               Slate;                                             // 0x03C8(0x00A0)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTakeSection">();
	}
	static class UMovieSceneTakeSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTakeSection>();
	}
};

// Class TakeMovieScene.MovieSceneTakeSettings
// 0x0060 (0x0088 - 0x0028)
class UMovieSceneTakeSettings final : public UObject
{
public:
	class FString                                 HoursName;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MinutesName;                                       // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SecondsName;                                       // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FramesName;                                        // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SubFramesName;                                     // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SlateName;                                         // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTakeSettings">();
	}
	static class UMovieSceneTakeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTakeSettings>();
	}
};

// Class TakeMovieScene.MovieSceneTakeTrack
// 0x0010 (0x00A0 - 0x0090)
class UMovieSceneTakeTrack final : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0090(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTakeTrack">();
	}
	static class UMovieSceneTakeTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTakeTrack>();
	}
};

}


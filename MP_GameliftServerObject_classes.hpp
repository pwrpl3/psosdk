#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_GameliftServerObject

#include "Basic.hpp"

#include "AwsGameLiftServer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_GameliftServerObject.MP_GameliftServerObject_C
// 0x0008 (0x40C0 - 0x40B8)
class UMP_GameliftServerObject_C final : public UGameLiftServerObject
{
public:
	class ADS_EntryGameMode_C*                    DS_EntryGameMode;                                  // 0x40B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	bool ProcessTerminate();
	bool ServerHealthCheck();
	bool UpdateGameSession(const struct FServerUpdateGameSession& Session);
	bool StartGameSession(const struct FServerGameSession& Session);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_GameliftServerObject_C">();
	}
	static class UMP_GameliftServerObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMP_GameliftServerObject_C>();
	}
};

}


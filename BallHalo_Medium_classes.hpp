#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BallHalo_Medium

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BallHalo_Medium.BallHalo_Medium_C
// 0x0008 (0x0268 - 0x0260)
class UBallHalo_Medium_C final : public UUserWidget
{
public:
	class UImage*                                 HaloImage;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BallHalo_Medium_C">();
	}
	static class UBallHalo_Medium_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBallHalo_Medium_C>();
	}
};

}


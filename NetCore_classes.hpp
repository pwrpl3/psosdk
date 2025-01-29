#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetCore

#include "Basic.hpp"

#include "NetCore_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class NetCore.NetAnalyticsAggregatorConfig
// 0x0010 (0x0038 - 0x0028)
class UNetAnalyticsAggregatorConfig final : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>        NetAnalyticsData;                                  // 0x0028(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetAnalyticsAggregatorConfig">();
	}
	static class UNetAnalyticsAggregatorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetAnalyticsAggregatorConfig>();
	}
};

}


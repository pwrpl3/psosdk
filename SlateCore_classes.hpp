#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlateCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SlateCore.FontBulkData
// 0x0050 (0x0078 - 0x0028)
class UFontBulkData final : public UObject
{
public:
	uint8                                         Pad_1AA4[0x50];                                    // 0x0028(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FontBulkData">();
	}
	static class UFontBulkData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFontBulkData>();
	}
};

// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
class IFontFaceInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FontFaceInterface">();
	}
	static class IFontFaceInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFontFaceInterface>();
	}
};

// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
class IFontProviderInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FontProviderInterface">();
	}
	static class IFontProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFontProviderInterface>();
	}
};

// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
class USlateTypes final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateTypes">();
	}
	static class USlateTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateTypes>();
	}
};

// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleAsset final : public UObject
{
public:
	class USlateWidgetStyleContainerBase*         CustomStyle;                                       // 0x0028(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateWidgetStyleAsset">();
	}
	static class USlateWidgetStyleAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateWidgetStyleAsset>();
	}
};

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	uint8                                         Pad_1AA5[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateWidgetStyleContainerBase">();
	}
	static class USlateWidgetStyleContainerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateWidgetStyleContainerBase>();
	}
};

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
class ISlateWidgetStyleContainerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SlateWidgetStyleContainerInterface">();
	}
	static class ISlateWidgetStyleContainerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISlateWidgetStyleContainerInterface>();
	}
};

}


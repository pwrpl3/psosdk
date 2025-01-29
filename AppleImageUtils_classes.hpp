#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleImageUtils

#include "Basic.hpp"

#include "AppleImageUtils_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// 0x0060 (0x0088 - 0x0028)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy final : public UObject
{
public:
	uint8                                         Pad_1A20[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A21[0x10];                                    // 0x0050(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppleImageUtilsImageConversionResult  ConversionResult;                                  // 0x0060(0x0020)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A22[0x8];                                     // 0x0080(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleImageUtilsBaseAsyncTaskBlueprintProxy">();
	}
	static class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>();
	}
};

// Class AppleImageUtils.AppleImageInterface
// 0x0000 (0x0028 - 0x0028)
class IAppleImageInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AppleImageInterface">();
	}
	static class IAppleImageInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAppleImageInterface>();
	}
};

}


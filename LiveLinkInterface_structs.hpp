#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
// NumValues: 0x0003
enum class ELiveLinkCameraProjectionMode : uint8
{
	Perspective                              = 0,
	Orthographic                             = 1,
	ELiveLinkCameraProjectionMode_MAX        = 2,
};

// Enum LiveLinkInterface.ELiveLinkSourceMode
// NumValues: 0x0004
enum class ELiveLinkSourceMode : uint8
{
	Latest                                   = 0,
	EngineTime                               = 1,
	Timecode                                 = 2,
	ELiveLinkSourceMode_MAX                  = 3,
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008 (0x0008 - 0x0000)
struct FLiveLinkSubjectName final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FLiveLinkSourceHandle final
{
public:
	uint8                                         Pad_1A2C[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// 0x0018 (0x0018 - 0x0000)
struct FLiveLinkSubjectKey final
{
public:
	struct FGuid                                  Source;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                   SubjectName;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// 0x0038 (0x0038 - 0x0000)
struct FLiveLinkSubjectPreset final
{
public:
	struct FLiveLinkSubjectKey                    Key;                                               // 0x0000(0x0018)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>              Role;                                              // 0x0018(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkSubjectSettings*               Settings;                                          // 0x0020(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkVirtualSubject*                VirtualSubject;                                    // 0x0028(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0030(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A2D[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060 (0x0060 - 0x0000)
struct FLiveLinkMetaData final
{
public:
	TMap<class FName, class FString>              StringMetadata;                                    // 0x0000(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    SceneTime;                                         // 0x0050(0x0010)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FLiveLinkBaseBlueprintData
{
public:
	uint8                                         Pad_1A2E[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// 0x0010 (0x0018 - 0x0008)
struct FSubjectFrameHandle final : public FLiveLinkBaseBlueprintData
{
public:
	uint8                                         Pad_1A2F[0x10];                                    // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FLiveLinkTransform final
{
public:
	uint8                                         Pad_1A30[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// 0x0160 (0x0160 - 0x0000)
struct alignas(0x08) FCachedSubjectFrame final
{
public:
	uint8                                         Pad_1A31[0x160];                                   // 0x0000(0x0160)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// 0x0070 (0x0070 - 0x0000)
struct FSubjectMetadata final
{
public:
	TMap<class FName, class FString>              StringMetadata;                                    // 0x0000(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTimecode                              SceneTimecode;                                     // 0x0050(0x0014)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             SceneFramerate;                                    // 0x0064(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A32[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkWorldTime final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        Offset;                                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// 0x00A0 (0x00A0 - 0x0000)
struct FLiveLinkBaseFrameData
{
public:
	struct FLiveLinkWorldTime                     WorldTime;                                         // 0x0000(0x0010)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                      MetaData;                                          // 0x0010(0x0060)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<float>                                 PropertyValues;                                    // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A33[0x20];                                    // 0x0080(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// 0x0010 (0x00B0 - 0x00A0)
struct FLiveLinkAnimationFrameData final : public FLiveLinkBaseFrameData
{
public:
	TArray<struct FTransform>                     Transforms;                                        // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                           PropertyNames;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// 0x0020 (0x0030 - 0x0010)
struct FLiveLinkSkeletonStaticData final : public FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                           BoneNames;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 BoneParents;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// 0x00B0 (0x00B8 - 0x0008)
struct FLiveLinkBasicBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkBaseStaticData                StaticData;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLiveLinkBaseFrameData                 FrameData;                                         // 0x0018(0x00A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// 0x0008 (0x0018 - 0x0010)
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
public:
	bool                                          bIsLocationSupported;                              // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRotationSupported;                              // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsScaleSupported;                                 // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A34[0x5];                                     // 0x0013(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// 0x0010 (0x0028 - 0x0018)
struct FLiveLinkCameraStaticData final : public FLiveLinkTransformStaticData
{
public:
	bool                                          bIsFieldOfViewSupported;                           // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAspectRatioSupported;                           // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFocalLengthSupported;                           // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsProjectionModeSupported;                        // 0x001B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FilmBackWidth;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FilmBackHeight;                                    // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsApertureSupported;                              // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFocusDistanceSupported;                         // 0x0025(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A35[0x2];                                     // 0x0026(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// 0x0030 (0x00D0 - 0x00A0)
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
public:
	struct FTransform                             Transform;                                         // 0x00A0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// 0x0020 (0x00F0 - 0x00D0)
struct FLiveLinkCameraFrameData final : public FLiveLinkTransformFrameData
{
public:
	float                                         FieldOfView;                                       // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AspectRatio;                                       // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FocalLength;                                       // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Aperture;                                          // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FocusDistance;                                     // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELiveLinkCameraProjectionMode                 ProjectionMode;                                    // 0x00E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A36[0xB];                                     // 0x00E5(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// 0x0118 (0x0120 - 0x0008)
struct FLiveLinkCameraBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkCameraStaticData              StaticData;                                        // 0x0008(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLiveLinkCameraFrameData               FrameData;                                         // 0x0030(0x00F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0050 (0x0050 - 0x0000)
struct FLiveLinkCurveConversionSettings final
{
public:
	TMap<class FString, struct FSoftObjectPath>   CurveConversionAssetMap;                           // 0x0000(0x0050)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// 0x0010 (0x0028 - 0x0018)
struct FLiveLinkLightStaticData final : public FLiveLinkTransformStaticData
{
public:
	bool                                          bIsTemperatureSupported;                           // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsIntensitySupported;                             // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsLightColorSupported;                            // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsInnerConeAngleSupported;                        // 0x001B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsOuterConeAngleSupported;                        // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAttenuationRadiusSupported;                     // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSourceLenghtSupported;                          // 0x001E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSourceRadiusSupported;                          // 0x001F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSoftSourceRadiusSupported;                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A37[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// 0x0030 (0x0100 - 0x00D0)
struct FLiveLinkLightFrameData final : public FLiveLinkTransformFrameData
{
public:
	float                                         Temperature;                                       // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Intensity;                                         // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 LightColor;                                        // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InnerConeAngle;                                    // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OuterConeAngle;                                    // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttenuationRadius;                                 // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SourceRadius;                                      // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SoftSourceRadius;                                  // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SourceLength;                                      // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A38[0xC];                                     // 0x00F4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// 0x0128 (0x0130 - 0x0008)
struct FLiveLinkLightBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkLightStaticData               StaticData;                                        // 0x0008(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLiveLinkLightFrameData                FrameData;                                         // 0x0030(0x0100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// 0x0030 (0x0030 - 0x0000)
struct FLiveLinkSourcePreset final
{
public:
	struct FGuid                                  Guid;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkSourceSettings*                Settings;                                          // 0x0010(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   SourceType;                                        // 0x0018(0x0018)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020 (0x0020 - 0x0000)
struct FLiveLinkRefSkeleton final
{
public:
	TArray<class FName>                           BoneNames;                                         // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 BoneParents;                                       // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkSubjectRepresentation final
{
public:
	struct FLiveLinkSubjectName                   Subject;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>              Role;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0008 (0x0008 - 0x0000)
struct FLiveLinkInterpolationSettings final
{
public:
	bool                                          bUseInterpolation;                                 // 0x0000(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A39[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterpolationOffset;                               // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x000C (0x000C - 0x0000)
struct FLiveLinkTimeSynchronizationSettings final
{
public:
	struct FFrameRate                             FrameRate;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           FrameOffset;                                       // 0x0008(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkSourceDebugInfo final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;                                       // 0x0000(0x0008)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SnapshotIndex;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumberOfBufferAtSnapshot;                          // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// 0x0058 (0x0058 - 0x0000)
struct FLiveLinkSourceBufferManagementSettings final
{
public:
	bool                                          bValidEngineTimeEnabled;                           // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ValidEngineTime;                                   // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EngineTimeOffset;                                  // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EngineTimeClockOffset;                             // 0x0010(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenerateSubFrame;                                 // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             DetectedFrameRate;                                 // 0x001C(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseTimecodeSmoothLatest;                          // 0x0024(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3D[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             SourceTimecodeFrameRate;                           // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bValidTimecodeFrameEnabled;                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3E[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ValidTimecodeFrame;                                // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimecodeFrameOffset;                               // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3F[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimecodeClockOffset;                               // 0x0040(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LatestOffset;                                      // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNumberOfFrameToBuffered;                        // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bKeepAtLeastOneFrame;                              // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A40[0x7];                                     // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// 0x00E8 (0x00F0 - 0x0008)
struct FLiveLinkTransformBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkTransformStaticData           StaticData;                                        // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLiveLinkTransformFrameData            FrameData;                                         // 0x0020(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x000C (0x000C - 0x0000)
struct FLiveLinkCurveElement final
{
public:
	class FName                                   CurveName;                                         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveValue;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090 (0x0090 - 0x0000)
struct FLiveLinkFrameData final
{
public:
	TArray<struct FTransform>                     Transforms;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkCurveElement>          CurveElements;                                     // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkWorldTime                     WorldTime;                                         // 0x0020(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                      MetaData;                                          // 0x0030(0x0060)(NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000 (0x0008 - 0x0008)
struct FLiveLinkFrameRate final : public FFrameRate
{
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
	int32                                         Seconds;                                           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Frames;                                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameRate                     FrameRate;                                         // 0x0008(0x0008)(NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTimeCode final : public FLiveLinkTimeCode_Base_DEPRECATED
{
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// 0x0018 (0x0018 - 0x0000)
struct FLiveLinkTime final
{
public:
	double                                        WorldTime;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    SceneTime;                                         // 0x0008(0x0010)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


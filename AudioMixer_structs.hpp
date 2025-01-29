#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"


namespace SDK
{

// Enum AudioMixer.EMusicalNoteName
// NumValues: 0x000D
enum class EMusicalNoteName : uint8
{
	C                                        = 0,
	Db                                       = 1,
	D                                        = 2,
	Eb                                       = 3,
	E                                        = 4,
	F                                        = 5,
	Gb                                       = 6,
	G                                        = 7,
	Ab                                       = 8,
	A                                        = 9,
	Bb                                       = 10,
	B                                        = 11,
	EMusicalNoteName_MAX                     = 12,
};

// Enum AudioMixer.ESubmixEffectDynamicsKeySource
// NumValues: 0x0005
enum class ESubmixEffectDynamicsKeySource : uint8
{
	Default                                  = 0,
	AudioBus                                 = 1,
	Submix                                   = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsKeySource_MAX       = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
// NumValues: 0x0005
enum class ESubmixEffectDynamicsChannelLinkMode : uint8
{
	Disabled                                 = 0,
	Average                                  = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
// NumValues: 0x0005
enum class ESubmixEffectDynamicsPeakMode : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsPeakMode_MAX        = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
// NumValues: 0x0006
enum class ESubmixEffectDynamicsProcessorType : uint8
{
	Compressor                               = 0,
	Limiter                                  = 1,
	Expander                                 = 2,
	Gate                                     = 3,
	Count                                    = 4,
	ESubmixEffectDynamicsProcessorType_MAX   = 5,
};

// Enum AudioMixer.EQuarztClockManagerType
// NumValues: 0x0004
enum class EQuarztClockManagerType : uint8
{
	AudioEngine                              = 0,
	QuartzSubsystem                          = 1,
	Count                                    = 2,
	EQuarztClockManagerType_MAX              = 3,
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// 0x000C (0x000C - 0x0000)
struct FSubmixEffectDynamicProcessorFilterSettings final
{
public:
	uint8                                         bEnabled : 1;                                      // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_144D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Cutoff;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainDb;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0060 (0x0060 - 0x0000)
struct FSubmixEffectDynamicsProcessorSettings final
{
public:
	ESubmixEffectDynamicsProcessorType            DynamicsProcessorType;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixEffectDynamicsPeakMode                 PeakMode;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixEffectDynamicsChannelLinkMode          LinkMode;                                          // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144E[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InputGainDb;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ThresholdDb;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Ratio;                                             // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         KneeBandwidthDb;                                   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LookAheadMsec;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttackTimeMsec;                                    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTimeMsec;                                   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixEffectDynamicsKeySource                KeySource;                                         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioBus*                              ExternalAudioBus;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                           ExternalSubmix;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bChannelLinked : 1;                                // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAnalogMode : 1;                                   // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bBypass : 1;                                       // 0x0038(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bKeyAudition : 1;                                  // 0x0038(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1450[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         KeyGainDb;                                         // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputGainDb;                                      // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                                      // 0x0044(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                                       // 0x0050(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1451[0x4];                                     // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010 (0x0010 - 0x0000)
struct FSubmixEffectEQBand final
{
public:
	float                                         Frequency;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Bandwidth;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainDb;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1452[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010 (0x0010 - 0x0000)
struct FSubmixEffectSubmixEQSettings final
{
public:
	TArray<struct FSubmixEffectEQBand>            EQBands;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0040 (0x0040 - 0x0000)
struct FSubmixEffectReverbSettings final
{
public:
	bool                                          bBypassEarlyReflections;                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1453[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReflectionsDelay;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainHF;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReflectionsGain;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBypassLateReflections;                            // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1454[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LateDelay;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayTime;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Density;                                           // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Diffusion;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirAbsorptionGainHF;                               // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayHFRatio;                                      // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LateGain;                                          // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gain;                                              // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WetLevel;                                          // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DryLevel;                                          // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBypass;                                           // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1455[0x3];                                     // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}


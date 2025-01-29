#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundUtilities

#include "Basic.hpp"

#include "SoundUtilities_classes.hpp"
#include "SoundUtilities_parameters.hpp"


namespace SDK
{

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                                   InDecibels                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::ConvertDecibelsToLinear(const float InDecibels)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "ConvertDecibelsToLinear");

	Params::SoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear Parms{};

	Parms.InDecibels = InDecibels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                                   InLinear                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InFloor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::ConvertLinearToDecibels(const float InLinear, const float InFloor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "ConvertLinearToDecibels");

	Params::SoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels Parms{};

	Parms.InLinear = InLinear;
	Parms.InFloor = InFloor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                                   InQ                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetBandwidthFromQ(const float InQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetBandwidthFromQ");

	Params::SoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ Parms{};

	Parms.InQ = InQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                                   BeatsPerMinute                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   BeatMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   DivisionsOfWholeNote                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetBeatTempo");

	Params::SoundUtilitiesBPFunctionLibrary_GetBeatTempo Parms{};

	Parms.BeatsPerMinute = BeatsPerMinute;
	Parms.BeatMultiplier = BeatMultiplier;
	Parms.DivisionsOfWholeNote = DivisionsOfWholeNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int32                                   MidiNote                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(const int32 MidiNote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetFrequencyFromMIDIPitch");

	Params::SoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch Parms{};

	Parms.MidiNote = MidiNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                                   InPitchSemitones                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetFrequencyMultiplierFromSemitones(const float InPitchSemitones)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetFrequencyMultiplierFromSemitones");

	Params::SoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones Parms{};

	Parms.InPitchSemitones = InPitchSemitones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int32                                   InVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetGainFromMidiVelocity(int32 InVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetGainFromMidiVelocity");

	Params::SoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity Parms{};

	Parms.InVelocity = InVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   InValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        InDomain                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        InRange                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetLinearFrequencyClamped(const float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetLinearFrequencyClamped");

	Params::SoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped Parms{};

	Parms.InValue = InValue;
	Parms.InDomain = std::move(InDomain);
	Parms.InRange = std::move(InRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   InValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        InDomain                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        InRange                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetLogFrequencyClamped(const float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetLogFrequencyClamped");

	Params::SoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped Parms{};

	Parms.InValue = InValue;
	Parms.InDomain = std::move(InDomain);
	Parms.InRange = std::move(InRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                                   Frequency                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(const float Frequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetMIDIPitchFromFrequency");

	Params::SoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency Parms{};

	Parms.Frequency = Frequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int32                                   BaseMidiNote                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   TargetMidiNote                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(const int32 BaseMidiNote, const int32 TargetMidiNote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetPitchScaleFromMIDIPitch");

	Params::SoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch Parms{};

	Parms.BaseMidiNote = BaseMidiNote;
	Parms.TargetMidiNote = TargetMidiNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                                   InBandwidth                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetQFromBandwidth(const float InBandwidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetQFromBandwidth");

	Params::SoundUtilitiesBPFunctionLibrary_GetQFromBandwidth Parms{};

	Parms.InBandwidth = InBandwidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


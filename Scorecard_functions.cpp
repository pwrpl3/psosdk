#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scorecard

#include "Basic.hpp"

#include "Scorecard_classes.hpp"
#include "Scorecard_parameters.hpp"


namespace SDK
{

// Function Scorecard.Scorecard_C.ExecuteUbergraph_Scorecard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScorecard_C::ExecuteUbergraph_Scorecard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "ExecuteUbergraph_Scorecard");

	Params::Scorecard_C_ExecuteUbergraph_Scorecard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scorecard.Scorecard_C.SetMatchSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_MatchSequence                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UScorecard_C::SetMatchSequence(const class FString& Param_MatchSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "SetMatchSequence");

	Params::Scorecard_C_SetMatchSequence Parms{};

	Parms.Param_MatchSequence = std::move(Param_MatchSequence);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scorecard.Scorecard_C.SetMatchScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   T1Score                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   T2Score                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScorecard_C::SetMatchScore(int32 T1Score, int32 T2Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "SetMatchScore");

	Params::Scorecard_C_SetMatchScore Parms{};

	Parms.T1Score = T1Score;
	Parms.T2Score = T2Score;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scorecard.Scorecard_C.SetTeamInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Team1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     Team1Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Team2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     Team2Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScorecard_C::SetTeamInfo(const class FString& Team1, const struct FLinearColor& Team1Color, const class FString& Team2, const struct FLinearColor& Team2Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "SetTeamInfo");

	Params::Scorecard_C_SetTeamInfo Parms{};

	Parms.Team1 = std::move(Team1);
	Parms.Team1Color = std::move(Team1Color);
	Parms.Team2 = std::move(Team2);
	Parms.Team2Color = std::move(Team2Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scorecard.Scorecard_C.GoalStateFadeOutWithoutAssist
// (BlueprintCallable, BlueprintEvent)

void UScorecard_C::GoalStateFadeOutWithoutAssist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "GoalStateFadeOutWithoutAssist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scorecard.Scorecard_C.GoalStateFadeOutWithAssist
// (BlueprintCallable, BlueprintEvent)

void UScorecard_C::GoalStateFadeOutWithAssist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "GoalStateFadeOutWithAssist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scorecard.Scorecard_C.GoalStateFadeInWithoutAssist
// (BlueprintCallable, BlueprintEvent)

void UScorecard_C::GoalStateFadeInWithoutAssist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "GoalStateFadeInWithoutAssist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scorecard.Scorecard_C.GoalStateFadeInWithAssist
// (BlueprintCallable, BlueprintEvent)

void UScorecard_C::GoalStateFadeInWithAssist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "GoalStateFadeInWithAssist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scorecard.Scorecard_C.GoalStateFadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WithAssist_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             TeamScoreText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     TeamScoreTextColor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ScorerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             AssisterName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UScorecard_C::GoalStateFadeIn(bool WithAssist_, const class FText& TeamScoreText, const struct FLinearColor& TeamScoreTextColor, const class FText& ScorerName, const class FText& AssisterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "GoalStateFadeIn");

	Params::Scorecard_C_GoalStateFadeIn Parms{};

	Parms.WithAssist_ = WithAssist_;
	Parms.TeamScoreText = std::move(TeamScoreText);
	Parms.TeamScoreTextColor = std::move(TeamScoreTextColor);
	Parms.ScorerName = std::move(ScorerName);
	Parms.AssisterName = std::move(AssisterName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scorecard.Scorecard_C.SetMatchTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MatchMinutes                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MatchSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScorecard_C::SetMatchTime(int32 MatchMinutes, float MatchSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "SetMatchTime");

	Params::Scorecard_C_SetMatchTime Parms{};

	Parms.MatchMinutes = MatchMinutes;
	Parms.MatchSeconds = MatchSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scorecard.Scorecard_C.MatchStateSetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MatchStateText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     TextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScorecard_C::MatchStateSetText(const class FText& MatchStateText, const struct FLinearColor& TextColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "MatchStateSetText");

	Params::Scorecard_C_MatchStateSetText Parms{};

	Parms.MatchStateText = std::move(MatchStateText);
	Parms.TextColor = std::move(TextColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scorecard.Scorecard_C.MatchStateFadeOut
// (BlueprintCallable, BlueprintEvent)

void UScorecard_C::MatchStateFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "MatchStateFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scorecard.Scorecard_C.MatchStateFadeIn
// (BlueprintCallable, BlueprintEvent)

void UScorecard_C::MatchStateFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scorecard_C", "MatchStateFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}

}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "CustomGameplayStatics.generated.h"

/**
 * 
 */
UCLASS()
class FANBALL_API UCustomGameplayStatics : public UGameplayStatics
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Utility|Debug", meta = (CallableWithoutWorldContext, Keywords = "log print", AdvancedDisplay = "2", DevelopmentOnly))
		static void PrintDebugMessage(FString StringToPrint="", float DisplayTime = 2.f, bool bPrintToLog = true, bool bPrintToScreen = true, FLinearColor Color = FLinearColor(0.0, 0.66, 1.0));
	
	void f()
	{
		PrintDebugMessage("abd", 2.f, true, true, FColor::Red);
	}
};

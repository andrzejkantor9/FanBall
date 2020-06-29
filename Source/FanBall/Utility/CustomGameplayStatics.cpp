// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameplayStatics.h"

#include "Engine/Engine.h"


//TODO display color in palete like a print, 
void UCustomGameplayStatics::PrintDebugMessage(FString StringToPrint, float DisplayTime, bool bPrintToLog, bool bPrintToScreen, FLinearColor Color)
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) // Do not Print in Shipping or Test
	if (bPrintToLog)
	{
		UE_LOG(LogTemp, Display, TEXT("%s"), *StringToPrint);
	}
	if (bPrintToScreen && GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color.ToFColor(true), (TEXT("%s"), *StringToPrint));
	}
#endif
}
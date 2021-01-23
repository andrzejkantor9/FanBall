// Copyright Epic Games, Inc. All Rights Reserved.

#include "FanBallGameMode.h"
#include "FanBallCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFanBallGameMode::AFanBallGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_ThirdPersonCharacter"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Obsolete/BP_FanBallCharacterMain"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}

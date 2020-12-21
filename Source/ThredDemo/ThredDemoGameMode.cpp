// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThredDemoGameMode.h"
#include "ThredDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThredDemoGameMode::AThredDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

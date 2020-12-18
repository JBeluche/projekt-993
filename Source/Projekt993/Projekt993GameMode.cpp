// Copyright Epic Games, Inc. All Rights Reserved.

#include "Projekt993GameMode.h"
#include "Projekt993Character.h"
#include "UObject/ConstructorHelpers.h"

AProjekt993GameMode::AProjekt993GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Mannequin/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestGameMode.h"
#include "TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestGameMode::ATestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

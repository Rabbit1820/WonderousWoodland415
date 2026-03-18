// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proj415GameMode.h"
#include "Proj415Character.h"
#include "UObject/ConstructorHelpers.h"

AProj415GameMode::AProj415GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_CPPGameMode.h"
#include "FPS_CPPHUD.h"
#include "FPS_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_CPPGameMode::AFPS_CPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_CPPHUD::StaticClass();
}

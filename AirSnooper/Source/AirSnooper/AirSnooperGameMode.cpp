// Copyright Epic Games, Inc. All Rights Reserved.

#include "AirSnooperGameMode.h"
#include "AirSnooperPlayerController.h"
#include "AirSnooperCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAirSnooperGameMode::AAirSnooperGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAirSnooperPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
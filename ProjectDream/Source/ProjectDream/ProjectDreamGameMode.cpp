// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDreamGameMode.h"
#include "ProjectDreamPlayerController.h"
#include "ProjectDreamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectDreamGameMode::AProjectDreamGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectDreamPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ShootingGalleryGameMode.h"
#include "ShootingGalleryHUD.h"
#include "ShootingGalleryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingGalleryGameMode::AShootingGalleryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootingGalleryHUD::StaticClass();
}

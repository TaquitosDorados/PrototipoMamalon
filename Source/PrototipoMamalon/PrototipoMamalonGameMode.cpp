// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototipoMamalonGameMode.h"
#include "PrototipoMamalonCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototipoMamalonGameMode::APrototipoMamalonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

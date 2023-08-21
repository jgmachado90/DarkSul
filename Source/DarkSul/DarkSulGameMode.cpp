// Copyright Epic Games, Inc. All Rights Reserved.

#include "DarkSulGameMode.h"
#include "DarkSulCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADarkSulGameMode::ADarkSulGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

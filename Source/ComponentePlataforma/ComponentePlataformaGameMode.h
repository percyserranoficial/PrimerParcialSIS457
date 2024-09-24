// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ComponentePlataformaGameMode.generated.h"

class AComPlataformas;

UCLASS(minimalapi)
class AComponentePlataformaGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay();

public:
	AComponentePlataformaGameMode();

	//TMap<int32, AComPlataformas*> componentesPlataformaMap;

	TArray<AComPlataformas*> componentesPlataformaArray;
};




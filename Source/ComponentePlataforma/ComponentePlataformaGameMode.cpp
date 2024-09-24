// Copyright Epic Games, Inc. All Rights Reserved.

#include "ComponentePlataformaGameMode.h"
#include "ComponentePlataformaCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ComPlataformas.h"
#include "MuroElectrico.h"
#include "MuroLadrillo.h"
#include "MuroCongelado.h"
#include "MuroPegajoso.h"
#include "Disparador.h"
#include "MuroEspinas.h"

void AComponentePlataformaGameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Actor Spawning"));
	// Spawn an instance of the AMyFirstActor class at the
	//default location.
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(1160.0f, -210.0f, 140.0f));
	SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
	

	FVector posicionInicial = FVector(1160.0f, 1100.0f, 400.f);
	FRotator rotacionInicial = FRotator(0.0f, 0.0f, -10.0f);
	FTransform SpawnLocationCP;
	float anchoComponentePlataforma = 600.0f;
	float incrementoAltoComponentePlataforma = -105.0f;
	float incrementoAltoEntrePisos = 1400.0f;
	float incrementoInicioPiso = 100.0f;
	//int32 actorID = 0;

	for (int npp = 0; npp < 5; npp++) {
		rotacionInicial.Roll = rotacionInicial.Roll * -1;
		incrementoInicioPiso = incrementoInicioPiso * -1;
		incrementoAltoComponentePlataforma = incrementoAltoComponentePlataforma * -1;
		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));

		for (int ncp = 0; ncp < 10; ncp++) {
			SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y - anchoComponentePlataforma * ncp, posicionInicial.Z));
			AComPlataformas* NewActor = GetWorld()->SpawnActor<AComPlataformas>(AComPlataformas::StaticClass(), SpawnLocationCP);
			if (NewActor)
			{
				// Añadir las plataformas al TArray
				componentesPlataformaArray.Add(NewActor);
			}

			if (ncp < 9) {
				posicionInicial.Z = posicionInicial.Z + incrementoAltoComponentePlataforma;
			}
		}

		posicionInicial.Z = posicionInicial.Z + incrementoAltoEntrePisos;
		posicionInicial.Y = posicionInicial.Y - incrementoInicioPiso;
	}


	// Spawnear el muroElectrico
	FVector MuroElectricoSpawnLocation = FVector(1200.0f, 124.0f, 669.0f); // Ubicación personalizada para el Muro Eléctrico
	FRotator MuroElectricoRotation = FRotator::ZeroRotator;

	AMuroElectrico* MuroElectrico = GetWorld()->SpawnActor<AMuroElectrico>(AMuroElectrico::StaticClass(), MuroElectricoSpawnLocation, MuroElectricoRotation);
	if (MuroElectrico)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Muro Eléctrico Spawneado!"));
	}

	//Spawnear el muroLadrillo
	FVector MuroLadrilloSpawnLocation = FVector(1200.0f, 124.0f, 1500.0f); // Ubicación personalizada para el Muro de Ladrillo
	FRotator MuroLadrilloRotation = FRotator::ZeroRotator;

	AMuroLadrillo* MuroLadrillo = GetWorld()->SpawnActor<AMuroLadrillo>(AMuroLadrillo::StaticClass(), MuroLadrilloSpawnLocation, MuroLadrilloRotation);
	if (MuroLadrillo)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Muro de Ladrillo Spawneado!"));
	}

	//Spawnear  el muroCongelado
	FVector MuroCongeladoSpawnLocation = FVector(1200.0f, 124.0f, 2300.0f); // Ubicación personalizada para el Muro Congelado
	FRotator MuroCongeladoRotation = FRotator::ZeroRotator;

	AMuroCongelado* MuroCongelado = GetWorld()->SpawnActor<AMuroCongelado>(AMuroCongelado::StaticClass(), MuroCongeladoSpawnLocation, MuroCongeladoRotation);
	if (MuroCongelado)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Muro Congelado Spawneado!"));
	}

	//Spawnear el muroPegajoso
	FVector MuroPegajosoSpawnLocation = FVector(1200.0f, 124.0f, 3100.0f); // Ubicación personalizada para el Muro Pegajoso
	FRotator MuroPegajosoRotation = FRotator::ZeroRotator;

	AMuroPegajoso* MuroPegajoso = GetWorld()->SpawnActor<AMuroPegajoso>(AMuroPegajoso::StaticClass(), MuroPegajosoSpawnLocation, MuroPegajosoRotation);
	if (MuroPegajoso)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Muro Pegajoso Spawneado!"));
	}

	//Spawnear el muroEspinas
	FVector MuroEspinasSpawnLocation = FVector(1200.0f, 124.0f, 3900.0f); // Ubicación personalizada para el Muro de Espinas
	FRotator MuroEspinasRotation = FRotator::ZeroRotator;

	AMuroEspinas* MuroEspinas = GetWorld()->SpawnActor<AMuroEspinas>(AMuroEspinas::StaticClass(), MuroEspinasSpawnLocation, MuroEspinasRotation);
	if (MuroEspinas)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Muro de Espinas Spawneado!"));
	}

	//spawnear al Disparador
	FTransform SpawnLocation32;
	SpawnLocation.SetLocation(FVector(1200.0f, -760.0f, 2600.0f));
	SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
	//SpawnLocation.SetScale3D(FVector(1.0f, 1.0f, 1.0f));
	GetWorld()->SpawnActor<ADisparador>(ADisparador::StaticClass(), SpawnLocation);

}

AComponentePlataformaGameMode::AComponentePlataformaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

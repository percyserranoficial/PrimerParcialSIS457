// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPegajoso.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"

void AMuroPegajoso::BeginPlay()
{
	Super::BeginPlay();
}

AMuroPegajoso::AMuroPegajoso()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroPegajosoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroPegajosoAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroPegajosoAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	//ParticleSystemPegajoso = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemPegajoso"));
	//ParticleSystemPegajoso->SetupAttachment(RootComponent);

	//static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Smoke.P_Smoke'"));
	//if (ParticleSystemAsset.Succeeded())
	//{
	//	ParticleSystemPegajoso->SetTemplate(ParticleSystemAsset.Object);
	//}
}

void AMuroPegajoso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

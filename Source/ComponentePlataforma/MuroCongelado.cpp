// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroCongelado.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "ComponentePlataformaCharacter.h"

void AMuroCongelado::BeginPlay()
{
	Super::BeginPlay();
}

AMuroCongelado::AMuroCongelado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroCongeladoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroCongeladoAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroCongeladoAsset.Object);
		muroMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);	//habilitar colisiones
		muroMesh->SetNotifyRigidBodyCollision(true);	//activar colisiones fisicas
	}

	muroMesh->OnComponentHit.AddDynamic(this, &AMuroCongelado::OnHit);


	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystemCongeled = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemCongeled"));
	ParticleSystemCongeled->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystemCongeled->SetTemplate(ParticleSystemAsset.Object);
	}
}

void AMuroCongelado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroCongelado::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
		AComponentePlataformaCharacter* ComponentePlataforma = Cast<AComponentePlataformaCharacter>(OtherActor);
	//verificar si el actor que colisiona es el character
	if (ComponentePlataforma)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("El personaje esta congelado"));
	}
}

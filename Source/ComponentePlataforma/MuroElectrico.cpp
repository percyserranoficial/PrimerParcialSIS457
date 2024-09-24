// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroElectrico.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "ComponentePlataformaCharacter.h"

void AMuroElectrico::BeginPlay()
{
	Super::BeginPlay();
}

AMuroElectrico::AMuroElectrico()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroElectricoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroElectricoAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroElectricoAsset.Object);
		muroMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);	//habilitar colisiones
		muroMesh->SetNotifyRigidBodyCollision(true);	//activar colisiones fisicas
	}

	muroMesh->OnComponentHit.AddDynamic(this, &AMuroElectrico::OnHit);

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Particles/Materials/M_smoke_subUV.M_smoke_subUV'"));
	if (MaterialAsset.Succeeded())
	{
		muroMesh->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystemElectric = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemElectric"));
	ParticleSystemElectric->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Sparks.P_Sparks'"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystemElectric->SetTemplate(ParticleSystemAsset.Object);
	}

}

void AMuroElectrico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroElectrico::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AComponentePlataformaCharacter* ComponentePlataforma = Cast<AComponentePlataformaCharacter>(OtherActor);
	//verificar si el actor que colisiona es el character
	if (ComponentePlataforma)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PersonajeElectrificado"));
	}
}

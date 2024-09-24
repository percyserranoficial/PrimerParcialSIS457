// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroEspinas.h"
#include "UObject/ConstructorHelpers.h"
//#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "ComponentePlataformaCharacter.h"

void AMuroEspinas::BeginPlay()
{
	Super::BeginPlay();
}

AMuroEspinas::AMuroEspinas()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroEspinasAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroEspinasAsset.Succeeded())
	{
		muroMesh->SetStaticMesh(MuroEspinasAsset.Object);
		muroMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);	//habilitar colisiones
		muroMesh->SetNotifyRigidBodyCollision(true);	//activar colisiones fisicas
	}

	muroMesh->OnComponentHit.AddDynamic(this, &AMuroEspinas::OnHit);
}

void AMuroEspinas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroEspinas::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AComponentePlataformaCharacter* ComponentePlataforma = Cast<AComponentePlataformaCharacter>(OtherActor);
	//verificar si el actor que colisiona es el character
	if (ComponentePlataforma)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("El personaje se esta pinchando"));
	}
}

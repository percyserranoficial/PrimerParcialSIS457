// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Disparador.generated.h"

UCLASS()
class COMPONENTEPLATAFORMA_API ADisparador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADisparador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UStaticMeshComponent* MeshCono;

public:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	//Codigo del Disparo
	FVector GunOffset;
	float FireRate;

	uint32 bCanFire : 1;
	uint32 bFireLeft = 1;

	FTimerHandle TimerHandle_ShotTimerExpired;// Procedimiento del disparo

	void FireShot(FVector FireDirection);
	void ShotTimerExpired();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroElectrico.generated.h"

/**
 * 
 */
class UParticleSystemComponent;
UCLASS()
class COMPONENTEPLATAFORMA_API AMuroElectrico : public AMuro
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UParticleSystemComponent* ParticleSystemElectric;
public:
	AMuroElectrico();
public:
	virtual void Tick(float DeltaTime) override;
public:
	//metodos
	void Electrisar();
	void Explotar();

public:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

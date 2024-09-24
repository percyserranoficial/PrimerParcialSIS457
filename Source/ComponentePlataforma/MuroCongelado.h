// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroCongelado.generated.h"

/**
 * 
 */
class ParticleSystemComponent;
UCLASS()
class COMPONENTEPLATAFORMA_API AMuroCongelado : public AMuro
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UParticleSystemComponent* ParticleSystemCongeled;
public:
	AMuroCongelado();
public:
	virtual void Tick(float DeltaTime) override;

public:
	//metodos
	void Congelar();
    void Enfriar();
	void Descongelar();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

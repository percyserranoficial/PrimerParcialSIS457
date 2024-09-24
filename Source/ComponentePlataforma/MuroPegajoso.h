// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroPegajoso.generated.h"

/**
 * 
 */
class ParticleSystemComponent;
UCLASS()
class COMPONENTEPLATAFORMA_API AMuroPegajoso : public AMuro
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UParticleSystemComponent* ParticleSystemPegajoso;
public:
	AMuroPegajoso();
public:
	virtual void Tick(float DeltaTime) override;
public:
	//metodos
    void Pegar();
	void quitarVida();
	void Despegar();

};

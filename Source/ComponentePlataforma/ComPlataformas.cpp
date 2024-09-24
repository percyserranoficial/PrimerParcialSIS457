// Fill out your copyright notice in the Description page of Project Settings.


#include "ComPlataformas.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AComPlataformas::AComPlataformas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	MeshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshPlataforma;

	FVector NewScale(2.0f, 6.0f, 0.5f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);

}

// Called when the game starts or when spawned
void AComPlataformas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComPlataformas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

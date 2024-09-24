// Fill out your copyright notice in the Description page of Project Settings.


#include "Disparador.h"
#include "UObject/ConstructorHelpers.h"
#include "Projectile.h"

// Sets default values
ADisparador::ADisparador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshConoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshCono = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCono"));
	MeshCono->SetStaticMesh(MeshConoAsset.Object);
	RootComponent = MeshCono;

	GunOffset = FVector(90.0f, 0.0f, 0.0f);
	FireRate = 0.5f;
	bCanFire = true;
	bFireLeft = true;
	//activar fisicas(
	//MeshCono->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void ADisparador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisparador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FireShot(FVector(0.0f, 1.0f, 0.0f));
}

void ADisparador::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 50.0f, GetActorLocation());
	}
	Destroy();
}

void ADisparador::FireShot(FVector FireDirection)
{
	if (bCanFire == true)
	{
		if (FireDirection.SizeSquared() > 0.0f)
		{
			if (bFireLeft)
			{
				FireDirection.Y *= -1;
			}
			bFireLeft = !bFireLeft;

			const FRotator FireRotation = FireDirection.Rotation();
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				World->SpawnActor<AProjectile>(SpawnLocation, FireRotation);
			}
			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ADisparador::ShotTimerExpired, FireRate);
		}
	}
}

void ADisparador::ShotTimerExpired()
{
	bCanFire = true;
}


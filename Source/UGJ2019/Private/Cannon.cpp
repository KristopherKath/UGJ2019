// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"
#include "..\Public\Cannon.h"
#include "Engine/World.h"
#include "CatProjectile.h"

// Sets default values
ACannon::ACannon()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Iteration = 1;
}

// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay();



}

//Should fire a cat actor
void ACannon::Fire()
{
	if (Iteration > 0)
	{		
		FActorSpawnParameters SpawnParam;
		SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		FVector Location = GetActorLocation() + FVector(20.f, 0.f, 0.f);
		FRotator Rotation = GetActorRotation();

		// Spawn the new actor (Using GetClass() instead of AMySpawner so that if someone derives a new class  
		AActor* CatProjectile = GetWorld()->SpawnActor<AActor>(Projectile, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParam);

		Iteration = 0; // stop ourselves spawning any more  
	}
}

// Called every frame
void ACannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACannon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACannon::Fire);

}


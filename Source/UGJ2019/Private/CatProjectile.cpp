// Fill out your copyright notice in the Description page of Project Settings.


#include "CatProjectile.h"
#include "GameFramework/PlayerController.h"

// Sets default values
ACatProjectile::ACatProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACatProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACatProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//float leftMouse = GetInputAnalogKeyState(EKeys::LeftMouseButton);
	//if (leftMouse != 1) {
		// mouse input, 0 is not clicked and 1 is clicked
	//}
	

}


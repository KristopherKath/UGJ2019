// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Cannon.generated.h"

UCLASS()
class UGJ2019_API ACannon : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACannon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Fire();

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<AActor> Projectile;

private:
	int Iteration;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

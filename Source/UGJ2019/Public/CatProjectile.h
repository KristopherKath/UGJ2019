// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CatProjectile.generated.h"

UCLASS()
class UGJ2019_API ACatProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACatProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	float LocationX;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	float LocationY;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

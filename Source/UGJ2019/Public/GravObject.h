// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GravObject.generated.h"

class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class UGJ2019_API AGravObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGravObject();
	UPROPERTY(EditInstanceOnly, Category = "Components")
		float ForcePower;
	UPROPERTY(EditInstanceOnly, Category = "Components")
		float MovePower;

protected:
	// Called when the game starts or when spawned
	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;
	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* InnerSphereComp;
	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* GravitySphereComp;
	UFUNCTION()
		void OverlapInnerSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

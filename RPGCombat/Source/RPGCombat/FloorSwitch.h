// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorSwitch.generated.h"

UCLASS()
class RPGCOMBAT_API AFloorSwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorSwitch();

	// Overlap volume for functionality to be triggered
	UPROPERTY(VisibleAnywhere, BluePrintReadWrite, Category = "Floor Switch")
		class UBoxComponent* TriggerBox;

	// Switch for character to step on
	UPROPERTY(VisibleAnywhere, BluePrintReadWrite, Category = "Floor Switch")
		class UStaticMeshComponent* FloorSwitch;

	// Door to move when the floor switch is stepped on
	UPROPERTY(VisibleAnywhere, BluePrintReadWrite, Category = "Floor Switch")
		class UStaticMeshComponent* Door;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
			                UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
			                bool bFromSweep, const FHitResult &SweepResult);

	UFUNCTION()
		void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
			              UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};

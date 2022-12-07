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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Floor Switch")
		FVector InitialDoorLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Floor Switch")
		FVector InitialFloorSwitchLocation;

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
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Floor Switch")
		void RaiseDoor();

	UFUNCTION(BlueprintImplementableEvent, Category = "Floor Switch")
		void LowerDoor();

	UFUNCTION(BlueprintImplementableEvent, Category = "Floor Switch")
		void RaiseFloorSwitch();

	UFUNCTION(BlueprintImplementableEvent, Category = "Floor Switch")
		void LowerFloorSwitch();

	UFUNCTION(BlueprintCallable, Category = "Floor Switch")
		void UpdateDoorLocation(float Z);

	UFUNCTION(BlueprintCallable, Category = "Floor Switch")
		void UpdateFloorSwitchLocation(float Z);
};

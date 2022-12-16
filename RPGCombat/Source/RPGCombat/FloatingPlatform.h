// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingPlatform.generated.h"

UCLASS()
class RPGCOMBAT_API AFloatingPlatform : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFloatingPlatform();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platfrom")
		class UStaticMeshComponent* PlatformMesh;

	UPROPERTY(VisibleAnywhere, meta = (ToolTip = "Platform location in world"))
		FVector StartPoint;

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget = "true"))
		FVector EndPoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platfrom")
		float InterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platfrom")
		float InterpTime;

	FTimerHandle InterpHandler;

	bool bInterping;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ToggleInterping();

	void SwapVector(FVector& VecOne, FVector& VecTwo);
};

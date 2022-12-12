// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainPlayerAnimInstance.generated.h"

/**
 *
 */
UCLASS()
class RPGCOMBAT_API UMainPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueprintCallable, Category = AnimationProperties)
		void UpdateAnimationProperties();

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
		float MovementSpeed;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
		bool bIsInAir;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = Movement)
		class APawn* Pawn;

};

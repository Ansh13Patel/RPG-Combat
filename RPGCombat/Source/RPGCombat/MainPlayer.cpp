// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AMainPlayer::AMainPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Camera Boom (pulls towards player when collision happens)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 500.f; // Camera Boom follow player at this distance
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on comtroller

	// Set Capsule collider radius and height
	GetCapsuleComponent()->SetCapsuleSize(48.f, 105.f);

	// Create Follow Camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	// Attach Follow Camera to Camera Boom and let Camera Boom adjust the Controller Oriention.
	FollowCamera->bUsePawnControlRotation = false;

	BaseTurnRate = 65.f;
	BaseLookUpRate = 65.f;

	// Player do not get affect by rotation only camera get affected
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	// Configure Character movement 
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate player in direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f); // ...rotate player at this rate
	GetCharacterMovement()->JumpZVelocity = 650.f; // Player jump at this velocity
	GetCharacterMovement()->AirControl = 0.2f; // how much player can control in air (1 for full control and 0 for no control)
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Check if @param PlayerInputComponent is valid and not null
	check(PlayerInputComponent);

	// Bind function to jump action
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind function to move forward and backward
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainPlayer::MoveForward);

	// Bind function to move right/left
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainPlayer::MoveRight);

	// Bind function to look up/down and  turn right/left using arrow key
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMainPlayer::LookUpAtRate);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMainPlayer::TurnAtRate);

	// Bind function to look up/down and  turn right/left using mouse
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
}

void AMainPlayer::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.f))
	{
		// Get controller rotation and store it yaw rotation
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		// Get forward direction of yaw rotation using rotation matrix
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// Move player in direction as per input value
		AddMovementInput(Direction, Value);
	}
}

void AMainPlayer::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.f))
	{
		// Get controller rotation and store it yaw rotation
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		// Get right direction of yaw rotation using rotation matrix
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Move player in direction as per input value
		AddMovementInput(Direction, Value);
	}
}

void AMainPlayer::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMainPlayer::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
#include "AevumSettlerCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"

AAevumSettlerCharacter::AAevumSettlerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 0.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 500.f;

	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
	FirstPersonCamera->SetRelativeLocation(FVector(0.f, 0.f, 64.f));
	FirstPersonCamera->bUsePawnControlRotation = true;
}

void AAevumSettlerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Temporary axis bindings for boot PIE until IMC_/IA_ Enhanced Input assets exist in-editor.
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AAevumSettlerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AAevumSettlerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AAevumSettlerCharacter::LookYaw);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AAevumSettlerCharacter::LookPitch);
	PlayerInputComponent->BindAxis(TEXT("TurnRate"), this, &AAevumSettlerCharacter::LookYaw);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &AAevumSettlerCharacter::LookPitch);
}

void AAevumSettlerCharacter::MoveForward(float Value)
{
	if (FMath::IsNearlyZero(Value))
	{
		return;
	}

	AddMovementInput(GetActorForwardVector(), Value);
}

void AAevumSettlerCharacter::MoveRight(float Value)
{
	if (FMath::IsNearlyZero(Value))
	{
		return;
	}

	AddMovementInput(GetActorRightVector(), Value);
}

void AAevumSettlerCharacter::LookYaw(float Value)
{
	AddControllerYawInput(Value);
}

void AAevumSettlerCharacter::LookPitch(float Value)
{
	AddControllerPitchInput(Value);
}

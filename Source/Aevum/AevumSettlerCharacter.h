#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AevumSettlerCharacter.generated.h"

class UCameraComponent;

/**
 * First-person settler pawn for First Playable boot.
 * Domain systems (inventory, gather, build) attach later via components / Game Features.
 */
UCLASS()
class AEVUM_API AAevumSettlerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAevumSettlerCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Aevum|Camera")
	TObjectPtr<UCameraComponent> FirstPersonCamera;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookYaw(float Value);
	void LookPitch(float Value);
};

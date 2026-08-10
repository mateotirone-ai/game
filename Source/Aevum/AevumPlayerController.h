#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AevumPlayerController.generated.h"

/** Thin player controller — Enhanced Input Mapping Contexts land here once authored. */
UCLASS()
class AEVUM_API AAevumPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAevumPlayerController();
};

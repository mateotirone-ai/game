#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AevumGameModeBase.generated.h"

/**
 * Base game mode. Prototype in single-player listen/standalone,
 * but keep replication and authority assumptions ready for dedicated servers.
 */
UCLASS()
class AEVUM_API AAevumGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAevumGameModeBase();
};

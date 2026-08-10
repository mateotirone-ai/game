#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameNameGameModeBase.generated.h"

/**
 * Base game mode. Prototype in single-player listen/standalone,
 * but keep replication and authority assumptions ready for dedicated servers.
 */
UCLASS()
class GAMENAME_API AGameNameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGameNameGameModeBase();
};

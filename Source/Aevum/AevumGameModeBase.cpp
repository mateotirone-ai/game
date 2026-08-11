#include "AevumGameModeBase.h"

#include "AevumPlayerController.h"
#include "AevumSettlerCharacter.h"

AAevumGameModeBase::AAevumGameModeBase()
{
	DefaultPawnClass = AAevumSettlerCharacter::StaticClass();
	PlayerControllerClass = AAevumPlayerController::StaticClass();
}

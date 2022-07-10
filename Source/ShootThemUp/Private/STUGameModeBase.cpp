// Shoot Them Up Game, All Rights Reserved.

#include "STUGameModeBase.h"
#include "Player/STUBaseCharacter.h"    // M2L24 2: класс чарактера
#include "Player/STUPlayerController.h" // M2L24 3: класс контроллера

ASTUGameModeBase::ASTUGameModeBase()
{
	// M2L24 4: переопределяем дефолтный класс чарактера и контроллера
	DefaultPawnClass = ASTUBaseCharacter::StaticClass();
	PlayerControllerClass = ASTUPlayerController::StaticClass();

}

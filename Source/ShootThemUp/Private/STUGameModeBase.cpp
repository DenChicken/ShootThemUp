// Shoot Them Up Game, All Rights Reserved.

#include "STUGameModeBase.h"
#include "Player/STUBaseCharacter.h"    // M2L24 2: ����� ���������
#include "Player/STUPlayerController.h" // M2L24 3: ����� �����������

ASTUGameModeBase::ASTUGameModeBase()
{
	// M2L24 4: �������������� ��������� ����� ��������� � �����������
	DefaultPawnClass = ASTUBaseCharacter::StaticClass();
	PlayerControllerClass = ASTUPlayerController::StaticClass();

}

#include "Monster.h"
#include "MazePlayer.h"

void Monster::Attack()
{
	printf("[%s]��/�� �����մϴ�. -%.1f\n", Name.c_str(), GetAttackPower());
	
}

void Monster::ShowMonsterInfo()
{
	printf("\n�ڸ��� ������\n�̸� : %s \n���ݷ� : %.1f \nü�� : %.0f\n\n", Name.c_str(), GetAttackPower(), Stamina);
}
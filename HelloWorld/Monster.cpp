#include "Monster.h"
#include "MazePlayer.h"

void Monster::Attack()
{
	printf("[%s]이/가 공격합니다. -%.1f\n", Name.c_str(), GetAttackPower());
	
}

void Monster::ShowMonsterInfo()
{
	printf("\n★몬스터 도감★\n이름 : %s \n공격력 : %.1f \n체력 : %.0f\n\n", Name.c_str(), GetAttackPower(), Stamina);
}
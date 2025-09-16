#include "Goblin.h"

void Goblin::BombAttack()
{
	printf("[%s]가 폭탄을 두고갔습니다. \n", Name.c_str());
	printf("폭탄이 터졌습니다. -%.1f\n", GetBombPower());
}

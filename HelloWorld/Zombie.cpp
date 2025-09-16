#include "Zombie.h"

void Zombie::BiteAttack()
{
	printf("[%s]에게 물렸습니다\n", Name.c_str());
	
	for (int i = 0; i < 3; i++) {
		printf("독에 중독되었습니다 - %.1f\n",GetBitePower());
	}
}

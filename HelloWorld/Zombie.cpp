#include "Zombie.h"

void Zombie::BiteAttack()
{
	printf("[%s]���� ���Ƚ��ϴ�\n", Name.c_str());
	
	for (int i = 0; i < 3; i++) {
		printf("���� �ߵ��Ǿ����ϴ� - %.1f\n",GetBitePower());
	}
}

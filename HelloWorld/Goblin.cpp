#include "Goblin.h"

void Goblin::BombAttack()
{
	printf("[%s]�� ��ź�� �ΰ����ϴ�. \n", Name.c_str());
	printf("��ź�� �������ϴ�. -%.1f\n", GetBombPower());
}

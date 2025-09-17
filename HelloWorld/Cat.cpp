#include "Cat.h"

void Cat::Grooming()
{
	printf("%s : ������ �մϴ�\n", Name.c_str());
	SetEnergy(Energy + 0.1f);
}

void Cat::MakeSound()
{
	printf("�ֿ�~ \n");
}

void Cat::Move()
{
	printf("����� ���깫��\n");
	if (Energy < 0.1f)
	{
		printf("%s : ���� ��� ������ �� �����ϴ�..\n", Name.c_str());
	}
	else {
		printf("%s : �����Դϴ�.\n ",Name.c_str());
		SetEnergy(Energy - 0.1f);
		//Energy -= 0.1f;
		printf("%s : �������� 10 �Һ��Ͽ����ϴ�. : %.0f \n", Name.c_str(), Energy*100);
	}
}

void Cat::Swim()
{
	printf("����̴� ������ �÷�.. \n");
}

void Cat::BattleAnimal()
{
	printf("�ɳ���ġ\n");
}

#include "Tiger.h"

void Tiger::Hunt()
{
	printf("%s : ����� �մϴ�.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
}

void Tiger::Move()
{
	printf("[%s]�� ��ȿ�մϴ�.\n", Name.c_str());
	printf("���깫��\n");
	//Animal::Move();
	if (Energy < 0.1f)
	{
		printf("%s : ���� ��� ������ �� �����ϴ�..\n", Name.c_str());
	}
	else {
		printf("%s : �����Դϴ�.\n ",Name.c_str());
		SetEnergy(Energy - 0.1f);
		//Energy -= 0.1f;
		printf("%s : �������� 10 �Һ��Ͽ����ϴ�. : %.0f \n", Name.c_str());
	}
}

void Tiger::MakeSound()
{
	printf("����\n");
}

void Tiger::Swim()
{
	printf("[%s]�� ���Ĩ�ϴ� \n", Name.c_str());
}

void Tiger::BattleAnimal()
{
	printf("���� �ɳ���ġ\n");
}

void Tiger::Attack(ICanBattle* InTarget)
{
	//InTarget->TakeDamage(AttackPower);
}

//void Tiger::TakeDamage(float InDamage){}


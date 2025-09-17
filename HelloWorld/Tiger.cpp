#include "Tiger.h"

void Tiger::Hunt()
{
	printf("%s : 사냥을 합니다.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
}

void Tiger::Move()
{
	printf("[%s]가 포효합니다.\n", Name.c_str());
	printf("무브무브\n");
	//Animal::Move();
	if (Energy < 0.1f)
	{
		printf("%s : 힘이 없어서 움직일 수 없습니다..\n", Name.c_str());
	}
	else {
		printf("%s : 움직입니다.\n ",Name.c_str());
		SetEnergy(Energy - 0.1f);
		//Energy -= 0.1f;
		printf("%s : 에너지를 10 소비하였습니다. : %.0f \n", Name.c_str());
	}
}

void Tiger::MakeSound()
{
	printf("어흥\n");
}

void Tiger::Swim()
{
	printf("[%s]가 헤엄칩니당 \n", Name.c_str());
}

void Tiger::BattleAnimal()
{
	printf("사자 냥냥펀치\n");
}

void Tiger::Attack(ICanBattle* InTarget)
{
	//InTarget->TakeDamage(AttackPower);
}

//void Tiger::TakeDamage(float InDamage){}


#include "Cat.h"

void Cat::Grooming()
{
	printf("%s : 세수를 합니다\n", Name.c_str());
	SetEnergy(Energy + 0.1f);
}

void Cat::MakeSound()
{
	printf("애옹~ \n");
}

void Cat::Move()
{
	printf("고양이 무브무브\n");
	if (Energy < 0.1f)
	{
		printf("%s : 힘이 없어서 움직일 수 없습니다..\n", Name.c_str());
	}
	else {
		printf("%s : 움직입니다.\n ",Name.c_str());
		SetEnergy(Energy - 0.1f);
		//Energy -= 0.1f;
		printf("%s : 에너지를 10 소비하였습니다. : %.0f \n", Name.c_str(), Energy*100);
	}
}

void Cat::Swim()
{
	printf("고양이는 수영이 시러.. \n");
}

void Cat::BattleAnimal()
{
	printf("냥냥펀치\n");
}

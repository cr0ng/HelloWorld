#include "Animal.h"

//Animal::Animal(const char* InName, float InEnergy, int InAge)
//	: Name(InName), Energy(InEnergy), Age(InAge)
//{
//}
//
//Animal::~Animal()
//{
//}

void Animal::Move()
{
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

void Animal::MakeSound()
{
	printf("%s : 소리를 냅니다.\n", Name.c_str());
}

void Animal::Eat()
{
	printf("%s : 음식을 먹습니다.\n" ,Name.c_str());
	//Energy += 0.3f;
	SetEnergy(Energy + 0.3f);
	if (Energy > 1.0f)
	{
		Energy = 1.0f;
	}
	printf("%s : 에너지가 30 증가하였습니다. : %.0f \n" ,Name.c_str(), Energy*100);
}

void Animal::Sleep()
{
	SetEnergy(1.0f);
	SetAge(Age + 1);
	printf("%s : 잠을 자서 에너지가 완전히 회복되었습니다. : %.0f \n", Name.c_str(), Energy*100);
	printf("%s : 나이가 한 살 증가합니다. %d살\n", Name.c_str(), Age);
}

void Animal::ShowInfo()
{
	printf("\n정보를 출력합니다.\n이름 : %s \n나이 : %d \n에너지 : %.0f\n\n", Name.c_str(), Age, Energy*100);
}

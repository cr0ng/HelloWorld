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
		printf("%s : ���� ��� ������ �� �����ϴ�..\n", Name.c_str());
	}
	else {
		printf("%s : �����Դϴ�.\n ",Name.c_str());
		SetEnergy(Energy - 0.1f);
		//Energy -= 0.1f;
		printf("%s : �������� 10 �Һ��Ͽ����ϴ�. : %.0f \n", Name.c_str(), Energy*100);
	}
}

void Animal::MakeSound()
{
	printf("%s : �Ҹ��� ���ϴ�.\n", Name.c_str());
}

void Animal::Eat()
{
	printf("%s : ������ �Խ��ϴ�.\n" ,Name.c_str());
	//Energy += 0.3f;
	SetEnergy(Energy + 0.3f);
	if (Energy > 1.0f)
	{
		Energy = 1.0f;
	}
	printf("%s : �������� 30 �����Ͽ����ϴ�. : %.0f \n" ,Name.c_str(), Energy*100);
}

void Animal::Sleep()
{
	SetEnergy(1.0f);
	SetAge(Age + 1);
	printf("%s : ���� �ڼ� �������� ������ ȸ���Ǿ����ϴ�. : %.0f \n", Name.c_str(), Energy*100);
	printf("%s : ���̰� �� �� �����մϴ�. %d��\n", Name.c_str(), Age);
}

void Animal::ShowInfo()
{
	printf("\n������ ����մϴ�.\n�̸� : %s \n���� : %d \n������ : %.0f\n\n", Name.c_str(), Age, Energy*100);
}

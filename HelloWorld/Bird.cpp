#include "Bird.h"

void Bird::Fly()
{
	printf("%s : ���󰩴ϴ� �Ĵ��Ĵ�\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
}
void Bird::MakeSound()
{
	printf("±±\n");
}

void Bird::Move()
{
	printf("���� ���깫��\n");
}
#include "Rabbit.h"

void Rabbit::Jump()
{
	printf("%s : ��¦��¦ \n", Name.c_str());
	SetEnergy(Energy - 0.2f);
}

void Rabbit::MakeSound()
{
	printf("�䳢�䳢\n");
}

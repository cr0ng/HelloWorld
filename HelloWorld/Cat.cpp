#include "Cat.h"

void Cat::Grooming()
{
	printf("%s : ������ �մϴ�\n", Name.c_str());
	SetEnergy(Energy + 0.1f);
}
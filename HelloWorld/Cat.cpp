#include "Cat.h"

void Cat::Grooming()
{
	printf("%s : 세수를 합니다\n", Name.c_str());
	SetEnergy(Energy + 0.1f);
}
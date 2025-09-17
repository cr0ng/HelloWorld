#include "Rabbit.h"

void Rabbit::Jump()
{
	printf("%s : ÆúÂ¦ÆúÂ¦ \n", Name.c_str());
	SetEnergy(Energy - 0.2f);
}

void Rabbit::MakeSound()
{
	printf("Åä³¢Åä³¢\n");
}

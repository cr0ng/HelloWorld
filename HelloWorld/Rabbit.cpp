#include "Rabbit.h"

void Rabbit::Jump()
{
	printf("%s : ��¦��¦ \n", Name.c_str());
	SetEnergy(Energy - 0.2f);
}

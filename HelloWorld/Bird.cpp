#include "Bird.h"

void Bird::Fly()
{
	printf("%s : ³¯¶ó°©´Ï´Ù ÆÄ´ÚÆÄ´Ú\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
}

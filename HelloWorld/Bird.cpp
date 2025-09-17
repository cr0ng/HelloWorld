#include "Bird.h"

void Bird::Fly()
{
	printf("%s : ³¯¶ó°©´Ï´Ù ÆÄ´ÚÆÄ´Ú\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
}
void Bird::MakeSound()
{
	printf("Â±Â±\n");
}

void Bird::Move()
{
	printf("Âü»õ ¹«ºê¹«ºê\n");
}
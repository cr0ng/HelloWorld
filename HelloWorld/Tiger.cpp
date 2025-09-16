#include "Tiger.h"

void Tiger::Hunt()
{
	printf("%s : 사냥을 합니다.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
}

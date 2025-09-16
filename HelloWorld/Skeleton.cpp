#include "Skeleton.h"

void Skeleton::ThrowBoneAttack()
{
	printf("[%s]이 뼈를 던집니다. -%.1f \n", Name.c_str(), GetBonePower());
}

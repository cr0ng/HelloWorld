#include "MazePlayer.h"

void MazePlayer::SpecialAttack()
{
	printf("[%s]가 필살기를 사용했습니다. -%.1f\n", Name.c_str(), GetSpecialPower());
}

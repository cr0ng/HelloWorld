#pragma once
#include "Monster.h"
class Skeleton : public Monster
{
public:
	void ThrowBoneAttack();
	Skeleton() = default;
	Skeleton(std::string InName, float InStamina, float InAttackPower)
		:Monster(InName, InStamina, InAttackPower)
	{

	}

private:
	float BonePower = 3.0f;
	inline const float GetBonePower() const { return BonePower; }
};
#pragma once
#include "Monster.h"
class Oak : public Monster
{
public :
	void BatAttack();
		
	Oak() = default;
	Oak(std::string InName, float InStamina, float InAttackPower)
		:Monster(InName, InStamina, InAttackPower)
	{}

private:
	float BatPower = 25.0f;
	inline const float GetBatPower() { return BatPower; }
};


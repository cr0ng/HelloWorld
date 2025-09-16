#pragma once
#include "Monster.h"
class Goblin : public Monster
{
public:
	void BombAttack(); // °íºí¸° Àü¿ë ÆøÅº °ø°Ý

	Goblin() = default;
	Goblin(std::string InName, float InStamina, float InAttackPower)
		:Monster(InName, InStamina, InAttackPower)
	{

	}

private:
	float BombPower = 20.0f; // ÆøÅº °ø°Ý·Â
	inline const float GetBombPower() const { return BombPower; }
};


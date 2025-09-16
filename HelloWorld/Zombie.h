#pragma once
#include "Monster.h"
class Zombie : public Monster
{
public:
	void BiteAttack(); // 좀비 전용 물림 공격
	
private:
	float BitePower = 5.0f; // 물림 공격력
	inline const float GetBitePower() const { return BitePower; }

public:
	Zombie() = default;
	Zombie(std::string InName, float InStamina, float InAttackPower)
		:Monster(InName, InStamina, InAttackPower)
	{

	}
};


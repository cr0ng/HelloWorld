#pragma once
#include "Monster.h"
class Zombie : public Monster
{
public:
	void BiteAttack(); // ���� ���� ���� ����
	
private:
	float BitePower = 5.0f; // ���� ���ݷ�
	inline const float GetBitePower() const { return BitePower; }

public:
	Zombie() = default;
	Zombie(std::string InName, float InStamina, float InAttackPower)
		:Monster(InName, InStamina, InAttackPower)
	{

	}
};


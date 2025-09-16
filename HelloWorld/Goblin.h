#pragma once
#include "Monster.h"
class Goblin : public Monster
{
public:
	void BombAttack(); // ��� ���� ��ź ����

	Goblin() = default;
	Goblin(std::string InName, float InStamina, float InAttackPower)
		:Monster(InName, InStamina, InAttackPower)
	{

	}

private:
	float BombPower = 20.0f; // ��ź ���ݷ�
	inline const float GetBombPower() const { return BombPower; }
};


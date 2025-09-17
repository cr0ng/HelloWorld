#pragma once

class ICanBattle
{
public:
	virtual ~ICanBattle() {}

	virtual void Attack(ICanBattle* InTarget) = 0;
	virtual void TakeDamage(int InDamage) = 0;

	// ��� ������ �� �ʿ��� ���. Getter�� �ִٴ� ���� ���
	virtual void GetAttackPower() = 0;
};

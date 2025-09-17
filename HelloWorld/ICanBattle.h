#pragma once

class ICanBattle
{
public:
	virtual ~ICanBattle() {}

	virtual void Attack(ICanBattle* InTarget) = 0;
	virtual void TakeDamage(float InDamage) = 0;
	virtual void ApplyDamage(ICanBattle* InTarget) = 0;

	// ��� ������ �� �ʿ��� ���. Getter�� �ִٴ� ���� ���
	//virtual void GetAttackPower() = 0;
};
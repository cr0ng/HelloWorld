#pragma once
#include "Animal.h"
#include "ISwim.h"
#include "ICanBattle.h"

class Tiger : public Animal , public ISwim,public ICanBattle // Tiger�� Animal�� ��� ��ӹ޾Ҵ�
{
public :
	void Hunt(); // ȣ���� ���� �Լ�
	virtual void Move() override;	//ȣ���̴� Animal�� Move �Լ��� �������.
	virtual void MakeSound() override;	
	virtual void Swim() override;
	virtual void BattleAnimal() override;
	//virtual void Attack(ICanBattle* InTarget) override;
	//virtual void TakeDamage(float InDamage) override;

public:
	// ������/ �Ҹ��ڴ� ����� ����� �ƴϴ�.
	Tiger() = default;
	Tiger(std::string InName)
		: Animal(InName)	// �θ� Ŭ������ Animal���� ������ ó���ϴ� �Ͱ� �Ȱ��� �ض�.
	{
	}
	virtual ~Tiger() {};
};


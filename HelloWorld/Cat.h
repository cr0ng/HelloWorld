#pragma once
#include "Animal.h"
#include "ISwim.h"

class Cat : public Animal, public ISwim
{
public :
	void Grooming();
	virtual void MakeSound() override;
	virtual void Move() override;
	virtual void Swim() override;
	virtual void BattleAnimal() override;

public:
	Cat() = default;
	Cat(std::string InName)
		:Animal(InName)
	{

	}
	virtual ~Cat() {};
};


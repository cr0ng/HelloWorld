#pragma once
#include "Animal.h"
class Rabbit : public Animal
{
public:
	void Jump();
	virtual void MakeSound() override;

public:
	Rabbit() = default;
	Rabbit(std::string InName)
		:Animal(InName)
	{

	}
};


#pragma once
#include "Animal.h"
class Rabbit : public Animal
{
public:
	void Jump();

public:
	Rabbit() = default;
	Rabbit(std::string InName)
		:Animal(InName)
	{

	}
};


#pragma once
#include "Animal.h"

class Bird : public Animal
{
public :
	void Fly();

public :
	Bird() = default;
	Bird(std::string InName)
		:Animal(InName)
	{

	}
};


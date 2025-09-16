#pragma once
#include "Animal.h"

class Cat : public Animal
{
public :
	void Grooming();

public:
	Cat() = default;
	Cat(std::string InName)
		:Animal(InName)
	{

	}
};


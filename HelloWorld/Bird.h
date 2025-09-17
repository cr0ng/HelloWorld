#pragma once
#include "Animal.h"

class Bird : public Animal
{
public :
	void Fly();
	virtual void MakeSound();
	virtual void Move();

public :
	Bird() = default;
	Bird(std::string InName)
		:Animal(InName)
	{

	}
	virtual ~Bird() {};
};


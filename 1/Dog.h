#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	void Woof()
	{
		this->mColor;		// public
		this->mWeight;		// protected  (Animal에서 파생된 Dog는 허용)
	}
};


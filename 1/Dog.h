#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	void Woof()
	{
		this->mColor;		// public
		this->mWeight;		// protected  (Animal���� �Ļ��� Dog�� ���)
	}
};


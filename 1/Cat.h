#pragma once
#include "Animal.h"
#include <iostream>

class Cat : public Animal
{
public:
	void Meow()
	{
		std::cout << "Meow!" << std::endl;
	}
};


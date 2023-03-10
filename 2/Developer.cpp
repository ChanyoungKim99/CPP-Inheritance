#include "Developer.h"

Developer::Developer() : mAge{ 1 }, mName{}
{
	std::cout << "[Developer] created!" << std::endl;
}

Developer::Developer(int age) : mAge{ age }
{
}

Developer::~Developer()
{
	std::cout << "[Developer] destroyed!" << std::endl;
}

void Developer::Work()
{
	std::cout << "ÀÏ!" << std::endl;
}

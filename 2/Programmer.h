#pragma once
#include "Developer.h"

class Programmer : public Developer
{
public:
	void Coding()
	{
		std::cout << "코드를 작성합니다." << std::endl;
	}
	void Debugging()
	{
		std::cout << "버그를 고칩니다." << std::endl;
	}

	Programmer();
	~Programmer();

	void Work();		// 함수 멤버 오버라이딩
};


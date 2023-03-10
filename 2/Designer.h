#pragma once
#include "Developer.h"

class Designer : public Developer
{
public:
	void Documentation()
	{
		std::cout << "기획서를 씁니다." << std::endl;
	}

	void Presentation()
	{
		std::cout << "발표를 합니다." << std::endl;
	}

	void Work();		// 멤버 함수 오버라이딩
};


#pragma once
#include "Developer.h"

class Designer : public Developer
{
public:
	void Documentation()
	{
		std::cout << "��ȹ���� ���ϴ�." << std::endl;
	}

	void Presentation()
	{
		std::cout << "��ǥ�� �մϴ�." << std::endl;
	}

	void Work();		// ��� �Լ� �������̵�
};


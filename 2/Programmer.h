#pragma once
#include "Developer.h"

class Programmer : public Developer
{
public:
	void Coding()
	{
		std::cout << "�ڵ带 �ۼ��մϴ�." << std::endl;
	}
	void Debugging()
	{
		std::cout << "���׸� ��Ĩ�ϴ�." << std::endl;
	}

	Programmer();
	~Programmer();

	void Work();		// �Լ� ��� �������̵�
};


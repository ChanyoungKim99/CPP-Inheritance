#pragma once
#include <string>
#include <iostream>		// ���⼭ �ѹ� �����, ���� ��� ������Ͽ� ��� ����ȴ�!

class Developer
{
public:
	int mAge;
	std::string mName;

	Developer();
	Developer(int age);		// ���̸� �����ϱ� ���� ������ ���� ����
	~Developer();

	void Work();
};


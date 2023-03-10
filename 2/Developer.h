#pragma once
#include <string>
#include <iostream>		// 여기서 한번 만들면, 뒤의 모든 헤더파일에 모두 적용된다!

class Developer
{
public:
	int mAge;
	std::string mName;

	Developer();
	Developer(int age);		// 나이를 설정하기 위한 생성자 따로 생성
	~Developer();

	void Work();
};


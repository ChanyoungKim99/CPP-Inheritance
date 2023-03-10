#include <iostream>
#include "ChiefProgrammer.h"
#include "Designer.h"

int main()
{
	//ChiefProgrammer ec;
	//ec.mAge;

	Programmer ms;
	// programmer는 developer에서 파생되었으므로,
	// 실행시 기반 클래스인 developer가 먼저 생성됨을 알 수 있다.

	// 소멸될때는, 파생 클래스를 먼저 소멸된다.
	/*
	생성
	1. Programmer 인스턴스 준비중
	2. Programmer 생성자 접근
	3. 기반 클래스인 Developer 생성자 접근, 초기화
	4. Programmer 생성자로 되돌아옴
	5. ms 인스턴스 생성!

	소멸
	1. Programmer 소멸 준비중
	2. Programmer 소멸자 접근
	3. 컴파일러가 파생 클래스를 소멸
	4. 컴파일러가 기반 클래스를 소멸
	5. 소멸 완료!
	*/


	//// 18세 프로그래머만 채용하고 싶다면?
	//std::cout << ms.mAge << std::endl;


	//// 멤버 함수 오버라이딩
	//ms.Work();

	//Designer bi;
	//bi.Work();
}
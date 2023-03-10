#pragma once
#include "Programmer.h"

class ChiefProgrammer : public Programmer
{						// Programmer에서 파생되었기에, Programmer의 모든것을 갖춤
public:
	void Architecture();

	void Confirm();
};

// 선언과 정의는 꼭 분리하기!!

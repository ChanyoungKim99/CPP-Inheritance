#include "Programmer.h"

Programmer::Programmer() : Developer(18)
{
	// mAge = 18;	
	// 부모의 멤버는 멤버 초기화 리스트를 사용하면 안된다!!!
	// 그러나, 위의 방식은 자식이 부모의 멤버를 건드리는 꼴이 되기에
	// OOP에 적합하지 않다

	// 따라서 대리 생성자를 사용한다.
	// 초기화는 각자 멤버에서 하는 것이 OOP스러운 접근법이다.
	std::cout << "[Programmer] created!" << std::endl;
}

Programmer::~Programmer()
{
	std::cout << "[Programmer] destroyed!" << std::endl;
}

void Programmer::Work()
{
	std::cout << "코딩" << std::endl;
}

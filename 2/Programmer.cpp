#include "Programmer.h"

Programmer::Programmer() : Developer(18)
{
	// mAge = 18;	
	// �θ��� ����� ��� �ʱ�ȭ ����Ʈ�� ����ϸ� �ȵȴ�!!!
	// �׷���, ���� ����� �ڽ��� �θ��� ����� �ǵ帮�� ���� �Ǳ⿡
	// OOP�� �������� �ʴ�

	// ���� �븮 �����ڸ� ����Ѵ�.
	// �ʱ�ȭ�� ���� ������� �ϴ� ���� OOP������ ���ٹ��̴�.
	std::cout << "[Programmer] created!" << std::endl;
}

Programmer::~Programmer()
{
	std::cout << "[Programmer] destroyed!" << std::endl;
}

void Programmer::Work()
{
	std::cout << "�ڵ�" << std::endl;
}

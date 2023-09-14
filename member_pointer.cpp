#include <iostream>
using namespace std;

class A
{
public:
	int& a;
	static int staticA;
	A(int b) : a(b) {}
};

int A::staticA = 40;

int main()
{
	int A::* pa;
	A temp(10);

	//클래스 레퍼런스 멤버에 대한 멤버 포인터는 존재하지 않는다.
	//pa = &A::a;

	//정적 멤버 변수에 대한 멤버 포인터는 존재하지 않는다.
	//pa = &A::staticA;

	return 0;
}
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

	//Ŭ���� ���۷��� ����� ���� ��� �����ʹ� �������� �ʴ´�.
	//pa = &A::a;

	//���� ��� ������ ���� ��� �����ʹ� �������� �ʴ´�.
	//pa = &A::staticA;

	return 0;
}
#include <iostream>
using namespace std;

//다중 상속인 경우 클래스 C에서는 가상 함수 테이블과 가상 함수 포인터가 A와 B에 대한 것 2개가 생긴다.
//따라서 C의 크기는 16바이트이다. 64비트 환경이므로 포인터의 크기가 8바이트이다.
class A
{
public:
	virtual void print()
	{
		//int i = 1;
	}
};

class B
{
public:
	virtual void print2()
	{
		//int i = 1;
	}
};

class C : public A, public B
{
public:

};

int main()
{
	A ATemp;
	B BTemp;

	C CTemp;
	cout << "A Size: " << sizeof(ATemp) << " B Size: " << sizeof(BTemp) << " C Size: " << sizeof(CTemp);
	return 0;
}
#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() = 0
	{
		cout << "기반 클래스에서 일부를 미리 구현" << endl;
	}
};

class B : public A
{
public:
	virtual void print() override
	{
		A::print();
		cout << "파생 클래스에서 재정의" << endl;
	}
};

int main()
{
	B b;
	b.print();
	return 0;
}
#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() = 0
	{
		cout << "��� Ŭ�������� �Ϻθ� �̸� ����" << endl;
	}
};

class B : public A
{
public:
	virtual void print() override
	{
		A::print();
		cout << "�Ļ� Ŭ�������� ������" << endl;
	}
};

int main()
{
	B b;
	b.print();
	return 0;
}
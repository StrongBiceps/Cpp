#include <iostream>
using namespace std;

//���� ����� ��� Ŭ���� C������ ���� �Լ� ���̺�� ���� �Լ� �����Ͱ� A�� B�� ���� �� 2���� �����.
//���� C�� ũ��� 16����Ʈ�̴�. 64��Ʈ ȯ���̹Ƿ� �������� ũ�Ⱑ 8����Ʈ�̴�.
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
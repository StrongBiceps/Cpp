#include <iostream>

using namespace std;

class A
{
private:
	int a = 30;
public:
	//���� - ����
	void operator-()
	{
		cout << "operator called";
	}
	//���� - ����
	void operator-(int)
	{
		cout << "operator called";
	}
	A() = default;

	//�� ��� ������ �����ε� �Լ����� ��ü �Ű������� �ʿ��ϴ�.
	//friend void operator+(int);
	
	//�� �Լ��� �ܺ� �Լ����� ���Ǹ� Ŭ���� ���ο� �����ν� inline ����ȭ �ߴ�.
	friend void operator+(class something)
	{
		...
	}
};

//void operator+(int)
//{
//
//}

int main()
{
	A a;
	-a;
	a-3;
	return 0;
}
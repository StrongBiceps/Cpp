#include <iostream>
using namespace std;

class A
{
private:
	int a = 30;
	//static const ����� �Ʒ��� ���� �ʱ�ȭ�� �����ϴ�.
	//static const int b = 40;
	static int b;
public:
	static void Test()
	{
		cout << "Test called" << endl;
		cout << b << endl;
	}
	static void print()
	{
		cout << "static function called" << endl;
		//���� ��� �Լ��� ��ü�� ����� ��� ���� ȣ���� �� �ֱ� ������ ��ü ������ ����� ������ �� ����.
		// ���� ���� ������ ���� �Լ��� ȣ���ϰ� ������ �� �ִ�.
		//cout << a << endl;
		Test();
	}
	A() = default;
};

int A::b = 20;

int main()
{
	A::print();
	return 0;
}
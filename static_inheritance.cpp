#include <iostream>
using namespace std;

class A
{
private:
	//�Ļ� Ŭ�������� ���� �Ұ�
	//�ܺο��� ���� �Ұ�
	//static int a;

protected:
	//�Ļ� Ŭ�������� ���� ����
	//�ܺο��� ���� �Ұ�
	static int a;

	static void print()
	{
		cout << a << endl;
		cout << "static ��� Ŭ���� ��� ȣ��" << endl;
	}
public:
	//�Ļ� Ŭ�������� ���� ����
	//�ܺο��� ��� ����
	//static int a;
	A() = default;


	/*static void print()
	{
		cout << a << endl;
	}*/
};

int A::a = 10;

class B :public A
{
public:
	B() = default;
	void PrintStatic() const
	{
		cout << a << endl;
		print();
	}
};
int main()
{
	B b;
	b.PrintStatic();
	//b.print();
	//cout << A::a << endl;
	return 0;
}

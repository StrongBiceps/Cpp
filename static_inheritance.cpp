#include <iostream>
using namespace std;

class A
{
private:
	//파생 클래스에서 접근 불가
	//외부에서 접근 불가
	//static int a;

protected:
	//파생 클래스에서 접근 가능
	//외부에서 접근 불가
	static int a;

	static void print()
	{
		cout << a << endl;
		cout << "static 기반 클래스 멤버 호출" << endl;
	}
public:
	//파생 클래스에서 접근 가능
	//외부에서 사용 가능
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

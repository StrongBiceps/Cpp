#include <iostream>
using namespace std;

class A
{
private:
	int a = 30;
	//static const 멤버는 아래와 같이 초기화가 가능하다.
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
		//정적 멤버 함수는 객체의 존재와 상관 없이 호출할 수 있기 때문에 객체 내부의 멤버에 접근할 수 없다.
		// 또한 정적 변수나 정적 함수만 호출하고 접근할 수 있다.
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
#include <iostream>

using namespace std;

class A
{
private:
	int a = 30;
public:
	//전위 - 연산
	void operator-()
	{
		cout << "operator called";
	}
	//이항 - 연산
	void operator-(int)
	{
		cout << "operator called";
	}
	A() = default;

	//비 멤버 연산자 오버로딩 함수에는 객체 매개변수가 필요하다.
	//friend void operator+(int);
	
	//이 함수는 외부 함수지만 정의를 클래스 내부에 함으로써 inline 최적화 했다.
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
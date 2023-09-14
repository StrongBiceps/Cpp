#include <iostream>
using namespace std;

//!!!! Reference끼리의 대입은 좌항의 레퍼런스가 가리키고 있는 변수를 바꾸는 것이 아니라
//좌항의 레퍼런스가 가리키고 있는 변수의 값이 우항 레퍼런스가 가리키고 있는 값으로 바뀌는 것이다.
//레퍼런스 변수는 선언과 동시에 가리킬 변수가 정해지고 바뀔 수 없다.
class A
{
public:
	int a;
	//int& ra;
	const int ca;
	A(int temp) :a(temp), ca(temp) {}//,ra(a) {}
	//클래스에 레퍼런스 멤버가 포함되어 있더라도 사용자가 대입 연산자를 오버로딩하면 대입이 가능하다.
	/*void operator=(const A& _A)
	{
		this->a = _A.a;
		this->ra = _A.ra;
	}*/
	void operator=(const A& _A)
	{
		this->a = _A.a;

		//상수는 한 번 초기화하면 수정이 불가능하다.
		//this->ca = _A.ca;
	}
};

int main()
{
	//레퍼런스는 초기화 되더라도 다른 값을 가리킬 수 있다.
	//레퍼런스 끼리의 대입 연산도 가능하다.
	/*int a = 10;
	int& ra = a;

	int b = 20;
	int& rb = b;

	ra = rb;
	ra = b;

	cout << ra << endl;
	cout << rb << endl;*/

	//클래스 멤버에 레퍼런스나 상수가 포함된 경우에는 컴파일러는 디폴트 대입 연산자를 제공하지 않는다.
	//사용자가 정의하면 가능할 것이다. 그러나 상수에 대해서는 초기화하면 수정이 불가하므로 대입이 불가능하다.
	A Ca(10);
	A Cb(20);

	/*cout << "생성자 호출 후" << endl;
	cout << Ca.ra << endl;
	cout << Cb.ra << endl;

	cout << "대입 연산 후" << endl;
	Ca = Cb;
	cout << Ca.ra << endl;
	cout << Cb.ra << endl;*/

	return 0;
}
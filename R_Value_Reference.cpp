#include <iostream>
using namespace std;

//R-value Reference도 마찬가지로 선언과 동시에 가리킬 대상이 결정되고 이후에 가리킬 대상이 변경될 수 없다.
//초기화된 R value Reference에 새로운 값을 대입하는 것은 가리키고 있는 변수의 메모리 공간에 접근하여 새로운 값으로 쓰는 것이다.
//값을 변경한 후 주소를 출력하면 주소가 같다고 나온다.
class A
{
private:
	int iTemp;
public:
	A(int _iTemp)
	{
		iTemp = _iTemp;
	}
	void SetiTemp(int _iTemp)
	{
		iTemp = _iTemp;
	}
	void print()
	{
		cout << iTemp << endl;
	}
};


int main()
{
	//임시 객체는 R-value Reference가 유효할 때까지만 살아 있다. 그 이후로는 파괴된다.
	/*int&& b = 10;
	int&& a = 10;

	int _a = 30;
	int& aTemp = _a;
	cout << a << endl;
	cout << &a << endl;
	cout << &b << endl;

	a = _a;
	aTemp = 40;

	cout << _a;*/

	int iTemp = 20;


	int&& RRa = 10;
	cout << &RRa << endl;
	RRa = 20;
	cout << &RRa << endl;

	//R value Reference는 L-Value를 참조할 수 없다.
	//int&& RRb = iTemp;

	//A&& ATemp = A(20);
	//ATemp.SetiTemp(30);
	//ATemp.print();
	return 0;
}
#include <iostream>
using namespace std;

//클래스에서 메모리를 할당할 때 패딩 바이트를 사용한다.
//상속 구조에서도 마찬가지이다.
class A
{
private:
	char s;
	int a;
	int b;
	double c;//24
};

class B
{
private:
	int d;
	int e;
	double f;
	int g; //24
};

class C :public A, public B //A+B+C = 64
{
private:
	int l;
	double g; //16

};

int main()
{
	C Ctemp;
	cout << sizeof(Ctemp) << endl;
	return 0;
}
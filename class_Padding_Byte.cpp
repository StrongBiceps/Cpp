#include <iostream>
using namespace std;

//Ŭ�������� �޸𸮸� �Ҵ��� �� �е� ����Ʈ�� ����Ѵ�.
//��� ���������� ���������̴�.
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
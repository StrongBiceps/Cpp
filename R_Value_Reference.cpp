#include <iostream>
using namespace std;

//R-value Reference�� ���������� ����� ���ÿ� ����ų ����� �����ǰ� ���Ŀ� ����ų ����� ����� �� ����.
//�ʱ�ȭ�� R value Reference�� ���ο� ���� �����ϴ� ���� ����Ű�� �ִ� ������ �޸� ������ �����Ͽ� ���ο� ������ ���� ���̴�.
//���� ������ �� �ּҸ� ����ϸ� �ּҰ� ���ٰ� ���´�.
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
	//�ӽ� ��ü�� R-value Reference�� ��ȿ�� �������� ��� �ִ�. �� ���ķδ� �ı��ȴ�.
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

	//R value Reference�� L-Value�� ������ �� ����.
	//int&& RRb = iTemp;

	//A&& ATemp = A(20);
	//ATemp.SetiTemp(30);
	//ATemp.print();
	return 0;
}
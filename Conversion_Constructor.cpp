#include <iostream>
#include <vector>
using namespace std;

class A
{
public:

	int a;
	int b;
	A()
	{
		cout << "������ ȣ��" << endl;
	}
	explicit A(int a)
	{
		cout << "��ȯ ������ ȣ��" << endl;
		//..
	}
};

int main()
{
	//�Ʒ��� ���� ��Ȳ������ �Ͻ������� A a(A(10)); �� ȣ��ȴ�. 
	//�̴� �ǵ�ġ ���� ��Ȳ�� �� �����Ƿ� �̷��� �Ͻ��� ��ȯ�� �����ϱ� ���ؼ� explicit Ű���带 ����Ѵ�.
	//explicit�� �����ϰ� �Ʒ� �ڵ��� �ּ��� �����ϸ� ��ȯ �����ڰ� ȣ��ǰ�, explicit�� ������ ȣȯ�Ǵ� �����ڰ�
	// �����Ƿ� ������ ����Ѵ�.
	//A a = 10;

	//�� ��Ȳ������ ��ȯ �����ڰ� ȣ��ȴ�.
	A a(10);
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//const char* a --> ����� ���ڿ��� ������ ������ �� ����
	//char* const a --> �ٸ� ���ڿ��� ������ �� ����
	const char* const a = "what ever it takes";
	cout << a << endl;
	cout << endl;
	a = "one for all";
	cout << a << endl;
}
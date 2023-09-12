#include <iostream>
using namespace std;

int main()
{
	const char* ptr[3] = { "rabbit","tiger","cow" };
	cout << (int)ptr << endl;
	cout << (int)&ptr[0] << endl;
	cout << (int)ptr[0] << endl;
	return 0;
}
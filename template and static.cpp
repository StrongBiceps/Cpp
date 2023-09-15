#include <iostream>
using namespace std;

template<typename T>
class A
{
public:
	static T a;
	
	void Set()
	{
		++a;
	}
};

template<typename T>
T A<T>::a = 0;

template<typename T>
void print()
{
	static T b = 20;
	++b;
	cout << b << endl;
}

int main()
{
	A<int> TempA;
	A<double> TempB;

	TempA.Set();

	cout << "TempA: " << A<int>::a << " TempB: " << A<double>::a << endl<<endl;

	cout << "print<int> result" << endl;
	print<int>();
	print<int>();

	cout << "print<double> result" << endl;
	print<double>();
}
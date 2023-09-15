#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//const char* a --> 저장된 문자열의 내용을 변경할 수 없음
	//char* const a --> 다른 문자열을 저장할 수 없음
	const char* const a = "what ever it takes";
	cout << a << endl;
	cout << endl;
	a = "one for all";
	cout << a << endl;
}
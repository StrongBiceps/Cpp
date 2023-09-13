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
		cout << "생성자 호출" << endl;
	}
	explicit A(int a)
	{
		cout << "변환 생성자 호출" << endl;
		//..
	}
};

int main()
{
	//아래와 같은 상황에서는 암시적으로 A a(A(10)); 이 호출된다. 
	//이는 의도치 않은 상황일 수 있으므로 이러한 암시적 변환을 방지하기 위해서 explicit 키워드를 사용한다.
	//explicit을 제거하고 아래 코드의 주석을 해제하면 변환 생성자가 호출되고, explicit을 넣으면 호환되는 생성자가
	// 없으므로 에러를 출력한다.
	//A a = 10;

	//이 상황에서는 변환 생성자가 호출된다.
	A a(10);
}
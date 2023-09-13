#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pair {
	int first;
	int second;
};


int main()
{
	int a = 20, b = 30;

	//auto lambda = [](auto& a, auto& b) {return a + b; };
	//아래 코드는 불가능하다. 캡쳐를 해야만 외부 변수를 사용할 수 있다.
	//auto lambda = []() {return a + b; };

	//아래 코드도 불가능하다 외부 변수 명과 다르기 때문이다.
	//auto lambda= [=](){return c+d;};

	//generic lambda
	auto lambda = [](auto& a, auto& b) {return a + b; };
	cout << lambda(a,b)<<endl;

	//아래 코드가 일반적인 사용법
	auto lambda2 = [&]() {return a + b; };
	cout << lambda2();

	const int n1 = 2;

	std::vector<Pair> data[n1]; // data는 2차원 벡터로 가정

	int n2 = 42; // 예시로 n2가 42일 때의 조건을 가정합니다.

	// remove_if 함수를 사용하여 조건을 만족하는 요소들을 제거
	data[n1].erase(
		std::remove_if(data[n1].begin(), data[n1].end(), [n2](const auto& pair) {
			return pair.first == n2;
			}),
		data[n1].end()
				);

	//외부 변수인 n2를 사용하고, remove_if에서 람다 함수를 호출할 때 컨테이너의 원소를 매개변수로 전달한다.

	return 0;
}
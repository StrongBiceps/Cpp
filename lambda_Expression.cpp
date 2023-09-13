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
	//�Ʒ� �ڵ�� �Ұ����ϴ�. ĸ�ĸ� �ؾ߸� �ܺ� ������ ����� �� �ִ�.
	//auto lambda = []() {return a + b; };

	//�Ʒ� �ڵ嵵 �Ұ����ϴ� �ܺ� ���� ��� �ٸ��� �����̴�.
	//auto lambda= [=](){return c+d;};

	//generic lambda
	auto lambda = [](auto& a, auto& b) {return a + b; };
	cout << lambda(a,b)<<endl;

	//�Ʒ� �ڵ尡 �Ϲ����� ����
	auto lambda2 = [&]() {return a + b; };
	cout << lambda2();

	const int n1 = 2;

	std::vector<Pair> data[n1]; // data�� 2���� ���ͷ� ����

	int n2 = 42; // ���÷� n2�� 42�� ���� ������ �����մϴ�.

	// remove_if �Լ��� ����Ͽ� ������ �����ϴ� ��ҵ��� ����
	data[n1].erase(
		std::remove_if(data[n1].begin(), data[n1].end(), [n2](const auto& pair) {
			return pair.first == n2;
			}),
		data[n1].end()
				);

	//�ܺ� ������ n2�� ����ϰ�, remove_if���� ���� �Լ��� ȣ���� �� �����̳��� ���Ҹ� �Ű������� �����Ѵ�.

	return 0;
}
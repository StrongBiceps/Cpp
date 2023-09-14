#include <iostream>
#include <set>
#include <map>
using namespace std;

class Elem
{
private:
	int a;
public:
	Elem(int _a)
	{
		a = _a;
	}
	int Geta() const
	{
		return a;
	}
};

//set에서 비교를 수행할 때 객체를 상수 참조하여 사용한다.(const T&) 따라서 호출되는 함수 객체의 ()함수도 const여야 한다.
template<class E>
class Comparator_Greater
{
public:
	bool operator()(const E& A,const E& B) const
	{
		return A.Geta() > B.Geta();
	}
};

template<class E>
class Comparator_Less
{
public:
	bool operator()(const E& A,const E& B) const
	{
		return A.Geta() < B.Geta();
	}
};

int main()
{
	//set<int> a;
	//map<int,int> b;

	//a.insert(20);
	////set은 중복 키를 허용하지 않으므로 이미 존재하는 원소의 반복자와 실패를 뜻하는 false로 이루어진 pair객체가 반환될 것이다.
	//auto temp = a.insert(20);

	////임의 접근으로 키의 값은 바꿀 수 있지만 삽입할 때 중복 키를 삽입하는 것은 불가하다.
	//b[10] = 20;
	//b[10] = 30;
	//b[20] = 30;

	//cout << b[10] << endl;
	//cout << b[20] << endl;
	//b.insert({ 20,40 });
	//cout << b[20] << endl;

	//오름 차순
	std::set<int, std::less<int>> setLess_int = { 5, 3, 4, 1, 2 };
	std::cout << "Set with std::less: ";
	for (const auto& elem : setLess_int)
		std::cout << elem << ' ';
	std::cout << " ";

	//내림 차순
	std::set<int, std::greater<int>> setGreater_int = { 5, 3, 4, 1, 2 };
	std::cout << "Set with std::greater: ";
	for (const auto& elem : setGreater_int)
		std::cout << elem << " ";

	cout << endl;

	//사용자 정의 객체에 대한 정렬

	//오름차순
	std::set<Elem, Comparator_Less<Elem>> setLess = { Elem(10),Elem(3),Elem(2),Elem(14) };
	std::cout << "Set with std::less: ";
	for (const auto& elem : setLess)
		std::cout << elem.Geta() << ' ';
	
	//내림차순
	std::set<Elem,Comparator_Greater<Elem>> setGreater = { Elem(10),Elem(3),Elem(2),Elem(14) };
	std::cout << "Set with std::greater: ";
	for (const auto& elem : setGreater)
		std::cout << elem.Geta() << ' ';

	return 0;
}
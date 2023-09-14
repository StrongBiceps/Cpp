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

//set���� �񱳸� ������ �� ��ü�� ��� �����Ͽ� ����Ѵ�.(const T&) ���� ȣ��Ǵ� �Լ� ��ü�� ()�Լ��� const���� �Ѵ�.
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
	////set�� �ߺ� Ű�� ������� �����Ƿ� �̹� �����ϴ� ������ �ݺ��ڿ� ���и� ���ϴ� false�� �̷���� pair��ü�� ��ȯ�� ���̴�.
	//auto temp = a.insert(20);

	////���� �������� Ű�� ���� �ٲ� �� ������ ������ �� �ߺ� Ű�� �����ϴ� ���� �Ұ��ϴ�.
	//b[10] = 20;
	//b[10] = 30;
	//b[20] = 30;

	//cout << b[10] << endl;
	//cout << b[20] << endl;
	//b.insert({ 20,40 });
	//cout << b[20] << endl;

	//���� ����
	std::set<int, std::less<int>> setLess_int = { 5, 3, 4, 1, 2 };
	std::cout << "Set with std::less: ";
	for (const auto& elem : setLess_int)
		std::cout << elem << ' ';
	std::cout << " ";

	//���� ����
	std::set<int, std::greater<int>> setGreater_int = { 5, 3, 4, 1, 2 };
	std::cout << "Set with std::greater: ";
	for (const auto& elem : setGreater_int)
		std::cout << elem << " ";

	cout << endl;

	//����� ���� ��ü�� ���� ����

	//��������
	std::set<Elem, Comparator_Less<Elem>> setLess = { Elem(10),Elem(3),Elem(2),Elem(14) };
	std::cout << "Set with std::less: ";
	for (const auto& elem : setLess)
		std::cout << elem.Geta() << ' ';
	
	//��������
	std::set<Elem,Comparator_Greater<Elem>> setGreater = { Elem(10),Elem(3),Elem(2),Elem(14) };
	std::cout << "Set with std::greater: ";
	for (const auto& elem : setGreater)
		std::cout << elem.Geta() << ' ';

	return 0;
}
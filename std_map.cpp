#include <map>
#include <iostream>
using namespace std;

int main()
{
	map<int, int> mapInt = { {1,2},{2,3},{3,4},{4,5} };

	auto mapIter = mapInt.begin();

	++mapIter;
	++mapIter;
	++mapIter;

	auto Temp = mapInt.erase(mapIter);
	//���� ���� ������ ����Ű�� �ݺ��ڸ� ��ȯ�Ѵ�.
	if (Temp == mapInt.end())
	{
		cout << "out of range" << endl;
	}
	//���� ���ҿ� ���� �ݺ��ڴ� ��ȿȭ
	//cout << mapIter->first << " " << mapIter->second << endl; ����

	//Ű�� �ش��ϴ� pair�� ã�� ���ϸ� end�� ��ȯ�Ѵ�.
	//map������ std::find,find_if�� ����� �� ����.
	auto iterTemp = mapInt.find(10);

	if (iterTemp == mapInt.end())
	{
		cout << "ã�� pair�� ����." << endl;
	}
	//map������ ���� Ű�� ���� []�����ڸ� ����ϸ� ���� 0���� �߰��Ѵ�.
	cout << mapInt[10] << endl;
	auto TempValue = mapInt[30];
	cout << TempValue<< endl;

	//���� Ű�� �����Ѵٸ�, ���� �����ϴ� �ڵ�� �ٲ��.
	mapInt[10] = 100;
	cout << mapInt[10] << endl;
	return 0;
}
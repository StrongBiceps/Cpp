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
	//지운 원소 다음을 가리키는 반복자를 반환한다.
	if (Temp == mapInt.end())
	{
		cout << "out of range" << endl;
	}
	//지운 원소에 대한 반복자는 무효화
	//cout << mapIter->first << " " << mapIter->second << endl; 에러

	//키에 해당하는 pair를 찾지 못하면 end를 반환한다.
	//map에서는 std::find,find_if는 사용할 수 없다.
	auto iterTemp = mapInt.find(10);

	if (iterTemp == mapInt.end())
	{
		cout << "찾는 pair가 없다." << endl;
	}
	//map에서는 없는 키에 대한 []연산자를 사용하면 값을 0으로 추가한다.
	cout << mapInt[10] << endl;
	auto TempValue = mapInt[30];
	cout << TempValue<< endl;

	//만약 키가 존재한다면, 값을 변경하는 코드로 바뀐다.
	mapInt[10] = 100;
	cout << mapInt[10] << endl;
	return 0;
}
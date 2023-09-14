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
	//map은 std::find를 사용할 수 없다. 하지만 std::find_if는 사용 가능하다.
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

//map find_if 사용

//#include <iostream>
//#include <map>
//
//
//using namespace std;
//
//int main()
//{
//	map<const char*, int> m;
//
//	m.insert({ "ONE", 1 });
//	m.insert({ "TWO", 2 });
//	m.insert({ "THREE", 3 });
//	m.insert({ "FOUR", 4 });
//
//	auto Find_Key = [](const char* key)
//	{
//		return[key](const pair<const char*, int> Other) -> bool
//		{
//			return (!strcmp(key, Other.first));
//		};
//	};
//
//	/*
//
//	_EXPORT_STD template <class _InIt, class _Pr>
//	_NODISCARD _CONSTEXPR20 _InIt find_if(_InIt _First, const _InIt _Last, _Pr _Pred) { // find first satisfying _Pred
//	 _Adl_verify_range(_First, _Last);
//	 auto _UFirst      = _Get_unwrapped(_First);
//	 const auto _ULast = _Get_unwrapped(_Last);
//	 for (; _UFirst != _ULast; ++_UFirst) {
//		 if (_Pred(*_UFirst)) {
//			 break;
//		 }
//	 }
//
//	*/
//
//	//Find_Key("THREE")를 호출한 반환값으로 find_if 매개변수로 전달하기 때문에 Find_Key의 내부 람다가 전달된다.
//	map<const char*, int>::iterator Iter = find_if(m.begin(), m.end(), Find_Key("THREE"));
//
//	cout << Iter->first << " " << Iter->second << endl;
//
//	return 0;
//}





//map에서 find사용할 수 없는 이유

//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//void main()
//{
//    map<string, int> m;
//
//    m["서울"] = 1000; m["부산"] = 500; m["대전"] = 400; m["대구"] = 300;
//
//    m["광주"] = 200; m["인천"] = 100; m["독도"] = 1;
//
//    map<string, int>::iterator it;
//
//    //pair클래스는 ==연산자를 제공하지 않기 때문에 std::find를 아래와 같이 사용할 수는 없다.
//    //it = find(m.begin(), m.end(), "부산");
//
//    //it = find(m.begin(), m.end(), pair<string, int>("부산", 500));
//
//    it = m.find("부산");
//
//    if (it == m.end()) {
//
//        cout << "맵에 없는 도시입니다." << endl;
//
//    }
//    else {
//
//        cout << it->first << "의 인구는 " << it->second << "만 명이다." << endl;
//
//    }
//}
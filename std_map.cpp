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
	//map�� std::find�� ����� �� ����. ������ std::find_if�� ��� �����ϴ�.
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

//map find_if ���

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
//	//Find_Key("THREE")�� ȣ���� ��ȯ������ find_if �Ű������� �����ϱ� ������ Find_Key�� ���� ���ٰ� ���޵ȴ�.
//	map<const char*, int>::iterator Iter = find_if(m.begin(), m.end(), Find_Key("THREE"));
//
//	cout << Iter->first << " " << Iter->second << endl;
//
//	return 0;
//}





//map���� find����� �� ���� ����

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
//    m["����"] = 1000; m["�λ�"] = 500; m["����"] = 400; m["�뱸"] = 300;
//
//    m["����"] = 200; m["��õ"] = 100; m["����"] = 1;
//
//    map<string, int>::iterator it;
//
//    //pairŬ������ ==�����ڸ� �������� �ʱ� ������ std::find�� �Ʒ��� ���� ����� ���� ����.
//    //it = find(m.begin(), m.end(), "�λ�");
//
//    //it = find(m.begin(), m.end(), pair<string, int>("�λ�", 500));
//
//    it = m.find("�λ�");
//
//    if (it == m.end()) {
//
//        cout << "�ʿ� ���� �����Դϴ�." << endl;
//
//    }
//    else {
//
//        cout << it->first << "�� �α��� " << it->second << "�� ���̴�." << endl;
//
//    }
//}
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vec = { 1,2,2,2,3 };
	
	for (const auto& i : vec)
	{
		cout << i << endl;
	}

	cout << endl;

	vec.erase(remove(vec.begin(), vec.end(), 2), vec.end());

	for (const auto& i : vec)
	{
		cout << i << endl;
	}
}
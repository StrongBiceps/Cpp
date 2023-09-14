#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	//greater > »ç¿ë ÃÖ¼ÒÈü
	vector<int> heap = { 1,5,6,2,3,9,8,7 };

	push_heap(heap.begin(), heap.end(), greater<int>());

	cout<<"front: " << heap.front() << " back:"<<heap.back();
	cout << endl;

	//less »ç¿ë < ÃÖ´ëÈü
	vector<int> heap2 = { 1,5,6,2,3,9,8,7 };

	push_heap(heap2.begin(), heap2.end(), less<int>());

	cout << "front: " << heap2.front() << " back:" << heap2.back();
	return 0;
}
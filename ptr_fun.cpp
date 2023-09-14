#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;



bool IsMultiFunc(int a, int b)
{
    return (a % b == 0);
}



void main()
{
    int ari[] = { 1,2,3,4,5,6,7,8,9,10 };

    vector<int> vi(&ari[0], &ari[10]);



    vector<int>::iterator it;

    for (it = vi.begin();; it++) {

        it = find_if(it, vi.end(), bind2nd(ptr_fun(IsMultiFunc), 3));

        if (it == vi.end()) break;

        cout << *it << "이(가) 있다" << endl;
    }
}
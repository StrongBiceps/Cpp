#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;



class Natural
{
private:

    int num;

public:

    Natural(int anum) : num(anum) {
        SetNum(anum);
    }

    void SetNum(int anum) {
        if (anum >= 0) {
            num = anum;
        }
    }
    int GetNum() { return num; }

    bool IsEven() { return num % 2 == 0; }
};

void delnatural(Natural* pn)
{
    delete pn;
}



void main()
{

    vector<Natural*> vn;

    vn.push_back(new Natural(1));

    vn.push_back(new Natural(2));

    vn.push_back(new Natural(3));

    vn.push_back(new Natural(4));


    vector<Natural*>::iterator it;

    for (it = vn.begin();; it++) {

        it = find_if(it, vn.end(), mem_fun(&Natural::IsEven));

        if (it == vn.end()) break;

        cout << (*it)->GetNum() << "이(가) 있다" << endl;
    }
    for_each(vn.begin(), vn.end(), delnatural);
}
#include <iostream>
using namespace std;
#define MAX 20

void main()
{
	int Size;
#if MAX>100
	Size = 100;
#elif MAX>10
	Size = 10;
#else
	Size = 0;
#endif
	cout << "Size = " << Size << endl;
}

//#include <iostream>
//using namespace std;
//#define _MYDEBUG 10
//
//#ifdef _MYDEBUG
//void sub() {
//	cout << "debug \n";
//}
//#endif
//
//#ifndef _MYDEBUG
//void sub() {
//	cout << "release \n";
//}
//#endif
//
//void main()
//{
//	sub();
//}
//_MYDEBUG ��ũ�ΰ� ���ǵǾ� �ִٸ� ���κ��� ����� ���̰�, �ƴ϶�� �Ʒ��κ��� ����� ���̴�.

//#include <iostream>
//using namespace std;
//#define SIZE 10
//
//void main()
//{
//	int i, j;
//	i = SIZE;
//#ifdef SIZE
//#undef SIZE
//#define SIZE 20
//#endif
//	j = SIZE;
//	cout << i << " " << j << endl;
//}

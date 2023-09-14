#include <iostream>
#include <map>
#include <set>


//�Լ� �����͵� c++17���� ���ø� �μ��� ������ �� �ִ�.
void myFunction() {
    std::cout << "Hello, World!" << std::endl;
}

template <void (*Func)()>
struct MyStruct {
    static void callFunction() {
        Func();
    }
};

int main() {
    MyStruct<myFunction>::callFunction();
   
    return 0;
}
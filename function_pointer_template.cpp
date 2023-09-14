#include <iostream>
#include <map>
#include <set>


//함수 포인터도 c++17부터 템플릿 인수로 전달할 수 있다.
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
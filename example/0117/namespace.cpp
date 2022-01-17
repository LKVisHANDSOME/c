#include <iostream>
#include <cstdlib>

void f1(){
    std::cout << "hello world" << std::endl;
}

void f2(){
    using std::cout; using std::endl;
    cout << "hello world" << endl;
}

void f3(){
    using namespace std;
    cout << "hello world" << endl;
}

int main() {
    f1(),f2(),f3();
    system("pause");
    return 0;
}
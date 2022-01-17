#include <bits/stdc++.h>
using namespace std;

// pass by value
void f1(int a){
    a++;
}

// pass by pointer
void f2(int *a){
    (*a)++;
}

// pass by reference
void f3(int &a){
    a++;
}

int main() {
    int a=0;
    cout << a << endl;
    f1(a);
    cout << a << endl;
    f2(&a);
    cout << a << endl;
    f3(a);
    cout << a << endl;

    system("pause");
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class my_string{
public:
    char s[30];
    my_string(const char *);
    int size();
};

my_string::my_string(const char *x){
    strcpy(s,x);
}

int my_string::size(){
    return strlen(s);
}

int main() {
    my_string s("123");
    cout << s.size() << endl;
    system("pause");
    return 0;
}
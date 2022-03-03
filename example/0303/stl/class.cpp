#include <bits/stdc++.h>
using namespace std;

class student {
   public:
    int number;
    string name;

    student(int n, string s)
    {
        number = n;
        name = s;
    }
};

int main()
{
    student a(10, "LKV");

    cout << "the student name   = " << a.name << endl;
    cout << "the student number = " << a.number << endl;

    system("pause");
    return 0;
}
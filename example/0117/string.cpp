#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "123", s2 = "456";
    cout << s1 << " " << s2 << endl;

    cout << "----------------------" << endl;
    // 可以用> < = 來比較字典序
    if(s1<s2)        cout << "s1 smaller than s2" << endl;
    if(s1==s2)       cout << "s1 equal s2" << endl;
    if(s1>s2)        cout << "s1 bigger than s2" << endl;
    if(s1.empty())   cout << "s1 is empty" << endl;
    if(!s1.empty())  cout << "s1 is not empty" << endl;

    cout << "----------------------" << endl;
    // 可以用find找特定字元在哪，用+=和=來改變字串
    cout << "5 in s1 at : " << s1.find('5') << endl;
    cout << s1+s2 << endl;
    s1+=s2;
    cout << s1 << " " << s1.size() << endl;
    cout << "5 in s1 at : " << s1.find('5') << endl;
    s1=s2;
    cout << s1 << " " << s1.size() << endl;

    cout << "----------------------" << endl;
    //原本字元陣列取字串中第i個的用法一樣是s[i]
    cout << "use for loop printf : \n";
    for(int i=0;i<s1.size();i++){
        cout << s1[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
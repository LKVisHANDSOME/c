#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "123", s2 = "654";
    s1+=s2;
    cout << s1 << endl;

    cout << "----------------------" << endl;

    // s1從index 2後的子字串
    cout << s1.substr(2) << endl;
    // s1從index 2後長度為2的子字串
    cout << s1.substr(2,2) << endl;

    cout << "----------------------" << endl;

    cout << s1 << endl;
    // 把P加到s1的尾巴
    s1.push_back('P');
    cout << s1 << endl;
    // 把P的最後一格刪掉
    s1.pop_back();
    cout << s1 << endl;

    cout << "----------------------" << endl;
    cout << s1 << endl;
    // 反轉字串
    reverse(s1.begin(),s1.end());
    cout << s1 << endl;
    // 排序字串
    sort(s1.begin(),s1.end());
    cout << s1 << endl;

    system("pause");
    return 0;
}
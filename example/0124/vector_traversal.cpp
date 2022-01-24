#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v({1, 2, 3, 4, 5});
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int &num : v) {
        cout << num << " ";
    }
    cout << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = v.begin(); it !=v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
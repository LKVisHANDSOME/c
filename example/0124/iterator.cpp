#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v({1,2,3,4,5});
    vector<int>::iterator it = find(v.begin(),v.end(),3);
    cout << *it << " " << it - v.begin() << endl;
    
    system("pause");
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int> point({1,2});
    cout << point.first << " " << point.second;

    vector<pair<int,int>> v;
    v.push_back(point);
    v.push_back({-2,4});
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    // 因為可以放任意的資料型態，所以都可以亂湊
    vector<pair<int,map<int>>> v;

    system("pause");
    return 0;
}
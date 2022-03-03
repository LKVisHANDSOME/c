#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(auto &x:v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v({1,4,5,7,-1});
    print(v);
    sort(v.begin(),v.end());
    print(v);
    // lambda
    sort(v.begin(),v.end(),[&](int &a,int &b){
        return a>b;
    });
    print(v);
    system("pause");
    return 0;
}
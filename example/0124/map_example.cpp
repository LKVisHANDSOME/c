#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    while(n--){
        int num;
        cin >> num;
        mp[num]++;
    }
    for(auto&x:mp){
        if(x.second!=2){
            cout << x.first << " ";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
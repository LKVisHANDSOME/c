#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> mp;
    string temp;
    while(n--){
        string country;
        cin >> country >> temp >> temp;
        if(mp.count(country)){
            mp[country]++;
        }
        else{
            mp[country]=1;
        }
    }
    for(auto &x:mp){
        cout << x.first << " " << x.second << endl;
    }
    system("pause");
    return 0;
}
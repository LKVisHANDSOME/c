#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1;
    print(v1);

    vector<int> v2(3,-1);
    print(v2);

    int arr[5]={1,2,3,4,5};
    vector<int> v3(arr,arr+5);
    print(v3);

    vector<int> v4(v3.begin(),v3.end());
    print(v4);
    
    vector<int> v5(v3.begin()+1,v3.begin()+3);
    print(v5);

    vector<int> v6(v5);
    print(v6);

    system("pause");
    return 0;
}
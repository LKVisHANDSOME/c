#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(auto &number:v){
        cout << number << " ";
    }
    cout << endl << endl;
}

int main() {
    vector<int> v({1,2,3,4,5});
    print(v);

    v.insert(v.begin()+2,7);
    print(v);

    v.erase(v.begin()+1);
    print(v);


    system("pause");
    return 0;
}
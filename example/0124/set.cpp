#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> st({1,2,3});
    for(auto &x:st){
        cout << x << " ";
    }
    cout << endl;
    st.insert(3);
    for(auto &x:st){
        cout << x << " ";
    }
    cout << endl;
    auto it = st.find(3);
    st.erase(it);
    for(auto &x:st){
        cout << x << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void print_set(multiset<int> &st){
    for(auto&x:st){
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    multiset<int> st;
    st.insert(5);
    st.insert(3);
    st.insert(1);
    print_set(st);

    st.insert(1);
    print_set(st);

    auto it = st.find(1);
    st.erase(it);
    print_set(st);

    system("pause");
    return 0;
}
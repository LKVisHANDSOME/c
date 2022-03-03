#include <bits/stdc++.h>
using namespace std;

void print_set(set<int> &st){
    for(auto&x:st){
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    set<int> st;
    st.insert(5);
    st.insert(3);
    st.insert(1);
    print_set(st);

    st.insert(1);
    print_set(st);

    st.erase(1);
    print_set(st);

    cout << *st.begin() << " " << *st.rbegin() << endl;

    int target=3;
    auto it = st.find(target);
    if(it!=st.end()){
        cout << *it << " exist" << endl;
    }
    else{
        cout << target << " is not found" << endl;
    }
    system("pause");
    return 0;
}
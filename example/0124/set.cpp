#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
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
=======
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
>>>>>>> 44e14c0c4a4e34fb135e6ba939ff0adaca576fc5
    system("pause");
    return 0;
}
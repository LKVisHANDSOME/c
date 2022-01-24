#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(int i = 0; i < v.size(); i++)     cout << v[i] << " ";
    cout << endl << endl;
}

int main()
{
    int n,num;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    cout << "v.back() = " << v.back() << "\nv[v.size()-1] = " << v[v.size() - 1] << endl << endl;

    v.clear();
    cout << "after v.clear() , v.size() = " << v.size() << endl << endl;

    cout << "push_back 1 2 3 4 5" << endl << endl;
    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
    }
    cout << "now v have : ";
    print(v);

    v.pop_back(), v.pop_back();
    cout << "after 2 pop_back , v have : ";
    print(v);

    system("pause");
    return 0;
}
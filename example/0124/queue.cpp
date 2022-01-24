#include <bits/stdc++.h>
using namespace std;

// 此程式碼來自 https://jasonblog.github.io/note/c++/stl_rong_qi_4e0029_-_ji_ben_jie_shao.html

int main(){
    queue<int> q;       // 一個空的 queue

    for(int i=0 ; i<5 ; i++){
        q.push(i * 10);
    }                   // [0, 10, 20, 30, 40]

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }                   // 依序輸出 0 10 20 30 40   

    system("pause");
    return 0;
}
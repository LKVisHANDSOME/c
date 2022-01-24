#include <bits/stdc++.h>
using namespace std;

// 此程式碼來自 https://jasonblog.github.io/note/c++/stl_rong_qi_4e0029_-_ji_ben_jie_shao.html

int main(){
    stack<int> s;

    s.push(10);     //  | 30 |
    s.push(20);     //  | 20 |   疊三個盤子
    s.push(30);     //  |_10_|   10 在最下面

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }                                   // 輸出 30, 20, 10
    system("pause");
    return 0;
}
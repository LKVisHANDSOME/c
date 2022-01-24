#include <bits/stdc++.h>
using namespace std;

// 此程式碼來自 https://jasonblog.github.io/note/c++/stl_rong_qi_4e0029_-_ji_ben_jie_shao.html

int main(){
    map<string, int> m;     // 從 string 對應到 int

                        // 設定對應的值
    m["one"] = 1;       // "one" -> 1
    m["two"] = 2;       // "two" -> 2
    m["three"] = 3;     // "three" -> 3

    cout << m.count("two") << endl;     // 1 -> 有對應
    cout << m.count("ten") << endl;     // 0 -> 沒有對應

    cout << m["two"] << endl;

    for(auto &it:m){
        cout << m.firtst << " " << m.second << endl;
    }

    system("pause");
    return 0;
}
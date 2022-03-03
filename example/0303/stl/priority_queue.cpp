#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);
    priority_queue<int> pq;
    pq.push(3);
    pq.push(1);
    pq.push(7);
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }

    system("pause");
    return 0;
}
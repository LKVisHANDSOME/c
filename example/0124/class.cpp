#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    ListNode *next;
    int val;
    ListNode();
    ListNode(int val);
};

ListNode::ListNode(){
    next=NULL;
    val=-1;
}

ListNode::ListNode(int x){
    next=NULL;
    val=x;
}

int main() {
    ListNode *node1 = new ListNode();
    ListNode *node2 = new ListNode(3);
    cout << node1->val << " " << node2->val << endl;

    system("pause");
    return 0;
}
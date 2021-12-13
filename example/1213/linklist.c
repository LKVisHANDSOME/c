#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} Node;

// 創造一個新節點的時候通常會設定他的值，並將他的next先暫時指向NULL
Node *generate_node(int val)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->val = val;
    newnode->next = NULL;
    return newnode;
}

// insert新node的時候通常會先跑到要insert位置的上一個node，然後將上一個node->next指向新node，並將新node->next指向原本上一個node->next
void *insert(Node *last, int val)
{
    Node *newnode = generate_node(val);
    Node *temp;
    temp = last->next;
    last->next = newnode;
    newnode->next = temp;
}

// 刪除一個節點通常就是把上一個節點的next直接略過要刪除的節點指向要刪除節點的next
void *delete (Node *last)
{
    Node *temp = last->next;
    last->next = last->next->next;
    free(temp);
}

// 遍歷linklist(走過一遍linklist中的所有元素)
void travelsal(Node *head)
{
    // while 版
    Node *p = head;
    while (p != NULL)
    {
        p = p->next;
    }
    // for 版
    for (Node *p = head; p != NULL; p = p->next)
    {
        ;
    }
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->val = 1;
    head->next = NULL;

    // 初始化長度為9的linklist (1,2,3,4,5,6,7,8,9)
    Node *p = head;
    for (int i = 2; i < 10; i++)
    {
        Node *newnode = generate_node(i);
        p->next = newnode;
        p = p->next;
    }
    // 利用while迴圈和linklist尾端的next指向NULL的特性遍歷linklist
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    // 範例:在5後面插入一個val=10的新node
    // 從head開始往後，直到走到5那格
    p = head;
    int cnt = 1;
    int target = 5;
    while (cnt != target)
    {
        p = p->next;
        cnt++;
    }
    printf("%d\n", p->val);
    // 創一個val=10的新node
    // Node *newnode = (Node *)malloc(sizeof(Node));
    // newnode->val = 10;
    //將6先存到temp，將5指向10，10指向6，就成功完成了5->10->6的操作
    Node *temp;
    // p->next = newnode;
    // newnode->next = temp;
    insert(p, 10);
    p = head;
    // print出來確認修改正確
    while (p)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    // 接下來的範例是刪除val=7的那個node
    // 我們知道在剛剛操作完後val=7的那個node在第8格，
    // 我們要讓6->7->8變成6->8，所以我們要先走到6(head往後走6格)
    int x = 6;
    p = head;
    while (x--)
    {
        p = p->next;
    }
    //將7的位置先存進temp，把6指向8，把7 free掉
    delete(p);
    p = head;
    while (p)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    system("pause");
    return 0;
}
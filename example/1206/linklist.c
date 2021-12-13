#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} Node;
//niwnqi

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->val = 1;
    head->next = NULL;

    // 初始化長度為9的linklist (1,2,3,4,5,6,7,8,9)
    Node *p = head;
    for (int i = 2; i < 10; i++)
    {
        Node *newnode = (Node *)malloc(sizeof(Node));
        newnode->val = i;
        newnode->next = NULL;
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
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->val = 10;
    //將6先存到temp，將5指向10，10指向6，就成功完成了5->10->6的操作
    Node *temp = p->next;
    p->next = newnode;
    newnode->next = temp;
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
    temp = p->next;
    p->next=temp->next;
    free(temp);
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
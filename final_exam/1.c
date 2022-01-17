#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

int getDecimalValue(struct ListNode *head){
    int res=0;
    while(head){
        res*=2;
        res+=head->val;
        head=head->next;
    }
    return res;
}

void Construct(struct ListNode* node,int length, int num)
{

    int a;
    scanf("%d", &a);
    node->val = a;

    if(num >= length)
    {
        node->next = NULL;
        return;
    }
    node->next = (struct ListNode* )malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}

int main()
{
    struct ListNode *head;
    int n, a, length;
    head = (struct ListNode* )malloc(sizeof(struct ListNode));
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &length);
        Construct(head, length, 1);
        int ans = getDecimalValue(head);
        printf("%d\n", ans);
    }
    system("pause");
    return 0;
}
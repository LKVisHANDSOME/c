#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} Node;

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->val = 1;
    head->next = NULL;
    Node *p = head;
    for (int i = 2; i < 10; i++)
    {
        Node *newnode = (Node *)malloc(sizeof(Node));
        newnode->val = i;
        newnode->next = NULL;
        p->next = newnode;
        p = p->next;
    }
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    p = head;
    int cnt = 1;
    int target = 5;
    while (cnt != target)
    {
        p = p->next;
        cnt++;
    }
    printf("%d\n", p->val);
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->val = 10;
    Node *temp = p->next;
    p->next = newnode;
    newnode->next = temp;
    p = head;
    while (p)
    {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    int x = 6;
    p = head;
    while (x--)
    {
        p = p->next;
    }
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
#include <stdio.h>
#include <stdlib.h>

struct linklist {
    int val;
    struct linklist *next;
} typedef Node;

Node *initial(){
    Node *head = (Node *)malloc(sizeof(Node));
    head->val = 1;
    Node *p = head;
    for (int i = 2; i < 10; i++) {
        Node *newnode = (Node *)malloc(sizeof(Node));
        newnode->val = i;
        p->next = newnode;
        p = p->next;
    }
    p->next = NULL;
    return head;
}

int main()
{
    Node *head = initial();
    p = head;
    while (p) {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
    system("pause");
    return 0;
}
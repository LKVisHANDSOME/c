#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *left;
    struct node *right;
} Node;

int main()
{
    Node *root = (Node *)malloc(sizeof(Node));
    root->val = 1;

    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->val = 2;
    root->left=temp;

    temp = (Node *)malloc(sizeof(Node));
    temp->val = 3;
    root->right=temp;

    temp = (Node *)malloc(sizeof(Node));
    temp->val = 4;
    root->left->left = temp;
    temp->left = NULL;
    temp->right = NULL;

    temp = (Node *)malloc(sizeof(Node));
    temp->val = 5;
    root->left->right = temp;
    temp->left = NULL;
    temp->right = NULL;

    temp = (Node *)malloc(sizeof(Node));
    temp->val = 6;
    root->right->left = temp;
    temp->left = NULL;
    temp->right = NULL;

    temp = (Node *)malloc(sizeof(Node));
    temp->val = 7;
    root->right->right = temp;
    temp->left = NULL;
    temp->right = NULL;

    system("pause");
    return 0;
}
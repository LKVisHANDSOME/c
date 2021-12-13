#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *left;
    struct node *right;
} Node;

Node *generate_node(int val)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->val = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main()
{
    Node *root = generate_node(1);

    Node *temp;
    temp = generate_node(2);
    root->left=temp;

    temp = generate_node(3);
    root->right=temp;

    temp = generate_node(4);
    root->left->left = temp;

    temp = generate_node(5);
    root->left->right = temp;

    temp = generate_node(6);
    root->right->left = temp;

    temp = generate_node(7);
    root->right->right = temp;

    system("pause");
    return 0;
}
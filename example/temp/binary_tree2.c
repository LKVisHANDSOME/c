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

void addto_left(Node *parent,int val){
    Node *newnode = generate_node(val);
    parent->left = newnode;
}

void addto_right(Node *parent,int val){
    Node *newnode = generate_node(val);
    parent->right = newnode;
}


int main()
{
    Node *root = generate_node(1);

    addto_left(root,2);

    addto_right(root,3);

    addto_left(root->left,4);

    addto_right(root->left,5);

    addto_left(root->right,6);

    addto_right(root->right,7);

    system("pause");
    return 0;
}
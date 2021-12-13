#include <stdio.h>
#include <stdlib.h>

typedef struct node {
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

void insert_left(Node *parent, int val)
{
    Node *newnode = generate_node(val);
    Node *temp = parent->left;
    parent->left = newnode;
    newnode->left = temp;
}

void addto_left(Node *parent, int val)
{
    Node *newnode = generate_node(val);
    parent->left = newnode;
}

void insert_right(Node *parent, int val)
{
    Node *newnode = generate_node(val);
    Node *temp = parent->right;
    parent->right = newnode;
    newnode->right = temp;
}

void addto_right(Node *parent, int val)
{
    Node *newnode = generate_node(val);
    parent->right = newnode;
}

void delete_left_have_child(Node *parent)
{
    Node *temp = parent->left;
    parent->left = temp->left;
    free(temp);
}

void delete_right_have_child(Node *parent)
{
    Node *temp = parent->right;
    parent->right = temp->right;
    free(temp);
}

void delete_left(Node *parent)
{
    free(parent->left);
    parent->left = NULL;
}

void delete_right(Node *parent)
{
    free(parent->right);
    parent->right = NULL;
}

int main()
{
    Node *root = (Node *)malloc(sizeof(Node));
    root->val = 1;

    Node *temp = (Node *)malloc(sizeof(Node));
    root->left = temp;
    temp->val = 2;

    temp = (Node *)malloc(sizeof(Node));
    root->right = temp;
    temp->val = 3;

    temp = (Node *)malloc(sizeof(Node));
    root->left->left = temp;
    temp->val = 4, temp->left = NULL, temp->right = NULL;

    temp = (Node *)malloc(sizeof(Node));
    root->left->right = temp;
    temp->val = 5, temp->left = NULL, temp->right = NULL;

    temp = (Node *)malloc(sizeof(Node));
    root->right->left = temp;
    temp->val = 6, temp->left = NULL, temp->right = NULL;

    temp = (Node *)malloc(sizeof(Node));
    root->right->right = temp;
    temp->val = 7, temp->left = NULL, temp->right = NULL;

    system("pause");
    return 0;
}
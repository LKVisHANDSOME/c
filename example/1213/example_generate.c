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
    Node *root = generate_node(1);
    root->val = 1;

    Node *temp = generate_node(2);
    root->left = temp;

    temp = generate_node(3);
    root->right = temp;

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
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

void addto_left(Node *parent,int val){
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

void addto_right(Node *parent,int val){
    Node *newnode = generate_node(val);
    parent->right = newnode;
}

void delete_left_have_child(Node *parent){
    Node *temp=parent->left;
    parent->left=temp->left;
    free(temp);
}

void delete_right_have_child(Node *parent){
    Node *temp=parent->right;
    parent->right=temp->right;
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
    addto_left(root,2);
    addto_right(root,3);
    addto_left(root->left,4);
    addto_right(root->left,5);
    addto_left(root->right,6);
    addto_right(root->right,7);
    system("pause");
    return 0;
}
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

void addto_left(Node *parent, int val)
{
    Node *newnode = generate_node(val);
    parent->left = newnode;
}

void addto_right(Node *parent, int val)
{
    Node *newnode = generate_node(val);
    parent->right = newnode;
}

void DFS1(Node *node){
    printf("%d ",node->val);
    if(node->left){
        DFS1(node->left);
    }
    if(node->right){
        DFS1(node->right);
    }
}

void DFS2(Node *node){
    if(node->left){
        DFS2(node->left);
    }
    printf("%d ",node->val);
    if(node->right){
        DFS2(node->right);
    }
}

void DFS3(Node *node){
    if(node->left){
        DFS3(node->left);
    }
    if(node->right){
        DFS3(node->right);
    }
    printf("%d ",node->val);
}

int main()
{
    Node *root = generate_node(1);
    addto_left(root, 2);
    addto_right(root, 3);
    addto_left(root->left, 4);
    addto_right(root->left, 5);
    addto_left(root->right, 6);
    addto_right(root->right, 7);

    DFS1(root);
    printf("\n");
    DFS2(root);
    printf("\n");
    DFS3(root);
    printf("\n");
    
    system("pause");
    return 0;
}
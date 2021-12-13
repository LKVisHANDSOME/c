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

int main()
{
    Node *root = generate_node(1);
    addto_left(root, 2);
    addto_right(root, 3);
    addto_left(root->left, 4);
    addto_right(root->left, 5);
    addto_left(root->right, 6);
    addto_right(root->right, 7);

    Node *queue[10];
    queue[0] = root;
    // 1 2 3 
    int front = 0, rear = 1, depth = 0;
    while (front != rear) {
        int n = rear - front;
        printf("depth = %d : ", depth);
        for (int i = 0; i < n; i++) {
            Node *node = queue[front++];
            printf("%d ", node->val);
            if (node->left) queue[rear++] = node->left;
            if (node->right) queue[rear++] = node->right;
        }
        printf("\n");
        depth++;
    }
    printf("\n");
    system("pause");
    return 0;
}
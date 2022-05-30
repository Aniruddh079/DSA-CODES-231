#include<stdio.h>
#include<stdlib.h>
#define bool int

struct node
 {
    int data;
    struct node* left;
    struct node* right;
};

int height(struct node* node);
bool isBalanced(struct node *root)
{
    int leftheight;
    int rightheight;
    if (root == NULL)
        return 1;
    leftheight = height(root->left);
    rightheight = height(root->right);

    if (abs(leftheight - rightheight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    return 0;
}

int max(int a, int b)
 {
    return (a >= b) ? a : b;
}

int height(struct node* node)
{
    if (node == NULL)
        return 0;
    return 1 + max(height(node->left), height(node->right));
}

struct node* newNode(int data) {
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main() {
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8);

    if (isBalanced(root))
        printf("Tree is AVL");
    else
        printf("Tree is not AVL");

    getchar();
    return 0;
}

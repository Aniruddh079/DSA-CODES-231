//Q7
#include<stdlib.h>
#include<stdio.h>

struct binarytree
{
    int data;
    struct binarytree * right, * left;
};

typedef struct binarytree node;

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

int main()
{
    int i;
    node *root;
    node *tmp;
    int totalsum;
    int a[100];
    root = NULL;
    /* Inserting nodes into tree */
    for(i=0;i<6;i++)
    {
        printf("Enter Number %d\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
    insert(&root, a[i]);
    }
    print_preorder(root);




}

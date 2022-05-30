#include<stdlib.h>
#include<stdio.h>

struct btree
{
    int n;
    struct btree * right, * left;
};

typedef struct btree node;

void insert(node ** tree, int val)
{

    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->n = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->n)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->n)
    {
        insert(&(*tree)->right, val);
    }

}


int count(node *tree)
{
    int c=0;

    if (tree ==NULL)
        return 0;

    else
    {
        c += count(tree->left);
        c += count(tree->right);
        return c;
    }
}


int main()
{
    node *root;
    node *tmp;
    int c;

    root = NULL;
    insert(&root, 9);
    insert(&root, 10);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 2);


    printf("Number of nodes in the binary tree is %d \n",c);

}

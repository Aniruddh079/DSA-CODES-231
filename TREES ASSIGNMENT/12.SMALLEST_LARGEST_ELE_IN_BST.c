//  q12
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


void largest_element(node * tree)
{
    if (tree)
    {
        largest_element(tree->right);
        if((tree->right)==NULL)
        {
            printf("Largest element in BST: %d\n",tree->data);
        }

    }
}

void smallest_element(node * tree)
{
    if (tree)
    {
                smallest_element(tree->left);
        if((tree->left)==NULL)
        {
            printf("Smallest element in BST: %d",tree->data);
        }

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


    largest_element(root);
    smallest_element(root);


}


//Q6
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
    if(val==NULL)
    {
        return;
    }
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    insert(&(*tree)->left, val);
  insert(&(*tree)->right, val);

`
}


void search_element(node * tree)
{
    int key=200;
    if (tree)
    {
        if(tree->data==key)
        {
            printf("element found\n");
            exit(0);
        }
        search_element(tree->left);
        search_element(tree->right);
    }
}

int main()
{
    node *root;
    node *tmp;
    int c;

    root = NULL;
    /* Inserting nodes into tree */
    insert(&root, 9);
    insert(&root, 10);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 2);

    printf("Post Order Display\n");
    search_element(root);

   printf("Element not found \n");

}

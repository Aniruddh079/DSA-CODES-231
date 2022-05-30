//Q10
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


void print_postorder(node * tree)
{
    int key=2;
    if (tree)
    {
        if(tree->data==key)
        {
            printf("element found\n");
            exit(0);
        }
        print_postorder(tree->left);
        print_postorder(tree->right);
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
    print_postorder(root);

   printf("Element not found \n");

}

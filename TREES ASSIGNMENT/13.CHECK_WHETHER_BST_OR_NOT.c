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

        insert(&(*tree)->left, val);

   else if(val > (*tree)->data)

        insert(&(*tree)->right, val);
        if((val<((*tree)->left)) || (val>((*tree)->right)))
{
    printf(" not BST");
exit(0);
}
}

/*void print_postorder(node * tree)
{

    if (tree)
    {
        if(tree->left<tree->data && tree->right>tree->data)
       {
                   printf("BST");

        print_postorder(tree->left);
        print_postorder(tree->right);
       }
       else
       {
           printf("Not a BST \n");
           exit(0);
       }
       // printf("%d\n",tree->data);
    }
}*/

int main()
{
    node *root;
    node *tmp;

    root = NULL;
    /* Inserting nodes into tree */
    insert(&root, 9);
    insert(&root, 8);
  //  insert(&root, NULL);
    insert(&root, 19);
    //insert(&root, NULL);
    }

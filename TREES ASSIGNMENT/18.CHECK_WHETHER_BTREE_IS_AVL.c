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


}




int height(node * tree)
{
    int leftheight;
    int rightheight;
   // int key=10;
    if (tree)
    {
         leftheight=height(tree->left);
         rightheight=height(tree->right);
       // if((leftheight==rightheight)||((leftheight)-(rightheight)==-1)||(leftheight-rightheight==1))
          //printf("Given binary tree is AVL\n");
        //return;
    }
    if((leftheight==rightheight)||((leftheight)-(rightheight)==-1)||(leftheight-rightheight==1))
          printf("Given binary tree is AVL\n");
}


int main()
{
    node *root;
    node *tmp;
  //  int si, s2;

    root = NULL;
    /* Inserting nodes into tree */
    insert(&root, 9);
    insert(&root, 10);
    insert(&root, 12);
    insert(&root, NULL);
        insert(&root, NULL);
    insert(&root, NULL);


height(root);

   //printf("Height of binary tree is %d\n",si);

}


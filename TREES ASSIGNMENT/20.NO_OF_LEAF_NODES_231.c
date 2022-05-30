#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left, *right;

};

struct node* createnode(int n)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;

    return(newnode);
}


int count = 0;
int leafnodes(struct node* newnode)
{

    if(newnode != NULL)
    {
        leafnodes(newnode->left);
        if((newnode->left == NULL) && (newnode->right == NULL))
        {
            count++;
        }
        leafnodes(newnode->right);
    }
    return count;

}


int main()
{

    struct node *newnode = createnode(25);
    newnode->left = createnode(27);
    newnode->right = createnode(19);
    newnode->left->left = createnode(17);
    newnode->left->right = createnode(91);
    newnode->right->left = createnode(13);
    newnode->right->right = createnode(55);


    printf("Number of leaf nodes in first Tree are\t%d\n",leafnodes(newnode));

}

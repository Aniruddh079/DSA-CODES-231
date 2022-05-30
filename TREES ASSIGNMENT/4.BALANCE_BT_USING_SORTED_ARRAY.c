
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


        insert(&(*tree)->left, val);

}

void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}

int main()
{
    node *root;
    node *tmp;
int i,j,a[100];
    root = NULL;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=0;

    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
            }

        }

    }
printf("Sorted array \n");
 for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<5;i++)
    {
            insert(&root, a[i]);

    }

    printf("Post Order Display of binary tree\n");
    print_postorder(root);


}



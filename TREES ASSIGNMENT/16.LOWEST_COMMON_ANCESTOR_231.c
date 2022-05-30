#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
}*tree;
tree lca(tree root, int node_1, int node_2)
{
    if (root != NULL)
    {
        if (root->data > node_1 && root->data > node_2)
        {
            return lca(root->left, node_1, node_2);
        }
        if (root->data < node_1 && root->data < node_2)
        {
            return lca(root->right, node_1, node_2);
        }
        return root;
    }
}
tree insert(tree root, int value)
{
    tree temp = NULL;
    if(root==NULL)
    {
        temp = (tree)malloc(sizeof(struct node));
        temp->left = temp->right = NULL;
        temp->data = value;
        root = temp;
        return root;
    }
    if(value<root->data)
        root->left = insert(root->left, value);
    else if(value>root->data)
            root->right = insert(root->right, value);
    return root;
}
tree newNode(int data)
{
    tree p = (tree)malloc(sizeof(struct node));
    p->data = data;
    p->left = p->right = NULL;
    return(p);
}
int main()
{
    tree root = NULL;
    int n, d;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &d);
        root = insert(root,d);
    }
       int node_1 = 10, node_2 = 14;
  tree t = lca(root, node_1, node_2);
    printf("LCA of %d and %d is %d \n", node_1, node_2, t->data);
    return 0;
}

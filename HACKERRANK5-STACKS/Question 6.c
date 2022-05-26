/*Arjun and Bheem are playing a game. In this game both of them are provided with the stack of n numbers. Strategy to play the game is: Arjun and Bheem pick an element from their stacks.

Method to be followed to play the game is:

a. If the number picked by Arjun is bigger than Bheem then this step's output is 1. Bheem removes the number that was picked from his stack.

b. If the number picked by Arjun is smaller than Bheem then this step's output is 2. Arjun removes the number that was picked from his stack.

c. If both have the same number then this step's output is 0. Both Arjun and Bheem remove the number that was picked from their stack. The game ends when at least one of them has no more elements to be picked.

The game ends when at least one of them has no more elements to be picked.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node* Node;

Node getnode(int data)
{
    Node nw;
    nw=(Node)malloc(sizeof(struct node));
    if(nw==NULL)//Stack full
    {
        return(nw);
    }
    nw->data=data;
    return(nw);
}

Node push(Node first,int data)
{
   Node nw;
    nw=getnode(data);
    if(first==NULL)
    {
        first=nw;
        nw->next=NULL;
        return(first);
    }
    else
    {
        nw->next=first;
        first=nw;
        return(first);
    }

}

Node pop(Node first)
{
    Node temp=first;
    if(first==NULL)
    {
        return(first);
    }
    else if(first->next==NULL)
    {
        free(temp);
        first=NULL;
        return(first);
    }
    else
    {
        first=first->next;
        free(temp);
        return(first);
    }
}

int main()
{

    int n,i,data;
    Node first1=NULL,first2=NULL,temp1,temp2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        first1=push(first1,data);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        first2=push(first2,data);
    }
    temp1=first1;
    temp2=first2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data==temp2->data)
        {
            printf("%d ",0);
            temp1=pop(temp1);
            temp2=pop(temp2);
        }
        else if(temp1->data>temp2->data)
        {
            printf("%d ",1);
            temp2=pop(temp2);
        }
        else
        {
            printf("%d ",2);
            temp1=pop(temp1);
        }
    }
    return 0;
}

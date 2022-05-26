/*Given a doubly linked list containing N nodes, the task is to delete all the even nodes from the list.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct even
{
    int data;
    struct even *next;
    struct even *prev;
}*node;

node getnode(int num)
{
    node newnode;
    newnode=(node)malloc(sizeof(struct even));
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

node insert(node head,int num)
{
    node newnode=getnode(num);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    node cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->prev=cur;
    return head;
}

node operate(node head,int n)
{
    node cur=head,temp=NULL;
    for(int i=0;i<n;i++)
    {
        if(cur->data%2 == 0)
        {
            temp->next=cur->next;
            cur->next->prev=temp;
            cur=cur->next;
        }
        else
        {
            temp=cur;
        cur=cur->next;
        }
    }
    return head;
}

void display(node head)
{
    printf("Final List = ");
    node cur=head;
    while(cur!=NULL)
    {
        printf("%d <=> ",cur->data);
        cur=cur->next;
    }
}

int main()
{
    node head=NULL;
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        head=insert(head,num);
    }
    head=operate(head,n);
    display(head);
    return 0;
}

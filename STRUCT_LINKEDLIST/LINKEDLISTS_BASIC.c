#include<stdio.h>
#include<stdlib.h>

struct node

{
    int data;
    struct node *next;
};

typedef struct node *NODE;
NODE insert_end(NODE);
void Display(NODE);
NODE getNODE();
void swap(int* a, int* b);
void main()
{
int n,i;
    NODE head = NULL;
    printf("enter size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    head = insert_end(head);
    Display(head);
}


NODE getNode()
{
    NODE NEWNODE;
    int element;
    NEWNODE=malloc(sizeof(struct node));
    if(NEWNODE==NULL)
    {
        printf("Memory not allocated\n");
    }

    scanf("%d",&element);
    NEWNODE->data=element;
    NEWNODE->next=NULL;
    return NEWNODE;
}

NODE insert_end(NODE head)
{
    NODE Newnode=getNode();
    if(head==NULL)
    {
        head = Newnode;
        return head;
    }
    else
    {
        NODE temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=Newnode;
        return head;
    }
}

void Display(NODE head)
{
    if(head==NULL)
    {

       return;
    }
    NODE temp=head;

    printf("\n");
    int sum=0;
    while(temp!=NULL)
    {
         if(((temp->data)%2)==0 || (((temp->data)%5)==0))
       {
           printf("%d ",temp->data);
           sum=sum+temp->data;
       }
        temp=temp->next;
        }
        printf("\n%d",sum);
    }


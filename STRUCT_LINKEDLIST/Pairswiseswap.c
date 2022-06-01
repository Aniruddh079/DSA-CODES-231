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
void pairWiseSwap(NODE);
void swap(int* a, int* b);
void main()
{
int n,i;
    NODE head = NULL;
    printf("enter size of list\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
   head = insert_end(head);
  // Display(head);
   pairWiseSwap(head);
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
    printf("Enter the data part\n");
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
        printf("list is empty\n");
       return;
    }
    NODE temp=head;
    printf("\n");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void pairWiseSwap(NODE head)

{
    NODE temp = head;
    while(temp!=NULL && temp->next!=NULL)
    {
        swap(&temp->data,&temp->next->data);
        temp = temp->next->next;
    }
    Display(head);

}

void swap(int *a,int *b)

{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

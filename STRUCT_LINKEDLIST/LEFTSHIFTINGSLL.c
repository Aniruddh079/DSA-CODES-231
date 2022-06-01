
#include<stdio.h>
#include<stdlib.h>

typedef struct SinglyLinkedListNode
{
    int data;
    struct node*next;

}node;

node*create(int n);
void shiftNode(node*head);

int main()
{
    int n;
    node*HEAD=NULL;
    scanf("%d",&n);
    HEAD=create(n);
    shiftNode(HEAD);
    return 0;
}

node*create(int n)
{
    int i=0;
    node*head=NULL;
    node*temp=NULL;
    node*p=NULL;

    for(i=0;i<n;i++)
    {
        temp=(node*)malloc(sizeof(node));
        scanf("%d",&(temp->data));
        temp->next=NULL;
        if(head==NULL)
        {head=temp;}
        else
        {
            p=head;
            while(p->next!=0)
            {
                p=p->next;
            }
            p->next=temp;
        }
    }
    return head;
}

void shiftNode(node*head)
{
    struct SinglyLinkedListNode*temp,*position;
    int i,k;
    if(head==NULL)
    {
        exit(0);
    }
    else
    {
    scanf("%d",&k);
    position=malloc(sizeof(struct SinglyLinkedListNode));
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }

    for(i=1;i<=k;i++)

    {
        temp->next=head;
        temp=head;
        head=head->next;
        temp->next=NULL;
    }


    node*p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    }

}


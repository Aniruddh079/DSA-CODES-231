#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node*insertend(struct node *head)
{
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    if(new==NULL)
    {
        exit(0);
    }
    printf("\nEnter data");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        for(temp=head;temp->next!=NULL;temp=temp->next);
        temp->next=new;
    }
    return(head);
}

void merge(struct node **a,int k)
{
    int i,j;
    struct node *cur;
    for(i=0;i<k;i++)
    {
        cur=a[i];
        for(cur=a[i];cur->next!=NULL;cur=cur->next);
        cur->next=a[i+1];
    }
}
void disp(struct node *head)
{
    struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("\n%d",temp->data);
    }
}
int main()
{
    int k,i,j,n;
    struct node **a;
    printf("\nEnter k");
    scanf("%d",&k);
    a=malloc(sizeof(struct node *)*k);
    for(i=0;i<k;i++)
    {
        printf("\nEnter n");
        scanf("%d",&n);
        a[i]=NULL;
        for(j=0;j<n;j++)
            a[i]=insertend(a[i]);
    }
    for(i=0;i<k;i++)
    {
        disp(a[i]);
    }
    merge(a,k);
    printf("\nAfter merging\n");
    disp(a[0]);
return 0;
}

/*On the release date of the movie Venom 2, there is a huge line at the ticket counter at INOX and price of each ticket is 300Rs. To manage the huge number of ticket buyers,
 the INOX staff named Vikram requests the people to form new line formed in such a way that maximum K number of people who have age between 18 to 25, are allowed. Display the
 content of new line. One of the person standing in new line wants to know his/her position and requests INOX staff to tell his/her position. After approving the request of the
  person, INOX staff displays the current position. Help INOX staff to display total amount collected in both lines. The people in line are recognized by Name and Age.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node
{
   char name[20];
   int age;
   struct node *next;
};

typedef struct node *NODE;

NODE getnode();
NODE enqueue(NODE);
void disp(NODE,int);

int main()
{
    NODE head=NULL;
    int n,i=0,k;
    scanf("%d",&n);
    scanf("%d",&k);
    if(n<1 || n>100)
    {
        printf("N should be greater than 0\n");
        exit(0);
    }
    while(i<n)
    {
        head=enqueue(head);
        i++;
    }
    disp(head,n);
    return 0;
}

NODE getnode()
{
    NODE nw;
    nw=malloc(sizeof(struct node));
    if(nw==NULL)
    {
        printf("Memory is not allocated\n");
    }
    scanf("%s%d",nw->name,&nw->age);
    nw->next=NULL;
    return nw;
}

NODE enqueue(NODE head)
{
    NODE nw=getnode();
    NODE cur=head;
    if(head==NULL)
    {
        head=nw;
        return head;
    }
    else
    {
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=nw;
        return head;
    }
}

void disp(NODE head, int n)
{
    NODE temp=head;
    char person[20];
    scanf("%s",person);
    int count=0,pos=0,cost1,cost2;
     while(temp!=NULL)
     {
         if(temp->age>=18 && temp->age<=25)
         {
             count++;
             printf("%s %d\n",temp->name,temp->age);
         }
         temp=temp->next;
     }
     NODE cur=head;
     while(cur!=NULL)
     {
         if(cur->age>=18 && cur->age<=25)
         {
             pos++;
             if(strcmp(cur->name,person)==0)
             {
                 printf("%d\n",pos);
             }
         }
         else
         {
            if(strcmp(cur->name,person)==0)
             {
                 printf("0\n");
             }
         }
         cur=cur->next;
     }
     cost1=(n-count)*300;
     cost2=count*300;
     printf("%d\n",cost1);
     printf("%d",cost2);
}

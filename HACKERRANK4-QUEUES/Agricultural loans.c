/*The National Bank of India announces special schemes for agricultural loans. The schemes include short term loan with a maximum amount of 50000 and long-term loan not exceeding
 1,00,000. Farmers from the neighbouring villages visited the bank to avail the loan. Each day the bank can process at most 10 loan applications for both the schemes together. The
  farmers have to stand in the queue depending on the nature of their loan applied. The applications are processed from each queue starting with short term queue. Find the total
   loan amount applied for short term and long-term loans separately. Find the total number of applications processed on a day.

Farmer details: Name, Type of loan, Amount.*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct agri
{
    char name[20];
    char loantype[20];
    int amount;
    struct agri *next;
}*A;

A front1=NULL;
A rear1=NULL;
A front2=NULL;
A rear2=NULL;

A getnode()
{
    A nw;
    nw=(A)malloc(sizeof(struct agri));

if(nw==NULL)
    {
        printf("Memory error\n");
        return NULL;
    }
    scanf("%s%s%d",nw->name,nw->loantype,&nw->amount);
    nw->next=NULL;
    return nw;
}

void enqueue1(A nw)
{
    if(rear1==NULL)
    {
        front1=rear1=nw;
    }

    else
    {
        rear1->next=nw;
        rear1=nw;
    }
}

void enqueue2(A nw)
{
    if(rear2==NULL)
    {
        front2=rear2=nw;
    }

    else
    {
        rear2->next=nw;
        rear2=nw;
    }
}

void disp1()
{
    A cur=front1;
    if(front1==NULL)
    {
        printf("Queue Empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s %s %d",cur->name,cur->loantype,cur->amount);
        cur=cur->next;
        printf("\n");
    }
}

void disp2()
{
    A cur=front2;
    if(front2==NULL)
    {
        printf("Queue Empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s %s %d",cur->name,cur->loantype,cur->amount);
        cur=cur->next;
        printf("\n");
    }
}

int main()
{
    A nw;
    int n, short1=0, long1=0,count=0;
    scanf("%d",&n);
    while(n--)
        {
        nw = getnode();
        if (strcmp(nw->loantype,"short")==0 && (nw->amount < 50000))
        {
            short1 = nw->amount + short1;
            enqueue1(nw);
            count++;
        }
        else if(strcmp(nw->loantype,"long")==0 && (nw->amount < 100000))
         {
            long1 = nw->amount +long1;
            enqueue2(nw);
            count++;
        }
    }
    printf("Short term Application details\n");
    disp1();
    if(short1!=0){
       printf("%d\n",short1);
    }
    printf("Long term Application details\n");
    disp2();
    if(long1!=0){
       printf("%d\n",long1);
    }
    printf("%d\n",count);
}

/*One of the utility bill payments company wants to build a mobile recharge application for end users. The application should support all the network providers available in the
 market. The flow is, the user sends SMS in predefined format and application should parse the message and do the recharge accordingly.

Now, the biggest challenge is the application gets a huge number of recharge requests during the peak hours and is not able to process each request, so the company is looking
 for some strategy where all the requests are parked when they come and processed one by one. Initially all the requests are parked together and then the prepaid and post-paid
  requests are separated. The company would like to know the total amount of money collected towards prepaid and post-paid mobile recharge. Apply Problem Solving Framework to
  simulate the above scenario.*/
  #include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct mob_app
{
    char type[10];
    int amount;
    long long int num;
    struct mob_app *next;
};
typedef struct mob_app *node;

node getnode()
{
    node newn;
    newn = (node)malloc(sizeof(struct mob_app));
    if (newn == NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    newn->next = NULL;
    scanf("%lld %d %s",&newn->num,&newn->amount,newn->type);
    return newn;
}

node insert_rear(node head)
{
    node newn=NULL,cur=NULL;
    newn=getnode();
    if(head==NULL)
    {
       return newn;
    }
   else
    {
        cur=head;

        while(cur->next!=NULL)
        {
        cur=cur->next;
        }
        cur->next=newn;
    }
    return head;
}

void recharge(node head)
{
    int a=0,b=0,flag1=0,flag2=0;
    node cur=NULL;
        cur=head;
        printf("Postpaid Requests\n");
        while(cur!=NULL)
        {
            if(strcmp(cur->type,"postpaid")==0)
            {
                a=a+cur->amount;
                flag1=1;
            }
            cur=cur->next;
        }
            if(flag1==1)
            {
                cur=head;
                 while(cur!=NULL)
                 {
                     if(strcmp(cur->type,"postpaid")==0)
                     {
                        printf("%lld %d %s\n",cur->num,cur->amount,cur->type);
                     }cur=cur->next;
                  }
                printf("%d\n",a);
            }
            else
            {
                printf("Queue Empty\n0\n");
            }

         cur=head;
        printf("Prepaid Requests\n");

        while(cur!=NULL)
        {
            if(strcmp(cur->type,"prepaid")==0)
            {

                b=b+cur->amount;
                flag2=1;
            }
            cur=cur->next;
        }
        if(flag2==1)
        {
           cur=head;
           while(cur!=NULL)
           {
               if(strcmp("prepaid",cur->type)==0)
               {
                   printf("%lld %d %s\n",cur->num,cur->amount,cur->type);
               }            cur=cur->next;
          }
           printf("%d\n",b);
        }
          else
         {
          printf("Queue Empty\n0\n");
         }
}

int main()

 {
    node head=NULL;
    int i,N;
    scanf("%d",&N);
    if(N>0)
    {
        for(i=0;i<N;i++)
        {
            head=insert_rear(head);
        }
          recharge(head);
    }
    return 0;
}

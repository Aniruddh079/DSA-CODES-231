#include<stdio.h>
void penalty(int n);
void main()
{
    int n;
    printf("Enter the number of students who returned book late\n");
    scanf("%d",&n);
    penalty(n);
}

void penalty(int n)
{
    int pen,avg,i,m,temp1=0,temp2=730,sum=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the no. of days taken after deadline by student %d to return the book",i+1);
        scanf("%d",&m);
        pen=m*2;
        if(pen>temp1)
        {
            temp1=pen;
        }
        if(pen<temp2)
        {
            temp2=pen;
        }
        sum=sum+pen;
    }
    avg=sum/n;
    printf("Total penalty= %d\n",sum);
    printf("Average penalty= %d\n",avg);

    printf("Maximum penalty= %d\n",temp1);
    printf("Minimum penalty= %d\n",temp2);
}

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of people who pay tax\n");
    scanf("%d",&n);
    tax(n);
}

void tax(int n)
{
    int a[n],i,count1=0,count2=0,sum=0;
    float average;
    for(i=0;i<n;i++)
    {
        printf("enter the tax to be paid by person %d\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>250000)
        {
            count1++;
        }
        else if(a[i]>=50000 && a[i]<=150000)
        {
            count2++;
        }
        sum=sum+a[i];
    }
    average=sum/n;
    printf("\nNumber of people who paid tax more than 25 lakhs=%d\n",count1);
    printf("\nNumber of people who paid tax between 50,000 and 1,50,000= %d\n",count2);
        printf("average tax collected is =%f\n",average);
}

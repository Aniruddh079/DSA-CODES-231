#include<stdio.h>
void frequency(int*,int );
void main()
{
    int n;
    printf("enter the size of array \n");
    scanf("%d",&n);
    int num[n],i;
    printf("enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    frequency(&num,n);
}
void frequency(int *num,int n)
{
    int count_p,count_n,i;
    count_p=0;
    count_n=0;
    for( i=0;i<n;i++)
    {
        if(num[i]>=0)
            count_p++;
        if(num[i]<0)
            count_n++;
    }
    printf("the frequency of positive number is %d \n",count_p);
    printf("the frequency of negative number is %d \n",count_n);
}

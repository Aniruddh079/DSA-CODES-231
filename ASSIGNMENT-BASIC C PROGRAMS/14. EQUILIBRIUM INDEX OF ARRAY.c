#include<stdio.h>
void read(int*,int);
void eq(int*,int);
void main()
{
    int n;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    int num[n];
    read(&num,n);
    eq(&num,n);
}
void read(int *num,int n)
{
    int i;
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
}
void eq(int *num,int n)
{
    int i,j,k;
    int key,sum1=0,sum2=0;
    for(i=1;i<n-1;i++)
    {
        key=i;
        for( j=0;j<key;j++)
        {
            sum1=sum1+num[j];
        }
        for( k=key+1;k<n;k++)
        {
            sum2=sum2+num[k];
        }
        if(sum1==sum2)
        {
            printf("The equilibrium index is %d \n",key);
        }
        sum1=0;
        sum2=0;
    }
}

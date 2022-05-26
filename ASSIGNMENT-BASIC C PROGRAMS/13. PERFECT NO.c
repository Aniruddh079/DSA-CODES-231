#include<stdio.h>
perfect (a,n);
int main()
{

    int n,i;
    printf("enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    perfect(a,n);
}

perfect(int a[], int n)
{
    int i,j,m,sum;
    for(i=0;i<n;i++)
    {
        sum=0;
       m=    a[i];
        for(j=1;j<m;j++)
        {
            if(m%j==0)
                sum=sum+j;
        }
        if(sum==a[i])
        printf("\n%d\n",a[i]);
    }
}

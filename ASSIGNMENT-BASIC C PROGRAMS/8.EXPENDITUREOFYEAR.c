#include<stdio.h>
void expenditure(int a[12]);
void main()
{
    int n,a[12];
   //
// scanf("%d",&n);
    expenditure(a);
}

expenditure(int a[])
{
    int max, min, temp1,temp2,i;
    for(i=0;i<12;i++)
    {
        printf("enter the expenditure of month-%d\n",i+1);
        scanf("%d",&a[i]);

    }
    for(i=0;i<12;i++)
    {
        if(a[i]>35000)
        printf("Month %d has expenditure more than 35000\n",i+1);

    }
        max=a[0];
        temp1=0;
       for(i=0;i<12;i++)
       {
           if(a[i]>max)
           {
               max=a[i];
               temp1=i;
           }
       }
        printf("Month %d has highest expenditure %d\n",temp1+1, max);
       min=a[0];
       temp2=0;
       for(i=0;i<12;i++)
       {
           if(a[i]<min)
           {
               min=a[i];
               temp2=i;
           }
       }
       printf("Month %d has lowest expenditure %d\n",temp2+1,min);
    }


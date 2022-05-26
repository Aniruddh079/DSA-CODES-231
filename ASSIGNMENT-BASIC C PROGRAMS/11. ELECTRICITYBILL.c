#include<stdio.h>
void bill(int,int);
void main()
{
    int n,rs;
    printf("Enter the number of flats\n");
    scanf("%d",&n);
    bill(n, rs);
}
bill(int n, int rs)
{ int units,i;
    for(i=1;i<=n;i++)
    {

        printf("\nEnter the units of electricity consumed\n");
        scanf("%d",&units);
        if(units>0 && units<=100)
        {
            rs=1.5*units;
            printf("total bill to be paid by flat %d is %d",i,rs);
        }
        else if(units>=101 && units<=250)
        {
            rs=2.3*units;
            printf("total bill to be paid by flat %d is %d",i,rs);
        }
         else if(units>=251 && units<=600)
        {
            rs=4.0*units;
            printf("total bill to be paid by flat %d is %d",i,rs);
        }
         else if(units>600)
        {
            rs=5.5*units;
            printf("total bill to be paid by flat %d is %d",i,rs);
        }
        else
        {
            printf("invalid input");
        }
    }
}

#include<stdio.h>
void read(int,int);
void  disp(int,int);
void maxdigsum(int, int);
int main()
{

    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int a[n];
    read(a,n);
    disp(a,n);
   maxdigsum(a,n);
   return 0;
}

read(int a[], int n)
{
    int i;
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

disp(int a[], int n)
{
    int i;
    printf("Array :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}

maxdigsum(int a[],int n)
{
 int i,m,rem,sum=0,s=0;
 printf("\nThe greatest digits from each array element are as follows\n");
 for(i=0;i<n;i++)
 {
     m=a[i];
     while(m>0)
     {
         rem=m%10;
         if(rem>s)
            s=rem;
         m=m/10;
     }
     printf("%d\t",s);
     sum=sum+s;
 }
 printf("\nsum of the maximum digits from each array element=%d",sum);
}

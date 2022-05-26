#include<stdio.h>
int main()
{

    int n,i;
    printf("enter array size");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter no.s\n");
        scanf("%d",&a[i]);
    }
    reversearray(a,n);
}


   reversearray(int a[], int n)
   {
    int i;
    printf("Reversed array is\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
   }

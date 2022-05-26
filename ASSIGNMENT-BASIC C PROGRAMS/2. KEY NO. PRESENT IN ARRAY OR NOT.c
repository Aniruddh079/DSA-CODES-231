#include<stdio.h>
int main()
{

    int n,i, freq=0, key;
    printf("enter array size\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter no.");
         scanf("%d",&a[i]);
    }
    printf("enter a number whose presence in the array is to be checked");
    scanf("%d",&key);
    for(i=0;i<n;i++)
      {

       if(a[i]==key)
        {
        freq++;
         printf(" %d is present at address %d\n",key,i);
        }
      }
      if(freq!=0)
      {
          printf("Thus the key is present in the array. freq of %d is %d",key, freq);
      }
      else
        printf("The key entered is not present in the array");
}

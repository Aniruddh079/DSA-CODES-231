#include<stdio.h>
void marks(int n, int m);
int main()
{

    int n,m,i;
    printf("enter number of students\n");
    scanf("%d",&n);

    printf("enter the number of post tests \n");
    scanf("%d",&m);
    marks(n, m);

}

marks(int n, int m)
{
    int a[n],even=0,odd=0,c=0;
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            printf("\nenter Post test-%d marks of student-%d\n",j+1,i+1);
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        if(sum%2==0)
                even++;
            if(sum%2!=0)
                odd++;
            if(sum==m*10)
                c++;
    }
    printf("\n The number of students with even score is %d\n",even);
    printf("The number of students with odd score is %d\n",odd);
    printf("The number of students who scored out of out marks is %d\n",c);
}

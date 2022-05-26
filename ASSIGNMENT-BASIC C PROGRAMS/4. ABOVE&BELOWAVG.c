#include<stdio.h>
void classaverage(int);
void main()
{
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    classaverage(n);
}

void classaverage(int n)
{
    int a[n],count=0,count1=0,count2=0;
    int marks,sum=0,i;
    float average;

    for(i=0;i<n;i++)
    {
        printf("enter the marks of student %d\n",i+1);
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    average=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<average)
        {
            count++;
        }
        else if(a[i]>average)
        {
            count1++;
        }
        else
            count2++;
    }
    printf("\nNumber of students who are below average=%d",count);
    printf("\nNumber of students who are above average=%d",count1);
    printf("\nNumber of students who are average=%d",count2);

}

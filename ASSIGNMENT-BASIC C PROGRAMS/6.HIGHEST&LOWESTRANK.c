#include<stdio.h>
void student(int n);
void main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    student(n);
}

void student(int n)
{
    int a[n],rank,i,j,temp=0;
    for(i=0;i<n;i++)
    {
        printf("\n enter the rank of student-%d\n",i+1);
        scanf("%d",&a[i]);
    }
     for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
}
printf("Ranks of students in ascending order:\n");
  for (i = 0; i < n; i++){
     printf("%d\n", a[i]);}
printf("\nHIGHEST RANK: %d\n",a[n-1]);
    printf("\nLOWEST RANK: %d\n",a[0]);
}

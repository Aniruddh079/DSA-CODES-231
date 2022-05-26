#include<stdio.h>
void employeebonus(int,int);
void main()
{
    int n,salary;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    employeebonus(n,salary);
}

void employeebonus(int n,int salary)
{
    int exp,i;
    int bonus,totalsalary;
    for( i=1;i<=n;i++)
    {
        printf("\nEnter the experience of the employee\n");
        scanf("%d",&exp);
        printf("\nEnter the basic salary of the employee\n");
        scanf("%d",&salary);
        if(exp>=5 && exp<=7)
        {
            bonus=0.1*salary;
            totalsalary=bonus+salary;
            printf("Total Salary(including bonus) of employee %d is %d",i,totalsalary);
        }
        else if(exp>=8&&exp<=10)
        {
            bonus=0.2*salary;
            totalsalary=bonus+salary;
            printf("Total Salary(including bonus) of employee %d is %d",i,totalsalary);
        }
        else if(exp>10)
        {
            bonus=0.3*salary;
            totalsalary=bonus+salary;
            printf("Total Salary(including bonus) of employee %d is %d",i,totalsalary);
        }
        else
        {
            printf("Invalid input");
        }
    }
}

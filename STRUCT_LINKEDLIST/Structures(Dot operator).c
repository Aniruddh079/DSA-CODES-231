
#include<stdio.h>
#include<stdlib.h>

 struct student
{
    int id;
    char name[20];
    float percentage;
};

void func(struct student record[], int n);

int main()
{
    int i,n;
    printf("Enter no. of students\n");
    scanf("%d",&n);
    struct student record[n];


    for(i=0;i<n;i++)
    {
        printf("enter id,name,percenage of student %d\n",i+1);
        scanf("%d %s %f",&record[i].id,record[i].name,&record[i].percentage);
    }
    func(record,n);
    return 0;
}

void func(struct student record[],int n)
{
    int i;
    printf("student records\n");
    for(i=0;i<n;i++)
    {
    printf("student %d details\n",i+1);
    printf("ID: %d\n NAME: %s\n PERCENTAGE: %f\n",record[i].id,record[i].name,record[i].percentage);
    }
}


/*#include<stdio.h>
#include<stdlib.h>

 struct student
{
    int id;
    char name[20];
    float percentage;
};

void func(struct student *record[], int *);

int main()
{
    int i,n;
    int *ptr;
    ptr=&n;
    printf("Enter no. of students\n");
    scanf("%d",ptr);
    struct student record[n];
    struct student* p;
    p=&record[n];


    for(i=0;i<n;i++)
    {
        printf("enter id,name,percentage of student %d\n",i+1);
        scanf("%d %s %f",record[i]->id,record[i]->name,record[i]->percentage);
    }
    func(record,n);
    return 0;
}

void func(struct student *record[],int *n)
{
    int i;
    printf("student records\n");
    for(i=0;i<n;i++)
    {
    printf("student %d details\n",i+1);
    printf("ID: %d\n NAME: %s\n PERCENTAGE: %f\n",record[i]->id,record[i]->name,record[i]->percentage);
    }
}
*/



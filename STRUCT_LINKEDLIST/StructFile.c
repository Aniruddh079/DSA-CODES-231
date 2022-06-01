#include<stdio.h>
#include<stdlib.h>

typedef struct students
{
    char name[10];
    int roll;
    char div[5];
}STD;

    void read(FILE*,STD[],int);
    void display(FILE*,STD[],int);


void main()
{
    STD p[10];
    FILE*fp;
    int n;
    printf("enter no of students\n");
    scanf("%d",&n);
    fp=fopen("student.txt","w");
    read(fp,p,n);
    fclose(fp);
    fp=fopen("student.txt","r");
    printf("student details\n");
    display(fp,p,n);
    fclose(fp);
   search(fp,p,n);
}

void read(FILE*fp,STD p[9],int n)
{
    int i;
    printf("enter student details- name, roll no, div\n");
    for(i=1;i<=n;i++)
    {
        scanf("%s",p[i].name);
        scanf("%d",&p[i].roll);
        scanf("%s",p[i].div);
        fprintf(fp,"%s\n%d\n%s\n",p[i].name,p[i].roll,p[i].div);
    }
}

void display(FILE*fp,STD p[9],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%s%d%s",p[i].name,&p[i].roll,p[i].div);
        printf("%s\n%d\n%s\n",p[i].name,p[i].roll,p[i].div);
    }
}

void search(FILE*fp,STD p[9],int n)
{
    char a[10];
    int i;
    printf("enter name to be searched\n");
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        if((strcmp(a,p[i].name)==0))
        {
            printf("student name: %s\nroll no: %d\ndiv: %s\n",p[i].name,p[i].roll,p[i].div);
        }
    }
}

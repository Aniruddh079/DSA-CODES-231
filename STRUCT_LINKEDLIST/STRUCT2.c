#include <stdio.h>
#include<stdlib.h>
typedef struct movie
{
    char name[20];
    char producer[20];
    char director[20];
    int year;
    char production[20];
}B;
void read(B *,int);
void disp(B *,int);
void sort(B *,int);
void search(B *,int);

int main()
{
   B *p;
       int n;
       printf("enter no of movies\n");
    scanf("%d",&n);
    p=(B*)malloc(n*sizeof(B));
    read(p,n);
    disp(p,n);
    sort(p,n);
    search(p,n);

    return 0;
}

void read(B *p,int n)
{
    int i;
    for(i=0;i<n;i++,p++)
    {
        printf("enter details of movie %d: name, producer,director, year, production house\n",i+1);
    scanf("%s",p->name);
    scanf("%s",p->producer);
    scanf("%s",p->director);
    scanf("%d",&p->year);
    scanf("%s",p->production);
    }
}

void disp(B *p,int n)
{
    int i, key, num=0;
    for(i=0;i<n;i++,p++)
    {
        printf("\ndetails of movie %d\n",i+1);
   printf("%s",p->name);
    printf("%s",p->producer);
    printf("%s",p->director);
    printf("%d",p->year);
    printf("%s",p->production);
    }
}





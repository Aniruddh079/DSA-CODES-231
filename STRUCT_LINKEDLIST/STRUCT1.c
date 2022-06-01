#include<stdio.h>
#include<string.h>

typedef struct movie
{
    char name[10], producer[10], director[10], production[10];
    int yr;
}M;

int main()
{
    int n;
    printf("Enter the number of movies\n");
    scanf("%d", &n);
    M *m = (M*)malloc(n*sizeof(M));
    read(m,n);
    sort(m,n);
    director(m,n);
    ph(m,n);
    return 0;
}

void read(M *m, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the details of movie %d, NAME, PRODUCER,DIRECTOR,YEAR OF RELEASE & PRODUCTION HOUSE\n", i+1);
        scanf(" %s",(m+i)->name);
        scanf(" %s",(m+i)->producer);
        scanf(" %s",(m+i)->director);
        scanf("%d", &(m+i)->yr);
        scanf(" %s",(m+i)->production);
    }
}

void sort(M *m, int n)
{   int i,j;
    M flag;
    for( i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if((m+i)->yr>(m+j)->yr)
            {
               flag = *(m+j);
               *(m+j) = *(m+j+i);
               *(m+j+1) = flag;
            }
        }
    }

    for( i=0; i<n; i++)
    {
        printf("\nMovie %d\n", i+1);
        printf(" Name : %s\nProducer : %s\tDirector : %s\tRelease yr : %d\tProduction House : %s\n", (m+i)->name, (m+i)->producer, (m+i)->director, (m+i)->yr, (m+i)->production);
    }
}

void director(M *m, int n)
{   int i;
    char d[15];
    printf("\nEnter the Director's name : ");
    scanf(" %s", d);
    for(i=0; i<n; i++)
    {
        if(!(strcmp(d,(m+i)->director)))
        {
            printf("Movie Name : %s\tProducer : %s\tDirector : %s\tRelease yr : %d\tProduction House : %s\n", (m+i)->name,(m+i)->producer,(m+i)->director,(m+i)->yr,(m+i)->production);
        }
    }
}

void ph(M *m, int n)
{   int i;
    char p[15];
    printf("\nEnter the Production House : ");
    scanf(" %s", p);
    for(i=0; i<n; i++)
    {
        if(!(strcmp(p,(m+i)->production)))
        {
            printf("Movie Name : %s\tProducer : %s\tDirector : %s\tRelease yr : %d\tProduction House : %s\n", (m+i)->name, (m+i)->producer, (m+i)->director, (m+i)->yr, (m+i)->production);
        }
    }
}







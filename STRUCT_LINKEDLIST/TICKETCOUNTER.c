#include<stdio.h>
#include<string.h>

typedef struct ticket
{
    int token_no;
    char from[10],to[10];
    float price;
}T;
void main()
{
    int n;
    printf("Enter the number of tokens there\n ");
    scanf("%d",&n);
    T*x = (T*)malloc(n*sizeof(T));
    read(x,n);
    display(x,n);
    startpt(x,n);
    endpt(x,n);
    free(x);
}

void read(T *x, int n)
{
    int i;
    for( i=0; i<n; i++)
    {
        (x+i)->token_no = i+1;
        printf("Enter the details of the person-%d:\n", i+1);
        printf("From : ");
        scanf(" %s", (x+i)->from);
        printf("To : ");
        scanf(" %s", (x+i)->to);
        printf("Price : ");
        scanf("%f", &(x+i)->price);
    }
}

void display(T *x, int n)
{
    int i;
    for( i=0; i<n; i++)
    {
        printf("\nThe details of the passenger %d :\n", i+1);
        printf(" NUMBER:%d\tSTARTING PLACE :%s\tFINAL PLACE :%s\tPRICE :Rs %.2f\n", (x+i)->token_no,(x+i)->from, (x+i)->to, (x+i)->price);
    }
}

void startpt(T x[50], int n)
{
    int i;
    char start[25];
    printf("\nEnter the starting point\n");
    scanf(" %s", start);
    for( i=0; i<n; i++)
    {
        if(!(strcmp(start,x[i].from)))
        {
           printf(" NUMBER:%d\tSTARTING PLACE :%s\tFINAL PLACE :%s\tPRICE :Rs %.2f\n", x[i].token_no, x[i].from, x[i].to, x[i].price);
        }
    }
}

void endpt(T *x, int n)
{
    int i;
    char end[25];
    printf("\nEnter the ending point\n");
    scanf(" %s", end);
    for(i=0; i<n; i++)
    {
        if(!(strcmp(end,x[i].to)))
        {
           printf(" NUMBER:%d\tSTARTING PLACE :%s\tFINAL PLACE :%s\tPRICE :Rs %.2f\n", x[i].token_no, x[i].from, x[i].to, x[i].price);
        }
    }
}





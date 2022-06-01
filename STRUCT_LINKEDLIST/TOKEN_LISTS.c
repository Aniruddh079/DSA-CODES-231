#include<stdio.h>
typedef struct player
{
  char name[20],team[20];
  int rank;
}C;

void read(C *p,int n)
{
    int i;
    printf("Enter player details\n");
    for(i=0;i<n;i++)
    {
        printf("\nPlayer name\n");
        scanf("%s",(p+i)->name );
        printf("Team\n");
        scanf("%s",(p+i)->team);
        printf("ODI rank\n");
        scanf("%d",&(p+i)->rank);
    }
}

void display(C *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Name:%s\nTeam:%s\nODI rank:%d\n", (p+i)->name, (p+i)->team, (p+i)->rank);
    }
}

void rank(C *p,int n)
{
    int i,j;
    C temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if((p+j)->rank>(p+j+1)->rank)
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

void files(FILE *f, C *p, int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        fprintf(f,"Name:%s\nTeam:%s\nODI rank:%d\n\n", (p+i)->name, (p+i)->team, (p+i)->rank);
    }
}

void main()
{
    int n;
    printf("Enter the number of players : ");
    scanf("%d",&n);
    C *p = (C*)malloc(n*sizeof(C));
    FILE *f;
    f = fopen("rank.txt", "w");
    if(f==NULL)
    {
        exit(0);
    }
    read(p,n);
    display(p,n);
    rank(p,n);
    printf("\nPLAYER DETAILS(IN INCREASING ORDER OF ODI RANK)\n\n");
    display(p,n);
    files(f, p, n);
    fclose(f);
}


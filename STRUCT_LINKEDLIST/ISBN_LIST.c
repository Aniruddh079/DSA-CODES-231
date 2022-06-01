#include <stdio.h>
#include<stdlib.h>
typedef struct book
{
    char name[20];
    int isbn;
}B;
void read(B *,int);
void disp(B *,int);
void sort(B *,int);
void search(B *,int);

int main()
{
   B *p;
       int n;
       printf("enter no of books\n");
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
        printf("enter details of book %d : NAME, ISBN \n",i+1);
    scanf("%s",p->name);
    scanf("%d",&p->isbn);

    }
}

void disp(B *p,int n)
{
    int i;
    for(i=0;i<n;i++,p++)
    {
        printf("\ndetails of book %d\n",i+1);
    printf("Name: %s\n",p->name);
    printf("ISBN: %d\n",p->isbn);

    }
}

void search(B *p,int n)

{
    int i,key,num=0;
    printf("\n\nEnter the ISBN number to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
      if(key==p->isbn)
      {
          num=1;
          break;
      }
      p++;
    }
    if(num==1)
    {
        printf("\n book name:%s",p->name);
            printf("\n ISBN:%d\n",p->isbn);
                        p++;
    }
else
        printf("Not found");
}


void sort(B *p,int n)
{
int i,j;
B swap;

for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if((p+j)->isbn > (p+j+1)->isbn)
      {
    swap= *(p+j);
        *(p+j)=*(p+j+1);
        *(p+j+1)=swap;
      }
    }
  }
  printf("After sorting \n");
  disp(p,n);
}








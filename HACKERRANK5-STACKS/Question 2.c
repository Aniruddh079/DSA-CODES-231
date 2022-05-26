/*Bheem is having two boxes of cookies. He likes to share it with his best friends Chutki and Raju. He gives few cookies from first box to Chutki and few cookies from
second box to Raju. As Bheem and Kalia are rivals, he doesn’t like to share cookies with Kalia. Therefore, Kalia decides to exchange the cookies from one box to another
without worrying about the order of cookies. Bheem being not aware of this, can you help Kalia in exchanging the cookies?

Here cookies are integers.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct cookies
{
    int data;
    struct cookies *next;
} *NODE;

NODE getNODE(int m)
{
    NODE n = (NODE)malloc(sizeof(struct cookies));
    if(n==NULL)
    {
        printf("Node is not created.\n");
        exit(0);
    }
    n->data = m;
    n->next = NULL;
    return n;
}

NODE push(NODE top, int m)
{
    NODE temp = getNODE(m);
    if(top==NULL)
    {
        return temp;
    }
    NODE cur = top;
  while(cur->next!= NULL)
  {
      cur = cur->next;
  }
    cur->next = temp;
    return top;
}

NODE pop(NODE top)
{
    if(top==NULL)
    {
        printf("Shelf is empty.\n");
    }

    else
    {
        NODE temp = top, prev = NULL;
        while(temp->next!=NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    return top;
}

void disp(NODE top)
{
    if(top==NULL)
    {
        printf("cookies are empty.\n");
    }
    else
    {
        NODE cur = top;
        while(cur != NULL)
        {
            printf("%d ", cur->data);
            cur = cur->next;
        }
        printf("\n");
    }
}

int main()
 {
    NODE top1 = NULL;
    NODE top2 = NULL;
    int n1, n2, d;
    scanf("%d", &n1);
    scanf("%d", &n2);
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &d);
        top1 = push(top1, d);
    }
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &d);
        top2 = push(top2, d);
    }
    scanf("%d", &n1);
    scanf("%d", &n2);
    for(int i=0; i<n1; i++)
        top1 = pop(top1);
    for(int i=0; i<n2; i++)
        top2 = pop(top2);
    disp(top2);
    disp(top1);
    return 0;
}

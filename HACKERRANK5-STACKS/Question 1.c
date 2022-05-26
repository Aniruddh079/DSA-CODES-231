/*You are given a stack of N integers. You need to replace first element by last element and vice versa and continue the same for rest of the elements of stack.
One thing you need to follow is, you should reverse the integer and then replace it. And also pop the integers after replacing.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct reverse
{
    int data;
    struct reverse *next;
} *NODE;

NODE getnode(int item)
{
    NODE n = (NODE)malloc(sizeof(struct reverse));
    if(n==NULL)
    {
        printf("Node is not created.\n");
        exit(0);
    }
    n->data = item;
    n->next = NULL;
    return n;
}

NODE push(NODE top, int item)
{
    NODE temp = getnode(item);
    if(top==NULL)
        return temp;
    NODE cur = top;
    while(cur->next != NULL)
        cur = cur->next;
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
        NODE tmp = top;
        top = top->next;
        free(tmp);
    }
    return top;
}

void disp(NODE top)
{
    if(top==NULL)
    {
        printf("reverse is empty.\n");
    }
    else
    {
        NODE cur = top;
        int n, r, s;
        while(cur != NULL)
        {
            n = cur->data;
            s = 0;
            while(n!=0)
            {
                r = n%10;
                s = s*10 + r;
                n = n/10;
            }
            printf("%d ", s);
            cur = cur->next;
        }
        printf("\n");
    }
}

int main()
{
    int n,popp, data;
    NODE top = NULL;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &data);
        top = push(top,data);
    }
    scanf("%d", &popp);
    for(int i=0; i<popp; i++)
        top = pop(top);
    disp(top);
    return 0;
}

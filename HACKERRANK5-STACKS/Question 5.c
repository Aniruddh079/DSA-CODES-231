/*Stuart came up with a Stack problem! He first learns about stacks. Stack is a basic data structure where 3 operations can be done:

Push: You can push an element to the stack

Pop: You can pop the element from the stack

Top: You can access the value of the top element. He wants to modify the stack to perform the following operations as efficiently as possible!

There are 3 types of operations as describe below:

push x: Push element x onto the top of the stack.

pop: Pop the top element from the stack if not empty.

inc k v: Add v to each of the bottom k elements of the stack using above operations. For example:

Push 1: 1

Push 2: 1 2

Push 3: 1 2 3

Push 4: 1 2 3 4

Push 5: 1 2 3 4 5

Pop: 1 2 3 4

inc 2 1: 2 3 3 4*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} *NODE;

NODE push(NODE top, int item)
{
    NODE tmp = (NODE)malloc(sizeof(struct stack));
    if(tmp==NULL)
    {
        printf("Memory error.\n");
        exit(0);
    }
    tmp->data = item;
    if(top==NULL)
        tmp->next = NULL;
    else
        tmp->next = top;
    return tmp;
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
        //printf("%d\n", tmp->data);
        free(tmp);
    }
    return top;
}

void inc(NODE top, int k,int m, int p)
{
    if(top==NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        NODE cur = top;
        int i;
        i=0;
        while(cur!=NULL)
        {
            if(i>=(p-k))
                cur->data += m;
            printf("%d ", cur->data);
            i++;
            cur = cur->next;
        }
        printf("\n");
    }
}

int main()
 {
    int pushn, popn, k, m, p;
    NODE top = NULL;
    scanf("%d", &pushn);
    scanf("%d", &popn);
    scanf("%d", &k);
    scanf("%d", &m);
    for(int i=0; i<pushn; i++)
    {
        scanf("%d", &p);
        top = push(top,p);
    }
    for(int i=0; i<popn; i++)
        top = pop(top);
    p = pushn - popn;
    inc(top, k, m, p);
    return 0;
}


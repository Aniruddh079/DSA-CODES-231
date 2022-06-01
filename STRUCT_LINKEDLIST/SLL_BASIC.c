#include<stdio.h>
#include<stdlib.h>

struct node

{
    int data;
    struct node *next;
};

typedef struct node *NODE;
NODE insert_end(NODE);
NODE Delete_end(NODE);
void Display(NODE);
NODE getNode();
NODE insert_front(NODE);
NODE Delete_front(NODE);
void main()

{

    int choice;

    NODE head = NULL;

    while(1)

    {

        printf("\npress\n 1 for insert at end\n 2 for display\n 3 for delete at end\n 4 for exit\n");
        scanf("%d",&choice);
        switch(choice)

        {
            case 1: head = insert_end(head);
            break;
            case 2: Display(head);
            break;
            case 3: head = Delete_end(head);
            break;
            case 4:exit(0);
            default: printf("Invalid choice\n");
        }
    }
}

NODE getNode()
{
    NODE NEWNODE;
    int element;
    NEWNODE=malloc(sizeof(struct node));
    if(NEWNODE==NULL)
    {
        printf("Memory is allocated\n");
    }
    printf("Enter the data part\n");
    scanf("%d",&element);
    NEWNODE->data=element;
    NEWNODE->next=NULL;
    return NEWNODE;
}

NODE insert_end(NODE head)

{
    NODE Newnode=getNode();
    if(head==NULL)
    {
        head = Newnode;
        return head;
    }
    else

    {
        NODE temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=Newnode;
        return head;
    }
}

void Display(NODE head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    NODE temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}

NODE Delete_end(NODE head)

{
    if(head==NULL)
    {
        printf("list is empty cannot delete\n");
        return head;
    }
    if(head->next==NULL)
    {
    printf("\n Deleted node data %d\n",head->data);
        free(head);
        head=NULL;
        return(head);
    }
    NODE cur=head,prev=NULL;
    while(cur->next!=NULL)
    {
        prev=cur;
        cur=cur->next;
    }
    prev->next=NULL;
    printf("\n Deleted node data %d\n",cur->data);
    free(cur);
    return head;
}


NODE insert_front(NODE head)

{
    NODE Newnode=getNode();
    if(head==NULL)
    {
        head = Newnode;
        return head;
    }
    else
    {
       Newnode->next=head;
       head=Newnode;
        return head;
    }
}

NODE Delete_front(NODE head)

{
    if(head==NULL)
    {
        printf("list is empty cannot delete\n");
        return head;
    }
    if(head->next==NULL)
    {
        printf("\n Deleted node data %d\n",head->data);
        free(head);
        head=NULL;
        return(head);
    }

    NODE cur=head;
    head=head->next;
    printf("\n Deleted node data %d\n",cur->data);
    free(cur);
    return head;
}


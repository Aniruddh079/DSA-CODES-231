/*Delete the node at a given position in a linked list and return a reference to the head node.
The head is at position 0. The list may be empty after you delete the node. In that case, return a null value.*/

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* start, int pos)
{
    int n=0;
    if(pos==0)
    {
        SinglyLinkedListNode*next=start->next;
        free(start);
        return next;
    }
SinglyLinkedListNode*temp=start;
SinglyLinkedListNode*prev;
while(temp!=NULL)
{
    if(n==pos)
        break;
    prev=temp;
    temp=temp->next;
    n++;
}
prev->next=temp->next;
free(temp);
return start;
}

/*You are given the pointer to the head node of a sorted linked list, where the data in the nodes is in ascending order.
 Delete nodes and return a sorted list with each distinct value in the original list. The given head pointer may be null indicating that the list is empty.*/
 /*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* start)
{
if(!start)
{
    return start;
}
    SinglyLinkedListNode*cur=start->next;
    SinglyLinkedListNode*prev=start;

    while(cur!=NULL)
    {
        if(cur->data==prev->data)
        {
            SinglyLinkedListNode*temp=cur;
            cur=cur->next;
            prev->next=cur;
            free(temp);


        }
        else
        {
    prev=cur;
    cur=cur->next;
        }
    }
    return start;
}

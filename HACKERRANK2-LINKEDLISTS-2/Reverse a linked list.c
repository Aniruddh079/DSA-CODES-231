/*Given the pointer to the head node of a linked list,
 change the next pointers of the nodes so that their order is reversed. The head pointer given may be null meaning that the initial list is empty.*/
 /*
 * Complete the 'reverse' function below.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* start)
{
  if(!start)
      return start;

    SinglyLinkedListNode*prev=start;
    SinglyLinkedListNode*cur=start->next;
    start->next=NULL;

    while(cur)
    {
        SinglyLinkedListNode*next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}

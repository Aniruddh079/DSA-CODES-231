/*Given the pointer to the head node of a linked list and an integer to insert at a certain position, create a new node with the given integer as its  attribute, insert this node at the desired position and return the head node.

A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. The head pointer given may be null meaning that the initial list is empty.*/
/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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


SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* start, int data, int position)
 {
    SinglyLinkedListNode* node = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    node->data=data;
    if (!start)
    {
        return node;
    }
    int p;
    p=0;
    SinglyLinkedListNode* temp = start;
    SinglyLinkedListNode* prev;

    while (temp != NULL)
    {
        if (p==position)
        break;
        prev=temp;
        temp=temp->next;
        p++;
    }
   prev->next=node;
 node->next=temp;

    return start;
}

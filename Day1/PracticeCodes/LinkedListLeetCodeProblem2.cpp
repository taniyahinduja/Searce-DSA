/*
Problem 876. Middle of the Linked List
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
*/

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        int c = 0;
        ListNode *i;
        for (i = head; i != NULL; i = i->next)
            c++;
        if (c % 2 == 0)
            c = c / 2 + 1;
        else
            c = (c + 1) / 2;
        i = head;
        for (int j = 1; j < c; j++)
        {
            i = i->next;
        }
        return i;
    }
};
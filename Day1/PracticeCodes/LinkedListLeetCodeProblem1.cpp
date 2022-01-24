/*
Problem 83
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
Input: head = [1,1,2]
Output: [1,2]

Input: head = [1,1,2,3,3]
Output: [1,2,3]
*/
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *i, *p;
        if (head == NULL)
            return head;
        else
        {
            i = head;
            while (i->next != NULL)
            {
                p = i->next;
                if (p->val == i->val)
                {
                    if (p->next == NULL)
                    {
                        i->next = NULL;
                        break;
                    }
                    else
                    {
                        i->next = p->next;
                    }

                    delete p;
                }
                else
                {
                    i = i->next;
                }
            }
        }

        return head;
    }
};
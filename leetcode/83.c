/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (!head)  return head;
    Node *p = head, *tail = head;
    while (p != NULL)
    {
        if (p->val != tail->val)
        {
            tail->next = p;
            tail = tail->next;
        }
        p = p->next;
    }
    tail->next = NULL;
    return head;
}
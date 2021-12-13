/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *L1=list1,*L2=list2;
    if(!L1&&!L2) return NULL;
    if(!L1)      return L2;
    if(!L2)      return L1;
    struct ListNode *newhead,*p;
    if(L1->val>L2->val){
        newhead=L2;
        L2=L2->next;
    }
    else{
        newhead=L1;
        L1=L1->next;
    }
    p=newhead;
    while(L1||L2){
        if(!L1){
            p->next=L2;
            break;
        }
        else if(!L2){
            p->next=L1;
            break;
        }
        if(L1->val>L2->val){
            p->next=L2;
            L2=L2->next;
            p=p->next;
        }
        else{
            p->next=L1;
            L1=L1->next;
            p=p->next;
        }
    }
    return newhead;
}
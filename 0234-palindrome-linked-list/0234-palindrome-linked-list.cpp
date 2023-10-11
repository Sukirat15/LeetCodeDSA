/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL||head->next==NULL)
        return true;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
           slow=slow->next;

           fast=fast->next->next;

        }

        ListNode* d=NULL;

        ListNode* g=slow->next;

       ListNode* h=g->next;

       while(h!=NULL)
       {
           g->next=d;
           d=g;
           g=h;
           h=h->next;

       }

       g->next=d;
       
       slow->next=g;


       ListNode* dummy=head;

       slow=slow->next;

       while(slow!=NULL&&(slow->val==dummy->val))
       {
           dummy=dummy->next;
           slow=slow->next;


       }


       if(slow==NULL)
       return true;
       else
       return false;


    }
};
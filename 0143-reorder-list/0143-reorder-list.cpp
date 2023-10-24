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
    void reorderList(ListNode* head) {
        
    ListNode* slow=head;
    ListNode* fast=head;

    while(fast!=NULL&&fast->next!=NULL)
    {slow=slow->next;
    fast=fast->next->next;

    }
    
    ListNode* a=slow->next;

    slow->next=NULL;

    ListNode* dummy=NULL;

    while(a!=NULL)
    {
        ListNode* next1=a->next;
        a->next=dummy;
        dummy=a;
        a=next1;

    }

   ListNode* first=head;
   ListNode* second=dummy;

    while(second!=NULL)
    {
        ListNode* temp1=first->next;
        first->next=second;
        ListNode* temp2=second->next;
        second->next=temp1;

        first=temp1;
        second=temp2;
    }

    

    }
};

/*Approach:
Step1:First find middle of linked list
Step2:Slow->next=NULL 2 linked list will be created.
Step3:reverse the second half linked list
Step4:Merge the 2 linked lists using first second Approach:

Time Complexity:O(N)
Space Complexity:O(1)
*/



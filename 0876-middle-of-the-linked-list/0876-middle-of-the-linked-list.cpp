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
    ListNode* middleNode(ListNode* head) {
        

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }

        return slow;
    }


};

/*
Approach:Use slow fast approach.take slow=fast=head.
Check everytime that fast!=NULL and fast->next!=NULL
and update fast by 2 steps and slow by one step

When condition fails return slow that is middle node

Time Complexity:O(N/2)
Space Complexity:O(1)

*/





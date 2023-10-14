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
    ListNode* deleteDuplicates(ListNode* head) {
    
      if(head==NULL)
      return NULL;

      ListNode* slow=head;
      ListNode* fast=slow->next;

      while(fast!=NULL)
      {
          if(slow->val==fast->val)
          {
              slow->next=fast->next;
              ListNode* t1=fast;
              fast=fast->next;
              delete t1;
          }
          else
          {
              slow=fast;
              fast=fast->next;
          }
      }

      return head;
    }
};

/*Approach:We will use slow fast approach.Slow=head and fast=slow->next.
if slow->val==fast->val then we will break the connection and delete the node of fast and update fast
else
slow will take the place of fast and update fast.

Time Complexity:O(N)
Space Complexity:O(1)

*/
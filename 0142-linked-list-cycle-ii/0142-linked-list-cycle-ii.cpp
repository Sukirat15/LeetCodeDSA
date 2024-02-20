/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL||head->next==NULL)
         return NULL;

          ListNode* slow=head;
          ListNode* fast=head;
          int pos=0;


         while( fast!=NULL && fast->next!=NULL)
         {
              slow=slow->next;
              fast=fast->next->next;

              if(slow==fast)
              {pos=1;
              break;}

         }
         
        
        if(pos==1)
        {
          slow=head;

          while(slow!=fast)
          {
              slow=slow->next;
              fast=fast->next;
          }

          return slow;}


        else

        return NULL;
    }
};

/*Time Complexity:O(N)
Space Complexity:O(1)
*/
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
    ListNode* rotateRight(ListNode* head, int k) {
        

        if(head==NULL || k==0)
        return head;

        ListNode* temp=head; int c=1; ListNode* last;

        while(temp!=NULL)
        {    
            if(temp->next==NULL)
            last=temp;

            temp=temp->next;
            c++;
        }
        c--;

        if(k%c==0)
        return head;
        else
        k=k%c;
        
        int steps=c-k;
        
        ListNode* temp1=head;  int count=1;

        while(count!=steps)
        {
            temp1=temp1->next;
            count++;
        }
          
        
        ListNode* slow=temp1->next;
        temp1->next=NULL;
       
         last->next=head;
        return slow;







    }
};


/*Time Complexity:O(N)
Space Complexity:O(1)
*/
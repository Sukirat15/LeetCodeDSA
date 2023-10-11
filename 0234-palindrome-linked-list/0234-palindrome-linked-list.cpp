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


/*Approach

Brute Force Approach:First we will copy all the elements of linked list into an array.
Then we will check that if that array is palindrome or not.but it will use extra space of O(n)

Optimised Approach:We will first find middle of the linked list using slow fast approach 
we will increase slow by one node and fast by 2 nodes till fast reaches 2nd last node or last node.Once fast node reaches then we will reverse the linked list ahead of slow pointer 
then we will take a dummy node and initialise it on the head and increment slow by one node
then we will keep on checking slow->val==dummy->val and slow!=NULL.As soon as slow reaches NULL then we will declare that linked list is palindrome else not palindrome.


Time Complexity:O(n)
Space Complexity:O(1)

*/

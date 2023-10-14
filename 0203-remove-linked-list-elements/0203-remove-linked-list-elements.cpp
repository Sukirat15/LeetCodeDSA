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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
        return NULL;

        if(head->val==val)
        {
            ListNode* slow=head;
            ListNode* fast=slow->next;

            while(fast!=NULL)
            {
                if(fast->val!=val)
                {
                    slow=fast;
                    fast=fast->next;
                }
                else
                {
                    slow->next=fast->next;
                    ListNode* temp=fast;
                    fast=fast->next;
                    delete temp;

                }

            }

            ListNode* t1=head->next;
            
            delete head;
            return t1;
            
        }

        else
        {
            ListNode* slow=NULL;
            ListNode* fast=head;

            while(fast!=NULL)
            {
                if(fast->val!=val)
                {
                    slow=fast;
                    fast=fast->next;
                }

                else
                {
                    slow->next=fast->next;
                    ListNode* t2=fast;
                    fast=fast->next;
                    delete t2;


                }



            }

            return head;


        }

    }
};

/*Approach:2 CASES

case1:head->val==val

slow fast approach slow=head and fast=head->next.We will keep on fast until it reaches NULL.
If fast encounters the desired integer we will delete that integer and update fast else
we will update fast.

At last we will assign t1=head->next and delete head and return t1;

Case2:  head->val!=val

slow fast approach slow=NULL and fast=head.We will keep on fast until it reaches NULL.
If fast encounters the desired integer we will delete that integer and update fast else
we will update fast only.

At last we will return head without deleting it.

Time Complexity:O(n)
Space Complexity:O(1)
*/

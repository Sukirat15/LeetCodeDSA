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
    void deleteNode(ListNode* node) {
        
        ListNode* temp=node->next;

        int temp1=node->val;
        node->val=temp->val;
        temp->val=temp1;

        node->next=temp->next;
    }
};

/*Time Complexity:O(1)
Space Complexity:O(1)
*/
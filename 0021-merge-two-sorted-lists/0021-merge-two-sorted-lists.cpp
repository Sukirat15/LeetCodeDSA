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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
           
          ListNode* fh=NULL;ListNode*ft=NULL;

        if(list1!=NULL&&list2!=NULL)
        {
           if(list1->val<=list2->val)
          {fh=list1;
           ft=list1;
           list1=list1->next;
          }
          else
          {fh=list2;
          ft=list2;
          list2=list2->next;}


          ListNode* temp1=list1;ListNode* temp2=list2;

          while(temp1!=NULL && temp2!=NULL)
          {
              if(temp1->val<temp2->val)
              {
                  ft->next=temp1;
                  temp1=temp1->next;
                  ft=ft->next;
                
          }

           else
           {
               ft->next=temp2;
               temp2=temp2->next;
               ft=ft->next;

           }
          }


          

          if(temp1==NULL)
          ft->next=temp2;

          if(temp2==NULL)
          ft->next=temp1;
          
           return fh;


          
        }
        
        if(list1==NULL)
        return list2;
        else
        return list1;
           

      
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        

        if(root==NULL)
        return NULL;

          
          Node* curr=root;

          while(curr->left!=NULL)
          {
                Node* temp=curr;

                while(curr!=NULL)
                {
                    curr->left->next=curr->right;
                    curr->right->next=(curr->next==NULL)?NULL:curr->next->left;
                    curr=curr->next;
                }

                curr=temp->left;
          }
           
           return root;
    }
};

/*Time Complexity:O(N2)
Space Complexity:O(1)
*/

     
     //Queue Approach
       /* if(root==NULL)
        return NULL;


        Node* current=root;

        current->next=NULL;
      
      while(current->left!=NULL)
      {
         Node* temp=current;
      
        while(current!=NULL)
        {
            current->left->next=current->right;

            current->right->next=(current->next==NULL)?NULL:current->next->left;

            current=current->next;
        }

        current=temp->left;
    }
    return root;
    }

    Time Complexity:O(N)
    Space Complexity:O(N)*/

    
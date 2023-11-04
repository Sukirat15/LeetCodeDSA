/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

     //Step1  Create copies of the nodes and link them in bw the original linked list   
        Node* item=head;
        Node* front=head;

        while(item!=NULL)
        {
            front=item->next;
            Node* copy=new Node(item->val);
            item->next=copy;
            copy->next=front;
            item=front;
        }
   
    //Step2: Connect the Random Pointers of deep Copy List

    Node* item1=head;

    while(item1!=NULL)
    {   
        if(item1->random!=NULL)
        item1->next->random=item1->random->next;
        else
        item1->next->random=NULL;

        item1=item1->next->next;

    }

  
  //Step3:Separate both the lists

  Node* dummy=new Node(0);
  Node* temp=dummy;

  Node* item2=head;
  Node* front2=head;

  while(item2!=NULL)
  {   
      front2=item2->next->next;
      dummy->next=item2->next;
      item2->next=front2;
      item2=front2;
      dummy=dummy->next;
  }

   Node* newhead=temp->next;
   temp->next=NULL;

   return newhead;
    



    }
};

/*Time Complexity:O(N)
Space Complexity:O(1)
*/
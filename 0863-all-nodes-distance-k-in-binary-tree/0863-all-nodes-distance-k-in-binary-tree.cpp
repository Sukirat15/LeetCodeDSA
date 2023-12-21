/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include<unordered_map>
 #include<queue>
 #include<vector>
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*,TreeNode*> seen;

        queue<TreeNode*> q1;

        q1.push(root);

        while(!q1.empty())
        {
            int s=q1.size();

            for(int j=0;j<s;j++)
            {
                TreeNode* temp=q1.front();
                q1.pop();

                if(temp->left!=NULL)
                {q1.push(temp->left);
                seen[temp->left]=temp;}

                if(temp->right!=NULL)
                {seen[temp->right]=temp;
                q1.push(temp->right);}

            }
        }
           
           int dis=0;
           
           unordered_map<TreeNode*,bool> map;

           queue<TreeNode*> q2;

           q2.push(target);

           map[target]=true;

           while(!q2.empty())
           {
              int s=q2.size();
              
              if(dis!=k)
              {

                  for(int j=0;j<s;j++)
                  {
                      TreeNode* temp=q2.front();
                       q2.pop();

                       if(temp->left!=NULL && map.count(temp->left)==0)
                       {q2.push(temp->left);
                       map[temp->left]=true;}

                       if(temp->right!=NULL && map.count(temp->right)==0)
                       {
                           q2.push(temp->right);
                           map[temp->right]=true;
                       }

                       if(seen[temp]!=NULL && map.count(seen[temp])==0)
                       {
                           q2.push(seen[temp]);
                           map[seen[temp]]=true;
                       }
                 

                  }
                  dis++;

              }
              else
              break;
           }

            
            vector<int> v;

            while(!q2.empty())
            {
                TreeNode* temp=q2.front();
                q2.pop();
                v.push_back(temp->val);
            }

            return v;
           }




    
};

/*Time Complexity:O(N)+O(N)=O(N)
Space Complexity:O(N)
*/
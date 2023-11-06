/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 #include<queue>

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*> q1;  vector<double> ans;  double avg;

        q1.push(root);


        while(!q1.empty())
        {
           int levelsize=q1.size(); double s=0; 

           for(int j=0;j<levelsize;j++)
           {
               TreeNode* temp=q1.front();
               s+=temp->val;

               if(temp->left!=NULL)
               q1.push(temp->left);
               
               if(temp->right!=NULL)
               q1.push(temp->right);

               q1.pop();




           }
           

           ans.push_back(s/levelsize);

           s=0;


        }


return ans;
    }
};

/*Time Complexity:O(N)
Space Complexity:O(1)
*/
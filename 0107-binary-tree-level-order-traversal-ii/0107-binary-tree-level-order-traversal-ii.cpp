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
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> v1;

        if(root==NULL)
        return v1;
         
         queue<TreeNode*> q1;

         q1.push(root);

         while(!q1.empty())
         {
            int s=q1.size();   vector<int> v;

            for(int i=0;i<s;i++)
            {
                TreeNode* t=q1.front();
                
                if(t->left!=NULL)
                q1.push(t->left);

                if(t->right!=NULL)
                q1.push(t->right);


             v.push_back(t->val);

              q1.pop();
            }
           
           v1.push_back(v);

         }



    

   reverse(v1.begin(),v1.end());

   return v1;
    }
};

/*
Time Complexity:O(N)
Space Complexity:O(N)
*/
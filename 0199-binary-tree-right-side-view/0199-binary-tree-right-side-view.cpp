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
    vector<int> rightSideView(TreeNode* root) {
        
        queue<TreeNode*> q1;    vector<int> v;

        if(root==NULL)
        return v;

        q1.push(root);

        while(!q1.empty())
        {
            int s=q1.size();

            for(int i=0;i<s;i++)
            {
                TreeNode* temp=q1.front();
                q1.pop();

                if(i==s-1)
                v.push_back(temp->val);

                if(temp->left!=NULL)
                q1.push(temp->left);

                if(temp->right!=NULL)
                q1.push(temp->right);

            }
        }

        return v;


    }
};

/*Time Complexity:O(N)
  Space Complexity:O(N)
  */
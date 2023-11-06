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
    int minDepth(TreeNode* root) {
        
      if(root==NULL)
      return 0;

      if(root->left==NULL&&root->right==NULL)
      return 1;

      if(root->left==NULL)
      return 1+minDepth(root->right);

      if(root->right==NULL)
      return 1+minDepth(root->left);

      int l=minDepth(root->left);
      int r=minDepth(root->right);

      return min(l,r)+1;


    }


};

/*Time Complexity:O(N)
Space Complexity:O(N)
*/
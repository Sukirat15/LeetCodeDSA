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
 #include<string>

class Solution {
public:
     
    string convert(vector<int> path)
    {   
        string s1="",s=""; int j;
        for( j=0;j<path.size()-1;j++)
        {  
              s1=to_string(path[j]);
              s=s+s1+"->";

        }

        s1=to_string(path[j]);

        s=s+s1;

        return s;
    }
    void solve(TreeNode* root,vector<int>& path,vector<string>& ans)
    {   
        if(root==NULL)
        return;

        if(root->left==NULL&&root->right==NULL)
        {
            path.push_back(root->val);
            ans.push_back(convert(path));
            path.pop_back();
            return;
        }

        path.push_back(root->val);
        solve(root->left,path,ans);
        solve(root->right,path,ans);

        path.pop_back();
        return;
         

    }
    vector<string> binaryTreePaths(TreeNode* root) {
          vector<int> path;
          vector<string> ans;

          solve(root,path,ans);

          return ans;
    }

        
        
        





        
        



    };
  
  /*
  Time Complexity:O(N)
  Space Complexity:O(N)
  */
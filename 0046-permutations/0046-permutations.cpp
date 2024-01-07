class Solution {
public:

    void helper(vector<int>&nums, int ind, vector<vector<int>>& ans)
    {
           if(ind==nums.size())
          { ans.push_back(nums);
           return;}

           for(int i=ind;i<nums.size();i++)
           {
               int temp=nums[ind];
               nums[ind]=nums[i];
               nums[i]=temp;

               helper(nums,ind+1,ans);
               
                temp=nums[ind];
                nums[ind]=nums[i];
                nums[i]=temp;

           }

           return;

    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;

        helper(nums,0,ans);  

        return ans;
    }

    
};

/*Time Complexity:O(n!*n)
Space Complexity:(Recursion Stack of Size of Array)
*/
class Solution {
public:

    void helper(vector<int>& nums,int index,vector<int> temp,vector<vector<int>>& ans)
    {
        ans.push_back(temp);

        for(int i=index;i<nums.size();i++)
        {
            if(i!=index&&nums[i]==nums[i-1])
            continue;

            temp.push_back(nums[i]);
            helper(nums,i+1,temp,ans);
            temp.pop_back();

        }

       
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());

        vector<int> temp;

        helper(nums,0, temp,ans);
        return ans;

    }

    
};

/*Time Complexity:O(2^N*N)
Space Complexity:O(2^N*N)
*/
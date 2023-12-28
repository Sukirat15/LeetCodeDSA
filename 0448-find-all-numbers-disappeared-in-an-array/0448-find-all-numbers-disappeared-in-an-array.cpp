class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     
        
        int idx=-1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                idx=nums[i]-1;
            else
                idx=nums[i]*-1-1;
            
            if(nums[idx]>0)
                nums[idx]=-nums[idx];
                
        }
        vector<int> ans;
        
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]>0)
                ans.push_back(j+1);
                
        }
        
        return ans;
    }};
      
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        

        for(int i=0;i<nums.size();i++)
        {
             int idx=abs(nums[i])-1;

             if(nums[idx]>0)
             nums[idx]*=-1;
             
        }

        vector<int> v1;

        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]>0)
            v1.push_back(j+1);
        }

        return v1;
    }
};

/*Time Complexity:O(2N)~O(N)
Space Complexity:O(1)
*/
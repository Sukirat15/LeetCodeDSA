#include<cstdlib>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> v;

        for(int i=0;i<nums.size();i++)
        {
             int a=abs(nums[i]);

             if(nums[a-1]>0)
             nums[a-1]*=-1;
             else
             v.push_back(a);

        }

        return v;
    }
};


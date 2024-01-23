class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int i; int n=nums.size();

        for(int j=0;j<nums.size();j++)
        {     
            int e=nums[j];
            long chair = static_cast<long>(nums[j]) - 1;

            if(nums[j]>=1&& nums[j]<=n)
            {
              if( nums[chair]!=e)
               {
                 long temp=nums[chair];
                  nums[chair]=nums[j];
                  nums[j]=temp;
                  j--;
               }
            }

        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
            return i+1;
        }

        return n+1;

      
    }
};
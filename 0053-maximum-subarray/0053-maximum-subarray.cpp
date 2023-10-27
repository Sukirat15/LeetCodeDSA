class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max1=INT_MIN;

        int sum=0;

        for(int j=0;j<nums.size();j++)
        {
            sum=sum+nums[j];
          
          if(sum>max1)
          max1=sum;

          if(sum<0)
          sum=0;
        }

        return max1;
    }
};

/*Time Complexity:O(N)
Space Complexity:O(1)

I have used Kadane's Algorithm to solve it.
*/
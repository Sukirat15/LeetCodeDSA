class Solution {
public:

    void helper(vector<int>& nums,int target,int pos,int sum,int& c)
    {
         if(pos==nums.size())
         {
             if(sum==target)
             {
                 c++;
                 return;
             }
             return;
         }
         
         helper(nums,target,pos+1,sum+nums[pos],c);
         helper(nums,target,pos+1,sum-nums[pos],c);

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int c=0;
        helper(nums,target,0,0,c);
        return c;

    }

    
};

/*Time Complexity:O(2^n)
Space Complexity:O(Recursion Stack of Size of Array)*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
         int l=0; int i=0;
         while(i<nums.size())
         {
             if(nums[i]!=0)
             {
                 nums[l]=nums[i];
                 l++;
             }

             i++;}


         while(l<nums.size())
         {
             nums[l]=0;
             l++;
         }


         


    }   
};

/*Time Complexity:O(N)
Space Complexity:O(1)
*/
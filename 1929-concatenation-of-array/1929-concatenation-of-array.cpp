class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
       vector<int> ans(2*nums.size());

       for(int i=0;i<nums.size();i++)
       {
           ans[i]=nums[i];
           ans[i+nums.size()]=nums[i];
       }

       return ans;
    }
};







/*Clarifying Questions:
Can Array Contain negative elements??

Brute Force Approach:
We will traverse the array two times and fill the required Vector

Time Complexity:O(2N)
Space Complexity:O(1)

Optimised Approach:
We will traverse the array and fill the vector at i and i+length index;

Time Complexity:O(N)  in a single pass
Space Complexity:O(1)
*/
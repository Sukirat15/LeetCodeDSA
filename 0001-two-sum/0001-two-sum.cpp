#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        unordered_map<int,int> seen;  

      

       for(int i=0;i<nums.size();i++)
       {
           if(seen.count(target-nums[i])>0)
             return {i,seen[target-nums[i]]};
           else
             seen[nums[i]]=i;
       }
    
      vector<int> v1;

      return v1;
    }
};

/*
Brute Force Approach:For every element check its pair in the array.Therefore n2 Complexity.

Time Complexity:O(N^2)
Space Complexity:O(1)

 Approach:
Use Hashing 
Start traversing the array.Check for every element if you find its pair in the hashmap
then return the indices else add the current element and its index in the hashmap.

Time Complexity:O(NlogN)
Space Complexity:O(1)

Code:
unordered_map<int,int> seen;  

      

       for(int i=0;i<nums.size();i++)
       {
           if(seen.count(target-nums[i])>0)
             return {i,seen[target-nums[i]]};
           else
             seen[nums[i]]=i;
       }
    
      vector<int> v1;

      return v1;



Most Optimised Approach:

Two pointer Approach:
*/




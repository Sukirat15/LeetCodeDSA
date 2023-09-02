class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
           unordered_map<int,int> seen;int N=nums.size();
          
         

         

         for(int p=0;p<nums.size();p++)
         { 
             if(seen.count(nums[p])>0)
             seen[nums[p]]++;
             else
             seen[nums[p]]=1;
         }
          
          
     int ans=0;
         for(int p=0;p<N;p++)
         {
             if(seen[nums[p]]>=2)
             {ans=1;
            break;}
         }

         if(ans==1)
         return true;
         else
         return false;
    }
};

/*Clarifying Questions
Can element be negative in vector??

Boundary Conditions
if vector is empty then return false;

Approach:Use a hashmap and store count of every element and then check map and return true or false;

Time Complexity:O(n)
Space Complexity:O(1)*/


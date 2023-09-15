class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
          
          int reader=0,writer=0;

         while(reader<nums.size())
         {
             if(nums[reader]!=val)
            { nums[writer]=nums[reader];
             reader++;
             writer++;}
             
             else
             reader++;
         }

         return writer;
    }
};

/*
Brute Force approach

Create a new array and put first all the elements which are not equal to val and then the remaining elelemnets

Time Complexity:O(n)
Space Complexity:O(n)

Optimised Approach:Take two pointers reader and writer. assign both of them to be 0.Check if the reader value is not equal to val if true then replace value at writers index with value at readers index and update both of them.

else
update reader only

do this until reader reaches end of array;

*/
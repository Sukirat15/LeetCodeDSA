#include<unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
           

           unordered_map<int,int> seen;int N=nums.size();
           /*int max=INT_MIN;  
           for(int i=0;i<nums.size();i++)
           {
               if(nums[i]>max)
               max=nums[i];
           }*/

        /* int* output=new int[max+1];*/
         
         

         

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
             if(seen[nums[p]]>(N/2))
             {ans=nums[p];
            break;}
         }

         return ans;

    }
};



//clarifying Questions
//Can there be multiple majority answers
//Can numbers be negative in the array

//Boundary Condition
/*if noone's count>N/2*/

/*Approach:We will use a hashmap and store eaxch element as a key=1 first time and then increment its value when that element occurs again.

After traversing the array we will visit each key and see its count if count>N/2 we will return that element*/

/*Time Complexity:
O(n)
Space Complexity:
O(1)*/





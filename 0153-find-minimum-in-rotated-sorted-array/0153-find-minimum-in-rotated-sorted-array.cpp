class Solution {
public:
    int findMin(vector<int>& nums) {
     
     
     int l=0;
     int u=nums.size()-1;
     int e=nums.size()-1;

     while(l<u)
     {
         int mid=(l+u)/2;
          
          if(nums[mid]<=nums[e])
          u=mid;
          else
          l=mid+1;

     }

     return nums[u];
     
    }
};

/*Time Complexity:O(logN)
Space Complexity:O(1)


Observation:Inflection element and all the elements to the right of it are <= ending element
All elements to left of inflection point are bigger than ending element

*/
  
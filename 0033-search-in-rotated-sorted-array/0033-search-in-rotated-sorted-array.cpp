class Solution {
public:
    int search(vector<int>& nums, int target) {
        

        int l=0;
        int u=nums.size()-1;

        while(l<=u)
        {

           int mid=(l+u)/2;

           if(nums[mid]==target)
           return mid;

           if(nums[l]<=nums[mid])
           {
               if(target>=nums[l]  && target<=nums[mid])
               u=mid-1;
               else
               l=mid+1;
           }

           if(nums[mid]<=nums[u])
           {
               if(target>=nums[mid] && target<=nums[u])
               l=mid+1;
               else
               u=mid-1;
           }



        }

        return -1;
    }
};

/*Time Complexity:O(LogN)
Space Complexity:O(1)
*/
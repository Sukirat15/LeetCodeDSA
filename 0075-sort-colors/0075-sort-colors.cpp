class Solution {
public:
    void sortColors(vector<int>& nums) {
       
       int low=0;
       int mid=0;
       int high=nums.size()-1;

       while(mid<=high)
       {
           if(nums[mid]==0)
           {
               int temp=nums[low];
               nums[low]=nums[mid];
               nums[mid]=temp;
               low++;
               mid++;
           }

         else
         {
             if(nums[mid]==1)
             mid++;
             else
             {
                 int t1=nums[high];
                 nums[high]=nums[mid];
                 nums[mid]=t1;
                 high--;
             }
         }


       }

    }

};


/*Time Complexity
O(n)
Space Complexity
O(1)*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int index=-1;

         for(int i=nums.size()-2;i>=0;i--)
         {
             if(nums[i]<nums[i+1])
             {
                 index=i;
                 break;
             }
         }  

         if(index==-1)
         {
             int a=0,b=nums.size()-1;

             while(a<b)
             {
                 int temp=nums[a];
                 nums[a]=nums[b];
                 nums[b]=temp;
                 a++;
                 b--;
             }


         }  
         else
         {
           for(int i=nums.size()-1;i>index;i--)
           {
               if(nums[i]>nums[index])
                {
                    int temp=nums[i];
                    nums[i]=nums[index];
                    nums[index]=temp;
                    break;
                }

           }

         

         int p=index+1;
         int q=nums.size()-1;

         while(p<q)
         {
             int temp=nums[p];
             nums[p]=nums[q];
             nums[q]=temp;
             p++;
             q--;
         }
    }


    }
};


/*Time Complexity:O(N)
Space Complexity:O(1)
*/
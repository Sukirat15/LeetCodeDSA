class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

             vector<int> v1; int flag=0;

            for(int i=0;i<nums.size();i++)
            {    
                v1.push_back(i);

                  if(search(nums,target-nums[i],v1,i))
                   {   
                       flag=1;

                       break;
                   }

                   v1.clear();

                      
                  
            }

            if(flag==1)
            return v1;
            else
            {v1.clear();
            return v1;}
    }

    bool search(vector<int>& nums,int target,vector<int>& v1,int r)
    {
        for(int i=0;i<nums.size();i++)
        {
             if(target==nums[i]&&i!=r)
            {v1.push_back(i);
            return true;}

        }

        return false;
    }


};
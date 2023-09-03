class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
         vector<vector<int>> ans;

         sort(nums.begin(),nums.end());

         for(int i=0;i<nums.size();i++)
         {
              if(i>0&&nums[i]==nums[i-1])
              continue;

              int j=i+1;
              int k=nums.size()-1;

              while(j<k)
              {
                  int sum=nums[i]+nums[j]+nums[k];

                  if(sum<0)
                  {
                    j++;
                  }
                  else
                  {
                    if(sum>0)
                    k--;
                    else
                    {
                        vector<int> temp={nums[i],nums[j],nums[k]};
                        ans.push_back(temp);
                        j++;
                        k--;

                        while(j<k&&nums[j]==nums[j-1])
                        j++;
                        while(j<k&&nums[k]==nums[k+1])
                        k--;

                    }
                  }
              }



         }

         return ans;
        


       }

       
     

    
       
};




/*Clarifying Questions
Does the triplet need to be sorted??
Can the output contain duplicate triplets??
Does the vector contain duplicate elements

Brute Force approach:
  set<vector<int>> st; int n=nums.size();

      

       for(int i=0;i<n;i++)
       {
       for(int j=i+1;j<n;j++)
       {
       for(int k=j+1;k<n;k++)
       {
           if((nums[i]+nums[j]+nums[k])==0)
            {
              vector<int> temp={nums[i],nums[j],nums[k]};
              sort(temp.begin(),temp.end());
              st.insert(temp);
            }

       }
       
    }

    Time Complexity:O(N3)
    Space Complexity;O(N)

    <-------Better Approach------Using Hashing------>

    set<vector<int>> st;

        for(int i=0;i<nums.size();i++)
        {   set<int> hashset;
        for(int j=i+1;j<nums.size();j++)
        {    
          int third=0-(nums[i]+nums[j]);

             if(hashset.find(third)!=hashset.end())
             {
               vector<int> temp={nums[i],nums[j],third};
               sort(temp.begin(),temp.end());
               st.insert(temp);

             }

             hashset.insert(nums[j]);
               
             
        }

        }

        vector<vector<int>> ans(st.begin(),st.end());

        return ans;

        Time Complexity:O(N2)*Log(m);
        Space Complexity:O(N)+O(no of triplets)*2;


  Most Optimized Approach

  vector<vector<int>> ans;

         sort(nums.begin(),nums.end());

         for(int i=0;i<nums.size();i++)
         {
              if(i>0&&nums[i]==nums[i-1])
              continue;

              int j=i+1;
              int k=nums.size()-1;

              while(j<k)
              {
                  int sum=nums[i]+nums[j]+nums[k];

                  if(sum<0)
                  {
                    j++;
                  }
                  else
                  {
                    if(sum>0)
                    k--;
                    else
                    {
                        vector<int> temp={nums[i],nums[j],nums[k]};
                        ans.push_back(temp);
                        j++;
                        k--;

                        while(j<k&&nums[j]==nums[j-1])
                        j++;
                        while(j<k&&nums[k]==nums[k+1])
                        k--;

                    }
                  }
              }



         }

         return ans;

         Time Complexity:O(NlogN)+O(N2)
         Space Complexity:O(No of Triplets)
*/

   




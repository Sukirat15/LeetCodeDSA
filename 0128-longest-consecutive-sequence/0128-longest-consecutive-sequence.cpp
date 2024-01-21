class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       

       unordered_map<int ,int> seen; int s=0;int count=0,current=0;


       for(int i=0;i<nums.size();i++)
       {
           seen[nums[i]]=0;
       }

       for(int i=0;i<nums.size();i++)
       {
           if(seen.count(nums[i]-1)>0)
           continue;
           else
           {
               count=1;
               current=nums[i]+1;

               while(seen.count(current)>0)
               {
                   count++;
                   current++;
               }

               s=max(s,count);

           }
       }

       return s;
    }};


        

       

     
    



   /* sort(nums.begin(),nums.end());
       
       int c;int s=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {   c=1;
        for(int j=i+1;j<nums.size();j++)
        {
             if((nums[j]-nums[j-1])==1)
             c++;
              if((nums[j]-nums[j-1])>1)
              {
                  s=max(s,c);
                  break;
              }
             
        }
        s=max(s,c);

        }

        return s;*/
#include<vector>
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      
      vector<int> a;

      a.push_back(0);


      for(int i=0;i<flowerbed.size();i++)
      {  
         a.push_back(flowerbed[i]);

      }
      
      a.push_back(0);  int count=0;

      for(int i=1;i<a.size()-1;i++)
      {
           if(a[i]==1)
           continue;
           else
           {
               if(a[i-1]==0&&a[i+1]==0)
               {count++;
               a[i]=1;}

               else
               continue;
           }
      }

      if(n<=count)
      return true;
      else
      return false;

    }
        
};

/*
Approcach:Pehlai vector kai left aur right mai 0 append kar do edge case kai liye [0,0,1]
.Take a loop from i=1 to flowerbed.size(); and then count the safe positions in which flower can be planted.Store it in count.

if(n<=count)
return true;
else
return false;

Trick:Handle edge case [0,0,1] and hence append 0 at left ad at the right.

Time Complexity:O(N)
Space Complexity:O(N)
*/
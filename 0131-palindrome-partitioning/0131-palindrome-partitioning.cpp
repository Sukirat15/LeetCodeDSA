class Solution {
public:
     
     bool isPalinDrome(string s,int i,int j)
     {
          while(i<=j)
          {
              if(s[i]==s[j])
              {i++;
               j--;}
               else
               return false;

          }

          return true;
     }
     void helper(string s,int index,vector<string>& temp,vector<vector<string>>& ans)
     {
         if(index==s.size())
         {
             ans.push_back(temp);
             return;
         }

         for(int i=index;i<s.size();i++)
          {
              if(isPalinDrome(s,index,i))
              {
                  temp.push_back(s.substr(index,i-index+1));
                  helper(s,i+1,temp,ans);
                  temp.pop_back();
              }
             
          }




     }
    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> temp;
        helper(s,0,temp,ans);

        return ans;

    }


};
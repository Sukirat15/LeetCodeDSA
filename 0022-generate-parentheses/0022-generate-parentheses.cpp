#include<string>
class Solution {
public:

    void helper(int open,int close,int n,string& temp,vector<string>& ans)
    {   
        if(close==n)
        {ans.push_back(temp);
        return;}

        

        if(open<n)
        {temp=temp+"(";
        helper(open+1,close,n,temp,ans);
        temp.erase(temp.size()-1,'(');
        }

    
        
            if(close<open)
            {
                temp=temp+")";
                helper(open,close+1,n,temp,ans);
                temp.erase(temp.size()-1,')');

            }
           
        return;




    }
    vector<string> generateParenthesis(int n) {
         
         vector<string> ans;
         string temp="";
         helper(0,0,n,temp,ans);

         return ans;

    }
};
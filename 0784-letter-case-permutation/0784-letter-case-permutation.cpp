class Solution {
public:

    void helper(string s,int index,vector<string>& ans)
    {

        
        if(s[index]=='1'||s[index]=='2'||s[index]=='3'||s[index]=='4'||s[index]=='5'||s[index]=='6'||s[index]=='7'||s[index]=='8'||s[index]=='9'||s[index]=='0')
          {helper(s,index+1,ans);
          return;}

          if(index==s.size())
           {ans.push_back(s);
           return;}

           s[index]=tolower(s[index]);

           helper(s,index+1,ans);
           
           s[index]=toupper(s[index]);

           helper(s,index+1,ans);

       return;

    }
    vector<string> letterCasePermutation(string s) {

        vector<string> ans;

        helper(s,0,ans);
      
      return ans;
    }
};

/*Time Complexity:O(2^N)
Space Complexity:O(Recursion stack of length=word.size())
*/
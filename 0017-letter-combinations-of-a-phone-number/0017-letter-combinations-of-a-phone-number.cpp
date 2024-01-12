#include<unordered_map>
class Solution {
public:

    void helper(string digits,int index,unordered_map<int,string> seen,string& temp,vector<string>& ans)
    {
        if(index==digits.size())        //Base Case
        {
            ans.push_back(temp);
            return;
        }
             
          int digit=digits[index]-'0';


        for(int j=0;j<seen[digit].size();j++)
        {
            temp=temp+seen[digit][j];
            helper(digits,index+1,seen,temp,ans);
            temp.erase(temp.size()-1);
        }

        return;




    }
    vector<string> letterCombinations(string digits) {

              unordered_map<int,string> seen;

              seen[2]="abc";
              seen[3]="def";
              seen[4]="ghi";
              seen[5]="jkl";
              seen[6]="mno";
              seen[7]="pqrs";
              seen[8]="tuv";
              seen[9]="wxyz";

              string temp="";
              vector<string> ans;

              if(digits=="")
              return ans;

              helper(digits,0,seen,temp,ans);

              return ans;

    }
};
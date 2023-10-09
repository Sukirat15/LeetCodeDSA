#include<unordered_map>
#include<vector>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> seen;
        int i; string str;

        for(int i=0;i<strs.size();i++)
        {
            str=strs[i];

            sort(str.begin(),str.end());
            
            seen[str].push_back(strs[i]);
    
        }
           
           vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            str=strs[i];

            sort(str.begin(),str.end());

             
            if(seen.count(str)>0)
            {
            ans.push_back(seen[str]);
            seen.erase(str);
            }}

      return ans;
    }
};
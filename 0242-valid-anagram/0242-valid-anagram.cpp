#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
        return false;

        unordered_map<char,int> seen;

        for(int i=0;i<s.length();i++)
        {
             if(seen.count(s[i])>0)
             seen[s[i]]++;
             else
             seen[s[i]]=1;
        }

        for(int p=0;p<t.length();p++)
        {
            if(seen.count(t[p])>0&&seen[t[p]]!=0)
            seen[t[p]]--;
            else
            return false;
      
    }

    return true;
    }


};

/*Brute Force Approach
Approach:We will visit every character of the string and check if it is present in other string or not if present we will fill that index by '1' else if not found even for a single character we will return false.

Boundary Condition:If the length of Two Strings is not equal then return false.

Code:
  
        if(s.length()!=t.length())
        return false;

        for(int i=0;i<s.length();i++)
        {  int flag=0;
        for(int j=0;j<t.length();j++)
        {
            if(s[i]==t[j])
            {
                t[j]='1';
                flag=1;
                break;
            }
        }

        if(flag==1)
        continue;
        else
        return false;

        }

        return true;

Time Complexity:O(N2);(Worst Case)
Space Complexity:O(1)

Optimised Approach:

Clarifying Questions:
Whether String is in uppercase or not??
if String is empty then what we will return??


Approach:
We will use hash table.We will take a s string and store every character and its frequency in a hashmap.Then we will traverse through t and check if that charcter is present in hashmap with a  current frequency>0.if condition is true for all the characters then we will return true else if it is false even for a single character 
then we will straightaway return false.

Boundary Condition:If length of strings is not equal then return false.



Time Complexity:O(N)
Space Complexity:O(1)*/
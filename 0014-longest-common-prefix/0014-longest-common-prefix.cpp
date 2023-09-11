class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          
          
          sort(strs.begin(),strs.end());

          int min1=min(strs[0].length(),strs[strs.size()-1].length());

          string lcp=""; int i=0;

          while(i<min1)
          {
              if(strs[0][i]==strs[strs.size()-1][i])
              lcp=lcp+strs[0][i];
              else
              {
                  break;
              }

              i++;
          }

          return lcp;
    }
};

/*Clarifying Questions

Will the strings contain lowercase letters

Boundary Condition:if strings mai pehla hi character barabar nhi hai to return empty string.

Brute Force Approach:We will simultanously every character of each string....if all are equal 
we will add it in ans else break the loop.

Time Complexity:O(m*n)
m=no of strings
n=no of characters in the shortest word

Space Complexity:O(1)



OPtimised Approach:We will sort the words alphabetically.Then we will compare each character of first and last word.(Because words with common prefix will come Together)
Till when they are equal we will keep on adding them to the ans and then as soon as they are not equal
we will break from the loop and return the  string.

Time Complexity:O(n)
Space Complexity:O(1)

*/
#include<unordered_map>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
       
       if(s.size()!=t.size())
       return false;
       
        unordered_map<char,char> seen,seen2;

        for(int i=0;i<s.size();i++)
        {
            char c1=s[i];
            char c2=t[i];

            if((seen.count(c1)>0&&seen[c1]!=c2)||(seen2.count(c2)&&seen2[c2]!=c1))
            return false;

            seen[c1]=c2;
            seen2[c2]=c1;

        }

        return true;

    }
       
};


/*Clarifying Questions:
Are the strings  s and t of Equal length??
Are the strings in lowercase??

Boundary Condition:If two strings are not of equal length....then return false.

Approach:Take 2 hashmaps seen and seen2.First iterate through the strings and find corresponding characters c1 and c2.kya c1 key pehlai se hi seen hashmap mai hai aur agar hai
to uski mapping jisse hui hai vo c2 kai barabar nhi hai to usi samay false hojaiga laikin agar true hua to check karo ki seen2 mai c2 key hai ki nhi agar hai to check karo ki uski mapping jisse ho rakhi hai aur c1 agar barabar nhi huai to 2nd hashmap mai hamarai paas gadbad aa rhi hai to false return ho jaiga yani ki two strings are not isomorphic.

Fact:Ki kisi bhi hashmap 1 character ki 2 different mapping nhi ho sakti.Agar 1 mai bhi aisi condition bani to usi samay false return ho jaiga.tabhi OR lagaya hai.

Else agar kisi mai bhi gadbad nhi hai to c1 ko c2 se map karo aur c2 ko c1 se map karo 
aur aagai badho.Jab loop khatam ho jai to iska matlab two strings are isomorphic and return true.

Time Complexity:O(n)

Space Complexity:O(n)

*/



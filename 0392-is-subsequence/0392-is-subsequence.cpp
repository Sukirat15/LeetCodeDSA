class Solution {
public:
    bool isSubsequence(string s, string t) {
      int i=0;
      int j=0;

         while(i<s.length())
         {
             if(j==t.length())
             return false;

             if(s[i]==t[j])
             {
                 i++;
                 j++;
             }
             else
             {
                 j++;
             }
         }  

         return true;

    }
};

/*Brute Force Approach:
Ham 1 index Variable le laingai jisme starting mai -1 hoga.Phir ham s string
mai travel karaingai aur 1 1 character uthaingai 1 character check kiya dusri string mai agar vo i index pai milta hai jo >index hai to agai badh jaaingai aur index ko updat kar dengai

Time Complexity:O(n2)
Space Complexity:O(1)

Optimised Approach:

2 pointer Approach:  s string mai i =0 aur t string mai j=0;
agar i and j char barabar to dono update nhi to j update agar j ki length t kai barabar ho gyi to false nhi to agar i vali loop khatam ho gyi to return true;

Time Complexity:O(n)
Space Complexity:O(1)
*/


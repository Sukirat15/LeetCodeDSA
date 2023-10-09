class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        int i;

        set<string> s;

       for(int i=0;i<emails.size();i++)
       {  
           string str=" "; int c=0;
           for(int j=0;j<emails[i].size();j++)
           {

               if(emails[i][j]=='+'&& c==0)
               {
                    c=1;
                   continue;
               }

               if(emails[i][j]=='@')
               {
                   c=2;
                   str+=emails[i][j];
               }

               if(c==1||(c==0&&emails[i][j]=='.'))
               continue;

               str+=emails[i][j];

           }

           s.insert(str);


       }

     return s.size();
    }
};

/*Approach:We will traverse through each string in the vector.

For each string firstly c=0 hoga,then we will check every character.if a character is a + sign and c==0 means it is before @ then we will continue that is move to next character and we will do c=1 to ignore all the characters till @.Once we reach @ we will again do c=2 to include every character whether it is a plus or a . or a normal character.

Time Complexity:O(N2)
Space Complexity:O(N)


*/
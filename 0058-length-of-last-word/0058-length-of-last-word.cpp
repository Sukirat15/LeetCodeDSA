class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i,a;

        for(i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ')
            continue;
            else
            {   
                a=i;
                break;
            }
        }

    int count=0;

    while(a>=0&&s[a]!=' ')
    { 

        a--;
        count++;

    }

    return count;}


    
};

/*Clarifying Questions
If string is empty then what??
Will the string contain spaces at first and last

Approach:We will start from last and find that index which is non space
Then we will start from that index and fetch each character.If it is a nonspace we update count else return count;

Time Complexity:O(N)
Space Complexity:O(1)
*/
class Solution {
public:
    bool isValid(string s) {
          
          int c=0;

        for(int i=0;s[i]!='\0';i++)
        c++;

        if(c%2!=0)
        return false;

        stack<char> s1;

        for(int i=0;i<c;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            s1.push(s[i]);

            if(s[i]==')')
            {
                if(s1.empty()==false)
                {
                    if(s1.top()=='(')
                    s1.pop();
                    else
                    return false;
                }
                else
                return false;
            }

             if(s[i]=='}')
            {
                if(s1.empty()==false)
                {
                    if(s1.top()=='{')
                    s1.pop();
                    else
                    return false;
                }
                else
                return false;
            }

             if(s[i]==']')
            {
                if(s1.empty()==false)
                {
                    if(s1.top()=='[')
                    s1.pop();
                    else
                    return false;
                }
                else
                return false;
            }
        }

        if(s1.empty())
        return true;
        else
        return false;
    }
};
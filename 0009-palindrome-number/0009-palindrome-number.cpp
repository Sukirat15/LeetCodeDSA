class Solution {
public:
    bool isPalindrome(int x) {
        
        long s=0;

       for(int i=x;i>0;i=i/10)
       {
           int r=i%10;
           s=s*10+r;
       }

      if(s==x)
      return true;
      else
      return false;

    }
};
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        

        int i=0;
        int j=letters.size()-1;  int pos=-1;

        while(i<=j)
        {
            int mid=(i+j)/2;

            if(letters[mid]>target)
            {pos=mid;
            j=mid-1;}
            else
            {
                i=mid+1;
            }

        }

        if(pos==-1)
        return letters[0];
        else
        return letters[pos];


    }
};
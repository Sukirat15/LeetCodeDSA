#include<cmath>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1; int max1=0;

        while(l<r)
        {
            int lh=height[l];
            int rh=height[r];

            int min_h=min(lh,rh);

            int curr_area=min_h*(r-l);

            max1=max(curr_area,max1);

            if(lh<rh)
            l++;
            else
            r--;
        }

        return max1;
    }
};

/*Clarifying Questions
Can we slant the container or keep it straight??
What if heights is empty??



Approach:We will set two pointers l and r and calculate their height lh rh one which is minimum we will find area corresponding
to that.one pointer which is at minimum height we will update only that...it can be either l or r and we will store the current max area in max.
when l and r will cross each other we will exit the loop and return the max area*/



Time Complexity:
O(n)
Space Complexity:
O(1)
    */

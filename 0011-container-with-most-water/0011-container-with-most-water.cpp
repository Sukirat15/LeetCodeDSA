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
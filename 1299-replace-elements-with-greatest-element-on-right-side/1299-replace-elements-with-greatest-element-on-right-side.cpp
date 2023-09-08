class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        

       
         
         vector<int> ans(nums.size()); int max=-1;

        for(int j=nums.size()-1;j>=0;j--)
        {
             ans[j]=max;

             if(nums[j]>max)
             max=nums[j];
        }

        return ans;
    }
};

/*

Clarifying Questions
Can the array contain negative elements

Boundary Conditions:
If the array contains 1 element then put -1 in ans vector

Brute Force Approach:
Ham har index pai jaingai aur uskai right valai elements se max nikalangai aur usko update kar dengai aur last valai ko -1 se update kar dengai

Time Complexity:O(N2)
Space Complexity:O(N);


Optimised Approach:
Approach:ham log akhir se shuru karengai nums array kai. max ko
-1 le lengai aur last element ko -1 se replace karengai aur check karte
kaingai ki max kya hai abhi tak.pehlai to har index ko max se replace karengai 
aur phir check karengai ki current element agar max se bada hoga to max ko 
update kar dengai.Is tarike se ho jaiga

Time Complexity:O(n)
Space Complexity:O(n)
*/


    






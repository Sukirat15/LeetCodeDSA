#include<vector>
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> answer;  int product=1;

        for(int i=0;i<nums.size();i++)
        {
              
              product=product*nums[i];
              answer.push_back(product);

        }

        int pro1=1;

        for(int j=nums.size()-1;j>=0;j--)
        {    
            if(j==0)
            {answer[j]=(pro1);}
            else
            {
            answer[j]=(pro1*answer[j-1]);
            pro1=pro1*nums[j];}
        }

        return answer;

    }
};



/*Clarifying Questions

Can the array contain negative numbers??

Boundar Conditions
When we will come to i=0 then we will update it with product itself


Approach

Brute Force 
We will travel to every index and calculate the product of remaining by 
traversing in the array.O(N2);

Optimised approach
We will fill the output array by the left tak ka product.
Then we will start from the right side and fill output[i]=left[i-1]*product
product contains till then product of right elements.At starting its value is 1
and as we traverse we will update its value by multiplying it with the current element.


*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
       
       

       int l=0;
       int u=arr.size()-1;

       while(l<u)
       {
           int mid=(l+u)/2;

           if(arr[mid]<arr[mid+1])
           l=mid+1;
           else
           u=mid;
       }
    
    return l;






    }
};

/*Time Complexity:O(logN)
Space Complexity:O(1)


Better Approach:Fid the max element in the array and return its index;

*/

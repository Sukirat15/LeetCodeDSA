class Solution {
public:
    int findPeakElement(vector<int>& arr) {
         
         int n=arr.size();
         
         if(arr.size()==1)
         return 0;    //return arr[0];

         if(arr[0]>arr[1])
         return 0;  // return arr[0]; return index;

         if(arr[n-1]>arr[n-2])
         return n-1; //return arr[n-1] but return index;


         int l=1;
         int u=n-2;

         while(l<=u)
         {
             int mid=(l+u)/2;

             if((arr[mid]>arr[mid+1])&&(arr[mid]>arr[mid-1]))
             return mid;
             
             else if(arr[mid]>arr[mid-1])
             l=mid+1;

             else if(arr[mid]>arr[mid+1])
             u=mid-1;
             
             else
             l=mid+1;

         }

         return -1;
    }

       
};


/*Time Complexity:O(LogN)
Space Complexity:O(1)
*/
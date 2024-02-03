class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();

        int l=0;int u=(m*n)-1;

        while(l<=u)
        {
            int mid=(l+u)/2;

            int row=mid/n;
            int col=mid%n;

            if(target==matrix[row][col])
            return true;

            if(target>matrix[row][col])
            l=mid+1;

            if(target<matrix[row][col])
            u=mid-1;
        }

        return false;
        
    }
};

/*Time Complexity:O(log(m*n))
Space Complexity:O(1)
*/
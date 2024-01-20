class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int> v1;

        int top=0;int bottom=m-1;int left=0;int right=n-1;

        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            v1.push_back(matrix[top][i]);

            top++;
            
            for(int j=top;j<=bottom;j++)
            v1.push_back(matrix[j][right]);

            right--;
            
            if(top<=bottom)
            {for(int a=right;a>=left;a--)
            v1.push_back(matrix[bottom][a]);}

            bottom--;
            
            if(left<=right)
            {for(int b=bottom;b>=top;b--)
            v1.push_back(matrix[b][left]);}

            left++;

        }

     return v1;

    }
};
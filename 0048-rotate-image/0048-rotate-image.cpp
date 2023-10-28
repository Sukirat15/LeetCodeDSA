class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //Doing the transpose
        for(int i=0;i<matrix.size();i++)
        {
        for(int j=i+1;j<matrix[0].size();j++)
        {
               int temp=matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
        }
        }
           
        int n=matrix.size();
       //Reversing each row after transpose to get the final matrix

       for(int a=0;a<matrix.size();a++)
        {
             reverse(matrix[a].begin(),matrix[a].end());

        }


       





        }
    
};

/*Time Complexity:O(N2)
Space Complexity:O(1)
*/
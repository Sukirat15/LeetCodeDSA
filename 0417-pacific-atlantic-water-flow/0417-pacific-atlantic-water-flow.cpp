class Solution {
public:

    void func(vector<vector<int>>& matrix,int i,int j,int prev,vector<vector<int>>& ocean)
    {
        if(i<0 || i>=matrix.size()||j<0||j>=matrix[0].size())
        return;

        if(matrix[i][j]<prev)
        return;
        
        if(ocean[i][j]==1)
        return;

        ocean[i][j]=1;

        func(matrix,i+1,j,matrix[i][j],ocean);
        func(matrix,i-1,j,matrix[i][j],ocean);
        func(matrix,i,j+1,matrix[i][j],ocean);
        func(matrix,i,j-1,matrix[i][j],ocean);







    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        

        vector<vector<int>> ans;

        if(heights.size()==0)
        return ans;

        vector<vector<int>> pacific(heights.size(),vector<int>(heights[0].size(),0));

        vector<vector<int>> atlantic(heights.size(),vector<int>(heights[0].size(),0));

        
        for(int i=0;i<heights[0].size();i++)
        {
            func(heights,0,i,INT_MIN,pacific);
        }

        for(int j=0;j<heights.size();j++)
        {
            func(heights,j,0,INT_MIN,pacific);
        }

         for(int i=0;i<heights[0].size();i++)
        {
            func(heights,heights.size()-1,i,INT_MIN,atlantic);
        }

         for(int j=0;j<heights.size();j++)
        {
            func(heights,j,heights[0].size()-1,INT_MIN,atlantic);
        }


        for(int i=0;i<heights.size();i++)
        {
        for(int j=0;j<heights[0].size();j++)
        {
            if(pacific[i][j]==1 && atlantic[i][j]==1)
            {
                vector<int> v;

                v.push_back(i);
                v.push_back(j);

                ans.push_back(v);

            }
        }}

        return ans;






    }
    };


    /*void func(vector<vector<int>>& matrix,int i,int j,int prev,vector<vector<int>>& ocean)
    {
        if(i<0 || i>=matrix.size()||j<0||j>=matrix[0].size())
        return;

        if(matrix[i][j]<prev)
        return;
        
        if(ocean[i][j]==1)
        return;

        ocean[i][j]=1;

        func(matrix,i+1,j,ocean);
        func(matrix,i-1,j,ocean);
        func(matrix,i,j+1,ocean);
        func(matrix,i,j-1,ocean);







    }*/
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        vector<vector<char>> visited(grid.size(),vector<char>(grid[0].size(),'0'));

       
        
        int c=0;
        
        for(int i=0;i<grid.size();i++)
        {
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]=='1'&&visited[i][j]=='0')
            {
                func(grid,i,j,visited);
                c++;
            }
        }
                
        }

        return c;
        
        
    }

    void func(vector<vector<char>> &grid,int i,int j,vector<vector<char>>& visited)
    {
          if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
          return;

          if(visited[i][j]=='1')
          return;

          if(grid[i][j]=='0')
          return;

           visited[i][j]='1';

           func(grid,i+1,j,visited);
           func(grid,i-1,j,visited);
           func(grid,i,j+1,visited);
           func(grid,i,j-1,visited);

    }     

    
};
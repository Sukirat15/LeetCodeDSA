class Solution {
public:
   
    /*bool isSafe(int r,int c,vector<string> board,int n)
    {
          int c1=c;

          while(c1>=0)
          {
              if(board[r][c1]=='Q')
              return false;

              c1--;
          }

          int r1=r;

          while(r1>=0)
          {
              if(board[r1][c]=='Q')
              return false;

              r1--;
          }

          r1=r;
          c1=c;

          while(r1>=0&&c1>=0)
          {
              if(board[r1][c1]=='Q')
              return false;

              r1--;
              c1--;
          }

          r1=r;
          c1=c;

          while(c1>=0&& r1<n)
          {
              if(board[r1][c1]=='Q')
              return false;

              r1++;
              c1--;
          }


          return true;




    }*/
    
    void solve(int col,vector<string>& board,vector<vector<string>>& ans,int n,vector<int>&    lrow,vector<int>& lowerD,vector<int>& upperD)
    {




    
    
          if(col==n)
          {
              ans.push_back(board);
              return;
          }

          for(int i=0;i<n;i++)
          {
              if(lrow[i]==0&&lowerD[i+col]==0&&upperD[(n-1)+(col-i)]==0)
              {
                  board[i][col]='Q';
                  lrow[i]=1;
                  lowerD[i+col]=1;
                  upperD[(n-1)+(col-i)]=1;

                  solve(col+1,board,ans,n,lrow,lowerD,upperD);
                  board[i][col]='.';
                  lrow[i]=0;
                  lowerD[i+col]=0;
                  upperD[(n-1)+(col-i)]=0;

              }
          }



    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;

         vector<int> lrow(n,0);
        
        vector<int> lowerD(2*n-1,0);
        vector<int> upperD(2*n-1,0);


        vector<string> board(n);
        string s(n,'.');

        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }

        solve(0,board,ans,n,lrow,lowerD,upperD);

       

      
        return ans;
        
    }


};
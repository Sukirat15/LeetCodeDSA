class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
        vector<int> ans;

        if(n<=1)
        {
            ans.push_back(0);
            return ans;
        }
       

        vector<vector<int>> adj(n);

        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
             adj[edges[i][1]].push_back(edges[i][0]);

        }
         
        vector<int> indegree(n);
       
        for(int i=0;i<n;i++)
        {   
            indegree[i]=adj[i].size();
        }

        queue<int> q1;
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==1)
             q1.push(i);
        }

       

        while(!q1.empty())
        {
           int s=q1.size();
           ans.clear();

           for(int i=0;i<s;i++)
           {  
               int front=q1.front();
               q1.pop();
            
              ans.push_back(front);

               for(auto it:adj[front])
               {
                   indegree[it]--;
                   if(indegree[it]==1)
                   q1.push(it);

               }

               
           }
        }








           

           return ans;
            




        




        




        
    }
};

/*Time Complexity:O(V+E)
Space Complexity:O(V)
*/
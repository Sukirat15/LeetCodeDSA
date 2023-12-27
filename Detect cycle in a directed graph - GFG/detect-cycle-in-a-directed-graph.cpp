//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(int i,vector<int> adj[],int visited[],int pathVisited[])
    {
        visited[i]=1;
        pathVisited[i]=1;
        
        
        
        for (int it :adj[i])
        
        {
            if(!visited[it])
              {if(dfs(it,adj,visited,pathVisited))
               return true;}
            
            else if(pathVisited[it])
            return true;
        }
        
        pathVisited[i]=0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
         int visited[V]={0};
        int pathVisited[V]={0};
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {if(dfs(i,adj,visited,pathVisited))
            return true;}
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
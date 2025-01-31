//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void bfs(vector<vector<int>>&adj,int u,vector<int>&visited,vector<int>&result){
      queue<int>qu;
      qu.push(u);
      visited[u]=1;
      result.push_back(u);
      while(!qu.empty()){
          int u=qu.front();
          qu.pop();
          for(auto nei:adj[u]){
              if(!visited[nei]){
                  qu.push(nei);
                  visited[nei]=true;
                  result.push_back(nei);
              }
          }
      }
      
  }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int size=adj.size();
        vector<int> visited(size,0);
        vector<int> result;
        bfs(adj,0,visited,result);
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void dfss(vector<vector<int>> &adj,int node,vector<int>&dfs,vector<int>&isvisited){
      dfs.push_back(node);
      isvisited[node]=1;
      for(auto nei:adj[node]){
          if(!isvisited[nei]){
              dfss(adj,nei,dfs,isvisited);
          }
      }
     
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        int size=adj.size();
        vector<int> dfs;
        vector<int>isvisited(size,0);
        dfss(adj,0,dfs,isvisited);
        return dfs;
        // Code here
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    
    void helper(int v , vector<int> adj[], vector<int> &ans , int sv ,bool * visited)
    {
        
      
        
        visited[sv] = true;
        ans.push_back(sv);
        
        for(auto it : adj[sv])
        {
            if(!visited[it])
            helper(v,adj,ans,it,visited);
        }
        
        
    }
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        
        vector<int> ans ;
          bool * visited = new bool[v];
          
          for(int i = 0 ; i < v; i ++)
          {
              visited[i] = false; 
          }
          
        helper(v, adj , ans ,  0 ,visited);
        
        return ans ;
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
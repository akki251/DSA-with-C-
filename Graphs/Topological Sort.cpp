// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 

void dfs(int  sv,int V , bool * visited , vector<int> &ans , vector<int> adj[]  )
{
    visited[sv] = true;
    
    for(auto it : adj[sv])
    {
        if(visited[it] == false)
        {
            dfs(it,V,visited,ans,adj);;
        }
    }
    
    
    ans.push_back(sv);
}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    

vector<int> ans ;
	    bool * visited = new bool[V];
	    
	    for(int i = 0 ; i < V ; i++)
	    {
	        visited[i] = false;
	    }
	    
	    for(int i = 0 ; i < V ; i++)
	    {
	        if(visited[i] == false)
	        {
	            dfs(i,V,visited,ans,adj);
	        }
	    }
	    
 reverse(ans.begin() , ans.end());
	
	  
	    return ans ;
	    
	    
	}
};
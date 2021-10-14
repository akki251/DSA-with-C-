// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:





   bool check( int sv ,vector<int> adj[] , int n , int color[])
   {
       
          queue<int> q;
          
          q.push(sv);
          color[sv] = 1;
          
          while(!q.empty())
          {
              
              
              int curr = q.front();
              q.pop();
              
              
              
              for(auto it : adj[curr])
              {
                  
                  if(color[it] == -1)
                  { 
                      color[it] = !color[curr]; // opsite of its neigbour's value 
                     q.push(it);
                      
                  }
                  
                  else if(color[it] == color[curr])
                  return  false;
              }
              
              
              
          }
          
          return true;
          
       
   }


	bool isBipartite(int n, vector<int>adj[]){
	    
	    
	    int color[n] ;
	    
	    memset(color,-1,sizeof(color));
	    
	    for(int i = 0 ; i < n  ; i++)
	    {
	        if(color[i] == -1)
	        {
	            if(!check(i,adj,n,color))
	            return false ;
	        }
	    }
	    
	    
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends
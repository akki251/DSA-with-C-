// STRIVER  VIDEO

bool isCycle_helper(int node , int parent , vector<bool> &vis , vector<int> adj[])
{
    vis[node]= true;
    
    
    for(auto it : adj[node])
    {
        if(vis[it] == false)
        {
             if(    isCycle_helper(it , node , vis , adj) == true )  
             return true;
             
        }
        else if(it != parent) 
        return true;
    }
    
    return false; 
}

    bool isCycle(int n, vector<int> adj[]) {
        
        
              vector<bool> vis(n,false);
              
              for(int i = 0  ; i < n ; i++)
              {
                  if(vis[i] == false)
                  {
                       if( isCycle_helper(i,-1,vis,adj) == true) 
                              return true;
                      
                      
                  }
              }
              
              return false;
        
    }
    
};
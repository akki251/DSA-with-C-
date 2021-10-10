bool isCycle_helper(int i , vector<int> adj[] ,vector<bool > & visited)
{
    
            pair<int,int> p ;
            queue<pair<int, int> > q; 
            q.push({i,-1});
            
            while(!q.empty())
            {
                
                 auto front = q.front();
                 q.pop();
                 int node = front.first;
                 int parent = front.second;
                 visited[node] = true;
                
                  for(auto it  :adj[node])
                  {
                      if(visited[it] == false)
                      {
                          
                          visited[it] = true;
                          q.push({it,node});
                          
                      }
                      else if(it != parent)
                      {
                          return true;
                      }
                  }
                
                    
                
            }
     
     
     return false;   
}
 
    bool isCycle(int n, vector<int> adj[]) {
        
        
        vector<bool> visited (n,false);
        
        for(int i = 0 ; i <  n ; i ++)
        {
            if(visited[i] == false){
            if(isCycle_helper(i,adj ,visited) == true )
            return true;
            }
        }
    
              
        
        
        return false; 
    }
    
};

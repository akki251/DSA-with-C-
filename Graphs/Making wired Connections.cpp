class Solution {
public:
    
    
    void dfs(int sv , vector<int> &visited , vector<int>  edges[])
    {   
        visited[sv]  = 1;
        for(auto x : edges[sv])
        {
            if(!visited[x])
            {
                dfs(x,visited,edges);
            }
        }
        
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        
        
        
        vector<int> edges[n];
        
        if(connections.size() < n - 1 )
        return  -1 ;
        
        for(int i = 0 ; i < connections.size() ;  i++)
        {
        
            edges[connections[i][0]].push_back(connections[i][1]);
            edges[connections[i][1]].push_back(connections[i][0]);
            
        }
        
        
        vector<int> visited(n,0);
        int cnt =  0;
        for(int i = 0 ; i < n ; i++)
        {
            if(!visited[i]){
            cnt++;
            dfs(i, visited , edges);
            }
        }
        
        return cnt  - 1;
        
        
        
        
        
    }
};
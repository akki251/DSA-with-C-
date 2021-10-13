    int dx[] = {-1, 0 , 1 , 0};
    int dy [] = {0 , 1 , 0 , -1};

class Solution {
public:
    

    
    void dfs(vector<vector<char>>&grid , int i  , int j )
    {
          if(i < 0 || i == grid.size() || j < 0 || j == grid[0].size())
          {
              return ;
          }
        
        if(grid[i][j] == '0'|| grid[i][j] == '2')
            return;
        
        
    grid[i][j] = '2';
        
        
        for(int p = 0 ; p < 4 ; p++)
        {
            dfs(grid , i + dx[p] ,j + dy[p]);
        }
       // dfs(grid, i+1, j);
       //  dfs(grid, i, j-1);
       //  dfs(grid, i, j+1);  
       //  dfs(grid, i-1, j);
        
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        
        int islands = 0;
        for(int i =  0 ; i < grid.size() ; i++)
        {
            for(int j  = 0 ; j < grid[0].size() ; j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(grid , i , j);
                    islands++;
                }
            }
        }
        
        return islands;
    }
};
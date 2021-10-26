class Solution {
public:
    
    
    bool dfs(string word , vector<vector<char>>& board , int i , int j , int n  )
    {
        
        if(n == word.length())
            return true; 
        
        if( i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[n] )
        {
            return false ;
        }
        
        
        char ch = board[i][j]; // saving prev char 
        
        board[i][j] = '$'; // visited 
        
        bool status = dfs(word, board ,i + 1 , j , n+1) || 
                      dfs(word, board ,i -1 , j , n+1)  || 
                      dfs(word, board ,i , j + 1, n+1) || 
                      dfs(word, board ,i , j  - 1, n+1) ;
        
        board[i][j]  = ch; // backtrack 
        
        return status ;
        
        
    }
        
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int m = board.size();
        int n = board[0].size();
        
        
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j< n ; j++)
            {
                if(board[i][j] == word[0] && dfs(word,board,i,j,0))
                    return true;
            }
        }
        
        
        return false; 
        
        
    }
};
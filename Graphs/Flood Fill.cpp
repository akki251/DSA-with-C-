


class Solution {
public:
    
    
    
    void helper(vector<vector<int>> &image , int r , int c ,int target , int newColor , int m , int n, vector<int> dx , vector<int> dy )  
    {
         
          if(r < 0 || r == m || c < 0 || c == n || image[r][c] != target || image[r][c] == newColor)
               return ;
              
         image[r][c] = newColor;
        
        for(int i = 0 ;  i < 4 ; i++){
            helper(image , r+dx[i]  ,c+dy[i] , target , newColor , m , n ,dx ,dy);
        }
        
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        
            vector<int> dx = {-1 , 0 , 1 , 0};
        vector<int> dy = {0 , 1 , 0 , -1};

        int m = image.size();
        int n = image[0].size();
        int target =  image[sr][sc];
        helper(image, sr , sc , target , newColor, m , n,dx,dy);
        return image;
        

       
        
    }
};
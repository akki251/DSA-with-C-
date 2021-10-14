class Solution {
public:
    int numSquares(int n) {
        
        
        int dp[n+1];
        
        dp[0] = 0 ;
        dp[1] = 1;
        
        for(int i =2 ; i <= n ; i ++)
        {
            int mini= INT_MAX;
            
            for(int j= 1 ; j * j <= i ; j++)
            {
                int remain =  i - j * j;
                mini = min(dp[remain] ,mini);
            }
            
            dp[i] = mini + 1;
        }
        
        return dp[n];
        
        
        
        
        
        
        
        
        
    }
};
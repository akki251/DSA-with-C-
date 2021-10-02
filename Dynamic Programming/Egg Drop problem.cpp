int dp[201][201];
    int eggDrop(int e, int f)
    {
        memset(dp,-1,sizeof(dp));
        return helper(e,f);
    }
    int helper(int e, int f) 
    {
        
        
        
        if(f == 0 || f== 1)
        return f;
        if( e== 1)
        return f; 
        
        
        if(dp[e][f] != -1)
        return dp[e][f];
        
           int ans = INT_MAX;
        for(int i=1; i<=f; i++){
            int temp = 1 + max(helper(e-1, i-1), helper(e, f-i));
            ans = min(ans, temp);
           
        }
       
         
return   dp[e][f] = ans ;
int maxGold(int n, int m, vector<vector<int>> M)
    {
       int i,j;
        int dp[n][m];
        memset(dp,0,sizeof(dp)); 
        for(j=m-1;j>=0;j--){
            for(i=0;i<n;i++){
                if(j==m-1){
                    dp[i][j]=M[i][j];
                }
                else if(n==1)dp[i][j]=M[i][j]+dp[i][j+1];
                else if(i==0){
                    dp[i][j]=M[i][j]+max(dp[i+1][j+1],dp[i][j+1]);
                }
                else if(i==n-1){
                    dp[i][j]=M[i][j]+max(dp[i-1][j+1],dp[i][j+1]);
                }
                else dp[i][j]=M[i][j]+max(max(dp[i-1][j+1],dp[i][j+1]),dp[i+1][j+1]);
            }
        }
        // for(i=0;i<n;i++){
        //     for(j=0;j<m;j++)cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
        int ans=0;
        for(i=0;i<n;i++){
            ans=max(ans,dp[i][0]);
        }
        return ans;
    }
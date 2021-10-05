class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n  = nums.size();
        int dp[n];
                memset(dp,0,sizeof(dp));

        
        dp[n-1] = 1;
        
        for(int i = n - 2 ; i >= 0 ;  i--)
        {
            if(dp[i])
                continue;
          for(int j = i ;  j <= i + nums[i] && j < n ;j++ )
            {
                if(dp[j] == 1)
                {
                    dp[i] = 1;
                    break;
                    }
              else
                dp[i] = 0;
            }
        }
        
        
        
        
        return dp[0];
    }
};
class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        
        int dp[n];
        
// memset(dp,0,sizeof(dp));    
        
        for(int i = 0 ; i < n ;  i++)
        {
            dp[i] = INT_MAX -1 ;
        }
        
        dp[n-1] = 0;
        
        for(int i = n- 2;  i >= 0 ; i --)
        {
            
        if(nums[i] == 0)
        {
            dp[i] = INT_MAX- 1;
        }
            else {
            for(int j = i+ 1  ; j <= i + nums[i] && j < n ; j++)
            {
                
        
             dp[i] = min(dp[i] , dp[j]  +  1);
                
            }
            
            
        }
            
        }
      
        return dp[0];
    
        }
    
};
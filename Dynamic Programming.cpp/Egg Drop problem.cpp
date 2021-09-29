class Solution {
public:
    int dp[102][10002];
    
    int helper(int e, int f) {
        if(f==0 or f==1) return f;
        if(e==1) return f;
        
        if(dp[e][f]!=-1) return dp[e][f];
        
        // TLE APPROACH: Matrix Chain Multiplication
        // int ans = INT_MAX;
        // for(int i=1; i<=f; i++){
        //     int temp = 1 + max(helper(e-1, i-1), helper(e, f-i));
        //     ans = min(ans, temp);
        // }
        
        // NON TLE APPROACH: binary search stuff
        int ans = INT_MAX, temp=0, low=0, high=f;
        
        while(low <= high){
            int mid = (low+high)/2;
            int left = helper(e-1, mid-1);
            int right = helper(e, f-mid);
            
            temp = 1 + max(left, right);
            ans = min(ans, temp);
            
            if(left<right) low = mid+1;
            else high = mid-1;
        }
        
        
        dp[e][f] = ans;
        return ans;
    }
    
    int superEggDrop(int e, int f){
        memset(dp, -1, sizeof dp);
        return helper(e,f);
    }
};
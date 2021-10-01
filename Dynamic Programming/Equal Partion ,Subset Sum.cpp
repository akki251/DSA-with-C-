class Solution {
public:
    
       int output[201][20001];
    int helper(vector<int> a , int sum)
    {
        int n = a.size();
        if(n == 0)
        {
            if(sum == 0)
                return true;
            return false;
        }
        if( sum == 0)
            return true;  
        
        // if(output[n][sum] != -1)
        //     return output[n][sum];
        
        // if(a.back() > sum)
        // {
        //     a.pop_back();
        //     output[n][sum] =  helper(a,sum);
        //     return output[n][sum];
        // }
       //  else 
       //  {
       //      int val= a.back();
       //      a.pop_back();
       // output[n][sum] =  helper(a,sum-val) || helper(a,sum);
       //  return output[n][sum];
       //  }
        
        
        for(int i = 0 ; i <= n ; i++)
        { 
            
            for(int j = 0 ; j <=sum ; j++)
            {
                         if(i == 0)
                             output[i][j] = false;
                if(j == 0)
                    output[i][j] = true;
            }

        }
        
        
        // output[0][0] = 1;
        
        
        
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= sum ; j++)
            {
               if(a[i-1] <= j)
               {

               output[i][j] = output[i-1][j -a [i-1]] || output[i-1][j];
                   
               }
                else 
                {
                    output[i][j] = output[i-1][j];
                }
                
            }
        }
        
        return output[n][sum];
        
        
        
    }
    
    bool canPartition(vector<int>& nums) {
       
        int n = nums.size();
        if(n == 0)
            return false; 
        
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum & 1)
            return false; 
        sum /=2;
  
        // memset(output,-1,sizeof(output));
        return helper(nums,sum);
        
    }
};
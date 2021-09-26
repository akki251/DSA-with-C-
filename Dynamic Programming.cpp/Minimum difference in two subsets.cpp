class Solution {
public:
    
    int output[31][5051];
    
    int helper (vector<int> a ,int  sum)
    {
        
        int n = a.size();
        if(n <= 0)
        {
            if(sum == 0)
                return 1;
            return 0;
        }
        if(sum == 0)
            return 1;
        
        for(int i = 0 ; i <= n ; i++ )
        {
            for(int j = 0 ; j <=sum ; j++)
            {
                if(i==0)
                    output[i][j] = 0;
                if(j ==0)
                    output[i][j] = 1;
            }
        }
        
        
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1; j <=sum ;j++)
            {
                if(a[i-1] > j)
                {
                    output[i][j] = output[i-1][j];
                }
                else 
                {
                    output[i][j] = output[i-1][j] || output[i-1][j-a[i-1]];
                }
            }
        }
        
        
        
        vector<int> ans ;
        for(int i = n ,j =  0; j<= sum/2 ; j++)
        {
             if(output[i][j] == 1)
                 ans.push_back(j);
        }
        
        return sum -  2 *ans.back();
    }
    
    int lastStoneWeightII(vector<int>& a) {
        
        
        
        int range = accumulate(a.begin(),a.end() , 0);
        
      return  helper(a,range);
        
        
        
        
    }
};
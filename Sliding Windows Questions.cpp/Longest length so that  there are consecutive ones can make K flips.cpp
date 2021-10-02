class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        
        
      int i = 0 ; 
        int j = 0;
         int ans= 0 ;
        int n = a.size();
        int cnt = 0;
       
        while(j < n)
        {
            if(a[j] == 0)
                cnt++;
             
       
    
                
                while(cnt > k)
                {
                   
                    if(a[i] == 0)
                    cnt--;
                    i++;
                }
            
               ans = max(ans, j - i + 1);
            
           j++;
        }
        
        
        return ans ;
        
        
        
    }
};
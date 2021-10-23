class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int targetPro) {
        
        int cnt = 0 ;
        int j = 0 ;
        int i = 0 ; 
        int prod =  1; 
        int n = a.size();
        while(j < n )
        {
            prod *= a[j];
            
             if(prod >= targetPro)
            {
                
                while(prod >= targetPro && i< n)
                {
                    prod /= a[i];
                    i++;
                }
                
          
            
                
            }
            if(prod < targetPro)
            {
                cnt+= j-i+1;
                
                
            }
            j++;
        }
        
            return cnt; 

    }
    
    

};
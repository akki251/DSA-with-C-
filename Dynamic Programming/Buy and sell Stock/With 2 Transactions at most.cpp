class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int n = a.size();
        int dpl[n];
        
        dpl[0] = 0 ; 
        int minSofar =  a[0];
        int maxProfitToday= 0;
         // left calculation
        for(int i =1  ;i <  n ; i++)
        {
            
            minSofar = min(minSofar,a[i]);
          
            maxProfitToday = a[i] - minSofar;
            
            
            // cout << maxProfitToday  << " ";
            if( maxProfitToday > dpl[i-1])
            {
                dpl[i] = maxProfitToday;
            }
            else 
                dpl[i] = dpl[i-1];
            
        }
        
        
        
        
        
       
        
        
     
       
        
            // right calculation
        
           int dpr[n];
        
        
        int maxSoFar = a[n-1];
        int maxProfitTodayRight= 0;
        
        dpr[n-1] = 0;
        
        
        for(int i = n - 2   ;i >= 0; i--)
        {
            
            maxSoFar = max(maxSoFar,a[i]);
            
            maxProfitTodayRight = maxSoFar - a[i];
            // cout << maxProfitTodayR  << "  " <<  dpr[i+1] << endl   ;
            if(maxProfitTodayRight > dpr[i+1])
            {
                dpr[i] = maxProfitTodayRight;
            }
            else 
                dpr[i] = dpr[i+1];
            
        }
        

        
        
        int omax =0 ;
        
        for(int i = 0; i < n ; i++)
        {
            omax = max(omax, dpl[i] + dpr[i]);
        }
        
        return omax ;
        
        
        
        
        
        
        
        
        
        
    }
};
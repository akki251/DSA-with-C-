  int profit = 0;
         int sd = 0 ;
        int bd = 0 ;
        
        
        for(int i = 1;  i < prices.size() ; i++)
        {
            
            if(a[i] >= a[i-1])
            {
                sd++;
            }
            else 
            {
                profit += prices[sd] - prices[bd];
                bd = sd = i;
            }
            
        }
        
        profit += prices[sd] - prices[bd];
        
        
        return profit ;
        
        
        
    }
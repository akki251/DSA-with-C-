   
       
      int omax= 0; 
       int maxi = 0;
       for(int i = 0 ; i < n ; i++)
       {
           
           maxi = 0;
           for(int j = 0 ;  j < i ; j++)
           {
               if(a[i] - a[j] == 1 || a[i] - a[j] == -1)
               {
                   maxi = max(dp[j],maxi);
               }
           }
           
           
           dp[i] =maxi + 1;
      
      omax= max(dp[i],omax);
      
      
      
       }
       
       
       return omax;
       
       
       
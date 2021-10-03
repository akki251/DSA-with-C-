 int maxSumPairWithDifferenceLessThanK(int a[], int n, int k)
    {
        sort(a,a+n);
        
   
      
      
      int sum = 0;
      for(int i = n -1 ; i > 0 ; i--)
      {
          
          if(a[i] - a[i-1] < k)
         { sum += a[i];
          sum += a[i-1];
          i--;
             
         }
      }
      
      return sum ; 
        
        
       
    
    }
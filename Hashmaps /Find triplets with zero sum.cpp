 bool findTriplets(int a[], int n)
    { 
       
       
       
       unordered_set<int> s ;
       for(int i = 0 ; i < n ; i ++)
       {
           
              s.clear();
              for(int j = i +1 ; j < n ; j++)
              {
                  int num = -(a[i] + a[j]);
                  
                  if(s.find(num) != s.end())
                  return true;
                  else 
                 s.insert(a[j]);
              }
           
       }
       
       return false;  
    
       
       
    }
};
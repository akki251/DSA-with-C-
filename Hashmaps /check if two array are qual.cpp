bool check(vector<ll> A, vector<ll> B, int N) {
  
  
          map<int , int >  m;
      
          for(int i = 0 ; i < A.size() ; i++)
          {
              m[A[i]]++;
          }
          
          
          for(int i = 0 ; i < B.size() ; i++)
          {
              if(m.find(B[i]) == m.end()  )
              return false ;
              
              if(m[B[i]] == 0)
              return false ;
              
              m[B[i]]--;
          }
          
          return true ;
        
  
  
  }
};
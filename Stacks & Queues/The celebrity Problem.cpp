 public:
    //Function to find if there is a celebrity in the party or not.
// pepcoding

    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack <int>s;
        for(int i = 0 ; i < n ; i ++)
        s.push(i);
        int pc = -1;
        
        while(s.size() >=2)
       { 
           int a= s.top();
        s.pop();
        int b = s.top();
        s.pop();
        
           if(M[a][b] == 1)
           s.push(b);
           
           else if(M[b][a] == 1)
           s.push(a);
          }
          
          pc = s.top();
     
          
         
          
          for(int i = 0; i< n ; i++)
          if( i != pc)
          {
              if(M[i][pc] == 0)
                return -1;
          }
          
          
          for(int j = 0 ; j < n ;  j++)
          {
              if(j != pc)
              {
                  if(M[pc][j] == 1)
                  return -1;
              }
          }
          
          return  pc;
          
        
    }
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
vector<long long int> ans;    
    long long int i = 0 ;
    long long int j = 0;
 queue <long long int > l;
 vector <long long int> v;
    while(j < N)
    {
        
        if(A[j] < 0)
        l.push(A[j]);
        
        if(j-i+1 < K)
        j++;
        
        
        else if(j-i+1 == K)
        {
            
            
            if(l.size() == 0)
            v.push_back(0);
            else 
            v.push_back(l.front());
            
            if(A[i] < 0)
            l.pop();
            
            i++;
            j++;
            
        }
        
        
                
                
                  
        
    }
    
    
    return v;
    
    
                                                 
 }
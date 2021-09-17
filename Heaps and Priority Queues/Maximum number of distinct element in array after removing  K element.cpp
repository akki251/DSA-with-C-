  public:
    int maxDistinctNum(int a[], int n, int k)
    {
    	
    
    
            unordered_map<int, int> m;
            for(int i = 0 ; i < n ;  i++)
            {
                m[a[i]]++;
            }
           
           priority_queue<int> pq;
           
            for(auto it : m)
            {
               pq.push(it.second);
            }
            
            while(k--)
            {
                
                
                int a= pq.top();
                a--;
                if(a == 0)
                pq.pop();
                else 
                {
                    pq.pop();
                    pq.push(a);
                    
                }
            }
            
           
    return pq.size();
    
    	
    	
    }
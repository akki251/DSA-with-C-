#include<queue>
int buyTicket(int *a, int n, int k) {
   

    
    queue<int> q;
    
    priority_queue<int> pq;
    for(int i = 0 ; i < n ; i++)
    {
        q.push(a[i]);
        pq.push(a[i]);
    }
    
    int cnt = 0 ;
    while(!pq.empty())
    {
        
        if(pq.top() == q.front())
        {
            if(k == 0)
            {
                return cnt +1 ;
            }
            
            cnt++;
            pq.pop();
            q.pop();
            k--;
        }
        else 
        {
        
            q.push(q.front());
            q.pop();
            
            if(k==0)
            {
                k = q.size() - 1 ;
            }
            else 
            {
                k--;
            }
            
            
        }
        
        
        
        
    }
        
    
return cnt;
   
    
    
    
}
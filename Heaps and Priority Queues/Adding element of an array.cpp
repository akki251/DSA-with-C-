 int minOperations(int a[], int n, int k) {
    
    priority_queue<int ,vector<int> , greater <int> >  pq;
    for(int i = 0 ; i < n ; i ++)
    {
        pq.push(a[i]);
    }
    
    if(pq.top() >= k)
    return 0 ;
    
    int cnt =0;
    while(pq.size() >= 2 && pq.top() < k )
    {
        int a= pq.top();
        pq.pop();
        int b =pq.top();
        pq.pop();
        
        int sum = a+ b;
            cnt++;
        
        pq.push(sum);
    
        
    }
    
    
    return cnt ;  
    
    }
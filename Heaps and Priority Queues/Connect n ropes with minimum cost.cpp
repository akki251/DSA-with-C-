//  https://www.youtube.com/watch?v=_k_c9nqzKN0
 
 long long minCost(long long a[], long long n) {
          priority_queue <long long , vector<long long> , greater<long long> > min_H;
    for(long long i  =0 ; i < n ; i++)
    {
          min_H.push(a[i]);
    }
    long long cost = 0;
    while(min_H.size() >= 2)
    {
        long long a = min_H.top();
        min_H.pop();
            long long b = min_H.top();
        min_H.pop();
        cost += a + b;
        min_H.push(a+b);
    }
    
    return cost;
    }
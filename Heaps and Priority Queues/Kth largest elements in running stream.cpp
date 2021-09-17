// https://www.geeksforgeeks.org/kth-largest-element-in-a-stream/

vector<int> kthLargest(int k, int a[], int n) {
      
    vector<int> ans(n);   
 
 
 priority_queue <int    , vector<int> , greater<int>>    pq;
 for(int i = 0 ; i < n ; i ++)
 {
     
     if( k > pq.size())
     {
         pq.push(a[i]);
     }
     
     else if(a[i] >  pq.top()){
     pq.pop();
     pq.push(a[i]);
     }
     
     
     if(pq.size() < k)
     ans[i]=  -1;
     else{
         ans[i] = pq.top();
     }
     
 }
    return ans ;

    
}
      

      
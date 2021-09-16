// https://www.youtube.com/watch?v=dYfM6J1y0mU


#include <iostream>
using namespace std;
#include<queue>
int main() {
int t ;
 cin >> t;
 while(t--)
 {
     int n , k ;
     cin >> n >> k ;
     
     int a[n];
     
     for(int i = 0 ; i < n; i ++)
     {
         cin >> a[i];
     }
     
     
     priority_queue<int , vector<int> , greater<int > > pq;
     int idx = 0;
     for(int i = 0 ; i <= k && i < n; i ++)
     {
         pq.push(a[i]);
     }

     for(int i = k+1 ; i < n ; i ++)
     {
    a[idx]  =pq.top();
         
         pq.pop();
         idx++;
    pq.push(a[i]);
     }
     
     while(!pq.empty())
     {
         a[idx++] = pq.top();
         pq.pop();
     }
     
     
     for(int i = 0 ; i < n ; i ++)
     {
         cout << a[i] << " ";
     }
     
 cout << endl;     
 }
 
	return 0;
}
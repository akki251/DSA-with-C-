// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int a[], int n, int k)
    {
        
        
        sort(a, a+ n);
       int size = n ; 
       
       int mini = 0 ; 
       for(int i  = 0; i  < n ;  i++)
       {
           mini += a[i];
           n = n - k;
       }
       
       int maxi = 0 ;
       n = size;
      int  m = 0 ;
       for(int i  = n-1 ; i >= m ;  i--)
       {
           maxi += a[i];
           
           m = m + k;
       }
       
       vector<int> ans = {mini ,maxi};
       
       return ans ;
       
       
    }
};
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	#define ll long long 
	long long countTriplets(long long a[], int n, long long sum)
	{
	    
	    
	    sort(a,a+n);
	 int cnt = 0 ;
	 int low = 0 ; 
	 int high = n-1;
	 for(int i = 0 ; i < n-1 ; i++)
	 {
	     
	     low = i+1;
	     high = n-1;
	     while( low < high)
	     {
	         
	     if(a[i] + a[low] + a[high] >= sum)
	     {
	         
	         high--;
	     }
	     else
	     {
                cnt += high - low;
                low++;
	     }
	  
	         
	         
	         
	         
	     }
	     
	   //  return 
	     
	 }
	 
	 return cnt;
	    
	    
	    
	 }
	
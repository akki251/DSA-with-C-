// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

#define ll long long
	public:
	long long getCount(int n)
	{
	    
	    vector<vector<int> >  data = {
	        {0,8},
	        {1,2,4},
	        {1,2,3,5},
	        {2,3,6},
	        {1,4,5,7},
	        {2,4,5,6,8},
	        {3,5,6,9},
	        {4,7,8},
	        {5,7,8,9,0},
	        {6,8,9}
	    };
	    
	    
	    ll dp[n+1][10] ;
	    memset(dp,0,sizeof(dp));
	    if(n == 1)
	    return 10;
	    for(int i = 1 ;i <= n ; i++)
	    {
	        for(int j = 0 ; j <= 9  ;j ++)
	    {
	        
	        if(i == 0)
	        dp[i][j] = 0 ;
	        
	        else if(i == 1)
	        {
	            dp[i][j] = 1 ;
	        }
	        else 
	        {
	            
	            for(int prev : data[j])
	            {
	                dp[i][j] += dp[i-1][prev]; 
	                }
	            
	        }
	    }
	        
	    }
	    
	    
	    ll sum = 0 ;
	    
	    for(int i = 0 ; i <= 9 ; i++)
	    {
	        sum += dp[n][i];
	    }
	    
	    
	    
	    return sum;
	    
		
	}


};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.getCount(n) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends
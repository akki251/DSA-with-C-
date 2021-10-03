// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
#define INF 1000000
class Solution{
		

	public:
	int minimumCost(int cost[], int n, int w) 
	{ 
       
       
       
       vector<int> wt ,val;
       
       int size = 0;
       for(int i = 0 ; i < n ; i++)
       {
           if(cost[i] != -1)
           {
               wt.push_back(i+1);
               val.push_back(cost[i]);
               size++;
           }
       }
       
       n = size;
       
       
       int dp[n+1][w+1];
       
  
       
       for (int i=0; i<=w; i++)
        dp[0][i] = INF;
 
    // fill 0'th column with 0
    for (int i=1; i<=n; i++)
        dp[i][0] = 0;
       
       for(int i =  1 ; i <= n ; i++)
       {
           for(int j = 1 ; j <= w ; j++)
           {
               
               if(wt[i-1] > j)
               {
                   dp[i][j] = dp[i-1][j];
               }
               else 
               {
                   dp[i][j] = min(dp[i-1][j]  , val[i-1] + dp[i][j-wt[i-1]]  );
               }
               
               
           }
       }
    
    if(dp[n][w] == INF)
    return -1 ;
    return dp[n][w];
       
        
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
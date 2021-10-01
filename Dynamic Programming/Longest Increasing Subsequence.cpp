// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
      
      
      int dp[n];
      int omax= 0;
      int maxi = 0;
      
      for(int i= 0 ; i < n ; i++)
      {
                 
                 maxi =0;
                 for(int j = 0 ; j < i ;  j++)
                 {
                     
                     if(a[j] < a[i])
                     {
                         maxi = max(maxi,dp[j]);
                     }
                     
                 }
                 
                 dp[i] = maxi + 1;
                 
                 omax= max(dp[i], omax);
      
          
      }
      
      
      return omax;
      
      
      
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends
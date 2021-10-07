// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
#define ll long long
ll dp[1001][1001];
 ll helper(int i  , int j , string s1)
 {
     
     if(i > j)
     return 0;
     
     if(i==j)
     return 1;
     
     if(dp[i][j] != -1)
     {
         return dp[i][j];
     }
     
     if(s1[i] == s1[j])
     {
         return dp[i][j] = helper(i+1,j,s1) + helper(i,j-1,s1) + 1;
    }
     
     else 
     {
         return dp[i][j] = helper(i+1,j,s1) + helper(i,j-1,s1) - helper(i+1,j-1,s1);
     }
     
     
     
     
     
 }

    long long int  countPS(string s1)
    {
      
int n = s1.length();
dp[n][n];
memset(dp,-1,sizeof(dp));
return helper(0,n-1,s1);
      
   
      
    }
     
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  // } Driver Code Ends
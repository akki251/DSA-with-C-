// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> a)
    {
        
    int m = N ; int n = N;
        
        int dp[N][N];
        
        for(int  i = m-1 ; i>= 0 ; i--)
        {
            for(int j = n-1 ; j >= 0 ; j--)
            {
                   if(i == m-1)
                   {
                     dp[i][j] =   a[i][j];
                   }
                   
                   else if(j == n-1)
                   {
                       dp[i][j] =  a[i][j] +  max( dp[i+1][j] , dp[i+1][j-1] );
                   }
                   
                   else if( j == 0)
                   {
                       dp[i][j] =  a[i][j]  + max(dp[i+1][j] ,  dp[i+1][j+1]);
                   }
                   else 
                   {
                       dp[i][j] = a[i][j] + max(max( dp[i+1][j+1],dp[i+1][j-1] ) ,dp[i+1][j]);
                   }
            }
        }
        
        int maxi = dp[0][0];
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ;  j++)
            {
                maxi = max(dp[i][j] , maxi);
            }
        }
        
        return maxi;
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
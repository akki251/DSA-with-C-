// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string s)
	{
	    
	    
	    int a[s.length()];
	    
	    for(int i= 0 ; i < s.length() ; i++)
	    {
	        if(s[i] == '0')
	        a[i] = 1;
	        else 
	        {
	            a[i] = - 1; 
	        }
	    }
	    
	    
	    int curSum = 0;;
	    int maxSum = a[0];
	    for(int i = 0 ; i < s.length() ; i++)
	    {
	        
	        
	        curSum += a[i];
	        
	       maxSum = max(maxSum,curSum);
	       
	       if(curSum < 0)
	       curSum = 0;
	    }
	    
	    return maxSum;
	    
	    
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends
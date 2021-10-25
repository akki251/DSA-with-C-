// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	
	void helper(string s,  vector<string> &ans, string asf)
	{
	    if(s.length() == 0)
	    {
	        ans.push_back(asf);
	        return;
	    }
	    
	    
	    for(int i = 0 ; i< s.length();  i++)
	    {
	        char curr = s[i];
	        string left = s.substr(0,i);
	        string right = s.substr(i+1);
	        string qleft = left + right;
	        helper(qleft,ans,asf +  curr);
	    }
	    
	}
	
		vector<string>find_permutation(string s)
		{
		   
		  string asf = ""; 
		   vector<string> ans ;
		   helper(s,ans,asf);
		   sort(ans.begin(), ans.end());
		   return ans ;
		   
		   
		}
};



	           int helper(string s , string t)
	           {
	               int m = s.length();
	               int n = t.length();
	               
	               int dp[m+1][n+1];
	               
	               for(int i = 0 ; i <= m ; i++)
	               {
	                   for(int j = 0 ; j <= n ; j++)
	                   {
	                       if(i ==0 || j ==0)
	                       dp[i][j] = 0;
	                       
	                       else if(s[i-1] == s[j-1] && i!=j) // this condition is  only the change from LCS/
	                      { 
	                          dp[i][j] = 1 + dp[i-1][j-1];
	                      }
	                      else 
	                      {
	                             dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
	                      }
	                       
	                   }
	               }
	               
	               return dp[m][n];
	               
	           }
	
		int LongestRepeatingSubsequence(string str){
		    
		    
		    string second = str;
		    return helper(str,second);
		    
		}

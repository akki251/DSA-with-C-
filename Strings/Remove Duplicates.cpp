// Given a string without spaces, the task is to remove duplicates from it.

// Note: The original order of characters must be kept the same. 

// Example 1:

// Input: S = "zvvo"
// Output: "zvo"
// Explanation: Only keep the first
// occurrence

// Example 2:

// Input: S = "gfg"
// Output: gf
// Explanation: Only keep the first
// occurrence

// Your task:
// Your task is to complete the function removeDups() which takes a single string as input and returns the string. You need not take any input or print anything.
 

// Expected Time Complexity: O(|s|)
// Expected Auxiliary Space: O(constant)

// Constraints:
// 1 <= |S| <= 105
// S conatins lowercase english alphabets


	string removeDups(string s) 
	{
	    
	    
	     int length = s.length();
    string ans = "";
    int j;
    for (int i = 0; i < length; i++)
    {

        for (j = 0; j < ans.length(); j++)
        {
            if (s[i] == ans[j])
                break;
        }

        
            ans = ans + s[i];
        
    }
	    
	    
	    
	    return ans;
	    
	    
    }
// Print first letter of every word in the string 

// https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]-2difficulty[]-1difficulty[]0page1category[]Strings#


	string firstAlphabet(string s)
	{
	   
	  
	string ans = "";
	
	
	bool isSpace = true;
	
	int n = (int)s.size();
	
	for ( int  i = 0  ; i  < n ;  i++)
	
	{
	    if(s[i] == ' ')
	   isSpace  = true;
	    
	    else if(s[i] != ' ' && isSpace == true )
	    {
	        ans = ans + s[i];
	        isSpace = false;
	    }
	}
	   
	   
	   return ans;
	}
// https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string-1587115621/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&query=category[]StringsproblemStatusunsolveddifficulty[]-2difficulty[]-1difficulty[]0page1category[]Strings#



 int findSum(string s)
    {
    	    int i;
    	    int length = (int)s.size();
    	    int number =  0;
    	    int sum  = 0;
    	  for( i = 0 ; i < length ; i ++)
    	  {
    	      if( '0' <= s[i]  && s[i] <= '9')
    	      {
    	          number = number * 10 + (s[i] - '0');
    	          
    	      }
    	      else 
    	      {
    	          sum = sum + number;
    	          number =  0;
    	          
    	      }
    	  }
    	  
    	  return sum + number;
    	  
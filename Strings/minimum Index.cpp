
// Minimum indexed character
// Easy Accuracy: 50.4% Submissions: 12104 Points: 2

// Given a string S and another string patt. Find the character in patt that is present at the minimum index in S.
 

// Example 1:

// Input: S = "zsyle", patt = "bjz"
// Output: "z"

// Example 2:

// Input: S = "anskg", patt = "me"
// Output: "$"

 

// Your Task:
// You don't need to read or print anything. Your task is to complete the function printMinIndexChar() which takes S and patt as input parameter and returns the character in patt that is present at the minimum index in S. If not possible returns "$".
 

// Expected Time Complexity: O(max(|str|, |patt|))
// Expected Auxilary Space: O(K) where K <= 26


	string printMinIndexChar(string s, string patt)
	{
	    string final = "";
	      
	      int minIndex= INT_MAX;
   
    int i;
    for (i = 0; i < patt.length(); i++)
    {

        int index = s.find(patt[i]);
        if (index >= 0)
        {
          if(index < minIndex)
          {
              minIndex = index;
          }
        }
    }

if(minIndex == 100000)
{
     final = final +  "$";
}
  else 
{  final = final +  s[minIndex];}
  
  return final;
	    
	}
};
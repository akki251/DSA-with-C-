      
// Red OR Green
// Basic Accuracy: 64.73% Submissions: 10122 Points: 1

// Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.

// Example 1:

// Input:
// N=5
// S="RGRGR"
// Output:
// 2
// Explanation:
// We need to change only the 2nd and 
// 4th(1-index based) characters to 'R', 
// so that the whole string becomes 
// the same colour.

// Example 2:

// Input:
// N=7
// S="GGGGGGR"
// Output:
// 1
// Explanation:
// We need to change only the last 
// character to 'G' to make the string 
// same-coloured. 
       
       
       
       int RedOrGreen(int N,string s) {
       int countR = 0;
       int countG = 0 ;
       int i ;
       for ( i = 0 ; i < N ; i ++ )
       {
           if(s[i] == 'R')
           countR++;
           else if(s[i] == 'G')
           countG++;
           
       }
       
       if(countG == countR)
 return countG;

if(countR > countG)
return N - countR;
else 
return N - countG;
       
       
       
    }
};
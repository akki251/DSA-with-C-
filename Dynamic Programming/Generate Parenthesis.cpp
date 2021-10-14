class Solution {
public:
    
    void helper(string temp,  int open , int close , vector<string> &final)
    {
        if(open == 0 && close == 0)
        {
            final.push_back(temp);
            return ;
        }
    
        
        if(open > 0)
        {
            helper(temp + "(" , open - 1 ,close , final);
        }
        if(close > open)
        {
            helper(temp + ")" , open ,close - 1, final);
        }
        
        
    }
    
    
    vector<string> generateParenthesis(int n) {
     
    vector<string> ans ;    
         helper("" , n , n ,ans );
        return ans ;
        
    }
};
https://leetcode.com/problems/richest-customer-wealth/


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        

        int n = accounts.size();
               vector<int> wealth(n);
        for(int i = 0 ; i < n ; i++)
        {
             wealth[i] = accumulate(accounts[i].begin(), accounts[i].end() , 0 );
            
        }
        
        
        return *max_element(wealth.begin(),wealth.end());
        
        
    }
};
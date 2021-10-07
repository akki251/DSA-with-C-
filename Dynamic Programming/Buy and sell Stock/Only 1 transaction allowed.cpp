class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
int overallProfit = INT_MIN ;
        int minimumDayTillNow = prices[0];
        
        
        for(int i = 0 ; i < prices.size() ; i++)
        {
            
            minimumDayTillNow= min(minimumDayTillNow,prices[i]);
            overallProfit = max(overallProfit, prices[i] - minimumDayTillNow );
        }
        
        
        return overallProfit;
    }
        
        
};
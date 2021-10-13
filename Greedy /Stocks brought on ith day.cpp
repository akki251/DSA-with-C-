#include<algorithm> 

int maxStock(vector<int> &prices, int n, int amount){


    
    vector<pair<int,int>> v;
    
    for(int i = 0 ; i < prices.size();  i++)
    {
        v.push_back({prices[i],i+1});
    }
    
    sort(v.begin() , v.end());
    int totalAmnt =  0;
    int totalStocks = 0;
    
    for(int i = 0 ; i < v.size() ; i++)
    {
        int val = v[i].first;
        int freq = v[i].second;
        if(  (val * freq ) <= amount )
        {
            totalStocks+= freq;
            amount -= (val * freq);
        }
        else
        {
           totalStocks += amount / val;
            break;
        }
    }
   
    return totalStocks ;
    
    
}
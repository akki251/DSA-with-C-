class Solution {
public:
    #define interval intervals 
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     
        
        sort(intervals.begin() , intervals.end());
        vector<vector<int>> ans ;
        ans.push_back(intervals[0]);
     
        for(int i = 1 ; i < intervals.size() ; i++)
        {
            if(interval[i][0] <= ans.back()[1])
            {
                ans.back()[1] = max(interval[i][1] , ans.back()[1]);
            }
  
            else 
         ans.push_back(interval[i]);
            
            
        }
        
        
        return ans ;
        
         
        
        
    }
};
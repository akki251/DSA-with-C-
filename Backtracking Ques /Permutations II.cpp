class Solution {
public:
    
    
    
    void helper(vector<vector<int> > &ans , vector<int> &temp , vector<int> &nums , unordered_map<int, int> &map )
    {
        
        if(temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        
        for(auto& [num ,freq] : map )
        {
            if(freq == 0)
                continue;
            
            freq--;
            temp.push_back(num);
            
            helper(ans , temp , nums, map);
            
            freq++;
            temp.pop_back();
        }
        
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        
        
        unordered_map<int, int>  map ;        
        vector<vector<int>> ans ;
        vector<int> temp;
        
        for(auto it : nums)
        {
            map[it]++;
        }
        
        helper(ans,temp,nums,map);
        return ans ;

        
        
        
        
    }
};
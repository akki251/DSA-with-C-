class Solution {
public:
    
    void helper(vector<vector<int>> &ans , vector<int> &temp ,vector<int> &nums , unordered_set<int> used
)
    {
        
        
        if(temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        
        for(int i = 0 ;i  < nums.size()  ; i++)
        {
            if(used.find(nums[i])== used.end())
            {
                temp.push_back(nums[i]);
                used.insert(nums[i]);
                helper(ans,temp,nums,used);
                temp.pop_back();
                used.erase(nums[i]);
            }
        }
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
unordered_set<int> used;        
        vector<vector<int>> ans ;
        vector<int> temp;
        helper(ans,temp,nums, used);
        return ans ;

        
        
    }
};
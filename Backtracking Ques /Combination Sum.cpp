class Solution {
public:
    
     void helper(    vector<vector<int>>&ans  , vector<int> &temp ,    int target  ,int ind , vector<int> &nums) 
     {
         
         if(target == 0){
             ans.push_back(temp);
             return ;
         }
         
         
         for(int i = ind ; i< nums.size() ; i++)
         {
             if(target -nums[i] >= 0)
             {
                 temp.push_back(nums[i]);
                 helper(ans,temp,target-nums[i],i,nums);
                 temp.pop_back();
             }
         }
     }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
    vector<vector<int>> ans ;        
        vector<int> temp;
        int ind = 0;
        helper(ans,temp,target,ind,nums);
        return ans ;
        
    }
};
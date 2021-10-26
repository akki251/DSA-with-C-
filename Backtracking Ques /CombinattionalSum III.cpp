class Solution {
public:
    
    
    void helper( vector<vector<int>> &ans ,vector<int> &temp , int target ,int k ,int  index ,vector<int> &nums)
    {
        if(target == 0  && temp.size() == k)
        {
            ans.push_back(temp);
            return;
        }
        
        
        
        for(int i = index ; i < nums.size() ;i++)
        {
            if(target - nums[i] >= 0)
            {
                
                temp.push_back(nums[i]);
                helper(ans , temp , target - nums[i] , k , i +1 , nums);
                temp.pop_back();
                
            }
        }
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
     
        vector<int> nums;
        for(int i = 1;  i <= 9 ; i++)
        {
            nums.push_back(i);
            
        }
         vector<vector<int>> ans ;
        vector<int> temp;
     
        helper(ans ,temp , n , k , 0 , nums );
        return ans ;
        
    }
};
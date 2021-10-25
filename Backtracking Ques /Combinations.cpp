class Solution {
public:
    
    
    void helper(vector<vector<int>> &ans , vector<int> &temp , int start ,int k ,int end)
    {
        
        if(temp.size() == k)
        {
            ans.push_back(temp);
            return;
        }
        
        
        
        for(int i = start ; i<= end ; i++)
        {
            temp.push_back(i);
            
            helper(ans,temp,i+1,k,end);
            
            temp.pop_back();
        }
        
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        
        
        

        vector<vector<int>> ans ;
        vector<int> temp;
        helper(ans,temp,1,k ,n);
        return ans ;

        
        
        
    }
};
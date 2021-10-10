class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
      
        unordered_set<int> s (nums.begin() , nums.end());
        
        int len = 0;
        for( auto it  : nums )
        {
            if(s.count(it- 1) )
                continue;
            
            int  p =1 ;
            while(s.count(it + p)  )
            {
                p++;
                
            }
            len = max(len , p);
        }
        
        return len;
        
    }
        
};
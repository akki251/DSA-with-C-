class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int sum = 0 ;
        int cnt = 0 ;
        unordered_map<int, int> m ;
        m[0]=  1 ;
        int n = a.size();
        for(int i = 0 ; i  < n ; i ++)
        {
            sum += a[i];
            if(m.find(sum-k) != m.end())
            {
                cnt += m[sum-k];
            }
            
            m[sum]++;
        }
        
        return cnt  ;
        
        
        
        
        
    }
};
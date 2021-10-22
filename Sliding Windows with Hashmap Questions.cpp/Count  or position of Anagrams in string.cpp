class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        
        vector<int> ans ;
        unordered_map<char,int> m;
        
        for(auto it : p)
        {
            m[it]++;
        }
        
        int k = p.length();
int i = 0;  
        int j=  0; 
        int cnt = m.size();
        
        while ( j < s.length())
        {
            
            if( m.find(s[j]) != m.end())
            {  
                m[s[j]]--;
               if(m[s[j]] == 0)
                   cnt--;
            }   
            
            if(j - i + 1 < k)
                j++;
            
            else if(j-i + 1 == k)
            {
                     if(cnt == 0)
                     {
                        ans.push_back(i); 
                     }
                
                if(m.find(s[i]) != m.end())
                {
                    m[s[i]]++;
                    if(m[s[i]] == 1)
                        cnt++;
                }
                
                i++;
                j++;
                
            }
        }
        
        
        return ans ;
        
        
        
        
        
        
    }
};
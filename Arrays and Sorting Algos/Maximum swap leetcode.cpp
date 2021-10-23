class Solution {
    
    
    
    
public:
    int maximumSwap(int n) {
        
      string s = to_string(n);
        
        unordered_map<int, int > m;
        
        for(int i = 0 ; i < s.length() ; i ++)
        {
            m[ s[i] - '0' ] = i;
        }
        
     
        
        for(int i = 0 ; i < s.length() ; i ++)
        {
            for(int j = 9 ;  j> s[i] - '0' ; j--)
            {
                
                if(m[j] > i)
                {
                    swap(  s[m[j]] , s[i] );
                    return stoi(s);
                }
                
            }
        }
        
        return stoi(s);
        
    }
};
//  https://www.youtube.com/watch?v=VdQuwtEd10M
 
 int longestValidParentheses(string s) {
        if(s.size() == 0)
            return 0;
        stack <int> st;
        st.push(-1);
        int ans = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(')
                st.push(i);
            
            else 
            {
                st.pop();
                
                if(st.empty())
                    st.push(i);
                else 
                {
                    int len = i - st.top();
                    ans = max(ans,len);
                }
            }
        }
        
        return ans;
    }
};
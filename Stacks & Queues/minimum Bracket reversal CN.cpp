watch Hint for explaination.
#include<stack>
int countBracketReversals(string s) {


    stack <char> st;
    int count = 0;
    if(s.length() % 2 != 0 || s.length() == 0)
        return -1;
    else 
    {
        for(int i = 0 ; i < s.length() ; i++)
        { 
            if(s[i] == '{')
                st.push(s[i]);
            else if(s[i] == '}' && !st.empty())
            {
                if(st.top() == '{')
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
    }
    while(st.size() != 0)
    {
        char c1 = st.top();
        st.pop();
        char c2 = st.top();
        st.pop();
        if(c1 == c2)
            count = count +  1;
        else 
            count = count + 2;
    }
    return count;






}
 
        stack <long long > st;
        vector<long long >left ;
        // NSL
        for(int i = 0 ; i < n ; i++)
        {
            
            if(st.empty())
            {
                left.push_back(-1);
            }
            
            if(!st.empty() && a[i] > a[st.top()])
            left.push_back(st.top());
            
            if(!st.empty() && a[i] <= a[st.top()])
            {
                
                
                while(!st.empty() && a[i] <= a[st.top()])
                st.pop();
                
                if(st.empty())
                left.push_back(-1);
                
                else 
                left.push_back(st.top());
            }
            
           st.push(i); 
        }
        
        
        // NSR 
      while(!st.empty())
      st.pop();
        vector<long long > right;
        
          for(int i = n - 1; i >= 0 ; i--)
        {
            
            if(st.empty())
            {
                right.push_back(n);
            }
            
            if(!st.empty() && a[i] > a[st.top()])
            right.push_back(st.top());
            
            if(!st.empty() && a[i] <= a[st.top()])
            {
                
                
                while(!st.empty() && a[i] <= a[st.top()])
                st.pop();
                
                if(st.empty())
                right.push_back(n);
                
                else 
                right.push_back(st.top());
            }
            
           st.push(i); 
        }
        
        
        reverse(right.begin(),right.end());
        
        
        
        vector<long long> ans(n) ;
        
        
        for(int i = 0 ; i < n ; i ++)
        {
            ans.push_back( (right[i] - left[i]  -1 ) * a[i] );
        }
        
        return *max_element(ans.begin(),ans.end());
        
        
        
        
        
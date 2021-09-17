// https://practice.geeksforgeeks.org/problems/game-with-string4100/1/?category[]=Heap&category[]=Heap&problemStatus=unsolved&page=1&query=category[]HeapproblemStatusunsolvedpage1category[]Heap#

int minValue(string s, int k){
        
        
      unordered_map<char,int> m;
        
        for(int i = 0; i < s.length() ; i++)
        {
            m[s[i]]++;
        }
        
        priority_queue <int> pq;
        for(auto it  : m)
        {
            pq.push(it.second);
        }
        
        
        while(k--)
        {
           
           int a =pq.top() ;
           a--;
           pq.pop();
           pq.push(a);
        }
        
        int cnt = 0;
        while(!pq.empty())
        {
           
            cnt = cnt + pq.top() * pq.top();
            pq.pop();
            
        }
        
        return cnt ;
        
    }
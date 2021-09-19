https://www.youtube.com/watch?v=YWXbu5uyGXs

#include<unordered_map>
#include<climits>
vector<int> longestConsecutiveIncreasingSequence(int *a, int n) {

    unordered_map<int,bool> m ;

for(int i = 0 ; i < n ; i ++)
{
            m.insert({a[i],true});

}
    
    for(auto it : m)
    {
        if(m.find(it.first-1) != m.end())
            m[it.second] = false;
    }



    int maxL = INT_MIN;
    int start = 0;
    int end = 0;
    for(int i =0 ; i < n ; i ++)
    {
        if(m[a[i]] == true)
        {


            int first = a[i];
            int len = 1;
            while(m.find(first + len) != m.end())
            {
                len++;
            }

            if(len > maxL)
            {
                maxL = len;
                start = a[i];
                end = first+len-1;
            }

        }
    }
    
    
    vector<int> ans ;
    ans.push_back(start);
    ans.push_back(end);
    return ans ;

}
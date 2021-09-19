#include<unordered_map> 
int abs(int x)
{
    if(x  < 0 )
        return -x;
    return x;
}
int getPairsWithDifferenceK(int *a, int n, int k) {
	
    int cnt = 0;
    unordered_map<int, int> m;
    
    for(int i = 0 ; i < n ; i++)
    {
        
        
        if(m.find(a[i] - k) != m.end())
        {
            cnt += m[a[i]-k];
        }
        
        else if(m.find(a[i]+k) != m.end())
        {
            cnt += m[a[i] + k];
        }
        
        // if(m.count(a[i]-k)>0) Faulty Code 
        // {
        //     cnt+=m[a[i]-k];
        // }
        // else if(m.count(a[i]+k)>0)
        // {
        //     cnt+=m[a[i]+k];
        // }
        // int number = abs(a[i] - k);
        // if(m.count(number)>0)
        // {
        //     cnt+= m[number];    
        // }
        m[a[i]]++;
    }
    
    return cnt; 
    
}
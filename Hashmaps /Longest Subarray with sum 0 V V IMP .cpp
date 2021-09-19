#include<unordered_map>
#include<climits>
int lengthOfLongestSubsetWithZeroSum(int* a, int n) {
    
    
    
    unordered_map<int, int > m;
    
    int maxL = INT_MIN;
    int sum = 0;
    for(int i = 0;  i <  n ; i ++)
        {
            
        sum = sum + a[i];
        if(sum == 0)
            maxL = i+1;
        
        else if(m.find(sum) != m.end())
        {
            
            int len =  i - m[sum];
            maxL = max(len , maxL);
            
        }
        
        m[sum] = i;
        }
    
    return maxL;
    
}
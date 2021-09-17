// https://leetcode.com/problems/maximum-product-subarray/
class Solution {
public:


int maxProduct(vector<int>& a) {


if(a.size() == 0)
    return 0;

int maxP = a[0];
int currMax = a[0];
int currMin = a[0];
    
    for(int i = 1 ; i < a.size() ; i++)
    {
        
        int p1 = currMax * a[i];
        int p2 = currMin * a[i];
        
        
        currMax = max(a[i] , max(p1,p2));
        currMin = min(a[i], min(p1,p2));
        
        maxP = currMax > maxP ? currMax  : maxP;
    }
    
    return maxP;
}
    

};
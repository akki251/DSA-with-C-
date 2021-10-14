// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    #define ll long long 
    long long int maximizeSum(long long int a[], int n, int k)
    {
        
        sort(a, a+ n);
        
        for(int i = 0 ; i < n  ;  i++)
        {
            if(a[i] < 0 && k > 0)
            {
                a[i] *= -1;
                k--;
            }
        }
        
        int sum=  0 ;
        for(int i = 0  ; i < n ; i ++)
        {
            sum += a[i];
        }
        
        int min_el = *min_element(a,a+n);
        if(k & 1)
        sum -= 2 *min_el;
        
        return sum;
    }
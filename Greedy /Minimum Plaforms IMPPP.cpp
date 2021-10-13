// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    
    
    sort(arr,arr+n);
    sort(dep,dep+n);
    int maxTrains = 0,  platform = 0;
    int i = 0 , j = 0 ;
    while(i < n && j < n)
    {
        
        if(arr[i] <= dep[j] )
        {
            
            maxTrains++;
            i++;
        }
        else  
        {
            maxTrains--;
            j++;
        }
        
        platform = max(platform , maxTrains);
        
    }
    
    return platform;
    
    
    
    
    }
};
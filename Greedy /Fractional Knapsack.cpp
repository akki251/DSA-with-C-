// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    #define a arr
    public:
    
    bool static compare(Item a , Item b)
    {
        double r1 = (double)(a.value) / (double)(a.weight);
        double r2 = (double)(b.value) / (double)(b.weight);
        
        return r1 > r2;
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
    
             sort(arr, arr + n , compare);
             
             int currW = 0;
             double finalValue= 0;
             
             for(int i = 0 ; i < n ;  i++)
             {
                 
                 if(currW + a[i].weight <= W)
                 {
                     currW += a[i].weight;
                     finalValue += a[i].value;
                 }
                 
                 else 
                 {
                     int remain = W - currW;
                     finalValue += a[i].value /  (double) (a[i].weight) *(double) (remain) ;
                     break;                 

                 }
                 
             }

         
    return finalValue;
    
    }
        
};
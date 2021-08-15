// https://www.codingninjas.com/codestudio/problems/zig-zag-array_1698577?leftPanelTab=0

sort the vector/array, keep zeroth element as it is, Swap alternate elements;
#include<algorithm>
#include<vector>
#include<array>
vector<int> zigZag(vector<int> a, int n)
{

    
    sort(a.begin(),a.end());
    
    for(int i = 1 ;  i < n -1 ; i+=2)
    {

    int temp = a[i];
        a[i]  = a[i+1];
        a[i+1] = temp;
    }
    
    
    return a;
}
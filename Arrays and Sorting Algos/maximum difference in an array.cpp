

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int i;
    int a[] = {12,2,3,56,9};
    int n = sizeof(a)/sizeof(a[0]);
    
     int differnce = 0;  // initial differnce = 0
    // find maximum differnce of two elements;
    
    // first find the minmum element;

int minElement =  a[0]; 

    for(int i=0; i < n; i ++)\
    {
        if(a[i] < minElement)
        minElement = a[i];
    }
    
   // we will check the differnce between minimum and each element, and will store maximum differnce in same
        for(i =0 ; i < n ; i ++)
        {
            differnce = max(differnce , a[i] - minElement);
        }

    

    cout << differnce;
}

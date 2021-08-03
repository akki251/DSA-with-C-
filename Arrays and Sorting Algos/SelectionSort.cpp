#include <iostream>

using namespace std;


void  selectionSort(int a[] , int n)
{
    if( n == 1)
    return;
    
    int i;
    int minIndex= 0;
    for(i = 1; i < n ; i ++)
    
{
    if(a[i] < a[minIndex])
    minIndex = i;
}


int temp = a[0];
a[0] = a[minIndex];
a[minIndex] = temp;


selectionSort(a+1,n-1);


}


int main()
{
  
  int i;
  int a[] = { 5,4,3,2,1};
  
  int n = sizeof(a)/sizeof(a[0]);
  
  selectionSort(a,n);
  
  
  for(i = 0 ; i < n ; i ++)
  {
      cout << a[i];
  }
  
}
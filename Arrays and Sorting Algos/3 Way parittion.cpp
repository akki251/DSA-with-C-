#include<iostream>

using namespace std;

void Swap(int *a, int *b)
{
  int temp = *a;
  *a = * b;
  *b = temp;
}
int main()
{
    int a[] = { 1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = sizeof(a)/sizeof(a[0]);
    int lowValue = 12;
    int highValue = 20;

int start = 0;
int j = n-1;
int i;

for( i = 0 ; i <= j ;)
{
    if(a[i] < lowValue)
    {
        Swap(&a[i] , &a[start]);
        i++;
        start++;
    }
    
    else if(a[i] > highValue)
    {
        Swap(&a[i] , &a[j]);
        j--;
    }
    
    else 
    {
        i++;
    }
}
    



 
 for(i = 0 ; i < n ; i ++)
 {
     cout << a[i] << "  ";
 }






}
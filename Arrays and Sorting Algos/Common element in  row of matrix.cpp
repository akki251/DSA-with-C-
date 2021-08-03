
#include<iostream>
using namespace std;


  void sort( int a[] , int n)
  {
      
      
      if(n == 1)
      {
          return;
      }
      
      int minIndex = 0;
    
      for(int i = 1 ; i < n ; i ++)
      {
          if(a[i] < a[minIndex])
          {
              minIndex = i;
          }
      }
      
      int temp= a[0];
      a[0] = a[minIndex];
      a[minIndex] = temp;
      
      
      sort(a+1,n-1);
      
      
  }


int main()
{
    
       int a[4][4];
    int j;
    int n =4;
    
    for( int i = 0 ; i  < n ; i ++)
    {
        for(j = 0 ; j < n ; j ++)
        {
             cin >> a[i][j];
        }
    }
    
    
    for(int  i=0 ; i < n ; i ++)
    {
        sort(a[i] , n);
    }
  
    
    
    
    
        for( int i = 0 ; i  < n ; i ++)
    {
        for(j = 0 ; j < n-1 ; j ++)
        {
             if(a[i][j] == a[i][j+1])
             cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

    
    
}

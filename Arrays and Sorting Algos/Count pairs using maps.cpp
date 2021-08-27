// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#

   int getPairsCount(int a[], int n, int k) {
      
      int count = 0 ;
      
      unordered_map<int, int> m;
  for(int i = 0 ; i < n ; i++)
    {
          int x =k - a[i];
          
          if(m[x] ==0)
          {
              m[a[i]]++;
          }
          else 
          {
              count = count + m[x];
              m[a[i]]++;
          }
    }
      
      return count;
      
      
      
      
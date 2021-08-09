
https://www.geeksforgeeks.org/find-a-pair-with-the-given-difference/
bool findPair(int a[], int n, int k){

sort(a,a+n);

   int i = 0;
   int j = 1;
   
   while(i  < n && j < n)
   {
       if(a[j] - a[i] == k && i!= j)
       return true;
       
       else if(a[j] - a[i] < k)
{
    j++;
    
    
}

else 
{
    i++;
    
}
   }
   
   
   
   
   return false;
   


    
}
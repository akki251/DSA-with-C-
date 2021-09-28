#include<climits>
#include<cstring>

 int  output[101][101];
int helper(int * arr , int i  , int j )
{
    
    if(i >= j)
        return 0 ;
     
     if(output[i][j] != -1)
         return output[i][j];
    
    int ans = INT_MAX;
    for(int k =i ; k <= j-1 ; k++)
    {
        int temp = helper(arr,i,k) + helper(arr,k+1,j) + arr[i-1] * arr[k]  * arr[j];
        ans = min(temp,ans);
    }
    

                          output[i][j]= ans ;   
    return ans;
    
}

int matrixChainMultiplication(int* arr, int n) {
  
    
    int i = 1;
    int j = n ;
    memset(output,-1,sizeof(output));
    return helper(arr,i , j);
    
    
}
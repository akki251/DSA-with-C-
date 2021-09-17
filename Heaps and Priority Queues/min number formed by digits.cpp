 long long int minSum(int a[], int n)
    {
       
       
           sort(a,a+n);
           
        long long i = 0;
        long long j = 1;
           long long  num1= 0;
           long long  num2 = 0;
           
for(long long i = 0; i < n ; i+=2)
{
    num1 = num1*10 + a[i];
}
       
       
       
for(long long i = 1; i < n ; i+=2)
{
    num2 = num2*10 + a[i];
}
       
       
       return num1+num2;
       
    }
};

int editDistance(string s1, string s2) {






    int m = s1.length();
    int n = s2.length();

    int dp[m+1][n+1];

    for(int i = 0 ; i <= m ; i++)
    {
        for(int j = 0 ; j <= n  ; j++)
        {

            if(i == 0)
                dp[i][j] = j;
            if( j == 0)
                dp[i][j] = i;

        }
    }



    for(int i = 1 ; i <= m ; i++)
    {

        for(int j = 1;  j <= n ; j ++)
        {


            if(s1[i-1] == s2[j -1])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else 
            {
                dp[i][j] = min(1 + dp[i-1][j-1] , min( 1 + dp[i][j-1] , 1 + dp[i-1][j]) );
            }


        }

    }


    return dp[m][n];


}
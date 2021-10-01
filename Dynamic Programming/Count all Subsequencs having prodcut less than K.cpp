 int a[] = {1, 2, 3, 4};

    int n = sizeof(a) / sizeof(a[0]);
    int k = 10;

    int dp[n + 1][k + 1];

    // memset(dp, 0, sizeof(dp)); first row and coloum 0 ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {

            if (a[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = 1 + dp[i - 1][j] + dp[i - 1][j / a[i - 1]];
            }
        }
    }

    cout << dp[n][k];
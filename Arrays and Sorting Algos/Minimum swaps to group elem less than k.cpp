int a[] = {10, 12, 20, 20, 5, 19, 19, 12, 1, 20, 1};
    int n = sizeof(a) / sizeof(a[0]);

    int k = 1;
    int i = 0;

    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            count++;
        }
    }
    if (count == 0)
        return 0;

    int windowSize = count;

    i = 0;
    int j = 0;
    int ans = INT8_MAX;
    int countSwap = 0;

    while (j < n)
    {

        if (j - i + 1 != windowSize)
            j++;

        if (j - i + 1 == windowSize)
        {
            countSwap = 0;
            int p = i;
            for (; p <= j; p++)
            {
                if (a[p] > k)
                {
                    countSwap++;
                }
            }
            ans = min(countSwap, ans);
            i++;
        }
    }
    cout << ans;
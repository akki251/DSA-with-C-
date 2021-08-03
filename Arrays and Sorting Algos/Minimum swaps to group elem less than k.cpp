int main()
{
    int i = 0;

    int count = 0;

    int a[] = {10, 12, 20, 20, 5, 19, 12, 1, 20, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int member = 0;
    int k = 1;

    for (i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            member++;
        }
    }

    i = 0;
    int j = 0;
    int ans = INT16_MAX;

    while (j != n)
    {

        count = 0;
        if (j - i + 1 < member)
            j++;

        else if (j - i + 1 == member)
        {
            for (i = i; i <= j; i++)
            {
                if (a[i] > k)
                {
                    count++;
                }
            }

            ans = min(ans, count);

            i++;
        }
    }

    cout << ans;
}

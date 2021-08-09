int main()
{
    int a[] = {10, 20, 30, 40, 0, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 91;
    int i, j;
    for (int i = 0; i < n - 3; i++)
    {
        for (j = i + 1; j < n - 2; j++)
        {
            int l = j + 1;
            int r = n - 1;
            while (l < r)
            {
                if (a[i] + a[j] + a[l] + a[r] == k)
                {
                    cout << "sum is present";
                    return 0;
                }

                else if (a[i] + a[j] + a[l] + a[r] < k)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
    }

    cout << "not present";
}
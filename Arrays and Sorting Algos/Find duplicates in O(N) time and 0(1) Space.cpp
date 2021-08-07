https://leetcode.com/problems/find-all-duplicates-in-an-array/
https://www.youtube.com/watch?v=ACYunkWQnSI

int absolute(int x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int a[] = {3, 2, 1, 4, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int i, j;

    
    for (i = 0; i < n; i++)
    {
        int index = absolute(a[i]) - 1;
        if (a[index] < 0)
        {
            cout << absolute(a[index]);
        }
        a[index] = -a[index];
    }
    
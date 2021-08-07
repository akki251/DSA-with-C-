// https://www.geeksforgeeks.org/square-root-of-an-integer/
int sqrtInt(int x)
{
    int start = 1;
    int end = x;
    int ans;
    if (x == 0 || x == 1)
        return x;
    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (mid * mid == x)
            return mid;

        if (mid >= x / mid)
        {
            end = mid - 1;
            ans = mid;
        }

        else
        {
            start = mid + 1;
        }
    }

    return ans;
}
int main()
{
    // int a[] = {1, 2, 2, 3};

    int n = 1446801;
    cout << sqrtInt(n);
}
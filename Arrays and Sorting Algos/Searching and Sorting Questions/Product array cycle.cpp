int leftRightPrdouct(int a[], int low, int mid, int high)
{

    int leftProduct = 1;
    int rightProduct = 1;
    int i;
    for (i = low; i < mid; i++)
    {
        leftProduct = leftProduct * a[i];
    }

    for (i = mid + 1; i <= high; i++)
    {
        rightProduct = rightProduct * a[i];
    }

    if (low == mid)
        return rightProduct;
    else if (high == mid)
        return leftProduct;
    else
    {
        return rightProduct * leftProduct;
    }
}
int main()
{

    int a[] = {12, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int *p = new int[n];

    int i;

    for (i = 0; i < n; i++)
    {
        p[i] = leftRightPrdouct(a, 0, i, n - 1);
    }

    PrintArray(p, n);
}
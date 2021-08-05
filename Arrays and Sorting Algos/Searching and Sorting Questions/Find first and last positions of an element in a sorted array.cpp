
// https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

int binarySearchFirstIndex(int arr[], int low, int high, int x, int n)
{

    if (low <= high)
    {
        int mid = (low + high) / 2;

        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return binarySearchFirstIndex(arr, (mid + 1), high, x, n);
        else
            return binarySearchFirstIndex(arr, low, (mid - 1), x, n);
    }

    else
        return -1;
}
int binarySearchLastIndex(int arr[], int low, int high, int x, int n)
{

    if (low <= high)
    {
        int mid = (low + high) / 2;

        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return binarySearchLastIndex(arr, (mid + 1), high, x, n);
        else
            return binarySearchLastIndex(arr, low, (mid - 1), x, n);
    }

    else
        return -1;
}

int main()
{

    int a[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};

    int n = sizeof(a) / sizeof(a[0]);

    int k = 2;
    cout << binarySearchFirstIndex(a, 0, n - 1, k, n);
    cout << binarySearchLastIndex(a, 0, n - 1, k, n);
}
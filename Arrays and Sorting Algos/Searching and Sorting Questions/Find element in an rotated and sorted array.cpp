https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

int binarySearchInRotatedandSortedArray(int a[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == key)
        return mid;

    if (a[low] <= a[mid])
    {
        if (key >= a[low] && key <= a[mid])
        {
            return binarySearchInRotatedandSortedArray(a, low, mid - 1, key);
        }
        else
        {
            return binarySearchInRotatedandSortedArray(a, mid + 1, high, key);
        }
    }
    if (key >= a[mid] && key <= a[high])
    {

        return binarySearchInRotatedandSortedArray(a, mid + 1, high, key);
    }
    else
    {
        return binarySearchInRotatedandSortedArray(a, low, mid - 1, key);
    }
}

int main()
{

    int a[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int key = 6;

    int n = sizeof(a) / sizeof(a[0]);

    cout << binarySearchInRotatedandSortedArray(a, 0, n - 1, key);
}

Find index of element in an sorted and rotated array.
PAYTM

int findIndex(int a[], int low, int high, int x)
{
    if (low <= high)
    {

        int mid = (low + high) / 2;

        if (a[mid] == x)
            return mid;

        if (a[low] <= a[mid])
        {
            if (x >= a[low] && x <= a[mid])
                return findIndex(a, low, mid, x);
            else
                return findIndex(a, mid + 1, high, x);
        }

        if (a[mid] <= a[high])
        {
            if (x >= a[mid] && x <= a[high])
                return findIndex(a, mid + 1, high, x);
            else
                return findIndex(a, low, mid, x);
        }
    }

    return -1;
}
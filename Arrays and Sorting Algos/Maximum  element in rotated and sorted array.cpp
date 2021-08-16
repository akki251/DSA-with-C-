  // Make all pairs of rotation of a small eg array i.e 1,2,3,4,5 , then evalute condition on the basis of mid , and you are good to go.
  
  
  int a[] = {6, 1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int low = 0;
    int high = n - 1;

    if (a[low] <= a[high])
    {
        cout << a[high];
        return 0;
    }
    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (a[mid] > a[mid + 1])
        {
            cout << a[mid];

            return 0;
        }
        else if (a[mid] < a[mid - 1])
        {
            cout << a[mid - 1];

            return 0;
        }
        else if (a[low] < a[mid])
        {

            low = mid + 1;
        }
        else if (a[mid] < a[high])
        {

            high = mid - 1;
        }
    }
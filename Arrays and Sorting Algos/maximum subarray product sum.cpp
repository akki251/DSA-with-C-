//  https://www.youtube.com/watch?v=0exOBHgzApE 
 best video explaination.
 
 int a[] = {3, -5, 0, 1, 12, 5};

    int max_product_ending = a[0];
    int min_product_ending = a[0];
    int n = sizeof(a) / sizeof(a[0]);
    int i;

    int maxProduct = INT16_MIN;
    for (i = 1; i < n; i++)
    {

        if (a[i] == 0)
        {
            max_product_ending = 1;
            min_product_ending = 1;
            continue;
        }

        else
        {
            int temp = max_product_ending;
            max_product_ending = maximumofThree(a[i], max_product_ending * a[i], min_product_ending * a[i]);
            min_product_ending = minimumofThree(a[i], temp * a[i], min_product_ending * a[i]);
        }

        maxProduct = max(maxProduct, max_product_ending);
    }

    cout << maxProduct;
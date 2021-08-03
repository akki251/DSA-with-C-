int main()
{

    int a[] = {1, 4, 5, 9, 1};
    int n = sizeof(a) / sizeof(a[0]);

    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j)
    {

        if (a[i] == a[j])
        {
            i++;
            j--;
        }

        else if (a[i] < a[j])
        {
            i++;
            a[i] = a[i] + a[i - 1];
            count++;
        }

        else if (a[j] < a[i])
        {
            j--;
            a[j] = a[j] + a[j + 1];
            count++;
        }
    }

    cout << count << endl;
    PrintArray(a, n);
}

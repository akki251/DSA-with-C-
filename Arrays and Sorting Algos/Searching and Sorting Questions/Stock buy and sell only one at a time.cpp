int main()
{

    int a[] = {7, 6, 4, 3, 1};

    int n = sizeof(a) / sizeof(a[0]);

    int buyingDay = INT_MIN;
    int sellingDay = INT_MAX;
    int profit = 0;
    bool changebuy = false;
    for (int i = 0; i < n - 1; i++)
    {

        if (a[i] < a[i + 1])
        {
            if (a[i + 1] > sellingDay)
            {
                sellingDay = a[i + 1];
                changebuy = true;
            }
            if (a[i] < buyingDay)
            {
                if (changebuy)
                    buyingDay = a[i];
            }
            if (buyingDay == INT_MIN && sellingDay == INT_MAX)
            {
                buyingDay = a[i];
                sellingDay = a[i + 1];
            }
            profit = max(profit, sellingDay - buyingDay);
        }
    }

    cout << profit;
}
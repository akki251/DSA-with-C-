 int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;

    priority_queue<int> pq;

    int i = 0;
    int j = 0;
    vector<int> ans;
    while (j < n)
    {
        pq.push(a[j]);
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            ans.push_back(pq.top());
            if (a[i] >= pq.top())
            {
                pq.pop();
            }
            i++;
            j++;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
}

https://practice.geeksforgeeks.org/problems/find-the-frequency/1


 vector<int> v;
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int x = 3;

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if (m.find(v[i]) == m.end())
        {
            m[v[i]] = 1;
        }
        else
        {
            m[v[i]]++;
        }
    }

    map<int, int>::iterator it;

    it = m.find(x);
    cout << it->second;
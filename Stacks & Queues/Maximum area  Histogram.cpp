// MAximum area Histogram.cpp
// https://www.youtube.com/watch?v=St0Jf_VmG_g
int main()
{
    int a[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(a) / sizeof(a[0]);
    // NSL
    vector<int> v;
    stack<int> s;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s.size() == 0)
    //         v.push_back(-1);

    //     else if (!s.empty() && a[s.top()] < a[i])
    //         v.push_back(s.top());

    //     else if (!s.empty() && a[s.top()] >= a[i])
    //     {
    //         while (!s.empty() && a[s.top()] >= a[i])
    //         {
    //             s.pop();
    //         }

    //         if (s.empty())
    //             v.push_back(-1);

    //         else
    //             v.push_back(s.top());
    //     }
    //     s.push(i);
    // }

    // for (auto it : v)
    //     cout << it << " ";
    // cout << endl;
    // // NSR
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
            v.push_back(n);

        else if (!s.empty() && a[s.top()] < a[i])
            v.push_back(s.top());

        else if (!s.empty() && a[s.top()] >= a[i])
        {
            while (!s.empty() && a[s.top()] >= a[i])
            {
                s.pop();
            }

            if (s.empty())
                v.push_back(n);

            else
                v.push_back(s.top());
        }
        s.push(i);
    }

    reverse(v.begin(), v.end());
    
    // create a new array of these two diff vector.. and  insert (Right[i] - left[i] -1) * a[i];
    // and then find maximum value of that ARRAY.
vector<int> nextGreator(int a[], int n)
{

    stack<int> s;
    vector<int> v;

    for (int i = 0; i < n; i++) // from 0 to n
    {

        if (s.size() == 0)
            v.push_back(-1);

        else if (s.size() != 0 && s.top() > a[i])
        {
            v.push_back(s.top());
        }
        else if (s.size() != 0 && s.top() <= a[i])
        {

            while (s.size() != 0 && s.top() <= a[i])
            {
                s.pop();
            }

            if (s.size() == 0)
                v.push_back(-1);

            else
                v.push_back(s.top());
        }

        s.push(a[i]);
    }
 // no reversal of vector.
    return v;
}
int main()
{

    int a[] = {1, 3, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> v = nextGreator(a, n);

    for (auto it : v)
    {
        cout << it << " ";
    }
}
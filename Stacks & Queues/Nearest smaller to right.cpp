vector<int> nextGreator(int a[], int n)
{

    stack<int> s;
    vector<int> v;

    for (int i = n - 1; i >= 0; i--) // loop change
    {

        if (s.size() == 0)
            v.push_back(-1);

        else if (s.size() != 0 && s.top() < a[i])
        {
            v.push_back(s.top());
        }
        else if (s.size() != 0 && s.top() >= a[i])
        {

            while (s.size() != 0 && s.top() >= a[i])
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
    reverse(v.begin(), v.end()); // reversal
    return v;
}
int main()
{

    int a[] = {4, 5, 2, 10, 8};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> v = nextGreator(a, n);

    for (auto it : v)
    {
        cout << it << " ";
    }
}

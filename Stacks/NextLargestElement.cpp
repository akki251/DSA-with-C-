// https://www.youtube.com/watch?v=NXOOYYwpbg4&list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd&index=2
vector<int> nextGreator(int a[], int n)
{

    stack<int> s;
    vector<int> v;

    for (int i = n - 1; i >= 0; i--)
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

            else if (s.top() > a[i])
                v.push_back(s.top());
        }

        s.push(a[i]);
    }

    reverse(v.begin(), v.end());

    return v;
}
int main()
{

    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> v = nextGreator(a, n);

    for (auto it : v)
    {
        cout << it << " ";
    }
}
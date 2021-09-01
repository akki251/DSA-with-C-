void insertAtBtm(stack<int> &s, int data)
{
    if (s.empty() || data > s.top())
    {
        s.push(data);
        return;
    }

    int a = s.top();
    s.pop();

    insertAtBtm(s, data);

    s.push(a);
}

void sortStack(stack<int> &s)
{
    if (s.empty() || s.size() == 1)
        return;

    int a = s.top();
    s.pop();

    sortStack(s);

    insertAtBtm(s, a);
}

int main()
{
    stack<int> s;
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);
    sortStack(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

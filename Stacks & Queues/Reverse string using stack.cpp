char *reverseSt(char *st, int len)
{
    stack<char> s;

    for (int i = 0; st[i] != '\0'; i++)
        s.push(st[i]);

    int i = 0;
    while (!s.empty())
    {
        st[i] = s.top();
        s.pop();
        i++;
    }

  

    return st;
}
int main()
{
    char s[] = "GeeksforGeeks";
    int len = strlen(s);
    cout << reverseSt(s, len);
}

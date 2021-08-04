int main()
{

    char str[100];
    cin >> str;
    int length = strlen(str);

    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        sortCharacter(&str[start], &str[end]);
        start++;
        end--;
    }

    cout << str;
}

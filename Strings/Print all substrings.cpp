int main()
{

    char str[100] = "code";

    int size = strlen(str);
    
   int i;
    for (int p = 0; p <= size - 1; p++)
    {

        for (i = p; i <= size - 1; i++)
        {
            for (int j = p; j <= i; j++)
            {
                cout << str[j];
            }
            cout << endl;
        }
    }
}

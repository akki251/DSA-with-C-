int main()
{

    string s1;
    string s2;

    string shuffledString;
    cin >> s1 >> s2 >> shuffledString;

    int lengthS1 = s1.length();
    int lengthS2 = s2.length();
    int lengthShuffledString = shuffledString.length();

    if (lengthS1 != lengthS2)
    {
        cout << "Length not equal";
        return 0;
    }
    int k = 0, i = 0, j = 0;
    while (k != lengthShuffledString - 1)
    {

        if (shuffledString[k] == s1[i] && i < lengthS1)
            i++;

        else if (shuffledString[k] == s2[j] && j < lengthS2)
            j++;

        else
        {
            cout << "Invalid String";
            return 0;
        }

        k++;
    }

    cout << "Valid String";
}

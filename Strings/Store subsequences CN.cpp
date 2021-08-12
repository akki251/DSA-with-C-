https://classroom.codingninjas.com/app/classroom/me/9525/content/153190/offering/1873334
int subSequences(string input, string *output)
{

    if (input.empty())
    {
        output[0] = "";
        return 1;
    }

    string smallerString = input.substr(1);
    int smallStringSize = subSequences(smallerString, output);

    int i;
    for (i = 0; i < smallStringSize; i++)
    {
        output[i + smallStringSize] = input[0] + output[i];
    }

    return 2 * smallStringSize;
}

int main()
{

    string input = "abc";

    string *output = new string[1000];

    int count = subSequences(input, output);

    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
}



// aNother angle 
void subSequences(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output;
        cout << endl;
        return;
    }

    subSequences(input.substr(1), output);
    subSequences(input.substr(1), output + input[0]);
}

int main()
{

    string input = "abc";
    string output = "";
    subSequences(input, output);
}
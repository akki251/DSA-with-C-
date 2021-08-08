// Given a string S (that can contain multiple words), you need to find the word which has minimum length.
// Note : If multiple words are of same length, then answer will be first minimum length word in the string.
// Words are seperated by single space only.
// Input Format :

// String S

// Output Format :

// Minimum length word

// Constraints :
// 1 <= Length of String S <= 10^5
// Sample Input 1 :

// this is test string

// Sample Output 1 :

// is

// Sample Input 2 :

// abc de ghihjk a uvw h j

// Sample Output 2 :

// a


void smallestWord(char s[], char output[])
{
    int startIndex = 0;
    int endIndex = 0;
    int minLength = strlen(s);
    int minStartIndex;
    int i;
    int length = strlen(s);

    while (endIndex <= length)
    {
        if (endIndex < length && s[endIndex] != ' ')
        {
            endIndex++;
        }

        else
        {
            int currentLength = endIndex - startIndex;
            if (currentLength < minLength)
            {

                minLength = currentLength;
                minStartIndex = startIndex;
            }
            endIndex++;
            startIndex = endIndex;
        }
    }

    for (i = 0; i < minLength; i++)
    {
        output[i] = s[minStartIndex++];
    }
};

int main()
{
    char s[] = "this is good";
    char output[100];
    smallestWord(s, output);
    int i;
    for (i = 0; i < 2; i++)
    {
        cout << output[i];
    }
}

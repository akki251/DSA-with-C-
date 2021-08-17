// https://classroom.codingninjas.com/app/classroom/me/9525/content/153190/offering/1873333/problem/1390

int keyPadApproach(int n, string output[])
{
    if (n == 0)
    {
        output[0] = "";
        return 1;
    }
    string LeftOverDigitString = "";
    int singleDigit = n % 10;
    switch (singleDigit)
    {
    case 1:
        LeftOverDigitString = "abc";
        break;
    case 2:
        LeftOverDigitString = "def";
        break;
    case 3:
        LeftOverDigitString = "ghi";
        break;
    case 4:
        LeftOverDigitString = "jkl";
        break;
    case 5:
        LeftOverDigitString = "mnop";
        break;
    case 6:
        LeftOverDigitString = "qrs";
        break;
    case 7:
        LeftOverDigitString = "tuv";
        break;
    case 8:
        LeftOverDigitString = "wxy";
        break;
    case 9:
        LeftOverDigitString = "z";
        break;
    }

    int smallerStringOutputSize = keyPadApproach(n / 10, output);
    for (int i = 0; i < smallerStringOutputSize; i++)
    {
        cout << output[i] << " ";
    }
 
    int singleDigitStringSize = LeftOverDigitString.length();
    int ansSize = smallerStringOutputSize * singleDigitStringSize;
    string *temp = new string[ansSize];
    int k = 0;
    for (int i = 0; i < smallerStringOutputSize; i++)
    {

        for (int j = 0; j < singleDigitStringSize; j++)
        {
            temp[k++] = output[i] + LeftOverDigitString[j];
            
        }
    }

    for (int i = 0; i < ansSize; i++)
    {
        output[i] = temp[i];                     // travese back from temp to output array.
    }

    delete[] temp; // deleete dynamically created array.

    return ansSize;
}


int main()
{

    int n = 123;
    string output[10000];

    int size = keyPadApproach(n, output);
    cout << size;

    int i;
    for (i = 0; i < size; i++)
    {
        cout << output[i] << " ";
        cout << endl;
    }
}
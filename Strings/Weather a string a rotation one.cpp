   string str;
    cin >> str;
    string str2;
    cin >> str2;
    int length = str.length();

    if (str.length() != str2.length())
    {
        cout << "not ofsame size";
        return 0;
    }
    string temp;
    temp = str + str;
    int found = temp.find(str2);
    if (found != string::npos)
        cout << "found at : " << found;

    else
        cout << "not found ";
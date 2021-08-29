  string s1 = "geeksforgeeks";
    string s2 = "mask";
    string ans;
    unordered_set<char> s;
    for (int i = 0; i < s2.length() && i < s1.length(); i++)
    {

        s.insert(s2[i]);
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (s.find(s1[i]) == s.end())
        {
            ans = ans + s1[i];
        }
    }

    cout << ans;
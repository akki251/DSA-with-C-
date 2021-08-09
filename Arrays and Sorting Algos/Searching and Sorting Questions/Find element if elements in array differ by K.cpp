// https://www.youtube.com/watch?v=KtrAWsfyBaA
// https://www.geeksforgeeks.org/searching-array-adjacent-differ-k/



  int a[] = {20, 40, 50, 70, 70, 60};
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    int k = 20;
    int x = 60;

    for (i = 0; i < n; i++)
    {

        if (a[i] == x)
        {
            cout << i;
            break;
        }

        i = i + absolute(a[i] - x) / k;
    }

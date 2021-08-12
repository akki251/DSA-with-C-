 vector<int> v;
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    reverse(v.begin() , v.end());
     cout <<   *max_element(v.begin(), v.end());
     cout <<   *min_element(v.begin(), v.end());
    cout << accumulate(v.begin(), v.end(), 0);
    cout << count(v.begin() , v.end() , 2);
    int index = *find(v.begin(), v.end(), 3);
    cout << v[index];
    if vectort sorted, then binary search
    cout << binary_search(v.begin(), v.end(), 4); // returns true or false;
    cout << *lower_bound(v.begin() , v.end() ,3);
     returns an iterator pointing to the first element in the range [first,last) which
    has a value not less than ‘x’.
  
   


    cout << *it;
    returns an iterator pointing to the first element in the range [first,last)
    which has a value greater than ‘x’.

    v.erase(v.begin() +2);
    deleting duplicating elements;
    v.erase(unique(v.begin(), v.end()), v.end());

    array to vector
    int a[] = {1, 2, 3, 4, 54,23};
    int n2 =sizeof(a)/sizeof(a[0]);
    vector<int> v2(a, a + n2);
    printVector(v2);

    next_permutation(v.begin(), v.end()); // change the vector to its next permutation.
    prev_permutation(v.begin() , v.end());

    cout << distance(v.begin(), v.end());
    – It returns the distance of ded position from the first iterator.This function
     is very useful while finding the index.
    printVector(v);
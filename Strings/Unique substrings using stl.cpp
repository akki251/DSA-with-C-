
class Solution{
    public:
        int unique_substring(string str)
    {
        int i;
        string ans = "";
        int k = 0;
        int size = str.length();
        string output[100000];
    for (int p = 0; p <= size - 1; p++)
    {

        for (i = p; i <= size - 1; i++)
        {
            for (int j = p; j <= i; j++)
            {
                ans = ans + str[j];
            }
            output[k++] = ans;
            ans.clear();
            
        }
    }
    
        map <string,int > m;

    for(i =0 ; i < k ; i++)
    {
        m[output[i]]++;
    }
    
    return m.size();
}

    
};

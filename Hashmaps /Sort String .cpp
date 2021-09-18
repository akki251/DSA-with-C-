// O(N)
int main() {


   int t ;
   cin >> t;
    while(t--)
    {
        string s; 
        cin >> s;
        
int mark[26] =  {0};

for(int i = 0 ; i < s.length() ; i++)
{
    mark[s[i] - 'a']++;
}

for(int  i = 0 ;  i <  26 ; i++)
{
    for(int j = 0 ; j < mark[i] ; j++)
    { 
      cout << char('a' + i);
    }
}
   
cout << endl;
        
        
    }
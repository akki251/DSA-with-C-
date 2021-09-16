#include <iostream>
using namespace std;
#include<unordered_map>
#include<climits>
int main() {
	//code
	int t; 
	cin >> t; 
	while(t--)
	{
	    
	    string s ;
	    cin >> s; 
	    
	    unordered_map<char,int> m;
	    int max = INT_MIN;
	    for(int i = 0 ; i < s.length() ; i++)
	    {
	        m[s[i]]++;
	        
	        if(m[s[i]] >max)
	        max = m[s[i]];
	    }
	    
	    int n = s.length();
            if(max -1 <= n - max)
            cout << 1 << endl;
            else 
            cout << 0 << endl;
	    
	}
	
	return 0;
}
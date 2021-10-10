// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    
    
    bool isSafe(int x , int y , int n , vector<vector<int> > &vis,vector<vector<int>> &m   )
    {
        
        
         if (x < 0 || x >= n || y < 0 || y >= n || vis[x][y] == 1)
            return false;
        if (m[x][y] == 0)
            return false;
        vis[x][y] = 1;
        return true;
    }
    
    
    void helper(vector<vector<int>> m ,int i , int j ,vector<string> &ans ,string temp ,vector<vector<int>> &visited, int n)
    
    {
        
        
        
        
        if(i == n -1 && j == n- 1)
        {
            if(m[i][j] == 0)
            return;
            
            ans.push_back(temp);
            return  ;
        }
        
        
        if(isSafe(i,j,n,visited,m) == true)
        {
            
            
            helper(m,i+1,j,ans,temp + "D" , visited,n);
            helper(m,i,j-1,ans,temp + "L" , visited,n);
            helper(m,i,j+1,ans,temp + "R" , visited,n);
            helper(m,i-1,j,ans,temp + "U" , visited,n);
            
        visited[i][j] = 0;            
        }
        
        return;

    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        

        
        
        
        // vector<vector<int>> visited(n);
        
         vector<vector<int>> visited(n, vector<int> (n, 0));
        
        
        

        
        string temp = "";
        
        
    vector<string> ans ;    
        helper(m,0,0,ans,temp,visited, n);
        
        //   sort(ans.begin() , ans.end());
return ans ;    

        
        
        
        
        
        
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
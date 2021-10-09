// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:


void DFS(vector<vector<int> >edges , int n , int s , int d, int &cnt , bool * visited)
 {
     if(s == d)
     {
         cnt++;
         return ;
         
     }
     
 
 
     for(int i = 0 ; i < edges.size() ; i++)
     {
            if(edges[i][0] == s )
            {
            DFS(edges,n,edges[i][1],d,cnt,visited);
            }
            
          
     }
     
     return;
     
     
  
 }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	   
	   
	   
int cnt  = 0 ;



 DFS(edges,n,s,d,cnt,visited);
	   
	   return cnt;
	   
	   
	   
	}
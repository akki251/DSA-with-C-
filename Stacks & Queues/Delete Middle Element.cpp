// https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1#


void deleteS(stack <int> & s, int k)
    {
        if(k == 1)
    {    s.pop();
        return;}
        
        int a = s.top();
        s.pop();
        
        deleteS(s,k-1);
        
        s.push(a);
    }
    void deleteMid(stack<int>&s, int n)
    {
         int k =  n/2+1;
         deleteS(s,k); 
        
    }
https://classroom.codingninjas.com/app/classroom/me/9525/content/153190/offering/1873338/problem/846


int staircase(int n){
  
    
    
    if(n == 1 || n == 0)
        return 1;
    
    if(n==2 )
        return 2;
    

else     
    return staircase(n-3) + staircase(n-2) + staircase(n-1);
    
    
    
}
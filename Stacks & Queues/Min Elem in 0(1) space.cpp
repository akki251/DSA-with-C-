// https://practice.geeksforgeeks.org/problems/special-stack/1#
// https://www.youtube.com/watch?v=ZvaRHYYI0-4&list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd&index=11
int minElem = 0;
void push(stack<int>& s, int a){
if(s.size() == 0)
{
    s.push(a);
    minElem =  a;
}
else 
{
    if(a > minElem)
    s.push(a);
    else if(a < minElem)
    {
        s.push(2*a-minElem);
        minElem  = a;
    }
}
    
    
}

bool isFull(stack<int>& s,int n){
if(s.size() == n)
return true;
return false;
}

bool isEmpty(stack<int>& s){
   return s.size() == 0;
}

int pop(stack<int>& s){

  if(s.size() == 0)
  return -1;
  
  if(s.top() >  minElem)
  {
      int a = s.top();
      s.pop();
      return a;
  }
  
  else 
  {
       // s.top() is not the real minimum elem, as we have molded in the variation of flag,in push method.
        // so we have to redefine min, an return prev min.
      int x = mini;
       int p = s.top();
       mini = 2*mini - s.top();
       s.pop();
       p= x;
       return p;
      
  }

}

int getMin(stack<int>& s){
    
  if(s.size() == 0)
  return -1;
  
  return minElem;
    
}
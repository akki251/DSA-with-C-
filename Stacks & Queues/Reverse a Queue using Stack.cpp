// https://practice.geeksforgeeks.org/problems/queue-reversal/1/?category[]=Stack&category[]=Stack&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]StackproblemStatusunsolveddifficulty[]-1page1category[]Stack#




stack <int> s;
   
   while(!q.empty())
   {
       s.push(q.front());
       q.pop();
   }
   
   
   while(!s.empty())
   {
       q.push(s.top());
       s.pop();
   }
   
   return q;
  
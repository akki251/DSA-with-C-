// https://www.youtube.com/watch?v=k21VKEM8OFY
vector <int> postOrder(Node* root)
{
  
  
  stack < Node *> s1;
  stack <Node * > s2;
  
  s1.push(root);
  while(!s1.empty())
  {
      s2.push(s1.top());
      s1.pop();
      if(s2.top() -> left )
      s1.push(s2.top() ->left);
      
      if(s2.top() -> right )
      s1.push(s2.top() ->right);
  }
  vector <int > v;
  
  while(!s2.empty())
  {
      
      v.push_back(s2.top()->data);
      s2.pop();
  }
  
  return v;
  
}

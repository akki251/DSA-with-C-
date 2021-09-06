// https://www.youtube.com/watch?v=NWgE_EVUI7s

void helper(Node * root , int d , map<int,vector<int>> & m)
{
    if(root == NULL)
    return;
    
    m[d].push_back(root->data);
    helper(root->left,d+1,m);
    helper(root->right,d,m);
}
vector<int> diagonal(Node *root)
{
   vector<int> ans;
   if(!root)
   return ans;
   map<int ,vector<int> > m;
   int d= 0;
   helper(root ,  d , m);
   
   for(auto it : m)
   {
       vector <int> v = it.second;
       for(auto p: v )
       {
           ans.push_back(p);
       }
   }
   
   return ans;
}

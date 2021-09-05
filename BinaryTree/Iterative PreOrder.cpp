  
  vector<int> preOrder(Node* root)
    {
        vector<int> v;
        stack <Node *> s;
       
        Node * curr = root;
        while(1)
        {
            while(curr){
               v.push_back(curr->data);
               s.push(curr);
               curr = curr->left;
            }
            
            if(s.empty())
            break;
            
            curr = s.top();
            s.pop();
            curr = curr->right;
            
            
        }
        
        return v;
        
    }
  
        vector <int> v;
        
        stack <Node * > s;
        Node * curr = root;
        while(1)
        {
            while(curr)
            {
                s.push(curr);
                curr = curr->left;
            }
            
            if(s.empty())
            break;
            
        curr    =   s.top();
        s.pop();
        v.push_back(curr->data);
        curr = curr->right;
        
        }
        
        
        return v;
        
    }
};

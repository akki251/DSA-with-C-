 void inorder(vector<int> &v , Node * root)
    {
        if(!root)
        return;
        
        
        inorder(v,root->left);
        v.push_back(root->data);
        inorder(v,root->right);
         
    }
    int kthLargest(Node *root, int k)
    {
    
     vector<int> v; 
     inorder(v,root);
     
     return v[v.size() - k];
    }
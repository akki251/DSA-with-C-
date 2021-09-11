void preorder(Node * root ,vector<int> &v)
    {
        if(!root)
        return;
        
        v.push_back(root->data);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    Node * createTree(vector<int> v, int start , int end)
    {
                if(start > end)
                return NULL;
                int mid = (start+ end) /2;
                Node * root = new Node(v[mid]);
                
                root->left = createTree(v,start,mid-1);
                root->right = createTree(v,mid+1,end);
                
                return root;
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
         preorder(root, v);
        sort(v.begin(),v.end());
       return  createTree(v,0,v.size() - 1);
    }
};

Node * helper(vector<int> preorder , int lr ,int rr , int &i)
    {
        if(i >= preorder.size())
            return NULL;
        if(preorder[i] < lr || preorder[i] > rr  )
            return NULL;
        
        Node * root = new Node(preorder[i]);
        i = i + 1;
        
        root->left= helper(preorder,lr,root->val-1,i);
        root->right= helper(preorder,root->val+1,rr,i);
        
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
      
        
        int n = preorder.size() ;
        int i = 0;
        return helper(preorder,INT_MIN,INT_MAX ,i);
        
    }
};



TIME O(N);
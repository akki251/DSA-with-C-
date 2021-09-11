  TreeNode* bstFromPreorder(vector<int>& preorder) {
      
        
        if(preorder.size() == 0)
            return NULL;
        TreeNode * root = new TreeNode(preorder.at(0));
        if(preorder.size() == 1)
            return root;
        
        vector<int > left ,right;
        
        for(int i  = 1 ; i < preorder.size() ; i++)
        {
            
            if(preorder.at(i) < preorder.at(0))
                left.push_back(preorder.at(i));
            
                
            if(preorder.at(i) > preorder.at(0))
                right.push_back(preorder.at(i));
        }
        
        root->left =bstFromPreorder(left);
        root->right =bstFromPreorder(right);
        
        
        return root;
        
        
    }
};
// https://www.youtube.com/watch?v=6DraIPN_0no

 Node * LCA(Node * root , int a , int b)
    {
        if(!root)
        return root;
        
        if(root->data == a || root->data == b)
        return root;
        
        Node * left = LCA(root->left,a,b);
        Node * right = LCA(root->right,a,b);
        
        if(left == NULL && right == NULL)
        return NULL;
        
        if(left != NULL &&  right != NULL)
        return root;
        
        if(left == NULL)
        return right;
        return left;
    }
    
    int distanceOne(Node * root , int a)
    {
        if(!root)
        return 0;
        
        if(root->data == a)
        return 1;
        
        int left = distanceOne(root->left ,a );
        int right = distanceOne(root->right, a);
        if(left == 0 && right == 0)
        return  0;
        
        
        return left + right + 1;
    }
    int findDist(Node* root, int a, int b) {
        
        
      Node * x = LCA(root,a,b);
    
        int distA = distanceOne(x,a);
                int distB = distanceOne(x,b);
                
                
                return distA + distB - 2;
        
    }
};
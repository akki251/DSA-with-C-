  // https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
  
  public:
    // Function to return the diameter of a Binary Tree
    
    pair<int,int> helper(Node * root)
    {
         pair<int, int> p;
        if(root == NULL)
        {
            p.first = 0;
            p.second = 0;
            return p;
        }
        
        pair<int,int> leftAns = helper(root->left);
        pair<int,int> rightAns = helper(root->right);
        int ld = leftAns.second;
        int lh = leftAns.first;
        int rd  = rightAns.second;
        int rh = rightAns.first;
        
        int height = 1 + max(lh,rh);
        int diameter =  max(lh+rh, max(ld,rd));
        
        pair<int, int> ans;
        ans.first = height;
        ans.second =  diameter;
        
        
        return ans;
        
        
        
        
        
        
    }
    
    int diameter(Node* root) {
        pair<int,int> p = helper(root);
        
        return p.second + 1;
    }
};
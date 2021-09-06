//  https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1#

// code lib yotube 
 
 void leftTree(Node * root ,vector<int > & ans)
    {
        if(!root)
        return;
        
        if(root->left)
        {
            ans.push_back(root->data);
            leftTree(root->left,ans);
        }
        else if(root->right)
        {
            ans.push_back(root->data);
            leftTree(root->right,ans);
        }
    }
    
        void leafNodes(Node * root ,vector<int > & ans)
        {
            if(!root)
            return;
            
            if(root->left)
            leafNodes(root->left,ans);
            
            if(root -> left == NULL && root->right == NULL)
            {
                  ans.push_back(root->data);
            }
            
                if(root->right);
            leafNodes(root->right,ans);
        }
        
        
        void rightNodes(Node * root , vector<int> & ans)
        {
            if(!root)
            return;
            
            if(root->right)
            {
                rightNodes(root->right,ans);
                ans.push_back(root->data);
            }
            
                
            else if(root->left)
            {
                rightNodes(root->left,ans);
                ans.push_back(root->data);
            }
        }


    vector <int> printBoundary(Node *root)
    {
        vector<int> ans ;
        ans.push_back(root->data);
    
        leftTree(root->left,ans);
        leafNodes(root,ans);
        rightNodes(root->right,ans);
        
        return ans;
    }
};
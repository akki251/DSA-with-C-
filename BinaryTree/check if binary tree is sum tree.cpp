int check(Node* root)
    {
        if(root==NULL)
        return 0;
        int v1=check(root->left);
        int v2=check(root->right);
        if(v1+v2==root->data||(root->left==NULL&&root->right==NULL))
        {
            return v1+v2+root->data;
        }
        else
        {
            return -10001;
            
        }
        
    }
    bool isSumTree(Node* root)
    {
         int ans=check(root);
         if(ans==-10001)
         return false;
         else
         return true;
    }
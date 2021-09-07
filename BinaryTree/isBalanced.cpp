int absol( int x)
{
    if(x < 0)
    return -x;
    return x;
}
int height(Node * root)
{
    if(!root)
    return 0;
    
    return 1 + max(height(root->left),height(root->right));
}
    bool isBalanced(Node *root)
    {
        if(!root)
        return true;

        
   int left = height(root->left);
   int right = height(root->right);

if(  absol(left - right ) <= 1 && isBalanced(root->left) && isBalanced(root->right))
return true;
return false;


        
        
        
    }
};
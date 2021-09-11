//CODELIB

bool helper(Node * root , int min , int max)
{
    if(!root)
    return false; 
    
    if(min == max)
    return true ;
    
    return helper(root->left , min , root->data - 1) || helper(root->right , root->data + 1 ,max );
}

bool isDeadEnd(Node *root)
{
    if(!root)
    return false; 
    
    return helper(root,1,INT_MAX);
}
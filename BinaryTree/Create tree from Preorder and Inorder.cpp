BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    
   
     
    int n  =inLength;
    
    if(n == 0)
        return NULL;
    
    Node <int>*  root = new Node <int>(preorder[0]);
    
    if(n == 1)
        return root;
    
    int i = 0;
    while(inorder[i] != root->data)
    {
        i++;
    }
    
    int ls = i;
    int rs = n - i -  1 ;
    
        
    
    root->left =buildTree(preorder+1,ls,inorder,ls);
    root->right =buildTree(preorder + 1 + ls , rs ,inorder + 1 + ls , rs);
    
    return root;  
    
    
    
    
    
    
    
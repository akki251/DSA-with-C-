 // nodes in left and right subtrees in the original tree
    int helperSum(Node * root)
    {
        if(root == NULL)
        return 0 ; 
        

        
        int leftSum = helperSum(root->left);
        int rightSum = helperSum(root->right);
  int temp = root->data;
    
               root->data = leftSum + rightSum ;
               
               return leftSum + rightSum + temp;
    }
    
   
    void toSumTree(Node *root)
    {
    
    
    helperSum(root);

      
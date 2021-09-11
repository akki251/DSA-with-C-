int getCount(Node *root, int l, int h)
{
                   if(!root)
                   return 0;
                   
         
      int  leftCount = getCount(root->left,l,h);
     int   rightCount = getCount(root->right,l,h);
        
        if( l<= root->data && root->data <= h)
        return leftCount + rightCount + 1;
        
        return leftCount + rightCount ;
         
         
         
}
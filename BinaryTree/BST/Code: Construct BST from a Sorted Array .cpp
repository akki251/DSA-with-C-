BinaryTreeNode<int>* helper(int * arr, int start , int end)
{
    
    if(start > end)
        return NULL;
    
    int mid = (start + end)/2;
    BinaryTreeNode<int>* root = new  BinaryTreeNode<int>(arr[mid])  ;
    
    BinaryTreeNode<int>* Left = helper(arr,start,mid-1);
    BinaryTreeNode<int>* Right = helper(arr,mid+1,end);

    root->left = Left;
    root->right = Right;
    
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	
    BinaryTreeNode<int>*  root = helper(input, 0 , n-1);
    
    return root;
}
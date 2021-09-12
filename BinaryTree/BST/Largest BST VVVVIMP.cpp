// https://www.youtube.com/watch?v=6nJ_fUcCTNU
#include<climits>
vector<int>  helper(BinaryTreeNode<int> * root)
{
    if(!root)
        return {1,0,INT_MAX,INT_MIN};
    if(!root->left and !root->right)
        return {1,1,root->data, root->data};
    
    vector<int> left =helper(root->left);
    vector<int> right = helper(root->right);
    
    if(left[0] && right[0])
    {
        if(root->data > left[3]  && root->data < right[2])
        {
            int x = left[2];
            int y = right[3];
            if(x == INT_MAX)
                x = root->data;
            if(y == INT_MIN)
                y  = root->data;
            
            return {1,max(left[1] , right[1])+ 1, x,y};
        }
    }
    return {0,max(left[1],right[1]), 0 , 0};
    
    
}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    
    
    vector<int> ans = helper(root);
    return ans[1];
    
}